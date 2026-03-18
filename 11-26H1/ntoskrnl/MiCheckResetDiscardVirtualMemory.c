/*
 * XREFs of MiCheckResetDiscardVirtualMemory @ 0x140AB1810
 * Callers:
 *     MiResetVirtualMemory @ 0x140AB1600 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6B41C (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiAllowProtectionChange @ 0x140306C24 (MiAllowProtectionChange.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiCheckSecuredVad @ 0x14095DB28 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiCheckResetDiscardVirtualMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 VadFlags; // rax
  unsigned __int64 v10; // rdx
  ULONG_PTR v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  int v15; // eax

  VadFlags = MiReadVadFlags(a1);
  v13 = 0;
  if ( (VadFlags & 0x80000) != 0 )
  {
    if ( (VadFlags & 0x82) == 2 && (int)MiCheckSecuredVad(v11, v10, v12 - a2 + 1, 4u, a5, 0LL) < 0 )
      return 3221225550LL;
  }
  else
  {
    if ( *(_QWORD *)(**(_QWORD **)(v11 + 80) + 64LL) )
      return 3221226051LL;
    if ( (VadFlags & 0x80u) == 0LL )
      return 3221225550LL;
  }
  if ( (*(_DWORD *)(a4 + 1872) & 0x100) == 0 || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0 )
    return 0LL;
  v15 = MiAllowProtectionChange((__int64)KeGetCurrentThread()->ApcState.Process, a4, a1, 4, a2, a3);
  if ( v15 < 0 )
    return (unsigned int)v15;
  return v13;
}
