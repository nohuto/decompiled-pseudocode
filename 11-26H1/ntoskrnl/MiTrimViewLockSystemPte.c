/*
 * XREFs of MiTrimViewLockSystemPte @ 0x1403A8480
 * Callers:
 *     MiTrimSharedPageFromView @ 0x140465634 (MiTrimSharedPageFromView.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiSystemVaTypeHasWsles @ 0x1403A8540 (MiSystemVaTypeHasWsles.c)
 *     MiTrimViewGetFlushList @ 0x1403A9858 (MiTrimViewGetFlushList.c)
 */

__int64 __fastcall MiTrimViewLockSystemPte(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned int SystemRegionType; // eax
  int v4; // ecx
  void *volatile *v5; // rax
  __int64 v6; // r8

  v1 = *(_QWORD *)(a1 + 272);
  SystemRegionType = MiGetSystemRegionType(v1);
  if ( !(unsigned int)MiSystemVaTypeHasWsles(SystemRegionType) )
    return 3221225497LL;
  v5 = MiSystemVaTypeToVm(v4);
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 || !(unsigned int)MiSynchronizeSystemVa((__int64)v5, v1, v6, 0, a1 + 72) )
    return 3221225497LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 96);
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && !*(_QWORD *)(a1 + 40) )
    MiTrimViewGetFlushList(a1);
  *(_QWORD *)(a1 + 56) = ((*(_QWORD *)(a1 + 272) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
  return 0LL;
}
