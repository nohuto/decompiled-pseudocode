/*
 * XREFs of StorSetMFNDChildPFQueuesState @ 0x1401956CC
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetCCQueuesState @ 0x1400CC658 (StorLogMFNDSetCCQueuesState.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFQueuesState(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r13
  unsigned __int16 v8; // r12
  __int16 v9; // ax
  __int64 v10; // rsi
  unsigned int i; // ecx
  int v12; // ebx
  ULONG v13; // ebx
  char *Pool; // rax
  void *v15; // r14
  _BYTE *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rcx
  int v23; // ecx
  char v25; // [rsp+28h] [rbp-51h]
  _OWORD v26[2]; // [rsp+60h] [rbp-19h] BYREF
  ULONG v27; // [rsp+88h] [rbp+Fh]
  unsigned int v28; // [rsp+9Ch] [rbp+23h]
  int v29; // [rsp+E8h] [rbp+6Fh] BYREF
  int v30; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(v26, 0, 0x40uLL);
  v30 = 0;
  v8 = 0;
  *a3 = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x18u )
      {
        v6 = *(_QWORD *)(a2 + 24) + 8LL;
        if ( *(_WORD *)v6 == 1
          && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x54u
          && (v9 = *(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL)) != 0
          && v9 != -1 )
        {
          v10 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 32LL)
              + (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 34LL);
          if ( *(_WORD *)(v6 + 16) != 1 || *(unsigned int *)(v6 + 20) < (unsigned __int64)(24 * v10 + 44) )
          {
            v29 = -1073741584;
            goto LABEL_44;
          }
          for ( i = 0; i < (unsigned int)v10; ++i )
          {
            if ( *(_WORD *)(v6 + 24LL * i + 60) != 1
              || *(_DWORD *)(v6 + 24LL * i + 64) != 24
              || (unsigned __int8)(*(_BYTE *)(v6 + 24LL * i + 68) - 1) > 1u )
            {
              v29 = -1073741583;
              goto LABEL_44;
            }
          }
          v7 = 1;
          v29 = StorMFNDAttemptSwitchToAdminPrivilege(a1);
          v12 = v29;
          if ( v29 >= 0 )
          {
            v13 = 8 * v10 + 40;
            Pool = (char *)RaidAllocatePool(64LL, v13, 1179476306LL, *(_QWORD *)(a1 + 8));
            v15 = Pool;
            if ( !Pool )
            {
              v29 = -1073741670;
              goto LABEL_44;
            }
            *(_DWORD *)Pool = v13;
            v16 = Pool + 32;
            *((_WORD *)Pool + 2) = *(_WORD *)(v6 + 24);
            *((_WORD *)Pool + 3) = *(_WORD *)(v6 + 26);
            *((_QWORD *)Pool + 1) = *(_QWORD *)(v6 + 28);
            *((_QWORD *)Pool + 2) = *(_QWORD *)(v6 + 36);
            *((_WORD *)Pool + 12) = *(_WORD *)(v6 + 44);
            *((_WORD *)Pool + 13) = *(_WORD *)(v6 + 46);
            *((_WORD *)Pool + 14) = *(_WORD *)(v6 + 48);
            *((_WORD *)Pool + 15) = *(_WORD *)(v6 + 50);
            if ( (*(_BYTE *)(v6 + 52) & 1) != 0 )
              *v16 |= 1u;
            if ( (*(_BYTE *)(v6 + 52) & 2) != 0 )
              *v16 |= 2u;
            if ( (*(_BYTE *)(v6 + 52) & 4) != 0 )
              *v16 |= 4u;
            if ( (*(_BYTE *)(v6 + 52) & 8) != 0 )
              Pool[32] = *v16 | 8;
            if ( (_DWORD)v10 )
            {
              v17 = Pool + 40;
              v18 = (unsigned int)v10;
              v19 = (_QWORD *)(v6 + 76);
              do
              {
                if ( *((_BYTE *)v19 - 8) == 1 )
                  *v17 = *v19;
                ++v17;
                v19 += 3;
                --v18;
              }
              while ( v18 );
              v20 = Pool + 40;
              v21 = (unsigned int)v10;
              v22 = (_QWORD *)(v6 + 76);
              do
              {
                if ( *((_BYTE *)v22 - 8) == 2 )
                  *v20 = *v22;
                ++v20;
                v22 += 3;
                --v21;
              }
              while ( v21 );
            }
            v23 = *(unsigned __int16 *)(v6 + 8);
            LOBYTE(v28) = 13;
            LODWORD(v26[0]) = v26[0] & 0xFFFFFF00 | 0xD1;
            v27 = v13 >> 2;
            v28 = v28 & 0xFF0000FF | (v23 << 8);
            v29 = StorSendMFNDCommand(a1, Pool, 0LL, v13, v26, v25, 2u, 0, 0, 0LL, &v30);
            v12 = v29;
            ExFreePoolWithTag(v15, 0x464D6152u);
            v8 = v30;
          }
        }
        else
        {
          v12 = -1073741811;
          v29 = -1073741811;
        }
        if ( v12 >= 0 )
          goto LABEL_45;
        goto LABEL_44;
      }
      v29 = -1073741585;
    }
    else
    {
      v29 = -1073741436;
    }
  }
  else
  {
    v29 = -1073741637;
  }
LABEL_44:
  StorMapMFNDErrorToNtStatus(v8, &v29);
  v12 = v29;
LABEL_45:
  if ( v7 )
    StorMFNDAttemptSwitchToUserPrivilege(a1);
  StorLogMFNDSetCCQueuesState(a1, v6, v8, v12);
  return (unsigned int)v12;
}
