/*
 * XREFs of xxxODI_ColorInit @ 0x1400E0F30
 * Callers:
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 * Callees:
 *     FastGetProfileStringFromIDW @ 0x1400E1630 (FastGetProfileStringFromIDW.c)
 *     GetProcessLuid @ 0x1400E2240 (GetProcessLuid.c)
 *     ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1400E2370 (-CI_GetClrVal@@YAKPEAGK@Z.c)
 *     xxxSetSysColors @ 0x1401B7328 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(PCUNICODE_STRING Source, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rbx
  __int64 UserSessionState; // rax
  unsigned int ClrVal; // eax
  unsigned __int64 v20; // [rsp+28h] [rbp-D8h]
  struct _LUID AuthenticationId; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v22[32]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v23[32]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v24[28]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)Source, a2, a3) + 19904);
  *(_OWORD *)(v4 + 4568) = *(_OWORD *)&gargbInitial;
  *(_OWORD *)(v4 + 4584) = xmmword_140268C60;
  *(_OWORD *)(v4 + 4600) = xmmword_140268C70;
  *(_OWORD *)(v4 + 4616) = xmmword_140268C80;
  *(_OWORD *)(v4 + 4632) = xmmword_140268C90;
  *(_OWORD *)(v4 + 4648) = xmmword_140268CA0;
  *(_OWORD *)(v4 + 4664) = xmmword_140268CB0;
  *(_QWORD *)(v4 + 4680) = 0xFF993300F2E4D7LL;
  *(_DWORD *)(v4 + 4688) = 15790320;
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19904);
  v11 = 0;
  v12 = *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 19904);
  *(_OWORD *)(v12 + 4444) = *(_OWORD *)(v7 + 4568);
  *(_OWORD *)(v12 + 4460) = *(_OWORD *)(v7 + 4584);
  *(_OWORD *)(v12 + 4476) = *(_OWORD *)(v7 + 4600);
  *(_OWORD *)(v12 + 4492) = *(_OWORD *)(v7 + 4616);
  *(_OWORD *)(v12 + 4508) = *(_OWORD *)(v7 + 4632);
  *(_OWORD *)(v12 + 4524) = *(_OWORD *)(v7 + 4648);
  *(_OWORD *)(v12 + 4540) = *(_OWORD *)(v7 + 4664);
  *(_QWORD *)(v12 + 4556) = *(_QWORD *)(v7 + 4680);
  *(_DWORD *)(v12 + 4564) = *(_DWORD *)(v7 + 4688);
  while ( v11 < 0x1F )
  {
    AuthenticationId = 0LL;
    v24[0] = 0;
    if ( v11 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (LODWORD(v20) = 25, FastGetProfileStringFromIDW(Source, v24, v20, 0), !v24[0]) )
    {
      LODWORD(v20) = 25;
      FastGetProfileStringFromIDW(Source, v24, v20, 0);
    }
    v16 = v11;
    UserSessionState = W32GetUserSessionState(v14, v13, v15);
    ClrVal = CI_GetClrVal(v24, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4LL * v11 + 4568));
    v23[v11] = v11;
    ++v11;
    v22[v16] = ClrVal;
  }
  return xxxSetSysColors(v12, v11, (unsigned int)v23, (unsigned int)v22, 6);
}
