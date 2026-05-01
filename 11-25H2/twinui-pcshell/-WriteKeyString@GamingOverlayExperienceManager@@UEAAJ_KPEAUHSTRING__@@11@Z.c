/*
 * XREFs of ?WriteKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@11@Z @ 0x180351A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z @ 0x1803518C0 (-WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WriteKeyString(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string)
{
  GamingOverlayExperienceManager *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int8 v12[8]; // [rsp+40h] [rbp-38h] BYREF
  UINT32 length; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  length = 0;
  *(_QWORD *)v12 = WindowsGetStringRawBuffer(string, &length);
  v9 = GamingOverlayExperienceManager::WriteKey(v8, a2, a3, a4, v12, 2 * length, 1u);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x948,
    (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
