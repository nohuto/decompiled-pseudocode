/*
 * XREFs of ?evaluate@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180693C38
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXXZ @ 0x180693B60 (-evaluate@-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Inte.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest::evaluate(
        winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  char v5; // r10
  int v6; // eax
  const char *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  char v10; // r10
  int v11; // r8d
  __int64 v12; // r9
  char v13; // r10
  __int64 v14; // r9
  char v15; // r10
  __int64 v16; // r9
  char v17; // r10
  __int64 v18; // rax

  if ( !*((_QWORD *)this + 4) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::group_id_property_not_set", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) == v5 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 1;
      *(_QWORD *)(v4 + 160) = v2;
    }
    return;
  }
  v6 = *((_DWORD *)this + 12);
  if ( !v6 )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::operation_property_not_set", a2);
    v9 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v9 + 152) != v10 )
      return;
    *(_WORD *)(v9 + 154) = 2;
LABEL_7:
    *(_BYTE *)(v9 + 152) = 3;
    goto LABEL_8;
  }
  v11 = *((_DWORD *)this + 13);
  if ( !v11 )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::final_pin_state_property_not_set", a2);
    v9 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v9 + 152) != v13 )
      return;
    *(_BYTE *)(v9 + 152) = 3;
    *(_WORD *)(v9 + 154) = 3;
LABEL_8:
    *(_QWORD *)(v9 + 160) = v7;
    return;
  }
  if ( v6 == 1 )
  {
    if ( v11 == 2 )
    {
      v7 = tip2::details::reason_string(
             (tip2::details *)"reason::pin_operation_final_state_not_correct",
             (const char *)1);
      v9 = *(_QWORD *)(v14 + 8);
      if ( *(_BYTE *)(v9 + 152) != v15 )
        return;
      *(_WORD *)(v9 + 154) = 4;
      goto LABEL_7;
    }
  }
  else if ( v6 == 2 && v11 == 1 )
  {
    v7 = tip2::details::reason_string(
           (tip2::details *)"reason::unpin_operation_final_state_not_correct",
           (const char *)1);
    v9 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v9 + 152) != v17 )
      return;
    *(_WORD *)(v9 + 154) = 5;
    goto LABEL_7;
  }
  v18 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v18 + 56) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v18 + 152) )
      return;
    *(_BYTE *)(v18 + 152) = 1;
    *(_WORD *)(v18 + 154) = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v18 + 152) )
      return;
    *(_BYTE *)(v18 + 152) = 3;
    *(_WORD *)(v18 + 154) = 16385;
  }
  *(_QWORD *)(v18 + 160) = 0LL;
}
