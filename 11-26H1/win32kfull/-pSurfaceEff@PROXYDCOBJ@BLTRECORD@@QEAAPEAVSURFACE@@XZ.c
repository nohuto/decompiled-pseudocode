/*
 * XREFs of ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14008011C
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14006BEDC (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__fastcall BLTRECORD::PROXYDCOBJ::pSurfaceEff(BLTRECORD::PROXYDCOBJ *this)
{
  struct SURFACE *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v3; // rdx

  result = (struct SURFACE *)*((_QWORD *)this + 13);
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
      return (struct SURFACE *)*((_QWORD *)v3 + 547);
    }
  }
  return result;
}
