/*
 * XREFs of ?bRotationOrMirroring@DC@@QEBA_NAEBVEXFORMOBJ@@@Z @ 0x140187804
 * Callers:
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DC::bRotationOrMirroring(DC *this, const struct EXFORMOBJ *a2)
{
  __int64 v2; // r8
  char v3; // dl

  v2 = *(_QWORD *)a2;
  v3 = 1;
  if ( (*(_BYTE *)(v2 + 32) & 1) != 0
    && ((*(_BYTE *)(*((_QWORD *)this + 122) + 108LL) & 1) != 0 || *(float *)v2 >= 0.0 && *(float *)(v2 + 12) >= 0.0) )
  {
    return 0;
  }
  return v3;
}
