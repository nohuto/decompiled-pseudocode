/*
 * XREFs of ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1400D0C04
 * Callers:
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1400CEE58 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     XLATEOBJ_iXlate @ 0x1400D08C0 (XLATEOBJ_iXlate.c)
 * Callees:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1400CD87C (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1400CF040 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall XEPALOBJ::bGenColorXlate555(XEPALOBJ *this)
{
  unsigned int v2; // ebx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdx
  __int64 v4; // rcx
  Gre::Base *v5; // rcx

  v2 = 0;
  v3 = Gre::Base::Globals(this);
  v4 = *(_QWORD *)(*(_QWORD *)this + 104LL);
  if ( !v4 || v4 == *((_QWORD *)v3 + 470) )
    *(_QWORD *)(*(_QWORD *)this + 104LL) = Win32AllocPool(0x8000LL, 1650946631LL);
  v5 = *(Gre::Base **)(*(_QWORD *)this + 104LL);
  if ( v5 )
  {
    MakeITable(v5, *(struct RGBX **)(*(_QWORD *)this + 112LL), *(_DWORD *)(*(_QWORD *)this + 28LL));
    v2 = 1;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = XEPALOBJ::ulTime(this);
  }
  return v2;
}
