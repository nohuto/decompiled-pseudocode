/*
 * XREFs of ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18004E904
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x180020190 (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     ?ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ @ 0x1800201B0 (-ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x18004EB44 (-ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18004EDD0 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopManager::SetupColorization(CDesktopManager *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // eax
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  int v7; // [rsp+38h] [rbp-51h] BYREF
  int v8; // [rsp+3Ch] [rbp-4Dh] BYREF
  unsigned int v9; // [rsp+40h] [rbp-49h] BYREF
  char v10; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v13; // [rsp+50h] [rbp-39h] BYREF
  char v14; // [rsp+54h] [rbp-35h] BYREF
  char v15; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v16[14]; // [rsp+60h] [rbp-29h] BYREF

  CGlassColorizationParameters::CGlassColorizationParameters((CGlassColorizationParameters *)&v9);
  if ( !CDesktopManager::CheckAnyPolicy(2u) )
  {
    v16[0] = L"ColorizationColor";
    v16[1] = &v9;
    v16[2] = L"ColorizationColorBalance";
    v16[3] = &v11;
    v16[4] = L"ColorizationAfterglow";
    v16[5] = &v10;
    v16[6] = L"ColorizationAfterglowBalance";
    v16[7] = &v12;
    v16[8] = L"ColorizationBlurBalance";
    v16[9] = &v13;
    v16[10] = L"EnableWindowColorization";
    v16[11] = &v14;
    v16[12] = L"ColorizationGlassAttribute";
    v16[13] = &v15;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 9)
                                                                  + 40LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           0LL,
           v16,
           7LL) >= 0 )
      goto LABEL_3;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9)
                                                          + 64LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
         4LL) )
  {
    v8 = 0;
    (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 9))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
      L"DefaultColorizationColorAlpha",
      &v8);
    v5 = 0;
    (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 9))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
      L"DefaultColorizationColorRed",
      &v5);
    v6 = 0;
    (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 9))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
      L"DefaultColorizationColorGreen",
      &v6);
    v7 = 0;
    (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 9))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
      L"DefaultColorizationColorBlue",
      &v7);
    CGlassColorizationParameters::ResetToDefaults((CGlassColorizationParameters *)&v9);
    v9 = v7 | ((v6 | ((v5 | 0xFFFFFF00) << 8)) << 8);
    v3 = 100 * v8 / 0xFFu;
    v2 = 100 - *((_DWORD *)this + 123);
  }
  else
  {
LABEL_3:
    v2 = v13;
    v3 = v11;
  }
  if ( v3 > 0x64 )
    v3 = 27;
  v4 = v12;
  v11 = v3;
  if ( v12 > 0x64 )
    v4 = 0;
  v12 = v4;
  if ( v2 > 0x64 )
    v2 = 73;
  v13 = v2;
  CDesktopManager::ApplyColorizationParameters(this, (struct CGlassColorizationParameters *)&v9);
}
