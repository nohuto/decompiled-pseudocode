/*
 * XREFs of UnmapChildMmioSpace @ 0x140405B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall UnmapChildMmioSpace(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rdx
  volatile signed __int64 *v6; // r8
  volatile signed __int32 *v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct _KPROCESS *v11; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = -a2;
  v6 = &g_VgpuSizeVaToGpaMappings;
  if ( !a4 )
    v6 = &g_VgpuSizeHpaToGpaMappings;
  v7 = &g_VgpuNumVaToGpaMappings;
  if ( !a4 )
    v7 = &g_VgpuNumHpaToGpaMappings;
  _InterlockedDecrement(v7);
  _InterlockedAdd64(v6, v4);
  v8 = *(_DWORD *)(a1 + 408);
  if ( (v8 & 0x100) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 592LL);
LABEL_7:
    v10 = v9 + 160;
    goto LABEL_8;
  }
  if ( (v8 & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 592);
    goto LABEL_7;
  }
  v10 = 0LL;
LABEL_8:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)&ApcState, (struct _KTHREAD **)(v10 + 16));
  ((void (__fastcall *)(_QWORD, __int64))qword_1401686D0)(*(_QWORD *)v10, a3);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&ApcState);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v11 = *(struct _KPROCESS **)(a3 + 40);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v11, &ApcState);
    ObCloseHandle(*(HANDLE *)(a3 + 16), 0);
    KeUnstackDetachProcess(&ApcState);
  }
  ExFreePoolWithTag((PVOID)a3, 0x4B677844u);
}
