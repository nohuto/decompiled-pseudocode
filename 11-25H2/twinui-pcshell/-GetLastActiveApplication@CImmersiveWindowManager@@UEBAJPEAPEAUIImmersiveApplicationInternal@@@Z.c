/*
 * XREFs of ?GetLastActiveApplication@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180233750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::GetLastActiveApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  __int64 result; // rax
  struct IImmersiveApplicationInternal *v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  result = 2147647531LL;
  v5 = 0LL;
  if ( *((_BYTE *)this + 89) )
  {
    if ( *((_QWORD *)this + 8) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
      result = (****((__int64 (__fastcall *****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))this + 7))(
                 **((_QWORD **)this + 7),
                 &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                 &v5);
      *a2 = v5;
    }
  }
  return result;
}
