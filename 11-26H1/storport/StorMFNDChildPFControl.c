/*
 * XREFs of StorMFNDChildPFControl @ 0x140192010
 * Callers:
 *     RaidAdapterMFNDChildPFControl @ 0x140062DF0 (RaidAdapterMFNDChildPFControl.c)
 * Callees:
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorMFNDChildPFControl(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // esi
  _DWORD v13[15]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+9Ch] [rbp-Ch]

  memset_0(v13, 0, 0x40uLL);
  if ( !StorIsMFNDSupported(a1) )
    return 3221225659LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) != 1 )
    return 3221225860LL;
  v8 = a2 - 1;
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = 0x10000;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = 0x20000;
    goto LABEL_12;
  }
  if ( v10 != 1 )
    return 3221225659LL;
  v11 = 196608;
LABEL_12:
  v12 = StorMFNDAttemptSwitchToAdminPrivilege(v6);
  if ( v12 >= 0 )
  {
    LOBYTE(v14) = 4;
    v14 = v14 & 0xF00000FF | ((v11 | a3) << 8);
    v13[0] = 208;
    v12 = StorSendMFNDCommand(a1, 0, 0, 0, (__int64)v13);
  }
  StorMFNDAttemptSwitchToUserPrivilege(a1);
  return (unsigned int)v12;
}
