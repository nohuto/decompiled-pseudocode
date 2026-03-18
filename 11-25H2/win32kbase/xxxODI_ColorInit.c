/*
 * XREFs of xxxODI_ColorInit @ 0x1400A8E40
 * Callers:
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 * Callees:
 *     ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1400A90CC (-CI_GetClrVal@@YAKPEAGK@Z.c)
 *     FastGetProfileStringFromIDW @ 0x1400A95E0 (FastGetProfileStringFromIDW.c)
 *     GetProcessLuid @ 0x1400AA270 (GetProcessLuid.c)
 *     xxxSetSysColors @ 0x1400AAAB0 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(PCUNICODE_STRING Source, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rbx
  unsigned int ClrVal; // eax
  unsigned __int64 v16; // [rsp+28h] [rbp-D8h]
  struct _LUID AuthenticationId; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v18[32]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v19[32]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v20[28]; // [rsp+150h] [rbp+50h] BYREF

  v3 = *(_QWORD *)(W32GetUserSessionState(Source, a2) + 19872);
  *(_OWORD *)(v3 + 4568) = *(_OWORD *)&gargbInitial;
  *(_OWORD *)(v3 + 4584) = xmmword_1402605C0;
  *(_OWORD *)(v3 + 4600) = xmmword_1402605D0;
  *(_OWORD *)(v3 + 4616) = xmmword_1402605E0;
  *(_OWORD *)(v3 + 4632) = xmmword_1402605F0;
  *(_OWORD *)(v3 + 4648) = xmmword_140260600;
  *(_OWORD *)(v3 + 4664) = xmmword_140260610;
  *(_QWORD *)(v3 + 4680) = 0xFF993300F2E4D7LL;
  *(_DWORD *)(v3 + 4688) = 15790320;
  v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872);
  v8 = 0;
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  *(_OWORD *)(v9 + 4444) = *(_OWORD *)(v5 + 4568);
  *(_OWORD *)(v9 + 4460) = *(_OWORD *)(v5 + 4584);
  *(_OWORD *)(v9 + 4476) = *(_OWORD *)(v5 + 4600);
  *(_OWORD *)(v9 + 4492) = *(_OWORD *)(v5 + 4616);
  *(_OWORD *)(v9 + 4508) = *(_OWORD *)(v5 + 4632);
  *(_OWORD *)(v9 + 4524) = *(_OWORD *)(v5 + 4648);
  *(_OWORD *)(v9 + 4540) = *(_OWORD *)(v5 + 4664);
  *(_QWORD *)(v9 + 4556) = *(_QWORD *)(v5 + 4680);
  *(_DWORD *)(v9 + 4564) = *(_DWORD *)(v5 + 4688);
  while ( v8 < 0x1F )
  {
    AuthenticationId = 0LL;
    v20[0] = 0;
    if ( v8 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (LODWORD(v16) = 25, FastGetProfileStringFromIDW(Source, v20, v16, 0), !v20[0]) )
    {
      LODWORD(v16) = 25;
      FastGetProfileStringFromIDW(Source, v20, v16, 0);
    }
    UserSessionState = W32GetUserSessionState(v11, v10);
    v13 = v8;
    ClrVal = CI_GetClrVal(v20, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4LL * v8 + 4568));
    v19[v8] = v8;
    ++v8;
    v18[v13] = ClrVal;
  }
  return xxxSetSysColors(v9, v8, (unsigned int)v19, (unsigned int)v18, 6);
}
