/*
 * XREFs of ?QueryInterface@?QIHotKeyClientOwner@Text@Internal@UI@Windows@@PenEventsDispatcherPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180199F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _QueryInterface__QIHotKeyClientOwner_Text_Internal_UI_Windows__PenEventsDispatcherPrincipal__UEAAJAEBU_GUID__PEAPEAX_Z(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rbx
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v7 = *a2 - *(_QWORD *)&GUID_0ba2f71b_20b8_5ab8_98b9_48331301ecdf.Data1;
  if ( *a2 == *(_QWORD *)&GUID_0ba2f71b_20b8_5ab8_98b9_48331301ecdf.Data1 )
    v7 = a2[1] - *(_QWORD *)GUID_0ba2f71b_20b8_5ab8_98b9_48331301ecdf.Data4;
  if ( !v7 )
  {
    v8 = a1 - 56;
    (**(void (__fastcall ***)(__int64))(a1 - 56 + 16))(a1 - 56 + 16);
    *a3 = a1 & -(__int64)(v8 != 0);
    return 0LL;
  }
  v9 = (void (__fastcall ***)(_QWORD))(a1 - 56);
  v10 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v10 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v10 )
  {
    v11 = *a2 - *(_QWORD *)&GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data1;
    if ( *a2 == *(_QWORD *)&GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data1 )
      v11 = a2[1] - *(_QWORD *)GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data4;
    if ( v11 )
      goto LABEL_16;
  }
  if ( !v9 )
  {
LABEL_16:
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  *a3 = (__int64)(v9 + 1);
  if ( v9 == (void (__fastcall ***)(_QWORD))-8LL )
    return (unsigned int)-2147467262;
  (**v9)(v9);
  return v3;
}
