/*
 * XREFs of SmpWaitForSingleSubSys @ 0x140005610
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x1400073F0 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x1400091D0 (SmpLockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x14000B500 (SmpCheckSubSysStatus.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpWaitForStatusChange @ 0x140019224 (SmpWaitForStatusChange.c)
 */

__int64 __fastcall SmpWaitForSingleSubSys(__int64 a1)
{
  int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v7 = 0;
  v6 = 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 4) == 0 )
  {
    if ( (v3 & 1) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 48) )
      {
LABEL_6:
        SmpLockKnownSubSysList(*(unsigned int *)(a1 + 64), 1LL, &v6);
        if ( !(unsigned int)SmpCheckSubSysStatus(a1) )
          v1 = SmpWaitForStatusChange(v4, (*(_DWORD *)(a1 + 8) & 1) == 0, &v6);
        SmpUnlockKnownSubSysList(&v6);
        if ( v1 < 0 )
          return (unsigned int)v1;
      }
    }
    else if ( *(_DWORD *)(a1 + 24) == -1 )
    {
      goto LABEL_6;
    }
  }
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
  {
    SmpLogFailure("SmpWaitForSingleSubSys", 1205LL, 3221225473LL);
    return 3221225473LL;
  }
  return (unsigned int)v1;
}
