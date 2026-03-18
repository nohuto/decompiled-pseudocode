/*
 * XREFs of ?TryDefragmentSegments@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NI@Z @ 0x1400B29D0
 * Callers:
 *     <none>
 * Callees:
 *     DefragmentSegment @ 0x1400B1AB8 (DefragmentSegment.c)
 */

char __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::TryDefragmentSegments(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        unsigned int a2)
{
  char v3; // r8
  __int64 v4; // r11
  __int64 v5; // r9
  __int64 v6; // rcx

  v3 = 0;
  while ( a2 )
  {
    _BitScanForward((unsigned int *)&v4, a2);
    v5 = *(_QWORD *)(*((_QWORD *)this + 219) + 8 * v4);
    if ( *(_BYTE *)(v5 + 481) )
    {
      v6 = **((_QWORD **)this + 7);
      if ( *(_QWORD *)(v5 + 504) != *(_QWORD *)(v6 + 112) )
      {
        DefragmentSegment(v6, (struct VIDMM_SEGMENT *)v5);
        return 1;
      }
    }
    a2 &= ~(1 << v4);
  }
  return v3;
}
