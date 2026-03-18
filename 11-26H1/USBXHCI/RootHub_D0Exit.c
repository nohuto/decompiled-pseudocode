/*
 * XREFs of RootHub_D0Exit @ 0x14002C10C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     RootHub_HandleResumedPorts @ 0x140004D8C (RootHub_HandleResumedPorts.c)
 *     Controller_NotifyPortStateToPep @ 0x14000600C (Controller_NotifyPortStateToPep.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     RootHub_DumpPortData @ 0x14000B97C (RootHub_DumpPortData.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14002C8AC (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  int v4; // ebx
  __int64 v6; // r13
  int v7; // r12d
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  int v12; // edx
  __int16 Ulong; // ax
  int v14; // eax
  __int64 v15; // rdx
  unsigned int *v16; // rbx
  int v17; // eax
  __int64 v18; // r14
  unsigned int *v19; // rbx
  __int16 v20; // ax

  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  RootHub_HandleResumedPorts(a1);
  v7 = 2;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v8 = 0;
    do
    {
      if ( v4 != 5 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 736) >> 26;
        LOBYTE(v10) = (*(_QWORD *)(v9 + 736) & 0x4000000LL) != 0;
        v11 = RootHub_WaitForPendingU3TransitionCompletion(a1, v8 + 1, v10);
        if ( v11 < 0 && a3 == 7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v12) = 5;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v12,
              11,
              34,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v11);
          }
          ((void (__fastcall *)(__int64, _QWORD))qword_14006BC30)(UcxDriverGlobals, *(_QWORD *)a1);
        }
        Ulong = XilRegister_ReadUlong(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                  (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v8));
        if ( (Ulong & 0x201) == 0x201 )
        {
          v14 = Ulong & 0x1E0;
          if ( ((v14 - 128) & 0xFFFFFF3F) != 0 || v14 == 256 )
            v7 = 1;
        }
      }
      v15 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(v15 + 736) & 0x40000000LL) != 0 )
      {
        v16 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v8);
        RootHub_AcquireReadModifyWriteLock(a1, v8);
        v17 = XilRegister_ReadUlong(v6, v16);
        if ( a3 != 7 || (v17 & 0x20000) == 0 )
          XilRegister_WriteUlong(v6, v16, v17 & 0xE00C200 | 0x20000);
        RootHub_ReleaseReadModifyWriteLock(a1, v8);
        v15 = *(_QWORD *)(a1 + 8);
      }
      v18 = 120LL * v8;
      if ( (*(_DWORD *)(v18 + *(_QWORD *)(a1 + 48) + 64) & 2) != 0
        || (a3 == 3 || a3 == 4 || (unsigned int)(a3 - 5) <= 1) && (*(_QWORD *)(v15 + 736) & 0x20000000LL) != 0 )
      {
        v19 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v8);
        RootHub_AcquireReadModifyWriteLock(a1, v8);
        v20 = XilRegister_ReadUlong(v6, v19);
        XilRegister_WriteUlong(v6, v19, v20 & 0xC200);
        RootHub_ReleaseReadModifyWriteLock(a1, v8);
      }
      RootHub_DumpPortData((unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v8++), *(_QWORD *)(a1 + 8));
      v4 = a2;
      *(_BYTE *)(v18 + *(_QWORD *)(a1 + 48) + 18) = 0;
    }
    while ( v8 + 1 <= *(_DWORD *)(a1 + 16) );
  }
  return Controller_NotifyPortStateToPep(*(_QWORD *)(a1 + 8), v7);
}
