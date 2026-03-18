/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1403B17E4
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1403B10C0 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x140046930 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x1403B1AFC (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  char v6; // r12
  BOOLEAN v7; // r15
  unsigned int v8; // eax
  int v9; // r8d
  __int64 v10; // rcx
  struct _EX_RUNDOWN_REF *v11; // rbx
  __int64 v13; // rax
  const wchar_t *v14; // r9
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-89h]
  _OWORD v17[3]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-11h] BYREF

  v2 = *((_QWORD *)a1 + 12);
  v3 = *((_QWORD *)a1 + 17);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 56), &ApcState);
  v6 = 0;
  v7 = 0;
  if ( *(_DWORD *)(v3 + 8) )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, (struct _KTHREAD **)v2);
    v8 = (*(_DWORD *)(v3 + 8) >> 6) & 0xFFFFFF;
    if ( v8 < *(_DWORD *)(v2 + 296) )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(v2 + 280) + 16LL * v8 + 8);
      if ( ((*(_DWORD *)(v3 + 8) >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v2 + 280) + 16LL * v8 + 8) & 0x60)
        && (v9 & 0x2000) == 0
        && (v9 & 0x1F) != 0 )
      {
        v10 = *(_QWORD *)(v2 + 280);
        if ( (*(_BYTE *)(v10 + 16LL * v8 + 8) & 0x1F) == 0xC )
        {
          v11 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * v8);
          if ( !v11 )
            goto LABEL_9;
          v7 = ExAcquireRundownProtection(v11 + 30);
          if ( v7 )
            goto LABEL_9;
          WdLogSingleEntry1(2LL);
          v13 = *(unsigned int *)(v3 + 8);
          v14 = L"Failed to acquire process rundown protection: 0x%I64x";
          WdLogGlobalForLineNumber = 309;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          v13 = 318LL;
          v14 = L"Handle type mismatch";
          WdLogGlobalForLineNumber = 318;
        }
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v11 = 0LL;
LABEL_9:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(v3 + 12) )
    goto LABEL_18;
  v15 = *(_DWORD *)(v3 + 16);
  if ( v15 != 48 && v15 != 2 && v15 != 8 )
    goto LABEL_18;
  v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 12);
LABEL_10:
  if ( !v11 )
  {
LABEL_18:
    WdLogSingleEntry1(2LL);
    v16 = *(unsigned int *)(v3 + 8);
    WdLogGlobalForLineNumber = 330;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process handle specified: 0x%I64x",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  memset(v17, 0, sizeof(v17));
  CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)v17, (struct DXGPROCESS *)v11, 0);
  if ( *((_QWORD *)&v17[0] + 1) )
  {
    *((_QWORD *)a1 + 11) = v11;
    v6 = a2(a1);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 343;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Setting current DXGPROCESS failed",
      343LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v17);
  if ( v7 )
    ExReleaseRundownProtection(v11 + 30);
LABEL_15:
  KeUnstackDetachProcess(&ApcState);
  return v6;
}
