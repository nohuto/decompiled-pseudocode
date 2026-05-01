/*
 * XREFs of ?AddRef@PriorityBoostHelper@@UEAAKXZ @ 0x1801E2120
 * Callers:
 *     ?AddRef@PriorityBoostHelper@@W7EAAKXZ @ 0x18039F1B0 (-AddRef@PriorityBoostHelper@@W7EAAKXZ.c)
 *     ?AddRef@PriorityBoostHelper@@WBA@EAAKXZ @ 0x18039F1C0 (-AddRef@PriorityBoostHelper@@WBA@EAAKXZ.c)
 *     ?AddRef@PriorityBoostHelper@@WBI@EAAKXZ @ 0x18039F1D0 (-AddRef@PriorityBoostHelper@@WBI@EAAKXZ.c)
 *     ?AddRef@PriorityBoostHelper@@WCA@EAAKXZ @ 0x18039F1E0 (-AddRef@PriorityBoostHelper@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::AddRef(PriorityBoostHelper *this, volatile int *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v2 = *((_QWORD *)this + 6);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      LODWORD(a2) = 0x7FFFFFFF;
      return (unsigned int)a2;
    }
    a2 = (volatile int *)(v2 + 1);
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v2 + 1, v2);
    if ( v3 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
  return (unsigned int)a2;
}
