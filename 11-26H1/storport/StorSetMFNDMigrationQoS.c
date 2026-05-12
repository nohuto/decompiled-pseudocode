/*
 * XREFs of StorSetMFNDMigrationQoS @ 0x140195D18
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetMigrationQoS @ 0x1400CD2D4 (StorLogMFNDSetMigrationQoS.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDMigrationQoS(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v6; // r15
  _DWORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // ebx
  _DWORD *Pool; // rax
  _DWORD *v15; // rdx
  unsigned int v16; // r10d
  _DWORD *v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // edx
  unsigned int v20; // r12d
  unsigned int v21; // r8d
  unsigned int v22; // r13d
  unsigned int v23; // r9d
  unsigned int v24; // eax
  int v25; // r15d
  unsigned int v26; // r12d
  unsigned int v27; // r13d
  unsigned int v28; // eax
  unsigned int *v29; // r8
  __int64 v30; // r12
  _DWORD *v31; // r15
  __int64 v32; // rbx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r11
  __int64 v36; // r10
  _BYTE *v37; // rax
  char v39; // [rsp+28h] [rbp-61h]
  unsigned int v40; // [rsp+60h] [rbp-29h]
  _OWORD v41[2]; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v42; // [rsp+98h] [rbp+Fh]
  char v43; // [rsp+F8h] [rbp+6Fh]
  int v44; // [rsp+100h] [rbp+77h] BYREF
  int v45; // [rsp+108h] [rbp+7Fh] BYREF

  v43 = 0;
  v6 = 0LL;
  v7 = 0LL;
  memset_0(v41, 0, 0x40uLL);
  v45 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported((__int64)a1) )
  {
    v44 = -1073741637;
LABEL_63:
    StorMapMFNDErrorToNtStatus(v45, &v44);
    v13 = v44;
    goto LABEL_64;
  }
  v8 = a1[778];
  if ( *(_DWORD *)(v8 + 36) != 1 )
  {
    v44 = -1073741436;
    goto LABEL_63;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x28u )
  {
    v44 = -1073741585;
    goto LABEL_63;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v6 = (_DWORD *)(v9 + 8);
  if ( *(_WORD *)(v9 + 8) != 1
    || *(_DWORD *)(v9 + 12) < 0x20u
    || (v10 = *(_DWORD *)(v9 + 16), v10 != 1) && (unsigned int)(v10 - 2) > 1
    || !*(_DWORD *)(v9 + 20) && !*(_DWORD *)(v9 + 24) && !*(_DWORD *)(v9 + 28) && !*(_DWORD *)(v9 + 32) )
  {
    v44 = -1073741811;
    goto LABEL_63;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 104)) > 1 )
    KeWaitForSingleObject((PVOID)(a1[778] + 80), Executive, 0, 0, 0LL);
  v11 = a1[778];
  if ( !*(_QWORD *)(v11 + 112) )
  {
    v12 = a1[778];
    *(_QWORD *)(v12 + 112) = RaidAllocatePool(64LL, 28LL, 1179476306LL, a1[1]);
    v11 = a1[778];
    if ( !*(_QWORD *)(v11 + 112) )
      goto LABEL_19;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v11 + 112) + 20LL) & 1) == 0 )
  {
    Pool = (_DWORD *)RaidAllocatePool(64LL, 64LL, 1179476306LL, a1[1]);
    v7 = Pool;
    if ( !Pool )
      goto LABEL_19;
    LODWORD(v41[0]) = v41[0] & 0xFFFFFF00 | 0xA;
    v42 = v42 & 0xFFFFFF00 | 0xD3;
    v44 = StorSendMFNDCommand((__int64)a1, Pool, 0LL, 0x40u, v41, v39, 1u, 0, 0, 0LL, &v45);
    v13 = v44;
    if ( v44 < 0 )
      goto LABEL_56;
    v15 = *(_DWORD **)(a1[778] + 112);
    if ( *(_BYTE *)v7 )
    {
      if ( *(_BYTE *)v7 == 1 )
      {
        *v15 = 2;
      }
      else if ( *(_BYTE *)v7 == 2 )
      {
        *v15 = 3;
      }
      else
      {
        *v15 = 4;
      }
    }
    else
    {
      *v15 = 1;
    }
    *(_DWORD *)(*(_QWORD *)(a1[778] + 112) + 4LL) = v7[3];
    *(_DWORD *)(*(_QWORD *)(a1[778] + 112) + 8LL) = v7[4];
    *(_DWORD *)(*(_QWORD *)(a1[778] + 112) + 12LL) = v7[7];
    *(_DWORD *)(*(_QWORD *)(a1[778] + 112) + 16LL) = v7[8];
    *(_BYTE *)(*(_QWORD *)(a1[778] + 112) + 20LL) |= 1u;
    ExFreePoolWithTag(v7, 0x464D6152u);
    v7 = 0LL;
  }
  if ( (*(_BYTE *)(v9 + 10) & 1) != 0 )
  {
    v16 = *(_DWORD *)(v9 + 20);
    v17 = *(_DWORD **)(a1[778] + 112);
    v18 = v17[1];
    if ( v18 < v16
      || (v19 = *(_DWORD *)(v9 + 24), v20 = v17[2], v20 < v19)
      || (v21 = *(_DWORD *)(v9 + 28), v22 = v17[3], v22 < v21)
      || (v23 = *(_DWORD *)(v9 + 32), v24 = v17[4], v24 < v23) )
    {
      v13 = -1073741584;
      goto LABEL_55;
    }
    v25 = v18 - v16;
    v26 = v20 - v19;
    v27 = v22 - v21;
    v28 = v24 - v23;
  }
  else
  {
    v29 = (unsigned int *)a1[777];
    if ( v29
      && *(unsigned int *)(v9 + 20) + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1[778] + 112) + 4LL) > v29[9]
      || (v30 = *(unsigned int *)(v9 + 24),
          v31 = *(_DWORD **)(a1[778] + 112),
          v32 = (unsigned int)v31[2],
          v30 + v32 > (unsigned __int64)v29[11])
      || (v33 = *(unsigned int *)(v9 + 28), v34 = (unsigned int)v31[3], v33 + v34 > (unsigned __int64)v29[13])
      || (v35 = *(unsigned int *)(v9 + 32), v36 = (unsigned int)v31[4], v35 + v36 > (unsigned __int64)v29[15]) )
    {
      v13 = -1073741583;
      goto LABEL_55;
    }
    v27 = v33 + v34;
    v25 = *(_DWORD *)(v9 + 20) + v31[1];
    v28 = v35 + v36;
    v26 = v32 + v30;
  }
  v40 = v28;
  v43 = 1;
  v44 = StorMFNDAttemptSwitchToAdminPrivilege((__int64)a1);
  v13 = v44;
  if ( v44 < 0 )
    goto LABEL_56;
  v37 = (_BYTE *)RaidAllocatePool(64LL, 64LL, 1179476306LL, a1[1]);
  v7 = v37;
  if ( !v37 )
  {
LABEL_19:
    v13 = -1073741670;
LABEL_55:
    v44 = v13;
    goto LABEL_56;
  }
  switch ( *(_DWORD *)(v9 + 16) )
  {
    case 1:
      *v37 = 0;
      break;
    case 2:
      *v37 = 1;
      break;
    case 3:
      *v37 = 2;
      break;
  }
  *((_DWORD *)v37 + 3) = v25;
  *((_DWORD *)v37 + 4) = v26;
  *((_DWORD *)v37 + 7) = v27;
  *((_DWORD *)v37 + 8) = v40;
  LODWORD(v41[0]) = v41[0] & 0xFFFFFF00 | 9;
  v42 = v42 & 0xFFFFFF00 | 0xD3;
  v44 = StorSendMFNDCommand((__int64)a1, v37, 0LL, 0x40u, v41, v39, 2u, 0, 0, 0LL, &v45);
  v13 = v44;
  if ( v44 >= 0 )
  {
    **(_DWORD **)(a1[778] + 112) = *(_DWORD *)(v9 + 16);
    *(_DWORD *)(*(_QWORD *)(a1[778] + 112) + 4LL) = v25;
    *(_DWORD *)(*(_QWORD *)(a1[778] + 112) + 8LL) = v26;
    *(_DWORD *)(*(_QWORD *)(a1[778] + 112) + 12LL) = v27;
    *(_DWORD *)(*(_QWORD *)(a1[778] + 112) + 16LL) = v40;
  }
LABEL_56:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[778] + 104), 0xFFFFFFFF) != 1 )
    KeSetEvent((PRKEVENT)(a1[778] + 80), 0, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x464D6152u);
  v6 = (_DWORD *)(v9 + 8);
  if ( v13 < 0 )
    goto LABEL_63;
LABEL_64:
  if ( v43 )
    StorMFNDAttemptSwitchToUserPrivilege((__int64)a1);
  StorLogMFNDSetMigrationQoS((__int64)a1, v6, v45, v13);
  return (unsigned int)v13;
}
