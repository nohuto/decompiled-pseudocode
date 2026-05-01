/*
 * XREFs of ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800B6920
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleForegroundChanged@PEBGAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800B69EC (--$HandleForegroundChanged@PEBGAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboard.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x1800B6D78 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x1800B7CBC (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleForegroundChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        CallerIdentity *a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 v5; // r8
  char *v6; // rdi
  void *v7; // r9
  unsigned __int64 v8; // rdx
  char *v9; // rsi
  __int64 v10; // rbx
  void *Src; // [rsp+40h] [rbp+8h] BYREF
  char *v13; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  TouchKeyboardExperienceManager::GetAppIdFromWindow((HWND)&Src, a2);
  v6 = (char *)this + 648;
  v7 = Src;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)Src + v8) );
  if ( v8 > *((_QWORD *)v6 + 3) )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(v6, v8, v5, Src);
  }
  else
  {
    v9 = v6;
    if ( *((_QWORD *)v6 + 3) > 7uLL )
      v9 = *(char **)v6;
    *((_QWORD *)v6 + 2) = v8;
    v10 = 2 * v8;
    memmove_0(v9, v7, 2 * v8);
    *(_WORD *)&v9[v10] = 0;
  }
  if ( *((_QWORD *)v6 + 3) > 7uLL )
    v6 = *(char **)v6;
  v13 = v6;
  TouchKeyboardExperienceTelemetryLogger::HandleForegroundChanged<unsigned short const *,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v13,
    a3);
  if ( Src )
    CoTaskMemFree(Src);
  return 0LL;
}
