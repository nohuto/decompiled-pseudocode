/*
 * XREFs of StorSetMFNDChildPFQoSStatisticsProperty @ 0x1401954C0
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetCCQoSStatisticsProperty @ 0x1400CC490 (StorLogMFNDSetCCQoSStatisticsProperty.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFQoSStatisticsProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r15
  char v7; // r12
  unsigned __int16 v8; // r14
  __int64 v9; // rdi
  _BYTE *Pool; // rax
  void *v11; // r13
  int v12; // ebx
  char v14; // [rsp+28h] [rbp-51h]
  _OWORD v15[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+E8h] [rbp+6Fh] BYREF
  int v18; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(v15, 0, 0x40uLL);
  v8 = 0;
  v18 = 0;
  *a3 = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x18u )
    {
      v9 = *(_QWORD *)(a2 + 24);
      v6 = v9 + 8;
      if ( *(_WORD *)(v9 + 8) == 1
        && *(_WORD *)(v9 + 10) >= 0x10u
        && (!*(_BYTE *)(v9 + 12) || *(_WORD *)(v9 + 16) >= 0x3Cu)
        && *(unsigned __int16 *)(v9 + 16) == 30 * (*(unsigned __int16 *)(v9 + 16) / 0x1Eu)
        && (unsigned __int16)(*(_WORD *)(v9 + 18) - 30) <= 0x582u )
      {
        v7 = 1;
        v17 = StorMFNDAttemptSwitchToAdminPrivilege(a1);
        if ( v17 >= 0 )
        {
          Pool = (_BYTE *)RaidAllocatePool(64LL, 64LL, 1179476306LL, *(_QWORD *)(a1 + 8));
          v11 = Pool;
          if ( Pool )
          {
            *Pool = *(_BYTE *)(v9 + 12) != 0;
            *((_WORD *)Pool + 16) = *(_WORD *)(v9 + 16);
            *((_WORD *)Pool + 17) = *(_WORD *)(v9 + 18);
            LODWORD(v15[0]) = v15[0] & 0xFFFFFF00 | 9;
            v16 = v16 & 0xFFFFFF00 | 0xD4;
            v17 = StorSendMFNDCommand(a1, Pool, 0LL, 0x40u, v15, v14, 2u, 0, 0, 0LL, &v18);
            v12 = v17;
            ExFreePoolWithTag(v11, 0x464D6152u);
            v8 = v18;
            if ( v12 >= 0 )
            {
LABEL_18:
              StorMFNDAttemptSwitchToUserPrivilege(a1);
              goto LABEL_19;
            }
          }
          else
          {
            v17 = -1073741670;
          }
        }
      }
      else
      {
        v17 = -1073741811;
      }
    }
    else
    {
      v17 = -1073741585;
    }
  }
  else
  {
    v17 = -1073741637;
  }
  StorMapMFNDErrorToNtStatus(v8, &v17);
  v12 = v17;
  if ( v7 )
    goto LABEL_18;
LABEL_19:
  StorLogMFNDSetCCQoSStatisticsProperty(a1, v6, v8, v12);
  return (unsigned int)v12;
}
