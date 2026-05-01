/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___ @ 0x180024574
 * Callers:
 *     ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002EDA0 (-SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCa.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000222C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800022B8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v7; // rax
  __int64 v8; // r8
  char *v9; // rbx
  _QWORD *v10; // rcx

  v7 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
    *((_QWORD *)v7 + 1) = *(_QWORD *)a4;
    v10 = (_QWORD *)(a4 + 8);
    *((_QWORD *)v7 + 2) = 0LL;
    if ( v7 + 16 != (char *)(a4 + 8) )
    {
      *((_QWORD *)v7 + 2) = *v10;
      *v10 = 0LL;
    }
    *((_DWORD *)v7 + 6) = *(_DWORD *)(a4 + 16);
    *(_QWORD *)v7 = &off_180049BE8;
    *((_DWORD *)v7 + 8) = 0;
    `eh vector constructor iterator'(v7 + 40, 8LL, 1LL, (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
    *((_DWORD *)v9 + 8) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  return Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
           a1,
           a2,
           v8,
           v9);
}
