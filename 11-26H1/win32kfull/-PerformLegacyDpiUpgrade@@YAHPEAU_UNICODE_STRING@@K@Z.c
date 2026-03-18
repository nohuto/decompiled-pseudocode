/*
 * XREFs of ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x140238FC4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1402A2438 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PerformLegacyDpiUpgrade(struct _UNICODE_STRING *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-10h] BYREF

  v2 = 0;
  v16 = 0;
  v15 = 0;
  v17 = 0LL;
  v18 = 0;
  FastGetProfileDword(a1, 4LL, L"Win8DpiScaling", 0xFFFFLL, (char *)&v17 + 4);
  FastGetProfileDword(a1, 4LL, L"DpiScalingVer", 0LL, &v15);
  LODWORD(v17) = v15;
  if ( v15 == 4096 )
  {
    if ( HIDWORD(v17) )
    {
      UserSessionState = W32GetUserSessionState(v6, v5);
      *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 2236LL) |= 0x20u;
    }
    else
    {
      v7 = W32GetUserSessionState(v6, v5);
      *(_DWORD *)(*(_QWORD *)(v7 + 19904) + 2236LL) &= ~0x20u;
    }
    return 0LL;
  }
  FastGetProfileIntW(a1, 4LL, L"DesktopDPIOverride", 0xFFFFLL, &v18, 0);
  v10 = v18;
  v11 = (unsigned int)v17;
  if ( a2 || (_DWORD)v17 || v18 != 0xFFFF )
  {
    v12 = HIDWORD(v17);
    if ( HIDWORD(v17) == 0xFFFF )
    {
      LODWORD(v17) = 2048;
      v12 = PerformWin8DpiUpgrade(a1, a2);
      v10 = v18;
      v11 = (unsigned int)v17;
    }
    goto LABEL_13;
  }
  v12 = HIDWORD(v17);
  if ( HIDWORD(v17) != 0xFFFF )
  {
LABEL_13:
    if ( v12 )
      v12 = a2;
    HIDWORD(v17) = v12;
    if ( (int)v11 < 4096 )
    {
      if ( (_DWORD)v10 == 0xFFFF )
        LODWORD(v10) = 0;
      v18 = v10;
      DrvDxgkUpgradeLegacyDpiSettings(&v17, &v16);
      v12 = HIDWORD(v17);
    }
    goto LABEL_19;
  }
  v12 = PerformWin8DpiUpgrade(a1, 0);
  HIDWORD(v17) = v12;
LABEL_19:
  if ( v12 )
  {
    v13 = W32GetUserSessionState(v10, v11);
    *(_DWORD *)(*(_QWORD *)(v13 + 19904) + 2236LL) |= 0x20u;
  }
  else
  {
    v14 = W32GetUserSessionState(v10, v11);
    *(_DWORD *)(*(_QWORD *)(v14 + 19904) + 2236LL) &= ~0x20u;
  }
  v15 = 4096;
  FastWriteProfileValue(a1, 4LL, L"DpiScalingVer", 4LL, &v15, 4);
  if ( HIDWORD(v17) || v16 )
    return 1;
  return v2;
}
