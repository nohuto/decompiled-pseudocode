/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002CCD0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18003D8C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_18003D8C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18003D8D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_18003D8D0.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v2 = *(_QWORD *)(a1 + 32);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      LODWORD(a2) = 0x7FFFFFFF;
      return (unsigned int)a2;
    }
    a2 = (volatile int *)(v2 + 1);
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v2 + 1, v2);
    if ( v3 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
  return (unsigned int)a2;
}
