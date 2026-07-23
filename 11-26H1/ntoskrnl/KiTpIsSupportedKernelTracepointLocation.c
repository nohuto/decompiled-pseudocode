/*
 * XREFs of KiTpIsSupportedKernelTracepointLocation @ 0x1407BF4E4
 * Callers:
 *     KeSetTracepoint @ 0x1407BEB70 (KeSetTracepoint.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14042B410 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1407BF3D8 (KiTpIsExcludedKernelTracepointLocation.c)
 */

_BOOL8 __fastcall KiTpIsSupportedKernelTracepointLocation(PVOID BaseOfImage, __int64 a2)
{
  _IMAGE_NT_HEADERS64 *v4; // rax
  PIMAGE_SECTION_HEADER v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // ecx
  bool v10; // zf

  v4 = RtlImageNtHeader(BaseOfImage);
  if ( !v4 )
    return 0LL;
  v5 = RtlSectionTableFromVirtualAddress(v4, BaseOfImage, (int)a2 - (int)BaseOfImage);
  if ( !v5 )
    return 0LL;
  if ( (v5->Characteristics & 0x22000000) != 0x20000000 )
    return 0LL;
  v9 = *(_DWORD *)v5->Name;
  if ( *(_DWORD *)v5->Name == 1414090313 || v9 == 1396790859 )
    return 0LL;
  if ( v9 == 1162297680 && *(_DWORD *)&v5->Name[4] )
  {
    LOBYTE(v6) = v5->Name[4];
    if ( (_BYTE)v6 == 119 )
    {
      v10 = v5->Name[5] == 120;
      goto LABEL_13;
    }
    if ( (_BYTE)v6 == 86 && v5->Name[5] == 82 )
    {
      v10 = v5->Name[6] == 70;
LABEL_13:
      if ( v10 )
        return 0LL;
    }
  }
  return BaseOfImage != PsHalImageBase
      && (BaseOfImage != PsNtosImageBase
       || v9 != 1128354388 && v9 != 1347769157 && !(unsigned int)KiTpIsExcludedKernelTracepointLocation(a2, v6, v7, v8));
}
