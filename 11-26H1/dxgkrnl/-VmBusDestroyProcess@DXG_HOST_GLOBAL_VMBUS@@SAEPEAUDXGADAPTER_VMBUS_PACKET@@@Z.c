/*
 * XREFs of ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x140046930 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14004A5A0 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140084030 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@P.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned int v5; // r8d
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  struct _EX_RUNDOWN_REF *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-79h]
  int v12; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v14[48]; // [rsp+70h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp+7h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  v4 = *((_QWORD *)a1 + 12);
  v12 = -1073741823;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v13, (struct DXGPROCESS *)v4);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( v6 < *(_DWORD *)(v4 + 296) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v4 + 280) + 16LL * v6 + 8);
    if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v4 + 280) + 16LL * v6 + 8) & 0x60)
      && (v7 & 0x2000) == 0
      && (v7 & 0x1F) != 0 )
    {
      v8 = *(_QWORD *)(v4 + 280);
      if ( (*(_BYTE *)(v8 + 16LL * v6 + 8) & 0x1F) == 0xC )
      {
        v9 = *(struct _EX_RUNDOWN_REF **)(v8 + 16LL * v6);
        if ( v9 )
          *(_DWORD *)(16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + v8 + 8) |= 0x2000u;
        goto LABEL_9;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v9 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  if ( v9 )
  {
    ExWaitForRundownProtectionRelease(v9 + 30);
    CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v14, (struct DXGPROCESS *)v9, 1u);
    DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)v9);
    v12 = 0;
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v14);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v11 = *(unsigned int *)(v3 + 8);
    WdLogGlobalForLineNumber = 7558;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get process by handle: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeUnstackDetachProcess(&ApcState);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v12, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
