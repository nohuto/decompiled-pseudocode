/*
 * XREFs of KiTpIsSupportedKernelTracepointLocation @ 0x1407BC484
 * Callers:
 *     KeSetTracepoint @ 0x1407BBB10 (KeSetTracepoint.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14040E4E0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1407BC378 (KiTpIsExcludedKernelTracepointLocation.c)
 */

_BOOL8 __fastcall KiTpIsSupportedKernelTracepointLocation(unsigned __int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // ecx
  bool v10; // zf

  v4 = RtlImageNtHeader(a1);
  if ( !v4 )
    return 0LL;
  v5 = RtlSectionTableFromVirtualAddress((unsigned __int64)v4, a1, (int)a2 - (int)a1);
  if ( !v5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 36) & 0x22000000) != 0x20000000 )
    return 0LL;
  v9 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 1414090313 || v9 == 1396790859 )
    return 0LL;
  if ( v9 == 1162297680 && *(_DWORD *)(v5 + 4) )
  {
    LOBYTE(v6) = *(_BYTE *)(v5 + 4);
    if ( (_BYTE)v6 == 119 )
    {
      v10 = *(_BYTE *)(v5 + 5) == 120;
      goto LABEL_13;
    }
    if ( (_BYTE)v6 == 86 && *(_BYTE *)(v5 + 5) == 82 )
    {
      v10 = *(_BYTE *)(v5 + 6) == 70;
LABEL_13:
      if ( v10 )
        return 0LL;
    }
  }
  return a1 != PsHalImageBase
      && (a1 != PsNtosImageBase
       || v9 != 1128354388 && v9 != 1347769157 && !(unsigned int)KiTpIsExcludedKernelTracepointLocation(a2, v6, v7, v8));
}
