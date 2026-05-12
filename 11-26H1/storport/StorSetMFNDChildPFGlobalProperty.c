/*
 * XREFs of StorSetMFNDChildPFGlobalProperty @ 0x140195058
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1400CCB6C (StorLogMFNDSetChildPFProperty.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFGlobalProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r15
  char v7; // r14
  unsigned __int16 v8; // di
  __int64 v9; // rcx
  __int64 v10; // rbx
  _BYTE *Pool; // r12
  __int16 v12; // ax
  int v13; // ebx
  char v15; // [rsp+28h] [rbp-51h]
  _OWORD v16[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  int v19; // [rsp+E8h] [rbp+6Fh] BYREF
  int v20; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(v16, 0, 0x40uLL);
  v8 = 0;
  v20 = 0;
  *a3 = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x28u )
    {
      v10 = *(_QWORD *)(a2 + 24);
      v6 = v10 + 8;
      if ( *(_WORD *)(v10 + 8) == 1
        && *(_DWORD *)(v10 + 12) >= 0x20u
        && *(_WORD *)(v10 + 24) == 1
        && *(_WORD *)(v10 + 26) >= 0x10u
        && (*(_BYTE *)(v10 + 28) & 1) != 0 )
      {
        v7 = 1;
        v19 = StorMFNDAttemptSwitchToAdminPrivilege(v9);
        if ( v19 >= 0 )
        {
          Pool = (_BYTE *)RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
          if ( Pool )
          {
            v12 = *(_WORD *)(v10 + 30);
            v18 |= 1u;
            *(_WORD *)Pool = v12;
            Pool[2] = *(_BYTE *)(v10 + 32);
            Pool[3] = *(_BYTE *)(v10 + 33);
            Pool[4] = *(_BYTE *)(v10 + 34);
            Pool[5] = *(_BYTE *)(v10 + 35);
            LODWORD(v16[0]) = v16[0] & 0xFFFFFF00 | 9;
            v17 = v17 & 0xFFFFFF00 | 0xD2;
            v19 = StorSendMFNDCommand(a1, Pool, 0LL, 0x200u, v16, v15, 2u, 0, 0, 0LL, &v20);
            v13 = v19;
            ExFreePoolWithTag(Pool, 0x464D6152u);
            v8 = v20;
            if ( v13 >= 0 )
              goto LABEL_17;
          }
          else
          {
            v19 = -1073741670;
          }
        }
      }
      else
      {
        v19 = -1073741811;
      }
    }
    else
    {
      v19 = -1073741585;
    }
  }
  else
  {
    v19 = -1073741637;
  }
  StorMapMFNDErrorToNtStatus(v8, &v19);
  v13 = v19;
  if ( v7 )
LABEL_17:
    StorMFNDAttemptSwitchToUserPrivilege(a1);
  StorLogMFNDSetChildPFProperty(a1, v6, v8, v13);
  return (unsigned int)v13;
}
