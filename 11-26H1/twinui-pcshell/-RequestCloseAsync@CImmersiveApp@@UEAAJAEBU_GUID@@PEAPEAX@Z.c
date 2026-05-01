/*
 * XREFs of ?RequestCloseAsync@CImmersiveApp@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802FF510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::RequestCloseAsync(CImmersiveApp *this, const struct _GUID *a2, void **a3)
{
  int v6; // ebx
  __int64 (__fastcall ***v8)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v8 = 0LL;
  if ( *((_QWORD *)this + 46) )
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **)))(***((_QWORD ***)this + 45) + 88LL))(
           **((_QWORD **)this + 45),
           &v8);
  else
    v6 = -2147023728;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
    v6 = (**v8)(v8, a2, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v6;
}
