/*
 * XREFs of UnlockChildPages @ 0x1402351E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void UnlockChildPages(__int64 a1, char a2, __int64 a3, ...)
{
  int v3; // eax
  __int64 v6; // rbx
  struct _KTHREAD **v7; // rbx
  __int64 v8; // rdx
  struct _KTHREAD *v9; // rcx
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = *(_DWORD *)(a1 + 408);
  if ( (v3 & 0x100) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 592LL);
LABEL_3:
    v7 = (struct _KTHREAD **)(v6 + 160);
    goto LABEL_7;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 592);
    goto LABEL_3;
  }
  v7 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v10, v7 + 2);
  if ( *((_BYTE *)v7 + 68) )
  {
    v9 = *v7;
    LOBYTE(v8) = a2;
    v11 = a3;
    ((void (__fastcall *)(struct _KTHREAD *, __int64, __int64, __int64 *, __int64 *))qword_1401686B8)(
      v9,
      v8,
      1LL,
      &v11,
      (__int64 *)va);
  }
  _InterlockedDecrement(&g_VgpuNumLockedChildRanges);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
}
