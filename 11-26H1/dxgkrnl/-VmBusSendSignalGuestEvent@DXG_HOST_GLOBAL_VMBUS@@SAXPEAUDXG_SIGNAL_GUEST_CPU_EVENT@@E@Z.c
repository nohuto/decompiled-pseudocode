/*
 * XREFs of ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@E@Z @ 0x140056AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140056D40 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140056FF0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent(DXG_VMBUS_CHANNEL_BASE **a1, char a2)
{
  DXG_VMBUS_CHANNEL_BASE *v2; // r10
  struct DXGGLOBAL *Global; // rax
  bool v5; // zf
  char v6; // r8
  bool v7; // cl
  DXG_VMBUS_CHANNEL_BASE *v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  struct _MDL *v11; // [rsp+20h] [rbp-19h]
  unsigned __int8 v12[16]; // [rsp+50h] [rbp+17h] BYREF
  __int128 v13; // [rsp+60h] [rbp+27h]
  __int128 v14; // [rsp+70h] [rbp+37h]

  v2 = *a1;
  *(_OWORD *)v12 = 0LL;
  if ( v2 )
  {
    v5 = *((_BYTE *)a1 + 16) == 0;
    v6 = *((_BYTE *)a1 + 18);
    v13 = 0LL;
    v14 = 0LL;
    v7 = !v5 || a2;
    v8 = a1[1];
    v12[12] = 2;
    *(_DWORD *)&v12[12] = *(_WORD *)&v12[12] & 0x1FF;
    v5 = *((_BYTE *)a1 + 19) == 0;
    LODWORD(v13) = 0;
    *((_QWORD *)&v13 + 1) = v8;
    *(_QWORD *)&v14 = 0LL;
    BYTE8(v14) = v7;
    BYTE9(v14) = v6;
    if ( !v5 )
      BYTE11(v14) |= 1u;
    v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v2, v12, (struct DXGKVMB_COMMAND_BASE *)v12, 0x30u, v11);
    if ( v9 < 0 )
    {
      v10 = v9;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7073;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendAsyncMessage failed. 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    *(_QWORD *)&v13 = 0LL;
    *(_QWORD *)v12 = a1[1];
    if ( *((_BYTE *)a1 + 16) || (LOBYTE(v13) = 0, a2) )
      LOBYTE(v13) = 1;
    Global = DXGGLOBAL::GetGlobal();
    (*((void (__fastcall **)(unsigned __int8 *))Global + 3))(v12);
  }
  if ( !*((_BYTE *)a1 + 17) )
    DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)a1);
}
