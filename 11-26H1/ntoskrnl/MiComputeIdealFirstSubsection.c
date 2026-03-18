/*
 * XREFs of MiComputeIdealFirstSubsection @ 0x14086CF34
 * Callers:
 *     MiCreateDataFileMap @ 0x140A565D8 (MiCreateDataFileMap.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     FsRtlGetFileExtents @ 0x1405B5170 (FsRtlGetFileExtents.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiComputeIdealFirstSubsection(struct _FILE_OBJECT *a1)
{
  int CurrentProcessorColor; // eax
  _DWORD *result; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = (_DWORD *)ExAllocatePoolMm(64LL, 0x28uLL, 843475277, CurrentProcessorColor | 0x80000000);
  v4 = 0LL;
  v5 = result;
  if ( result )
  {
    *(_QWORD *)result = 2LL;
    if ( (int)FsRtlGetFileExtents(a1, 2, 0LL, 0x40000000LL, result) >= 0 )
    {
      v6 = v5[1];
      if ( v6 == 1 )
      {
        if ( (v5[2] & 0x3FFFF) == 0 && *((_QWORD *)v5 + 2) == 0x40000LL )
          v4 = 0x40000LL;
      }
      else if ( v6 == 2 )
      {
        v7 = *((_QWORD *)v5 + 2);
        if ( v7 + *((_QWORD *)v5 + 4) == 0x40000 && (v7 & 0xF) == 0 )
          v4 = *((_QWORD *)v5 + 2);
      }
    }
    ExFreePoolWithTag(v5, 0);
    return (_DWORD *)v4;
  }
  return result;
}
