/*
 * XREFs of ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D5408
 * Callers:
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D5578 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetContentSize@GridRow@@QEBA?AUCSize@Geometry@@XZ @ 0x1804D5130 (-GetContentSize@GridRow@@QEBA-AUCSize@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GridRow::LayoutRow(GridRow *this, const struct Geometry::CRect *a2)
{
  _DWORD *ContentSize; // rax
  int v5; // edi
  int v6; // r9d
  int v7; // r8d
  int v8; // r15d
  int IsThreadRTL; // r13d
  _QWORD *v10; // rsi
  _QWORD *v11; // r12
  unsigned int v12; // r15d
  void (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rbx
  int v15; // eax
  int v16; // edx
  __int64 v17[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF

  ContentSize = GridRow::GetContentSize((__int64)this, v17);
  v5 = *((_DWORD *)a2 + 1);
  v6 = *(_DWORD *)a2;
  DWORD1(v18) = v5;
  v7 = v6 + *ContentSize;
  HIDWORD(v18) = v5 + ContentSize[1];
  v8 = HIDWORD(v18);
  LODWORD(ContentSize) = (*((_DWORD *)a2 + 2) - v7) / 2;
  LODWORD(v18) = (_DWORD)ContentSize + v6;
  DWORD2(v18) = (_DWORD)ContentSize + v7;
  *((_DWORD *)this + 2) = (_DWORD)ContentSize + v6;
  *((_DWORD *)this + 3) = v5;
  *((_DWORD *)this + 4) = (_DWORD)ContentSize + v7;
  *((_DWORD *)this + 5) = v8;
  IsThreadRTL = Mirror_IsThreadRTL();
  v10 = (_QWORD *)*((_QWORD *)this + 3);
  v11 = &v10[*((_QWORD *)this + 4)];
  if ( v10 != v11 )
  {
    v12 = v8 - v5;
    do
    {
      v17[0] = 0LL;
      v13 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10;
      v14 = **(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
      v14(v13, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, v17);
      v19 = v18;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 72LL))(*v10, v12);
      DWORD2(v19) = v15 + v19;
      LODWORD(v18) = v15 + v19 + *(_DWORD *)this;
      if ( IsThreadRTL )
      {
        v16 = *((_DWORD *)this + 2) + *((_DWORD *)this + 4) - (v15 + v19);
        DWORD2(v19) = *((_DWORD *)this + 2) + *((_DWORD *)this + 4) - v19;
        LODWORD(v19) = v16;
      }
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17[0] + 104LL))(v17[0], &v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
      ++v10;
    }
    while ( v10 != v11 );
  }
}
