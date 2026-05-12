/*
 * XREFs of StorSetMFNDChildPFSettings @ 0x1401959F8
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorBuildMFNDManagementCommand @ 0x1400C9C48 (StorBuildMFNDManagementCommand.c)
 *     StorGetAndLogMFNDQoSStatistics @ 0x1400C9C9C (StorGetAndLogMFNDQoSStatistics.c)
 *     StorLogMFNDSetChildPFSettings @ 0x1400CCFB0 (StorLogMFNDSetChildPFSettings.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFSettings(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r13
  char v7; // si
  unsigned __int16 v8; // r12
  __int16 v9; // r10
  __int64 v10; // rbx
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // cx
  bool v14; // zf
  unsigned int v15; // esi
  int v17; // eax
  int v18; // r15d
  __int64 Pool; // rax
  __int64 v20; // rdi
  int v21; // eax
  _DWORD *v22; // r10
  unsigned __int8 v23; // r11
  char v24; // [rsp+28h] [rbp-51h]
  _OWORD v25[7]; // [rsp+60h] [rbp-19h] BYREF
  int v26; // [rsp+F0h] [rbp+77h] BYREF
  int v27; // [rsp+F8h] [rbp+7Fh] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(v25, 0, 0x40uLL);
  v8 = 0;
  v27 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v26 = -1073741637;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) != 1 )
  {
    v26 = -1073741436;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x88u )
  {
    v26 = -1073741585;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a2 + 24);
  v6 = v10 + 8;
  if ( *(_WORD *)(v10 + 8) != 1 )
    goto LABEL_15;
  if ( *(_DWORD *)(v10 + 12) < 0x80u )
    goto LABEL_15;
  v11 = *(_WORD *)(v10 + 16);
  if ( !v11 || v11 == -1 || *(_WORD *)(v10 + 24) != 1 || *(_WORD *)(v10 + 26) < 0x70u )
    goto LABEL_15;
  v12 = *(_WORD *)(v10 + 28) & 2;
  v13 = *(_WORD *)(v10 + 28) & 1;
  if ( v13 )
  {
    if ( !v12 )
    {
LABEL_23:
      if ( *(_WORD *)(v10 + 30) == 1 && *(_WORD *)(v10 + 32) == 1 && *(_WORD *)(v10 + 34) == v9 )
        StorGetAndLogMFNDQoSStatistics(a1, 1, 3, 1u, (unsigned __int16 *)(v10 + 16));
      goto LABEL_27;
    }
  }
  else if ( !v12 )
  {
LABEL_15:
    v26 = -1073741811;
    goto LABEL_16;
  }
  v17 = *(_DWORD *)(v10 + 60);
  if ( v17 != 1 && (unsigned int)(v17 - 2) > 1 )
    goto LABEL_15;
  if ( v13 )
    goto LABEL_23;
LABEL_27:
  v26 = StorMFNDAttemptSwitchToAdminPrivilege(a1);
  v15 = v26;
  v18 = v26;
  if ( v26 < 0 )
    goto LABEL_44;
  Pool = RaidAllocatePool(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  v20 = Pool;
  if ( Pool )
  {
    if ( (*(_BYTE *)(v10 + 28) & 1) != 0 )
    {
      *(_WORD *)Pool |= 1u;
      *(_WORD *)(Pool + 2) = *(_WORD *)(v10 + 30);
      *(_WORD *)(Pool + 4) = *(_WORD *)(v10 + 32);
      *(_BYTE *)(Pool + 6) = *(_BYTE *)(v10 + 34);
      *(_WORD *)(Pool + 8) = *(_WORD *)(v10 + 40);
      *(_WORD *)(Pool + 10) = *(_WORD *)(v10 + 44);
      *(_WORD *)(Pool + 12) = *(_WORD *)(v10 + 48);
      *(_WORD *)(Pool + 14) = *(_WORD *)(v10 + 52);
    }
    if ( (*(_BYTE *)(v10 + 28) & 2) != 0 )
    {
      *(_WORD *)Pool |= 2u;
      v21 = *(_DWORD *)(v10 + 60);
      switch ( v21 )
      {
        case 1:
          *(_BYTE *)(v20 + 64) = 0;
          break;
        case 2:
          *(_BYTE *)(v20 + 64) = 1;
          break;
        case 3:
          *(_BYTE *)(v20 + 64) = 2;
          break;
      }
      *(_BYTE *)(v20 + 65) = *(_BYTE *)(v10 + 64);
      *(_BYTE *)(v20 + 66) = *(_BYTE *)(v10 + 65);
      *(_DWORD *)(v20 + 68) = *(_DWORD *)(v10 + 68);
      *(_DWORD *)(v20 + 72) = *(_DWORD *)(v10 + 72);
      *(_DWORD *)(v20 + 76) = *(_DWORD *)(v10 + 76);
      *(_DWORD *)(v20 + 80) = *(_DWORD *)(v10 + 80);
      *(_DWORD *)(v20 + 84) = *(_DWORD *)(v10 + 84);
      *(_DWORD *)(v20 + 88) = *(_DWORD *)(v10 + 88);
      *(_DWORD *)(v20 + 92) = *(_DWORD *)(v10 + 92);
      *(_DWORD *)(v20 + 96) = *(_DWORD *)(v10 + 96);
    }
    if ( (*(_BYTE *)(v10 + 28) & 4) != 0 )
      *(_OWORD *)(v20 + 48) = *(_OWORD *)(v10 + 112);
    StorBuildMFNDManagementCommand((__int64)v25, 0, *(unsigned __int16 *)(v10 + 16), 0, 0x80u);
    v26 = StorSendMFNDCommand(a1, (void *)v20, 0LL, 0x80u, v25, v24, v23, (char)v22, (unsigned int)v22, v22, &v27);
    v15 = v26;
    v18 = v26;
    ExFreePoolWithTag((PVOID)v20, 0x464D6152u);
    v8 = v27;
LABEL_44:
    if ( v18 >= 0 )
      goto LABEL_17;
    goto LABEL_30;
  }
  v26 = -1073741670;
LABEL_30:
  v7 = 1;
LABEL_16:
  StorMapMFNDErrorToNtStatus(v8, &v26);
  v14 = v7 == 0;
  v15 = v26;
  if ( !v14 )
LABEL_17:
    StorMFNDAttemptSwitchToUserPrivilege(a1);
  StorLogMFNDSetChildPFSettings(a1, v6, v8, v15);
  return v15;
}
