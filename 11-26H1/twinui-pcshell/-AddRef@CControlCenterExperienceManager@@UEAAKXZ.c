/*
 * XREFs of ?AddRef@CControlCenterExperienceManager@@UEAAKXZ @ 0x180072800
 * Callers:
 *     ?AddRef@CControlCenterExperienceManager@@W7EAAKXZ @ 0x18036B940 (-AddRef@CControlCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WBA@EAAKXZ @ 0x18036B950 (-AddRef@CControlCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WBI@EAAKXZ @ 0x18036B960 (-AddRef@CControlCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WCA@EAAKXZ @ 0x18036B970 (-AddRef@CControlCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WCI@EAAKXZ @ 0x18036B980 (-AddRef@CControlCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WDA@EAAKXZ @ 0x18036B990 (-AddRef@CControlCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WDI@EAAKXZ @ 0x18036B9A0 (-AddRef@CControlCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WEA@EAAKXZ @ 0x18036B9B0 (-AddRef@CControlCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WEI@EAAKXZ @ 0x18036B9C0 (-AddRef@CControlCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WFA@EAAKXZ @ 0x18036B9D0 (-AddRef@CControlCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::AddRef(CControlCenterExperienceManager *this, volatile int *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v2 = *((_QWORD *)this + 12);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      LODWORD(a2) = 0x7FFFFFFF;
      return (unsigned int)a2;
    }
    a2 = (volatile int *)(v2 + 1);
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 12, v2 + 1, v2);
    if ( v3 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
  return (unsigned int)a2;
}
