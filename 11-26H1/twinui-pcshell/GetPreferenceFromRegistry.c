/*
 * XREFs of GetPreferenceFromRegistry @ 0x180480AE0
 * Callers:
 *     ?IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1802271C8 (-IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1802C1678 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 */

__int64 __fastcall GetPreferenceFromRegistry(HKEY a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int BOOLWithREGSAM; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  BOOLWithREGSAM = SHRegGetBOOLWithREGSAM(a1, L"Software\\Microsoft\\Input", L"IsInputAppPreloadEnabled", a4, &v7);
  if ( (int)wil::details::in1diag3::Log_IfFailedWithExpected(
              retaddr,
              (void *)0x64,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
              (const char *)BOOLWithREGSAM,
              1u,
              0x80070002) < 0 )
    return 0LL;
  else
    return (unsigned int)(v7 != 0) + 1;
}
