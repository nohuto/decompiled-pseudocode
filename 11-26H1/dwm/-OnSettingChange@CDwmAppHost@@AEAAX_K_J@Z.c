/*
 * XREFs of ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140003B70
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140003804 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     wcscmp_0 @ 0x14000F804 (wcscmp_0.c)
 */

void __fastcall CDwmAppHost::OnSettingChange(CDwmAppHost *this, __int64 a2, const wchar_t *a3)
{
  unsigned int v3; // edx

  if ( a2 )
  {
    switch ( a2 )
    {
      case 6LL:
      case 42LL:
        this = (CDwmAppHost *)(unsigned int)-(a3 != 0LL);
        v3 = a3 != 0LL ? 3 : 0;
        if ( a3 )
          goto LABEL_6;
        break;
      case 47LL:
        if ( a3 && !(unsigned int)_o__wcsicmp(a3, L"devices") )
        {
          v3 = 3;
          goto LABEL_6;
        }
        break;
      case 67LL:
        v3 = 2048;
        goto LABEL_6;
      case 8217LL:
        v3 = 256;
        goto LABEL_6;
    }
  }
  else if ( a3 && !wcscmp_0(a3, L"ImmersiveColorSet") )
  {
    v3 = 16;
LABEL_6:
    CDwmAppHost::LpcNotifySettingsChange(this, v3);
  }
}
