/*
 * XREFs of ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18068A244
 * Callers:
 *     ??$load_nothrow@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$nvp@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18068AF98 (--$load_nothrow@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@.c)
 *     ??$process@AEAU_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@input_archive@tson@@AEAAXAEAU_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x18068B098 (--$process@AEAU_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x180185108 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 *     wmemset @ 0x1801CC7A4 (wmemset.c)
 *     ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x180677A10 (--$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@-$basic_string@_WU-$char.c)
 */

char __fastcall tson::load_nothrow(tson::input_archive *this, __int64 a2)
{
  wchar_t *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  wchar_t *v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  wchar_t *v9; // rax
  wchar_t *v10; // rsi
  __int64 v11; // r10
  wchar_t *v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+41h] [rbp-17h]
  __int16 v17; // [rsp+45h] [rbp-13h]
  char v18; // [rsp+47h] [rbp-11h]

  v2 = (wchar_t *)a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  tson::input_archive::read_string_two_phase<tson::string_tag>(this, a2, (__int64)&v13);
  if ( v14 )
  {
    v7 = v14 - 1;
    v8 = *((_QWORD *)v2 + 2);
    if ( v14 - 1 > v8 )
    {
      if ( v7 - v8 > *((_QWORD *)v2 + 3) - v8 )
      {
        try
        {
          LOBYTE(v5) = 0;
          std::wstring::_Reallocate_grow_by<_lambda_a3050a43f3157934f354774ab3dd2e02_,unsigned __int64,wchar_t>(
            v2,
            v7 - v8,
            v5,
            v7 - v8);
        }
        catch ( ... )
        {
          LOBYTE(v6) = (_BYTE)this;
          if ( *((int *)this + 2) >= 0 )
            *((_DWORD *)this + 2) = -2147024882;
          return (char)v6;
        }
      }
      else
      {
        *((_QWORD *)v2 + 2) = v7;
        v10 = v2;
        if ( *((_QWORD *)v2 + 3) > 7uLL )
          v10 = *(wchar_t **)v2;
        wmemset(&v10[v8], 0, v7 - v8);
        v10[v11] = 0;
      }
    }
    else
    {
      v9 = v2;
      if ( *((_QWORD *)v2 + 3) > 7uLL )
        v9 = *(wchar_t **)v2;
      *((_QWORD *)v2 + 2) = v7;
      v9[v7] = 0;
    }
    if ( *((_QWORD *)v2 + 3) > 7uLL )
      v2 = *(wchar_t **)v2;
    v13 = v2;
    LOBYTE(v6) = tson::input_archive::read_string_two_phase<tson::string_tag>(this, v4, (__int64)&v13);
  }
  else
  {
    v6 = v2;
    if ( *((_QWORD *)v2 + 3) > 7uLL )
      v6 = *(wchar_t **)v2;
    *((_QWORD *)v2 + 2) = 0LL;
    *v6 = 0;
  }
  return (char)v6;
}
