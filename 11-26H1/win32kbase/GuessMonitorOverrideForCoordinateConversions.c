/*
 * XREFs of GuessMonitorOverrideForCoordinateConversions @ 0x140082550
 * Callers:
 *     NtUserGetClipCursor @ 0x140082750 (NtUserGetClipCursor.c)
 *     NtUserClipCursor @ 0x1401E2460 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x1401E7A00 (NtUserLockCursor.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x140082658 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GuessMonitorOverrideForCoordinateConversions(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rbx
  _DWORD **v6; // rcx
  int (*v8)(void); // rax
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64 *, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  v5 = 0LL;
  v6 = *(_DWORD ***)(W32GetUserSessionState(a1, a2, a3) + 56968);
  if ( **v6 > 1u )
  {
    v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 3488LL);
    if ( v8 )
    {
      if ( v8() >= 0 )
      {
        v10 = *(__int64 (__fastcall **)(__int64 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48) + 3496LL);
        if ( v10 )
        {
          v11 = 18LL;
          if ( !a3 )
            v11 = a2;
          v12 = v10(&v14, v11);
        }
        else
        {
          v12 = 0LL;
        }
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 40);
          if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v13 + 288) >> 8)) & 0x1FF) == 0 )
            return HMValidateSharedHandleNoRip(*(_QWORD *)(v13 + 256));
        }
      }
    }
  }
  return v5;
}
