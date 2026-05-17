/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x18013CCD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 */

__int64 __fastcall RtlCopySidAndAttributesArray(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char *a5,
        _QWORD *a6,
        unsigned int *a7)
{
  unsigned int i; // esi
  unsigned int v13; // ebp

  for ( i = 0; i < a1; ++i )
  {
    v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a2 + 16LL * i) + 1LL) + 8;
    if ( v13 > a3 )
      return 3221225507LL;
    *(_QWORD *)(a4 + 16LL * i) = a5;
    *(_DWORD *)(a4 + 16LL * i + 8) = *(_DWORD *)(a2 + 16LL * i + 8);
    a3 -= v13;
    RtlCopySid(v13, a5, *(unsigned __int8 **)(a2 + 16LL * i));
    a5 += v13;
  }
  *a6 = a5;
  *a7 = a3;
  return 0LL;
}
