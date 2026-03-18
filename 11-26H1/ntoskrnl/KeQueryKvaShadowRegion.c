/*
 * XREFs of KeQueryKvaShadowRegion @ 0x14040D384
 * Callers:
 *     MiCheckRelevantKernelShadows @ 0x14040D30C (MiCheckRelevantKernelShadows.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14040E4E0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall KeQueryKvaShadowRegion(__int64 a1, unsigned __int64 **a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  __int64 v6; // rcx
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  KPCR *Pcr; // rax
  struct _KPRCB *CurrentPrcb; // rax

  v3 = 0LL;
  if ( !a1 )
  {
    Pcr = KeGetPcr();
    *a3 = 20480LL;
    *a2 = (unsigned __int64 *)&Pcr->NtTib.ExceptionList[-763];
    return 1LL;
  }
  v6 = a1 - 1;
  if ( !v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *a3 = 4096LL;
    *a2 = &CurrentPrcb->KernelDirectoryTableBase;
    return 1LL;
  }
  if ( v6 == 1 )
  {
    if ( 0x140000000LL != -1 && (_WORD)MEMORY[0x140000000] == 23117 )
    {
      v7 = (_DWORD *)(0x140000000LL + MEMORY[0x14000003C]);
      if ( (unsigned __int64)v7 >= 0x140000000LL
        && (0x140000000LL >= 0x7FFFFFFF0000uLL
         || 0x140000108LL + (unsigned __int64)MEMORY[0x14000003C] <= 0x7FFFFFFF0000LL
         && 0x140000108LL + (unsigned __int64)MEMORY[0x14000003C] > 0x140000000LL
                                                                  + (unsigned __int64)MEMORY[0x14000003C])
        && *v7 == 17744 )
      {
        v3 = 0x140000000LL + MEMORY[0x14000003C];
      }
    }
    v8 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                     v3,
                     0x140000000uLL,
                     (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
    *a2 = (unsigned __int64 *)(0x140000000LL + (unsigned int)v8[3]);
    v9 = v8[2];
    v10 = v8[4];
    if ( v9 <= v10 )
      v9 = v10;
    *a3 = (v9 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    return 1LL;
  }
  return 0LL;
}
