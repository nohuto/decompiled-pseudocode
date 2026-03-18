/*
 * XREFs of NVMeGetLogPageCompletion @ 0x1400264B0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessNvmeHealthInfoLog @ 0x140002180 (ProcessNvmeHealthInfoLog.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeIssueAsyncEventCommand @ 0x14000CB80 (NVMeIssueAsyncEventCommand.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeReenumerateNameSpaceStart @ 0x140029204 (NVMeReenumerateNameSpaceStart.c)
 *     ProcessMFNDChildControllerEventLog @ 0x14002B8C8 (ProcessMFNDChildControllerEventLog.c)
 *     ProcessNvmeReservationNotification @ 0x14002BF10 (ProcessNvmeReservationNotification.c)
 *     ProcessNvmeSanitizeStatus @ 0x14002C040 (ProcessNvmeSanitizeStatus.c)
 *     SendNVMeEventNotification @ 0x1400306EC (SendNVMeEventNotification.c)
 */

__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // r8d
  unsigned int i; // ecx
  __int64 v8; // rdx
  unsigned int j; // ecx
  unsigned int k; // ecx
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rsi
  char v16; // r15
  char v17; // cl
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // r14d
  char v21; // al
  _DWORD *v22; // r14
  char v23; // bp
  __int16 v24; // cx
  _DWORD *v25; // rdx
  __int128 v26; // [rsp+70h] [rbp-28h] BYREF

  v2 = a2;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
    v4 = *(_QWORD *)(GetSrbExtension(a2) + 4200);
  }
  else if ( a2 == a1 + 1016 )
  {
    v4 = a1 + 1008;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 1392);
    if ( v5 )
    {
      v6 = *(unsigned __int16 *)(a1 + 1552);
      for ( i = 0; i < v6; ++i )
      {
        v4 = v5 + ((unsigned __int64)i << 7);
        if ( v2 == v4 + 8 )
          goto LABEL_21;
      }
    }
    v8 = *(_QWORD *)(a1 + 1400);
    if ( v8 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 1554); ++j )
      {
        v4 = v8 + ((unsigned __int64)j << 7);
        if ( v2 == v4 + 8 )
          goto LABEL_21;
      }
    }
    for ( k = 0; k < 2; ++k )
    {
      v11 = (unsigned __int64)k << 7;
      if ( v2 == v11 + a1 + 1144 )
      {
        v4 = v11 + a1 + 1136;
        goto LABEL_21;
      }
    }
    v4 = 0LL;
  }
LABEL_21:
  result = GetSrbExtension(v2);
  v15 = result;
  v16 = 0;
  v26 = 0LL;
  if ( !v4 )
  {
    *(_BYTE *)(result + 4225) |= 8u;
    return result;
  }
  v17 = *(_BYTE *)(v14 + 3);
  if ( v17 != 14 )
  {
    result = *(unsigned int *)(a1 + 24);
    if ( (result & 0xE) == 0 )
    {
      v18 = 9LL;
      v19 = *(_QWORD *)(v4 + 96);
      v20 = *(unsigned __int8 *)(v19 + 4136);
      if ( !*(_QWORD *)(v15 + 4160) )
        goto LABEL_57;
      if ( v17 != 1 )
      {
        v23 = 1;
        if ( (_BYTE)v20 == 4 && (v24 = *(_WORD *)(v15 + 4218), (v24 & 0xE00) == 0x200) && (v24 & 0x1FE) == 0x12 )
        {
          v25 = *(_DWORD **)(v19 + 4160);
          *v25 = -1;
          NVMeReenumerateNameSpaceStart(a1, v25, 512LL, 9LL);
        }
        else
        {
          v23 = 0;
        }
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 && v23 )
          StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
        goto LABEL_56;
      }
      if ( v20 != 1 )
      {
        if ( v20 == 2 )
        {
          v21 = ProcessNvmeHealthInfoLog(a1, v14, *(char **)(v19 + 4160), 9);
        }
        else
        {
          if ( v20 == 4 )
          {
            v22 = *(_DWORD **)(v19 + 4160);
            if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
              StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
            if ( *v22 )
            {
              NVMeReenumerateNameSpaceStart(a1, v22, v13, v18);
            }
            else
            {
              _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u);
              _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
            }
            goto LABEL_56;
          }
          if ( v20 == 8 )
          {
            if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
              StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
            goto LABEL_56;
          }
          if ( v20 == 128 )
          {
            v21 = ProcessNvmeReservationNotification(a1, v14, *(_QWORD *)(v19 + 4160), 9LL);
          }
          else
          {
            if ( v20 != 129 )
            {
              if ( v20 == 191 )
              {
                *((_QWORD *)&v26 + 1) |= 4uLL;
                SendNVMeEventNotification(a1, &v26, *(_QWORD *)(v19 + 4160), 4096LL);
              }
              else if ( v20 == 208 )
              {
                ProcessMFNDChildControllerEventLog(a1, *(_QWORD *)(v19 + 4160), v13, 9LL);
              }
              goto LABEL_56;
            }
            v21 = ProcessNvmeSanitizeStatus(a1, v14, *(_QWORD *)(v19 + 4160), 9LL);
          }
        }
        v16 = v21;
      }
LABEL_56:
      NVMeFreeDmaBufferEx(
        a1,
        0,
        1,
        *(unsigned int *)(*(_QWORD *)(v4 + 96) + 4208LL),
        (__int64 *)(*(_QWORD *)(v4 + 96) + 4160LL),
        *(_QWORD *)(*(_QWORD *)(v4 + 96) + 4168LL));
      *(_BYTE *)(v15 + 4225) |= 8u;
      *(_DWORD *)(v15 + 4208) = 0;
LABEL_57:
      *(_BYTE *)v4 = 0;
      if ( !v16 )
        return NVMeIssueAsyncEventCommand(a1, v4);
      LocalCommandReuse(a1, v4);
      *(_BYTE *)(*(_QWORD *)(v4 + 96) + 4225LL) |= 1u;
      *(_BYTE *)(*(_QWORD *)(v4 + 96) + 4225LL) &= ~2u;
      *(_WORD *)(*(_QWORD *)(v4 + 96) + 4212LL) = 0;
      *(_DWORD *)(v15 + 4140) = *(_DWORD *)(a1 + 3960);
      *(_BYTE *)(v15 + 4096) = 9;
      *(_BYTE *)(v15 + 4136) = 11;
      *(_QWORD *)(v15 + 4192) = NVMeReConfigAsyncEventCompletion;
      return ProcessCommand(a1, v4 + 8);
    }
  }
  if ( *(_QWORD *)(v15 + 4160) )
  {
    result = NVMeFreeDmaBufferEx(
               a1,
               0,
               1,
               *(unsigned int *)(*(_QWORD *)(v4 + 96) + 4208LL),
               (__int64 *)(*(_QWORD *)(v4 + 96) + 4160LL),
               *(_QWORD *)(*(_QWORD *)(v4 + 96) + 4168LL));
    *(_DWORD *)(v15 + 4208) = 0;
  }
  *(_BYTE *)(v15 + 4225) |= 8u;
  return result;
}
