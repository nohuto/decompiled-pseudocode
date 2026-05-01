/*
 * XREFs of ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x1801A4A1C
 * Callers:
 *     ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800B875C (-UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z @ 0x1801A48CC (-UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

DWORD __fastcall TouchKeyboardExperienceManager::GetBorderColor(
        TouchKeyboardExperienceManager *this,
        const struct KBViewInfo *a2)
{
  DWORD result; // eax
  unsigned int v4; // r9d
  __int64 v5; // rdx
  char *v6; // rcx
  __int128 pvParam; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF

  result = -2;
  if ( *((_DWORD *)a2 + 40) == 1 )
  {
    pvParam = 0LL;
    LODWORD(pvParam) = 16;
    if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) && (BYTE4(pvParam) & 1) != 0 )
    {
      return GetSysColor(8);
    }
    else
    {
      v8 = 1;
      SHRegGetBOOLWithREGSAM(
        HKEY_CURRENT_USER,
        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
        L"AppsUseLightTheme",
        v4,
        &v8);
      if ( *((_BYTE *)this + (-(__int64)(v8 != 0) & 0x210) + 1548)
        && (v6 = (char *)this + (-(__int64)(v8 != 0) & 0x210) + 1056, *((_QWORD *)v6 + 2)) )
      {
        LOBYTE(v5) = -(v8 != 0);
        return GetColorFromColorString(v6, v5);
      }
      else
      {
        return -1;
      }
    }
  }
  return result;
}
