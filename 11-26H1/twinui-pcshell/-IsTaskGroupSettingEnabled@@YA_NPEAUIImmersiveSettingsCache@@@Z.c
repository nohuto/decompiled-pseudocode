/*
 * XREFs of ?IsTaskGroupSettingEnabled@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x1802AB2C8
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18009A890 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A71A0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall IsTaskGroupSettingEnabled(struct IImmersiveSettingsCache *a1)
{
  __int64 v1; // rax
  char v2; // bl
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvParam; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 1;
  v8 = 1;
  v3 = (*(__int64 (__fastcall **)(struct IImmersiveSettingsCache *, __int64, int *))(v1 + 32))(a1, 10LL, &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x63,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v3,
      v5);
  pvParam = 0;
  SystemParametersInfoW(0x82u, 0, &pvParam, 0);
  if ( !pvParam || !v8 )
    return 0;
  return v2;
}
