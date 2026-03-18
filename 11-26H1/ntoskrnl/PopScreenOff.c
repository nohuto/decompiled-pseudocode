/*
 * XREFs of PopScreenOff @ 0x140A387B4
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x140450E68 (PoBlockConsoleSwitchEx.c)
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 *     PopControlMonitor @ 0x140A39C20 (PopControlMonitor.c)
 */

__int64 __fastcall PopScreenOff(int a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int128 v5; // [rsp+30h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-10h]
  unsigned int v7; // [rsp+60h] [rbp+10h] BYREF
  int v8; // [rsp+68h] [rbp+18h] BYREF
  int v9; // [rsp+6Ch] [rbp+1Ch]

  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 0LL;
  v4 = 0LL;
  v7 = 0;
  PoBlockConsoleSwitchEx((__int64)&v4, &v7, 0LL);
  v9 = a1;
  v2 = v7;
  v8 = 0;
  PopControlMonitor(&v8, v7);
  v7 = v2;
  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 7LL;
  v4 = 0LL;
  return PopDispatchStateCallout(&v4, &v7);
}
