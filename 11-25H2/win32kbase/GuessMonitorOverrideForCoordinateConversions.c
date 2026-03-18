/*
 * XREFs of GuessMonitorOverrideForCoordinateConversions @ 0x140064A30
 * Callers:
 *     NtUserGetClipCursor @ 0x140063870 (NtUserGetClipCursor.c)
 *     NtUserClipCursor @ 0x140107790 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x14011D610 (NtUserLockCursor.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x140064D58 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GuessMonitorOverrideForCoordinateConversions(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  int (*v7)(void); // rax
  __int64 (__fastcall *v8)(__int64 *, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v4 = a2;
  v5 = 0LL;
  if ( ***(_DWORD ***)(W32GetUserSessionState(a1, a2) + 56968) > 1u )
  {
    v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3936LL);
    if ( v7 )
    {
      if ( v7() >= 0 )
      {
        v8 = *(__int64 (__fastcall **)(__int64 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3944LL);
        if ( v8 )
        {
          v9 = 18LL;
          if ( !a3 )
            v9 = v4;
          v10 = v8(&v12, v9);
        }
        else
        {
          v10 = 0LL;
        }
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 40);
          if ( (((unsigned __int16)(v4 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v11 + 288) >> 8)) & 0x1FF) == 0 )
            return HMValidateSharedHandleNoRip(*(_QWORD *)(v11 + 256));
        }
      }
    }
  }
  return v5;
}
