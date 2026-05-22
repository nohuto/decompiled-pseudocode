/*
 * XREFs of ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180013C00
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801A33B0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180013EA0 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 *     ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x180013FB0 (-CreateTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AE.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall DWMInputRouter::GetInitialTargetFromHitTestResult(
        int a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        void (__fastcall ***a5)(_QWORD, GUID *, __int64 *))
{
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v10; // rcx
  _QWORD *i; // rbx
  _QWORD *v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 *v20; // rdi
  int (__fastcall *v21)(_QWORD, GUID *, _QWORD); // rbx
  void (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v23)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v24)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-20h] BYREF
  __int128 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h]

  v25 = 0LL;
  v9 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    v21 = (int (__fastcall *)(_QWORD, GUID *, _QWORD))**v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
    if ( v21(v9, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &a5) < 0 )
    {
      v24 = **v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      v24(v9, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v25);
    }
    else
    {
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *), void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*a5)[3])(
        a5,
        &v26);
      v22 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
      if ( v26 )
      {
        v23 = **v26;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        v23(v22, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v25);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  }
  DWMInputRouter::GetTargetListFromHitTestResult(a1, (unsigned int)&v27, a3, a4, (__int64)&v25);
  v12 = (_QWORD *)*((_QWORD *)&v27 + 1);
  for ( i = (_QWORD *)v27; ; ++i )
  {
    if ( i == v12 )
    {
      DWMInputRouter::CreateTargetFromHitTestResult(v10, a2, a4);
      v13 = (__int64 *)v27;
      if ( (_QWORD)v27 )
      {
        v14 = (__int64 *)*((_QWORD *)&v27 + 1);
        if ( (_QWORD)v27 != *((_QWORD *)&v27 + 1) )
        {
          do
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13++);
          while ( v13 != v14 );
          v13 = (__int64 *)v27;
        }
        std::_Deallocate<16>(v13, (v28 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL);
        v27 = 0LL;
        v28 = 0LL;
      }
      goto LABEL_7;
    }
    a5 = 0LL;
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*i)(
           *i,
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           (__int64 *)&a5) >= 0 )
    {
      if ( ((unsigned __int8 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*a5)[5])(
             a5,
             *(_QWORD *)(a4 + 8)) )
      {
        break;
      }
    }
    v10 = (__int64)a5;
    if ( a5 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v17 = *i;
  *a2 = *i;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = (__int64)a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = (__int64 *)v27;
  if ( (_QWORD)v27 )
  {
    v20 = (__int64 *)*((_QWORD *)&v27 + 1);
    if ( (_QWORD)v27 != *((_QWORD *)&v27 + 1) )
    {
      do
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19++);
      while ( v19 != v20 );
      v19 = (__int64 *)v27;
    }
    std::_Deallocate<16>(v19, (v28 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL);
    v27 = 0LL;
    v28 = 0LL;
  }
LABEL_7:
  v15 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return a2;
}
