/*
 * XREFs of ?TPAAPShouldAllowNow@@YAHKH@Z @ 0x14025BCF8
 * Callers:
 *     EditionLegacyTouchPadMouseAllowTap @ 0x14025BCE0 (EditionLegacyTouchPadMouseAllowTap.c)
 * Callees:
 *     <none>
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
  _DWORD v16[4]; // [rsp+30h] [rbp-29h]
  __int64 v17; // [rsp+40h] [rbp-19h]
  int v18; // [rsp+48h] [rbp-11h]
  int v19; // [rsp+4Ch] [rbp-Dh]
  int v20; // [rsp+50h] [rbp-9h]
  __int64 v21; // [rsp+54h] [rbp-5h]
  int v22; // [rsp+5Ch] [rbp+3h]
  int v23; // [rsp+60h] [rbp+7h]
  int v24; // [rsp+64h] [rbp+Bh]
  __int64 v25; // [rsp+68h] [rbp+Fh]
  int v26; // [rsp+70h] [rbp+17h]
  int v27; // [rsp+74h] [rbp+1Bh]
  int v28; // [rsp+78h] [rbp+1Fh]
  int v29; // [rsp+7Ch] [rbp+23h]
  int v30; // [rsp+80h] [rbp+27h]
  int v31; // [rsp+84h] [rbp+2Bh]
  int v32; // [rsp+88h] [rbp+2Fh]
  int v33; // [rsp+8Ch] [rbp+33h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp+77h] BYREF

  v18 = 250;
  v16[2] = 750;
  v20 = 750;
  v16[3] = 1250;
  v0 = 0;
  v17 = 1250LL;
  v1 = 4;
  v21 = 750LL;
  v25 = 750LL;
  v28 = 1000;
  v29 = 1000;
  v31 = 1000;
  v16[0] = 0;
  v16[1] = 500;
  v19 = 500;
  v22 = 150;
  v23 = 300;
  v24 = 500;
  v26 = 4000;
  v27 = 2000;
  v30 = 2000;
  v32 = 500;
  v33 = 50;
  PerformanceFrequency.QuadPart = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v9 = *(int *)(W32GetUserSessionState(v6, v5) + 16780);
  if ( !(_DWORD)v9 )
  {
    v1 = 0;
    goto LABEL_9;
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  v11 = v16[v9];
  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(UserSessionState + 16728), 0LL, 0LL);
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(UserSessionState + 16736), 0LL, 0LL);
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
