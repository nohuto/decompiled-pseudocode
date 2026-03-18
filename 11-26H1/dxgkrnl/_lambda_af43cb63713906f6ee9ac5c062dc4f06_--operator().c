/*
 * XREFs of _lambda_af43cb63713906f6ee9ac5c062dc4f06_::operator() @ 0x14021FD6C
 * Callers:
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402348B0 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1400816C4 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x140081C34 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_af43cb63713906f6ee9ac5c062dc4f06_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // r10
  __int64 v5; // r9
  __int64 *v6; // rdx
  __int64 v7; // r8
  struct _LUID v8; // [rsp+50h] [rbp-38h] BYREF
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]
  __int64 v14; // [rsp+70h] [rbp-18h]
  __int64 v15; // [rsp+78h] [rbp-10h]

  v2 = **a1;
  if ( *(_QWORD *)(v2 + 40) )
  {
    if ( *(_DWORD *)(v2 + 48) < 2u )
    {
      Global = DXGGLOBAL::GetGlobal();
      v5 = **a1;
      if ( (*(_DWORD *)(v5 + 48) & 1) != 0 )
      {
        v6 = a1[1];
        v7 = *(_QWORD *)(*(_QWORD *)(*v6 + 96) + 592LL);
        v10 = 0;
        v13 = 0;
        v15 = 0LL;
        v11 = *(_QWORD *)(*v6 + 104) + 160LL;
        v8 = *(struct _LUID *)(v5 + 24);
        v9 = *(_DWORD *)(v5 + 32);
        v14 = *(_QWORD *)(v5 + 40);
        v12 = *(_DWORD *)(v7 + 392);
        return HOSTVMMONITORMAPPING::AddMapping((KSPIN_LOCK *)Global + 38166, &v8);
      }
      else
      {
        return HOSTVMMONITORMAPPING::RemoveMapping(
                 (struct DXGGLOBAL *)((char *)Global + 305328),
                 (void *)(*(_QWORD *)(*a1[1] + 104) + 160LL),
                 *(struct _LUID *)(v5 + 24),
                 *(_DWORD *)(v5 + 32),
                 *(void **)(v5 + 40));
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 8286;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Flags.Unused was not zero, failing request",
        8286LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225714LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 8280;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"pGuestVsyncEvent is zero, failing request",
      8280LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225713LL;
  }
}
