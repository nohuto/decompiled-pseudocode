/*
 * XREFs of ?DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A82C0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1401464B8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A845C (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall tagWND::DwsUnlinkProcess(__int64 a1, tagPROCESSINFO *a2, int a3)
{
  tagPROCESSINFO *v4; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  char v9; // r12
  int v10; // ebx
  bool v11; // zf
  bool v12; // r13
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v4 = a2;
  if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline(a1, a2) )
  {
    v7 = (_QWORD *)(a1 + 400);
    v8 = *(_QWORD **)(a1 + 400);
    v9 = 1;
    if ( ((*(_DWORD *)(a1 + 380) >> 27) & 1) != (v8 != (_QWORD *)(a1 + 400)) )
      KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
    while ( v8 != v7 )
    {
      if ( (tagPROCESSINFO *)*(v8 - 2) == v4 )
      {
        v10 = ~a3;
        v11 = (v10 & *(_DWORD *)(v8 - 1)) == 0;
        *((_DWORD *)v8 - 2) &= v10;
        if ( v11 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v9 = 0;
          }
          v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
            LOBYTE(v14) = v12;
            LOBYTE(v15) = v9;
            WPP_RECORDER_AND_TRACE_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v15,
              v14,
              *(_QWORD *)(UserSessionState + 69144));
            v4 = a2;
          }
          tagPROCESSINFO::DwsUnlinkWindow(v4, (struct ContribueToProcessDws *)(v8 - 3));
          v16 = *v8;
          if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v17 = (_QWORD *)v8[1], (_QWORD *)*v17 != v8) )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          GreDeleteFastMutex((char *)v8 - 24);
        }
        break;
      }
      v8 = (_QWORD *)*v8;
    }
    if ( (_QWORD *)*v7 == v7 )
      *(_DWORD *)(a1 + 380) &= ~0x8000000u;
  }
}
