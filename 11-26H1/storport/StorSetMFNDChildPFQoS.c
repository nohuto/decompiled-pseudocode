/*
 * XREFs of StorSetMFNDChildPFQoS @ 0x140195250
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorBuildMFNDManagementCommand @ 0x1400C9C48 (StorBuildMFNDManagementCommand.c)
 *     StorLogMFNDSetChildPFQoS @ 0x1400CCD5C (StorLogMFNDSetChildPFQoS.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400CD670 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400CD71C (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFQoS(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r12
  char v7; // r13
  unsigned __int16 v8; // r15
  __int64 v9; // rbx
  __int16 v10; // ax
  int v11; // eax
  _WORD *Pool; // rax
  _WORD *v13; // rsi
  int v14; // eax
  _DWORD *v15; // r10
  unsigned __int8 v16; // r11
  int v17; // edi
  char v19; // [rsp+28h] [rbp-51h]
  _OWORD v20[7]; // [rsp+60h] [rbp-19h] BYREF
  int v21; // [rsp+E8h] [rbp+6Fh] BYREF
  int v22; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(v20, 0, 0x40uLL);
  v22 = 0;
  v8 = 0;
  *a3 = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x50u )
      {
        v9 = *(_QWORD *)(a2 + 24);
        v6 = v9 + 8;
        if ( *(_WORD *)(v9 + 8) == 1
          && *(_DWORD *)(v9 + 12) >= 0x48u
          && (v10 = *(_WORD *)(v9 + 16)) != 0
          && v10 != -1
          && *(_WORD *)(v9 + 24) == 1
          && *(_WORD *)(v9 + 26) >= 0x38u
          && ((v11 = *(_DWORD *)(v9 + 28), v11 == 1) || (unsigned int)(v11 - 2) <= 1) )
        {
          v7 = 1;
          v21 = StorMFNDAttemptSwitchToAdminPrivilege(a1);
          if ( v21 >= 0 )
          {
            Pool = (_WORD *)RaidAllocatePool(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
            v13 = Pool;
            if ( Pool )
            {
              *Pool |= 2u;
              v14 = *(_DWORD *)(v9 + 28);
              switch ( v14 )
              {
                case 1:
                  *((_BYTE *)v13 + 64) = 0;
                  break;
                case 2:
                  *((_BYTE *)v13 + 64) = 1;
                  break;
                case 3:
                  *((_BYTE *)v13 + 64) = 2;
                  break;
              }
              *((_BYTE *)v13 + 65) = *(_BYTE *)(v9 + 32);
              *((_BYTE *)v13 + 66) = *(_BYTE *)(v9 + 33);
              *((_DWORD *)v13 + 17) = *(_DWORD *)(v9 + 36);
              *((_DWORD *)v13 + 18) = *(_DWORD *)(v9 + 40);
              *((_DWORD *)v13 + 19) = *(_DWORD *)(v9 + 44);
              *((_DWORD *)v13 + 20) = *(_DWORD *)(v9 + 48);
              *((_DWORD *)v13 + 21) = *(_DWORD *)(v9 + 52);
              *((_DWORD *)v13 + 22) = *(_DWORD *)(v9 + 56);
              *((_DWORD *)v13 + 23) = *(_DWORD *)(v9 + 60);
              *((_DWORD *)v13 + 24) = *(_DWORD *)(v9 + 64);
              StorBuildMFNDManagementCommand((__int64)v20, 0, *(unsigned __int16 *)(v9 + 16), 0, 0x80u);
              v21 = StorSendMFNDCommand(a1, v13, 0LL, 0x80u, v20, v19, v16, (char)v15, (unsigned int)v15, v15, &v22);
              v17 = v21;
              ExFreePoolWithTag(v13, 0x464D6152u);
              v8 = v22;
              if ( v17 >= 0 )
                goto LABEL_28;
            }
            else
            {
              v21 = -1073741670;
            }
          }
        }
        else
        {
          v21 = -1073741811;
        }
      }
      else
      {
        v21 = -1073741585;
      }
    }
    else
    {
      v21 = -1073741436;
    }
  }
  else
  {
    v21 = -1073741637;
  }
  StorMapMFNDErrorToNtStatus(v8, &v21);
  v17 = v21;
  if ( v7 )
LABEL_28:
    StorMFNDAttemptSwitchToUserPrivilege(a1);
  StorLogMFNDSetChildPFQoS(a1, v6, v8, v17);
  return (unsigned int)v17;
}
