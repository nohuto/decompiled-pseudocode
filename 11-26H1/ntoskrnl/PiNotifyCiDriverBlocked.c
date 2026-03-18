/*
 * XREFs of PiNotifyCiDriverBlocked @ 0x1407A5A10
 * Callers:
 *     PiIsDriverBlocked @ 0x140A250AC (PiIsDriverBlocked.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiNotifyCiDriverBlocked(__int128 *a1, int a2, const void **a3)
{
  __int64 Pool2; // rax
  void *v7; // rdi
  __int128 v9; // xmm0
  unsigned int updated; // ebx

  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v9 = *a1;
  *(_DWORD *)(Pool2 + 16) = a2;
  *(_OWORD *)Pool2 = v9;
  *(_WORD *)(Pool2 + 20) = *(_WORD *)a3;
  memmove((void *)(Pool2 + 22), a3[1], *(unsigned __int16 *)a3);
  updated = ZwUpdateWnfStateData((__int64)&WNF_CI_BLOCKED_DRIVER, (__int64)v7);
  ExFreePoolWithTag(v7, 0);
  return updated;
}
