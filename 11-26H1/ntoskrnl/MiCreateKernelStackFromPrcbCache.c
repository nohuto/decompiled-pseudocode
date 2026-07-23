/*
 * XREFs of MiCreateKernelStackFromPrcbCache @ 0x1403D40B8
 * Callers:
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 * Callees:
 *     MiUpdateKernelShadowStackOwnerData @ 0x140342BC8 (MiUpdateKernelShadowStackOwnerData.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCreateKernelStackFromPrcbCache(__int64 a1)
{
  unsigned int v1; // r8d
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v3; // rbx
  ULONG_PTR v4; // r9
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // rbx

  if ( *(_DWORD *)(a1 + 56) == 5 )
  {
    v1 = 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) != 5 )
      return 0LL;
    v1 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0] != *(_DWORD *)(a1 + 48) )
    return 0LL;
  if ( !CurrentPrcb->CachedStacks[v1] )
    return 0LL;
  v3 = _InterlockedExchange64((volatile __int64 *)&CurrentPrcb->CachedStacks[v1], 0LL);
  if ( !v3 )
    return 0LL;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 48);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 80) = v3;
    v6 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
    MiUpdateKernelShadowStackOwnerData(v6, a1);
  }
  else
  {
    v4 = *(_QWORD *)(v3 - 16);
    v5 = v3 - 4080;
    if ( v4 != (qword_140E34D20 ^ v5) )
      KeBugCheckEx(0x1Au, 0x3470uLL, v5, v4, qword_140E34D20 ^ v5);
    return (__int64)(((v5 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
  }
  return v6;
}
