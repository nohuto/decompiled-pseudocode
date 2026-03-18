/*
 * XREFs of ?EnsureDpiMetricsForDpi@@YAXPEAUtagDPIMETRICS@@H@Z @ 0x1402A6318
 * Callers:
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1401D0B4C (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     CreateScaledFont @ 0x1401D0CC4 (CreateScaledFont.c)
 */

void __fastcall EnsureDpiMetricsForDpi(struct tagDPIMETRICS *a1, __int64 a2)
{
  INT v2; // edi
  __int64 UserSessionState; // rsi
  Gre::Base *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r8
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h]
  __int128 v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+70h] [rbp-18h]
  int v18; // [rsp+78h] [rbp-10h]

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CreateScaledFont(
    *(Gre::Base **)(UserSessionState + 66128),
    (__int64 *)a1 + 4,
    (__int64)a1 + 40,
    v2,
    (_DWORD *)a1 + 10,
    (_DWORD *)a1 + 11,
    0LL);
  v5 = *(Gre::Base **)(UserSessionState + 66096);
  v17 = 0LL;
  v18 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( (unsigned int)CreateScaledFont(v5, (__int64 *)a1, v6, v2, (_DWORD *)a1 + 2, (_DWORD *)a1 + 3, (__int64)&v14) )
  {
    v8 = v15;
    v9 = v16;
    *((_DWORD *)a1 + 5) = v15;
    v10 = *((_DWORD *)a1 + 3) + v8 + 2;
    *((_DWORD *)a1 + 4) = v9;
    v11 = DWORD1(v14) + 1;
    *((_DWORD *)a1 + 7) = v10;
    *((_DWORD *)a1 + 6) = v11;
  }
  CreateScaledFont(*(Gre::Base **)(UserSessionState + 66144), (__int64 *)a1 + 6, v7, v2, 0LL, 0LL, 0LL);
  CreateScaledFont(*(Gre::Base **)(UserSessionState + 66152), (__int64 *)a1 + 7, v12, v2, 0LL, 0LL, 0LL);
  CreateScaledFont(*(Gre::Base **)(UserSessionState + 66160), (__int64 *)a1 + 8, v13, v2, 0LL, 0LL, 0LL);
}
