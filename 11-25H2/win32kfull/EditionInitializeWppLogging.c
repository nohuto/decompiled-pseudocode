/*
 * XREFs of EditionInitializeWppLogging @ 0x140215F50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401FCC60 (IsCurrentSessionHostServiceSession.c)
 *     RtlStringCopyWorkerA @ 0x1402AF3E4 (RtlStringCopyWorkerA.c)
 *     WPP_INIT_CONTROL_ARRAY @ 0x1402AF4A0 (WPP_INIT_CONTROL_ARRAY.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     WppInitKm @ 0x1403D332C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1403D3408 (WppLoadTracingSupport.c)
 */

__int64 __fastcall EditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  size_t v4; // rdx
  size_t *v5; // r8
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  size_t v14; // [rsp+20h] [rbp-60h]
  _QWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-30h]
  char pszDest[16]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h]

  if ( IsCurrentSessionHostServiceSession() )
  {
    WPP_INIT_CONTROL_ARRAY();
    WppLoadTracingSupport();
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WppInitKm(a1, a2);
    v15[0] = 16LL;
    v15[1] = 0x200000002LL;
    imp_WppRecorderConfigure(*(_QWORD *)&WPP_GLOBAL_Control, v15);
  }
  v20 = 0LL;
  v18 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v16 = 56LL;
  v17 = 0xC800000400LL;
  pszDest[0] = 0;
  HIDWORD(v18) = 16;
  BYTE8(v18) = 0;
  RtlStringCopyWorkerA(pszDest, v4, v5, v6, v14);
  v20 = 0x200000002LL;
  LODWORD(v17) = 512;
  *(_QWORD *)&v18 = (unsigned int)W32GetCurrentWin32kSessionId();
  BYTE8(v18) = 1;
  UserSessionState = W32GetUserSessionState(v8, v7);
  v12 = imp_WppRecorderLogCreate(*(_QWORD *)&WPP_GLOBAL_Control, &v16, UserSessionState + 69160);
  if ( v12 < 0 )
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 69160) = 0LL;
  return (unsigned int)v12;
}
