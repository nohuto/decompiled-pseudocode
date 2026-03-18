/*
 * XREFs of AllocateAndLinkHidTLCInfo @ 0x140200078
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x14011F03C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateAndLinkHidTLCInfo(__int64 a1, __int64 a2)
{
  __int16 v2; // si
  __int16 v3; // bp
  __int64 UserSessionState; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *i; // rsi

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 0LL;
  if ( *(struct _KTHREAD **)(UserSessionState + 112) != KeGetCurrentThread() )
  {
    v5 = UserSessionState + 104;
    RIMLockExclusive(UserSessionState + 104);
  }
  v6 = Win32AllocPoolZInit(48LL, 1416131413LL);
  v9 = v6;
  if ( v6 )
  {
    *(_WORD *)(v6 + 16) = v3;
    *(_WORD *)(v6 + 18) = v2;
    v10 = W32GetUserSessionState(v8, v7) + 192;
    v12 = *(_QWORD *)v10;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
      __fastfail(3u);
    *(_QWORD *)v9 = v12;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(v12 + 8) = v9;
    *(_QWORD *)v10 = v9;
    for ( i = *(__int64 **)(W32GetUserSessionState(v12, v11) + 208);
          i != (__int64 *)(W32GetUserSessionState(v14, v13) + 208);
          i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 8) == v3 )
      {
        *(_DWORD *)(v9 + 32) = *((_DWORD *)i + 5);
        break;
      }
    }
    if ( v5 )
      RIMUnlockExclusive(v5);
    return v9;
  }
  else
  {
    if ( v5 )
      RIMUnlockExclusive(v5);
    return 0LL;
  }
}
