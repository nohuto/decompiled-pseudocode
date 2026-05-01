/*
 * XREFs of ?SetController@CSwitchItemElement@@UEAAXPEAUISwitchItemController@@@Z @ 0x1804AEC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSwitchItemElement::SetController(CSwitchItemElement *this, struct ISwitchItemController *a2)
{
  _QWORD *v3; // rsi
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)((char *)this + 376);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 47, (__int64)a2);
  v6 = 0LL;
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 49);
  v5 = **v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  v5(v4, &GUID_31dacf25_23c9_4be9_a81c_2ac933c44c63, &v6);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, *v3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
}
