/*
 * XREFs of ?GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x1801C87D4
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800B8BF8 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetModalityString(__int64 a1, __int64 a2, int a3)
{
  int v4; // r8d
  const wchar_t *v5; // rcx
  unsigned __int64 v6; // rax
  const void *v7; // rcx
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rcx
  const wchar_t *v13; // rdx

  if ( !a3 )
  {
    v13 = L"None";
    goto LABEL_16;
  }
  v4 = a3 - 1;
  if ( v4 )
  {
    v9 = v4 - 1;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( !v10 )
      {
        v5 = L"Keyboard";
        goto LABEL_4;
      }
      v11 = v10 - 12;
      if ( v11 )
      {
        v12 = a2;
        if ( v11 == 496 )
          v13 = L"Gaze";
        else
          v13 = L"Unknown";
        goto LABEL_17;
      }
      v13 = L"Pen";
    }
    else
    {
      v13 = L"Touch";
    }
LABEL_16:
    v12 = a2;
LABEL_17:
    std::wstring::wstring(v12, (__int64)v13);
    return a2;
  }
  v5 = L"Mouse";
LABEL_4:
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v6 = std::_WChar_traits<wchar_t>::length((__int64)v5);
  std::wstring::_Construct<1,unsigned short const *>((char **)a2, v7, v6);
  return a2;
}
