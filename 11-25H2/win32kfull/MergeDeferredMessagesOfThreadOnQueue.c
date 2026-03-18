/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x14014B1A0
 * Callers:
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400670A0 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsHiddenByInputService @ 0x14014B3A0 (IsHiddenByInputService.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x14014B3F8 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r15
  int v5; // ebp
  __int64 v6; // r10
  __int64 v7; // r14
  __int64 v8; // rdx
  bool v9; // r12
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  bool v14; // zf
  int v15; // eax
  int v16; // ecx
  struct tagQMSG *v17; // rdx
  _QWORD *v18; // r9
  bool v19; // [rsp+A0h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 472) + 24LL;
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 32LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 48LL);
  while ( v7 )
  {
    if ( !v6 )
    {
      do
      {
        if ( *(_QWORD *)(v7 + 104) == a1 )
        {
          if ( !(unsigned int)IsHiddenByInputService(v7, a2, a3) )
          {
            ++v5;
            v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
            v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
              LOBYTE(v11) = v9;
              LOBYTE(v12) = v19;
              WPP_RECORDER_AND_TRACE_SF_qiqdd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v11,
                v12,
                *(_QWORD *)(UserSessionState + 69160));
            }
          }
          RemoveQMsgFromDeferList((struct tagMLIST *)v4, (struct tagQMSG *)v7);
          *(_QWORD *)v7 = *(_QWORD *)v4;
          if ( *(_QWORD *)v4 )
            *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v7;
          v14 = *(_QWORD *)(v4 + 8) == 0LL;
          *(_QWORD *)v4 = v7;
          if ( v14 )
            *(_QWORD *)(v4 + 8) = v7;
          *(_QWORD *)(v7 + 8) = 0LL;
          v7 = v13;
        }
        else
        {
          v7 = *(_QWORD *)(v7 + 8);
        }
      }
      while ( v7 );
      break;
    }
    if ( *(_QWORD *)(v7 + 104) == a1 )
    {
      if ( *(_DWORD *)(v6 + 48) < *(_DWORD *)(v7 + 48) )
      {
        v15 = IsHiddenByInputService(v7, a2, a3);
        v16 = v5 + 1;
        v17 = (struct tagQMSG *)v7;
        v7 = *(_QWORD *)(v7 + 8);
        if ( v15 )
          v16 = v5;
        v5 = v16;
        RemoveQMsgFromDeferList((struct tagMLIST *)v4, v17);
        *a2 = *(_QWORD *)v6;
        *v18 = v6;
        if ( v6 == *(_QWORD *)(v4 + 8) )
          *(_QWORD *)(v4 + 8) = a2;
        else
          *(_QWORD *)(*(_QWORD *)v6 + 8LL) = a2;
        *(_QWORD *)v6 = a2;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 8);
      }
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  *(_DWORD *)(v4 + 16) += v5;
}
