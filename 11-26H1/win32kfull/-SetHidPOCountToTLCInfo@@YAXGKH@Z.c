/*
 * XREFs of ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x140172A84
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1401715D0 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1401729BC (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1401703CC (FreeHidTLCInfo.c)
 */

void __fastcall SetHidPOCountToTLCInfo(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebp
  __int16 v5; // r14
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  BOOL v10; // esi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdi

  v4 = a2;
  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v8 = 0LL;
  v9 = UserSessionState + 104;
  if ( *(struct _KTHREAD **)(UserSessionState + 112) != KeGetCurrentThread() )
  {
    v8 = UserSessionState + 104;
    RIMLockExclusive(v9);
  }
  v10 = a3 && !v4;
  v13 = *(_QWORD **)(W32GetUserSessionState(v9, v7) + 192);
  while ( v13 != (_QWORD *)(W32GetUserSessionState(v12, v11) + 192) )
  {
    v12 = v13;
    v13 = (_QWORD *)*v13;
    if ( *((_WORD *)v12 + 8) == v5 )
    {
      *((_DWORD *)v12 + 8) = v4;
      if ( v10 )
      {
        v11 = v4 | *((_DWORD *)v12 + 5) | (unsigned int)(*((_DWORD *)v12 + 6) | *((_DWORD *)v12 + 9));
        if ( !(v4 | *((_DWORD *)v12 + 5) | *((_DWORD *)v12 + 6) | *((_DWORD *)v12 + 9)) )
          FreeHidTLCInfo(v12, v11);
      }
    }
  }
  if ( v8 )
    RIMUnlockExclusive(v8);
}
