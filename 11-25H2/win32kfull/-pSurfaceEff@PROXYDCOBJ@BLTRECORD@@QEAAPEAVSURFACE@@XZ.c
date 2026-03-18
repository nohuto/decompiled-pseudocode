/*
 * XREFs of ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14007A170
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x140078744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14007EF08 (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x14019DBC0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__fastcall BLTRECORD::PROXYDCOBJ::pSurfaceEff(BLTRECORD::PROXYDCOBJ *this)
{
  struct SURFACE *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v3; // rcx

  result = (struct SURFACE *)*((_QWORD *)this + 14);
  if ( !result )
  {
    v3 = Gre::Base::Globals(this);
    result = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
    if ( result )
    {
      if ( *((_QWORD *)this + 3) )
        return (struct SURFACE *)*((_QWORD *)this + 3);
    }
    else
    {
      return (struct SURFACE *)*((_QWORD *)v3 + 533);
    }
  }
  return result;
}
