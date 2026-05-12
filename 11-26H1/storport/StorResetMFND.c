/*
 * XREFs of StorResetMFND @ 0x140194654
 * Callers:
 *     RaidAdapterReconfigureMFND @ 0x140065184 (RaidAdapterReconfigureMFND.c)
 * Callees:
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorResetMFND(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v6; // ebx
  _DWORD v7[14]; // [rsp+60h] [rbp-48h] BYREF
  char v8; // [rsp+98h] [rbp-10h]
  unsigned int v9; // [rsp+9Ch] [rbp-Ch]

  memset_0(v7, 0, 0x40uLL);
  if ( !StorIsMFNDSupported(a1) )
    return 3221225659LL;
  v6 = StorMFNDAttemptSwitchToAdminPrivilege(v4);
  if ( v6 >= 0 )
  {
    LOBYTE(v9) = 3;
    v9 = v9 & 0xF0FFFFFF | 0x1000000;
    v7[0] = 209;
    v8 = a2;
    v6 = StorSendMFNDCommand(a1, 0, 0, 0, (__int64)v7);
  }
  StorMFNDAttemptSwitchToUserPrivilege(a1);
  return (unsigned int)v6;
}
