/*
 * XREFs of ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180072EB8
 * Callers:
 *     ?GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z @ 0x180072D10 (-GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180072F3C (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x1800730BC (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcessHandle(CallerIdentity *this, _QWORD *a2, void **a3)
{
  int v4; // eax
  void **v5; // r8
  signed int PackageSidFromProcessToken; // ebx
  char *v7; // rcx
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  hObject = 0LL;
  v4 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(this, &hObject, a3);
  PackageSidFromProcessToken = v4;
  if ( v4 > 0 )
    PackageSidFromProcessToken = (unsigned __int16)v4 | 0x80070000;
  if ( PackageSidFromProcessToken >= 0 )
    PackageSidFromProcessToken = CallerIdentity::GetPackageSidFromProcessToken(hObject, a2, v5);
  v7 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return (unsigned int)PackageSidFromProcessToken;
}
