/*
 * XREFs of ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1401575EC
 * Callers:
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1401573FC (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1401575D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x140157684 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 */

__int64 __fastcall XEPALOBJ::bGenColorXlate555(XEPALOBJ *this)
{
  unsigned int v2; // ebx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int8 *v6; // rcx

  v2 = 0;
  v3 = Gre::Base::Globals(this);
  v5 = *(_QWORD *)(*(_QWORD *)this + 104LL);
  if ( !v5 || v5 == *((_QWORD *)v3 + 483) )
    *(_QWORD *)(*(_QWORD *)this + 104LL) = Win32AllocPool(0x8000LL, 1650946631LL, v4);
  v6 = *(unsigned __int8 **)(*(_QWORD *)this + 104LL);
  if ( v6 )
  {
    MakeITable(v6, *(struct RGBX **)(*(_QWORD *)this + 112LL), *(_DWORD *)(*(_QWORD *)this + 28LL));
    v2 = 1;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = XEPALOBJ::ulTime(this);
  }
  return v2;
}
