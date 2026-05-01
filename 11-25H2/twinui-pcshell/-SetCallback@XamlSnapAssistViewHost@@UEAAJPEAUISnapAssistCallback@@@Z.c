/*
 * XREFs of ?SetCallback@XamlSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x180682C10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlSnapAssistViewHost::SetCallback(XamlSnapAssistViewHost *this, struct ISnapAssistCallback *a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ISnapAssistCallback **)this + 33) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ISnapAssistCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  }
  return 0LL;
}
