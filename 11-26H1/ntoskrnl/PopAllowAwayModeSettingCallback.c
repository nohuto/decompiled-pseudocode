/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x140B6D280
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x1404272D4 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopAllowAwayModeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+20h] [rbp-8h]

  v6 = -1073741811;
  PopAcquirePolicyLock(a1, a2);
  v10 = *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 == *a1 )
    v10 = *(_QWORD *)GUID_ALLOW_AWAYMODE.Data4 - a1[1];
  if ( !v10 )
  {
    v8 = 4LL;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        if ( *a2 )
        {
          BYTE2(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) = 1;
        }
        else
        {
          BYTE2(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) = 0;
          if ( BYTE1(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) )
            PopSetSystemState(4LL, 7LL);
        }
        v6 = 0;
      }
    }
  }
  PopReleasePolicyLock(v8, v7, v9, v10, v12);
  return v6;
}
