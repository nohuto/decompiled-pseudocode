/*
 * XREFs of ?AddRef@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x18000A6E0
 * Callers:
 *     ?AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x1800174F0 (-AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180017500 (-AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@CAppMemoryReport@System@Windows@@WBI@EAAKXZ @ 0x180017510 (-AddRef@CAppMemoryReport@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000A730 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

unsigned int __fastcall Windows::System::CAppMemoryReport::AddRef(
        Windows::System::CAppMemoryReport *this,
        volatile int *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v2 = *((_QWORD *)this + 5);
  while ( 1 )
  {
    if ( v2 < 0 )
      return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
    if ( (_DWORD)v2 == 0x7FFFFFFF )
      break;
    a2 = (volatile int *)(v2 + 1);
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v2 + 1, v2);
    if ( v3 == v2 )
      return (unsigned int)a2;
  }
  return 0x7FFFFFFF;
}
