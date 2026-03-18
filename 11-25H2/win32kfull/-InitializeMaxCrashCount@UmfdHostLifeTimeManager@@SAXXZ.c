/*
 * XREFs of ?InitializeMaxCrashCount@UmfdHostLifeTimeManager@@SAXXZ @ 0x140225B84
 * Callers:
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x14026CB58 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 * Callees:
 *     ?PlatformRetrieveConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEAIPEA_N_K@Z @ 0x140225BE8 (-PlatformRetrieveConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEAIPEA_N_K@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::InitializeMaxCrashCount(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v3; // rbx
  NSInstrumentation *v4; // rcx
  int v5; // eax
  bool *v6; // [rsp+20h] [rbp-18h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 *v9; // [rsp+48h] [rbp+10h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp+18h] BYREF

  SessionState = W32GetSessionState(a1, a2);
  LODWORD(v9) = 0;
  LOBYTE(v8) = 0;
  v3 = *(_QWORD *)(SessionState + 96);
  v10 = L"UmfdHostCrashLimit";
  NSInstrumentation::PlatformRetrieveConfig32(
    v4,
    (const unsigned __int16 *)&v10,
    (const unsigned __int16 *const *const)&v9,
    &v8,
    v6,
    v7);
  v5 = 10;
  if ( (_BYTE)v8 )
    v5 = (int)v9;
  *(_DWORD *)(v3 + 24280) = v5;
}
