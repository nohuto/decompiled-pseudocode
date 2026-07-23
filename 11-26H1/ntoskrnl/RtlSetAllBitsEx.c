/*
 * XREFs of RtlSetAllBitsEx @ 0x1403711E0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405CF1A8 (IopLiveDumpAllocAndInitResources.c)
 *     MiInitializeUltraSpace @ 0x140D07E90 (MiInitializeUltraSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetAllBitsEx(_QWORD *a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax
  unsigned __int64 v3; // r9

  v1 = (_DWORD *)a1[1];
  result = (*a1 & 0x1F) != 0;
  v3 = result + (*a1 >> 5);
  if ( v3 )
  {
    if ( ((unsigned __int8)v1 & 4) != 0 )
    {
      result = v3 - 1;
      *v1 = -1;
      v3 = result;
      if ( !result )
        return result;
      ++v1;
    }
    result = -1LL;
    memset(v1, 0xFFu, 8 * (v3 >> 1));
    if ( (v3 & 1) != 0 )
      v1[v3 - 1] = -1;
  }
  return result;
}
