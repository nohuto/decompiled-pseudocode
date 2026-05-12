/*
 * XREFs of StorSetMFNDOperationInfo @ 0x14019627C
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetOperationInfo @ 0x1400CD4C0 (StorLogMFNDSetOperationInfo.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDOperationInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // edi
  __int64 v7; // rsi
  char v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // ecx
  char v12; // al
  unsigned int v13; // r15d
  char v14; // al
  char v15; // r9
  char v16; // r8
  char v18; // [rsp+28h] [rbp-51h]
  _OWORD v19[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+Fh]
  unsigned int v21; // [rsp+8Ch] [rbp+13h]
  int v22; // [rsp+E8h] [rbp+6Fh] BYREF
  int v23; // [rsp+F0h] [rbp+77h] BYREF

  LOBYTE(v3) = 0;
  v7 = 0LL;
  v8 = 0;
  memset_0(v19, 0, 0x40uLL);
  v23 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v22 = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x1Cu )
  {
    v22 = -1073741585;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(a2 + 24);
  v7 = v10 + 8;
  if ( *(_WORD *)(v10 + 8) != 1
    || *(_DWORD *)(v10 + 12) < 0x14u
    || *(_BYTE *)(v10 + 25)
    || *(_BYTE *)(v10 + 24) && !*(_DWORD *)(v10 + 20) )
  {
    v22 = -1073741811;
    goto LABEL_17;
  }
  v8 = 1;
  v22 = StorMFNDAttemptSwitchToAdminPrivilege(v9);
  if ( v22 < 0 )
    goto LABEL_17;
  v11 = *(_BYTE *)(v10 + 24) & 1;
  LODWORD(v19[0]) = v19[0] & 0xFFFFFF00 | 9;
  v20 = v20 & 0xFFFFFF00 | 0xD1;
  v12 = *(_BYTE *)(v10 + 20);
  v21 = v21 & 0xFFFFFFE0 | *(_BYTE *)(v10 + 25) & 0xF | (16 * v11);
  BYTE1(v21) = v12;
  v22 = StorSendMFNDCommand(a1, 0LL, 0LL, 0, v19, v18, 0, 1, 0, 0LL, &v23);
  v13 = v22;
  if ( v22 < 0 )
  {
LABEL_17:
    StorMapMFNDErrorToNtStatus(v23, &v22);
    v13 = v22;
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !*(_BYTE *)(v10 + 25) )
    *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) = *(_BYTE *)(v10 + 24) != 0;
  v14 = *(_BYTE *)(a1 + 111);
  if ( (v14 & 2) == 0 )
    *(_BYTE *)(a1 + 111) = v14 | 2;
LABEL_18:
  StorMFNDAttemptSwitchToUserPrivilege(a1);
LABEL_19:
  if ( v7 )
  {
    v15 = *(_BYTE *)(v7 + 17);
    v16 = *(_BYTE *)(v7 + 16);
    v3 = *(_DWORD *)(v7 + 12);
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
  StorLogMFNDSetOperationInfo(a1, v3, v16, v15, v23, v13);
  return v13;
}
