/*
 * XREFs of NtUserHardErrorControl @ 0x14021DC80
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x14021DD80 (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, ULONG64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  ULONG64 v8; // rcx
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = *(_QWORD *)(W32GetUserGdiSessionState(v4) + 40);
  if ( PsGetCurrentProcess(v6) == v5 )
  {
    if ( a3 )
    {
      v7 = (_BYTE *)a3;
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 >= MmUserProbeAddress )
        v7 = (_BYTE *)MmUserProbeAddress;
      *v7 = *v7;
      v7[15] = v7[15];
      v11 = *(_OWORD *)a3;
    }
    v9 = xxxHardErrorControl(a1, v7, (unsigned __int64)&v11 & -(__int64)(a3 != 0));
    v8 = a3;
    if ( a3 )
    {
      v8 = a3;
      *(_OWORD *)a3 = v11;
    }
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
