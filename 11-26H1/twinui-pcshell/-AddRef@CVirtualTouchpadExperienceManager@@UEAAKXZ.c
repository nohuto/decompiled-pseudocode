/*
 * XREFs of ?AddRef@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x1801D98E0
 * Callers:
 *     ?AddRef@CVirtualTouchpadExperienceManager@@W7EAAKXZ @ 0x180396340 (-AddRef@CVirtualTouchpadExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x180396350 (-AddRef@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ @ 0x180396360 (-AddRef@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ @ 0x180396370 (-AddRef@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::AddRef(CVirtualTouchpadExperienceManager *this, volatile int *a2)
{
  signed __int64 v2; // rax
  signed __int64 v4; // rtt

  v2 = *((_QWORD *)this + 6);
  while ( 1 )
  {
    if ( v2 < 0 )
    {
      LODWORD(a2) = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
      return (unsigned int)a2;
    }
    if ( (_DWORD)v2 == 0x7FFFFFFF )
      break;
    a2 = (volatile int *)(v2 + 1);
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v2 + 1, v2);
    if ( v4 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = 0x7FFFFFFF;
  return (unsigned int)a2;
}
