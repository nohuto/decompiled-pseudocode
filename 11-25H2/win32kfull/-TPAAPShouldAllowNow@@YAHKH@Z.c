/*
 * XREFs of ?TPAAPShouldAllowNow@@YAHKH@Z @ 0x140226118
 * Callers:
 *     EditionLegacyTouchPadMouseAllowTap @ 0x140226100 (EditionLegacyTouchPadMouseAllowTap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall TPAAPShouldAllowNow()
{
  unsigned int v0; // ebx
  int v1; // edi
  __int64 v2; // rsi
  signed __int64 v3; // r14
  LARGE_INTEGER v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 UserSessionState; // rax
  unsigned int v11; // r9d
  signed __int64 v12; // rax
  LONGLONG v13; // rax
  union _LARGE_INTEGER v14; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v17[4]; // [rsp+48h] [rbp-29h]
  __int64 v18; // [rsp+58h] [rbp-19h]
  int v19; // [rsp+60h] [rbp-11h]
  int v20; // [rsp+64h] [rbp-Dh]
  int v21; // [rsp+68h] [rbp-9h]
  __int64 v22; // [rsp+6Ch] [rbp-5h]
  int v23; // [rsp+74h] [rbp+3h]
  int v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+7Ch] [rbp+Bh]
  __int64 v26; // [rsp+80h] [rbp+Fh]
  int v27; // [rsp+88h] [rbp+17h]
  int v28; // [rsp+8Ch] [rbp+1Bh]
  int v29; // [rsp+90h] [rbp+1Fh]
  int v30; // [rsp+94h] [rbp+23h]
  int v31; // [rsp+98h] [rbp+27h]
  int v32; // [rsp+9Ch] [rbp+2Bh]
  int v33; // [rsp+A0h] [rbp+2Fh]
  int v34; // [rsp+A4h] [rbp+33h]

  v19 = 250;
  v17[2] = 750;
  v21 = 750;
  v17[3] = 1250;
  v0 = 0;
  v18 = 1250LL;
  v1 = 4;
  v22 = 750LL;
  v26 = 750LL;
  v29 = 1000;
  v30 = 1000;
  v32 = 1000;
  v17[0] = 0;
  v17[1] = 500;
  v20 = 500;
  v23 = 150;
  v24 = 300;
  v25 = 500;
  v27 = 4000;
  v28 = 2000;
  v31 = 2000;
  v33 = 500;
  v34 = 50;
  PerformanceFrequency.QuadPart = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v9 = *(int *)(W32GetUserSessionState(v6, v5) + 16788);
  if ( !(_DWORD)v9 )
  {
    v1 = 0;
    goto LABEL_9;
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  v11 = v17[v9];
  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(UserSessionState + 16736), 0LL, 0LL);
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(UserSessionState + 16744), 0LL, 0LL);
  v3 = v12;
  if ( v2 <= 0 )
  {
LABEL_9:
    v14 = PerformanceFrequency;
    goto LABEL_10;
  }
  if ( v12 <= v2 )
  {
    v11 = 2000;
    v13 = 1000 * (v4.QuadPart - v2);
  }
  else
  {
    v13 = 1000 * (v4.QuadPart - v12);
  }
  v14 = PerformanceFrequency;
  if ( v13 / PerformanceFrequency.QuadPart < v11 )
    v0 = 1;
LABEL_10:
  EtwTraceTouchPadAAP(
    1000 * v2 / v14.QuadPart,
    (unsigned int)(1000 * v3 / v14.QuadPart),
    1000 * v4.QuadPart / v14.QuadPart,
    v0,
    v1);
  return v0 ^ 1;
}
