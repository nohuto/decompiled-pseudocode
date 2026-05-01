/*
 * XREFs of ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x1806A0000
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x18069DFB0 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18018D57C (-ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180503A30 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_CommitLayoutItems(CAppLayout *this)
{
  unsigned __int64 v1; // r14
  int v2; // ebx
  unsigned __int64 i; // rdi
  __int64 v5; // rax
  __int64 v7[2]; // [rsp+20h] [rbp-60h] BYREF
  struct tagRECT v8; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v9; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v10; // [rsp+50h] [rbp-30h] BYREF
  __int128 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  v1 = *((_QWORD *)this + 14);
  v2 = 0;
  for ( i = 0LL; i < v1; ++i )
  {
    if ( v2 < 0 )
      break;
    v5 = *((_QWORD *)this + 13);
    v7[0] = 0LL;
    v2 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 8 * i),
           v7);
    if ( v2 >= 0
      && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7[0] + 24LL))(v7[0]) == 1
       || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7[0] + 24LL))(v7[0]) == 4) )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v7[0] + 56LL))(v7[0], 0LL, &v9);
      v8 = v9;
      (*(void (__fastcall **)(__int64, __int64, struct tagRECT *))(*(_QWORD *)v7[0] + 104LL))(v7[0], 1LL, &v8);
      v12 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v2 = ImmersiveApplicationLayout::ComputeAppViewData(
             (CAppLayout *)((char *)this + 64),
             (const struct LAYOUT_ENVIRONMENT_DETAILS *)&v8,
             &v8,
             &v10);
      if ( v2 >= 0 )
        (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v7[0] + 120LL))(v7[0], &v10);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
  }
  return (unsigned int)v2;
}
