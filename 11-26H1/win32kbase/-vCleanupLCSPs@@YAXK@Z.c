/*
 * XREFs of ?vCleanupLCSPs@@YAXK@Z @ 0x1401FA98C
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     ?bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401F260C (-bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vCleanupLCSPs(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax
  unsigned int v4; // ecx
  __int64 v5; // rsi
  unsigned int v6; // edi
  struct HOBJ__ *v7; // [rsp+38h] [rbp+10h] BYREF
  struct OBJECT *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( HmgIsProcessCleanupRequiredByW32Pid(a1) )
  {
    v7 = 0LL;
    SessionState = W32GetSessionState(v2);
    v4 = 0;
    v5 = *(_QWORD *)(SessionState + 88);
    while ( 1 )
    {
      v6 = HmgNextOwned(v4, a1, &v7, &v8);
      if ( !v6 )
        break;
      if ( (BYTE2(v7) & 0x1F) == 9 )
        bDeleteColorSpace(v5, (__int64)v7, 0);
      v4 = v6;
    }
  }
}
