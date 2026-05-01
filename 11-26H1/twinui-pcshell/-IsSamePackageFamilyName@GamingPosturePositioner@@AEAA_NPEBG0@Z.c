/*
 * XREFs of ?IsSamePackageFamilyName@GamingPosturePositioner@@AEAA_NPEBG0@Z @ 0x1804FF044
 * Callers:
 *     ?IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804FEE84 (-IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall GamingPosturePositioner::IsSamePackageFamilyName(
        GamingPosturePositioner *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  wchar_t *v5; // rdi
  wchar_t *v6; // rax
  char v7; // bl
  __int64 v8; // rdi

  v5 = wcsstr(a2, L"!");
  v6 = wcsstr(a3, L"!");
  v7 = 0;
  if ( !v5 || !v6 )
    return 0;
  v8 = v5 - a2;
  if ( (unsigned int)(v6 - a3) == (_DWORD)v8 )
    return wcsncmp(a2, a3, (unsigned int)v8) == 0;
  return v7;
}
