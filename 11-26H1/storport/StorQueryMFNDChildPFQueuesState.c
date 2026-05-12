/*
 * XREFs of StorQueryMFNDChildPFQueuesState @ 0x1401937F8
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x14006A3F0 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryCCQueuesState @ 0x1400CB324 (StorLogMFNDQueryCCQueuesState.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFQueuesState(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int16 v4; // bx
  _WORD *v5; // rdi
  _WORD *v7; // r12
  __int16 v8; // ax
  int v9; // esi
  __int64 Pool; // rax
  __int64 v11; // r14
  unsigned int v12; // r15d
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // r8
  unsigned __int64 Size; // [rsp+70h] [rbp-29h]
  _DWORD v22[15]; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v23; // [rsp+BCh] [rbp+23h]
  char v24; // [rsp+108h] [rbp+6Fh]
  int v26; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  LOBYTE(v4) = 0;
  v5 = *(_WORD **)(a2 + 24);
  v7 = 0LL;
  Size = *(unsigned int *)(v3 + 8);
  memset_0(v22, 0, 0x40uLL);
  v24 = 0;
  *a3 = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) == 1 )
    {
      if ( *(_DWORD *)(v3 + 16) >= 0x18u )
      {
        v7 = v5 + 4;
        if ( v5[4] == 1 && *((_DWORD *)v5 + 3) >= 0x10u && (v8 = v5[8]) != 0 && v8 != -1 )
        {
          if ( !v5 || Size < 8 )
          {
            v26 = -1073741584;
            goto LABEL_35;
          }
          v24 = 1;
          v26 = StorMFNDAttemptSwitchToAdminPrivilege(a1);
          v9 = v26;
          if ( v26 >= 0 )
          {
            Pool = RaidAllocatePool(64LL, 4096LL, 1179476306LL, *(_QWORD *)(a1 + 8));
            v11 = Pool;
            if ( !Pool )
            {
              v26 = -1073741670;
              goto LABEL_35;
            }
            LOBYTE(v23) = 12;
            v22[0] = v22[0] & 0xFFFFFF00 | 0xD2;
            v22[10] = 1024;
            v23 = v23 & 0xFF0000FF | ((unsigned __int16)v5[8] << 8);
            v26 = StorSendMFNDCommand(a1, Pool, 0, 4096, (__int64)v22);
            v9 = v26;
            if ( v26 >= 0 )
            {
              v12 = 24 * (*(unsigned __int16 *)(v11 + 4) + *(unsigned __int16 *)(v11 + 6)) + 44;
              memset_0(v5, 0, Size);
              *v5 = 1;
              if ( Size >= v12 )
              {
                v13 = *(unsigned __int16 *)(v11 + 4);
                *v7 = v13;
                v14 = *(unsigned __int16 *)(v11 + 6);
                v5[5] = v14;
                *(_QWORD *)(v5 + 6) = *(_QWORD *)(v11 + 8);
                *(_QWORD *)(v5 + 10) = *(_QWORD *)(v11 + 16);
                v5[14] = *(_WORD *)(v11 + 24);
                v5[15] = *(_WORD *)(v11 + 26);
                v5[16] = *(_WORD *)(v11 + 28);
                v5[17] = *(_WORD *)(v11 + 30);
                if ( (*(_BYTE *)(v11 + 32) & 1) != 0 )
                  *((_BYTE *)v5 + 36) |= 1u;
                if ( (*(_BYTE *)(v11 + 32) & 2) != 0 )
                  *((_BYTE *)v5 + 36) |= 2u;
                if ( (*(_BYTE *)(v11 + 32) & 4) != 0 )
                  *((_BYTE *)v5 + 36) |= 4u;
                if ( (*(_BYTE *)(v11 + 32) & 8) != 0 )
                  *((_BYTE *)v5 + 36) |= 8u;
                v15 = 0;
                if ( v14 + v13 )
                {
                  do
                  {
                    v16 = v15;
                    v17 = 3LL * v15;
                    v5[4 * v17 + 22] = 1;
                    *(_DWORD *)&v5[12 * v15 + 24] = 24;
                    v18 = -(v15++ < (unsigned __int16)v5[4]);
                    LOBYTE(v5[4 * v17 + 26]) = v18 + 2;
                    *(_QWORD *)&v5[4 * v17 + 30] = *(_QWORD *)(v11 + 8 * v16 + 40);
                  }
                  while ( v15 < (unsigned __int16)v5[4] + (unsigned int)(unsigned __int16)v5[5] );
                }
                *a3 = v12;
              }
              else
              {
                v9 = -2147483643;
                v26 = -2147483643;
                *a3 = 8LL;
              }
              *((_DWORD *)v5 + 1) = v12;
            }
            ExFreePoolWithTag((PVOID)v11, 0x464D6152u);
          }
        }
        else
        {
          v9 = -1073741811;
          v26 = -1073741811;
        }
        if ( v9 >= 0 )
          goto LABEL_36;
        goto LABEL_35;
      }
      v26 = -1073741585;
    }
    else
    {
      v26 = -1073741436;
    }
  }
  else
  {
    v26 = -1073741637;
  }
LABEL_35:
  StorMapMFNDErrorToNtStatus(0, &v26);
  v9 = v26;
LABEL_36:
  if ( v24 )
    StorMFNDAttemptSwitchToUserPrivilege(a1);
  v19 = 0LL;
  if ( v9 >= 0 )
    v19 = (__int64)v5;
  if ( v7 )
    v4 = v7[4];
  StorLogMFNDQueryCCQueuesState(a1, v4, v19, 0, v9);
  return (unsigned int)v9;
}
