/*
 * XREFs of TtmiSessionDeviceListWorker @ 0x1407EAE10
 * Callers:
 *     TtmpSessionWorker @ 0x1407ED0C0 (TtmpSessionWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     TtmpApplyDeviceAutoAssignment @ 0x1407EB0B4 (TtmpApplyDeviceAutoAssignment.c)
 *     TtmpCallAssignedToTerminal @ 0x1407EB0E0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1407EB504 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPublishDeviceEvent @ 0x1407EB890 (TtmpPublishDeviceEvent.c)
 *     TtmpPushTerminalState @ 0x1407EBA68 (TtmpPushTerminalState.c)
 *     TtmpStartCallout @ 0x1407EBC1C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407EBDA4 (TtmpStopCallout.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmiSessionDeviceListWorker(_DWORD *a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  int v4; // eax
  void *v5; // r15
  void *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  _OWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]

  v1 = (__int64 *)(a1 + 24);
  for ( i = (__int64 *)*((_QWORD *)a1 + 12); i != v1; i = (__int64 *)*i )
  {
    v4 = *((_DWORD *)i + 150);
    v5 = i;
    v6 = i;
    if ( (v4 & 4) != 0 )
      goto LABEL_10;
    if ( (v4 & 1) != 0 )
    {
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFFC | 2;
      TtmpApplyDeviceAutoAssignment(a1, i);
      v8 = 3LL;
    }
    else
    {
      if ( (v4 & 0x10) == 0 )
        goto LABEL_8;
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFEF;
      TtmpApplyDeviceAutoAssignment(a1, i);
      v8 = 4LL;
    }
    TtmpPublishDeviceEvent(v7, 0LL, i, v8);
LABEL_8:
    v9 = *((_DWORD *)i + 150);
    if ( (v9 & 0x20) != 0 )
    {
      *((_DWORD *)i + 150) = v9 & 0xFFFFFFDF;
      TtmpCallAssignedToTerminal(a1, i);
    }
LABEL_10:
    if ( (i[75] & 0x44) == 0x40 )
    {
      *((_DWORD *)i + 150) &= ~0x40u;
      if ( (unsigned __int8)TtmpPushTerminalState(a1, i) )
      {
        *((_DWORD *)i + 150) |= 0x40u;
        a1[1] |= 0x1000u;
      }
    }
    v10 = *((_DWORD *)i + 150);
    if ( (v10 & 4) != 0 )
    {
      if ( (v10 & 2) != 0 )
      {
        *((_DWORD *)i + 150) = v10 | 8;
        TtmpPublishDeviceEvent(a1, 0LL, i, 5LL);
      }
      v11 = i[5];
      if ( v11 )
      {
        v16 = 0LL;
        memset(v15, 0, sizeof(v15));
        TtmpStartCallout((unsigned int)v15, (_DWORD)a1, (_DWORD)i, 2, v11, 0);
        guard_dispatch_icall_no_overrides(i[3], v12);
        TtmpStopCallout(v15, 0LL);
      }
      v13 = *i;
      i = (__int64 *)i[1];
      if ( *(void **)(*(_QWORD *)v5 + 8LL) != v6 || (void *)*i != v6 )
        __fastfail(3u);
      *i = v13;
      *(_QWORD *)(v13 + 8) = i;
      --a1[29];
      ExFreePoolWithTag(v6, 0x446D7454u);
    }
  }
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 0LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 1LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 2LL);
  return TtmpCommitTerminalDisplayStateUpdateWorker(a1, 3LL);
}
