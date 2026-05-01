/*
 * XREFs of ?IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ @ 0x1800C3280
 * Callers:
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800C31B0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

bool __fastcall ExperienceManagerUtils::IsPreReleaseExperience(
        ExperienceManagerUtils *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v4; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = dword_1808DDD30;
  if ( !dword_1808DDD30 )
  {
    v6 = 0;
    SHRegGetBOOLWithREGSAM(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
      L"PrereleaseExperience",
      a4,
      &v6);
    v4 = 2 - (v6 != 0);
    dword_1808DDD30 = v4;
  }
  return v4 == 1;
}
