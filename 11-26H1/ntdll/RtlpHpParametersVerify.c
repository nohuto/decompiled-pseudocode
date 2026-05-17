/*
 * XREFs of RtlpHpParametersVerify @ 0x180100E90
 * Callers:
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x180163260 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpHpParametersVerify(__int64 a1)
{
  int v2; // ebx
  bool v3; // zf
  bool v4; // zf

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_WORD *)a1 == 3
    && *(_WORD *)(a1 + 2) == 80
    && (*(_DWORD *)(a1 + 4) & 0xFFFFFFFC) == 0
    && RtlCompareMemoryUlong(a1 + 48, 32LL, 0LL) == 32 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v4 = RtlCompareMemoryUlong(a1 + 8, 40LL, 0LL) == 40;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8)
        || (unsigned int)(v2 - 1) > 0x3E
        || (v2 & 2) != 0
        || *(_DWORD *)(a1 + 16) != -1
        || RtlCompareMemoryUlong(a1 + 32, 16LL, 0LL) != 16 )
      {
        return 0LL;
      }
      v3 = *(_QWORD *)(a1 + 24) ? (v2 & 0xFFFFFFC3) == 0 : (v2 & 0x20) == 0;
      if ( !v3 || (v2 & 0x10) != 0 && (v2 & 8) == 0 || (v2 & 4) != 0 && ((v2 & 8) != 0 || (v2 & 0x10) != 0) )
        return 0LL;
      v4 = (v2 & 0x3C) == 0 || (v2 & 0xFFFFFFC3) == 0;
    }
    if ( v4 )
      return 1LL;
  }
  return 0LL;
}
