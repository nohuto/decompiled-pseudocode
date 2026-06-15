/*
 * XREFs of ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18003A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024E1C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 */

_BOOL8 __fastcall CProcess::UseOfResourceAllowed(CProcess *this, int a2, enum ResourceType a3)
{
  BOOL v3; // r9d
  DWORD pcbData[6]; // [rsp+40h] [rbp-18h] BYREF
  int pvData; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( g_PlaybackManager )
  {
    if ( a3 == ResourceTypeStatic )
    {
      if ( (unsigned int)(a2 - 1) > 1 && (unsigned int)(a2 - 10) > 1
        || !(unsigned int)CApplicationManager::GetSoundLevel(this, (__int64)this, 0LL, 0LL, 0LL) )
      {
        return 0;
      }
      return *((_DWORD *)this + 105)
          || *((_DWORD *)this + 117)
          || *((_DWORD *)this + 118)
          || (pvData = 0,
              pcbData[0] = 4,
              !RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                 L"AllowClassicOffload",
                 0x18u,
                 0LL,
                 &pvData,
                 pcbData))
          && pvData;
    }
    if ( a3 == ResourceTypeTheme )
      v3 = CApplicationManager::GetSoundLevel(this, (__int64)this, 0LL, 0LL, 0LL) != 0;
    if ( v3 && a3 == ResourceTypeStatic )
      return *((_DWORD *)this + 105)
          || *((_DWORD *)this + 117)
          || *((_DWORD *)this + 118)
          || (pvData = 0,
              pcbData[0] = 4,
              !RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                 L"AllowClassicOffload",
                 0x18u,
                 0LL,
                 &pvData,
                 pcbData))
          && pvData;
  }
  return v3;
}
