/*
 * XREFs of ?HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1806588DC
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18009C11C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShellMRTHelper::Common::HasMsAppDataUriScheme(ShellMRTHelper::Common *this, HSTRING a2)
{
  const WCHAR *StringRawBuffer; // rax
  char v3; // bl
  UINT32 length; // [rsp+48h] [rbp+10h] BYREF

  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, &length);
  if ( length < 0xB )
    return 0;
  v3 = 1;
  if ( CompareStringOrdinal(StringRawBuffer, 11, L"ms-appdata:", 11, 1) != 2 )
    return 0;
  return v3;
}
