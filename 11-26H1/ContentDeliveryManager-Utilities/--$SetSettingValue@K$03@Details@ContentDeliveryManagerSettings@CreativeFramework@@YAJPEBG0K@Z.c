/*
 * XREFs of ??$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x180027420
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180037D40 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18004E6D4 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003A5C0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
        const WCHAR *a1,
        LPCWSTR lpValueName,
        int a3)
{
  const wchar_t *v3; // rbx
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v3 = lpValueName;
  v5 = RegSetKeyValueW(HKEY_CURRENT_USER, a1, lpValueName, 4u, &v8, 4u);
  if ( !v5 )
    return 0LL;
  if ( !v3 )
    v3 = &Src;
  return wil::details::in1diag3::Return_Win32Msg(
           retaddr,
           (void *)0x64,
           (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
           (const char *)v5,
           (unsigned int)"RegKey: %ws %ws",
           (const char *)a1,
           v3);
}
