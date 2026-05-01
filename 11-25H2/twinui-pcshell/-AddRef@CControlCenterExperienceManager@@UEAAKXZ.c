/*
 * XREFs of ?AddRef@CControlCenterExperienceManager@@UEAAKXZ @ 0x1801B1360
 * Callers:
 *     ?AddRef@CControlCenterExperienceManager@@W7EAAKXZ @ 0x180364730 (-AddRef@CControlCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WBA@EAAKXZ @ 0x180364740 (-AddRef@CControlCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WBI@EAAKXZ @ 0x180364750 (-AddRef@CControlCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WCA@EAAKXZ @ 0x180364760 (-AddRef@CControlCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WCI@EAAKXZ @ 0x180364770 (-AddRef@CControlCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WDA@EAAKXZ @ 0x180364780 (-AddRef@CControlCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WDI@EAAKXZ @ 0x180364790 (-AddRef@CControlCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WEA@EAAKXZ @ 0x1803647A0 (-AddRef@CControlCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WEI@EAAKXZ @ 0x1803647B0 (-AddRef@CControlCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WFA@EAAKXZ @ 0x1803647C0 (-AddRef@CControlCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::AddRef(CControlCenterExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 12);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 12, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
