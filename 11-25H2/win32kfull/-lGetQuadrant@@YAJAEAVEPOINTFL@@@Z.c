/*
 * XREFs of ?lGetQuadrant@@YAJAEAVEPOINTFL@@@Z @ 0x1400A83A0
 * Callers:
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400A6340 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall lGetQuadrant(struct EPOINTFL *a1)
{
  float v1; // xmm1_4
  int v2; // r8d
  unsigned int v3; // r8d

  v1 = *(float *)a1;
  v2 = 0;
  if ( *((float *)a1 + 1) < 0.0 )
  {
    LOBYTE(v2) = v1 >= 0.0;
    return (unsigned int)(v2 + 2);
  }
  else if ( (v1 < 0.0 || EFLOAT::bIsZero(a1)) && EFLOAT::bIsZero((struct EPOINTFL *)((char *)a1 + 4)) )
  {
    ++v3;
  }
  return v3;
}
