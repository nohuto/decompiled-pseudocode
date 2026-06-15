/*
 * XREFs of ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180002654
 * Callers:
 *     ?TryGetAudioSessionPropertyStore@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180002600 (-TryGetAudioSessionPropertyStore@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAPEAUIProp.c)
 * Callees:
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x1800027F4 (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180002BD0 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ??$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUHKEY__@@@Z @ 0x1800032E8 (--$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall LoadPropertyStore(struct IAudioSessionInfo *a1, struct IPropertyStore **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HKEY v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  HKEY v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  int v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HKEY hKey; // [rsp+40h] [rbp+18h] BYREF
  HKEY v17; // [rsp+48h] [rbp+20h] BYREF

  hKey = 0LL;
  v4 = OpenStoreKey(a1, &hKey);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -2147024894 && v4 != -2147024891 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x416,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v4,
        v13);
    if ( hKey )
      RegCloseKey(hKey);
    return v5;
  }
  else
  {
    v6 = hKey;
    v17 = 0LL;
    v7 = OpenSessionKey(a1, hKey, &v17);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41A,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v7,
        v13);
      if ( v17 )
        RegCloseKey(v17);
      if ( v6 )
        RegCloseKey(v6);
      return v8;
    }
    else
    {
      v9 = v17;
      hKey = v17;
      *a2 = 0LL;
      v10 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionPropertyStore,IPropertyStore,HKEY__ * &>(a2, &hKey);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x400,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v10,
          v13);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41C,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v11,
          v14);
        if ( v9 )
          RegCloseKey(v9);
        if ( v6 )
          RegCloseKey(v6);
        return v11;
      }
      else
      {
        if ( v6 )
          RegCloseKey(v6);
        return 0LL;
      }
    }
  }
}
