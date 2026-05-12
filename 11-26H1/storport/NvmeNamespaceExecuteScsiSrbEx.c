/*
 * XREFs of NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C
 * Callers:
 *     NvmeNamespaceScsiIrp @ 0x14010ECE8 (NvmeNamespaceScsiIrp.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAdapterMapBuffers @ 0x1400D9798 (NvmeAdapterMapBuffers.c)
 *     ScsiToNVMeCommand @ 0x140116B04 (ScsiToNVMeCommand.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     NvmeNamespaceScsiReadCapacityRequest @ 0x1401182B4 (NvmeNamespaceScsiReadCapacityRequest.c)
 */

__int64 __fastcall NvmeNamespaceExecuteScsiSrbEx(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rbx
  _BYTE *v7; // rdi
  char v8; // r11
  unsigned int v9; // r10d
  __int64 i; // r9
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  _BYTE *v14; // rcx
  char v15; // r11
  unsigned int v16; // r14d
  __int64 j; // r10
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  int v20; // ecx
  int v21; // ecx
  char v22; // cl
  unsigned int v23; // edi
  int CapacityRequest; // eax
  __int64 *v25; // r14
  char v26; // r9
  __int64 ExtendedCommand; // rax
  char v28; // cl
  char v29; // cl
  unsigned int v30; // ecx

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v7 = (_BYTE *)(a2 + 72);
    LOBYTE(a2) = *(_BYTE *)(a2 + 10);
    goto LABEL_39;
  }
  v7 = 0LL;
  v8 = 0;
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v9 = *(_DWORD *)(a2 + 56);
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = *(unsigned int *)(v5 + 4 * i + 120);
      if ( (unsigned int)v11 >= 0x80 )
      {
        a3 = *(unsigned int *)(v5 + 16);
        if ( (unsigned int)v11 < (unsigned int)a3 )
        {
          a2 = (unsigned int)v11;
          v12 = *(_DWORD *)(v11 + v5) - 64;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 && a2 + 40 <= a3 )
              {
                v14 = (_BYTE *)(a2 + v5 + 32);
                if ( !*(_DWORD *)(a2 + v5 + 12) )
                  v14 = v7;
                v7 = v14;
                break;
              }
            }
            else if ( a2 + 56 <= a3 )
            {
              v8 = 1;
              if ( !*(_BYTE *)(a2 + v5 + 10) )
                break;
              v7 = (_BYTE *)(a2 + v5 + 24);
            }
          }
          else if ( a2 + 40 <= a3 )
          {
            if ( *(_BYTE *)(a2 + v5 + 10) )
              v7 = (_BYTE *)(a2 + v5 + 24);
            break;
          }
          if ( v8 )
            break;
        }
      }
    }
  }
  v15 = 0;
  LOBYTE(a2) = 0;
  if ( !*(_DWORD *)(v5 + 20) )
  {
    v16 = *(_DWORD *)(v5 + 56);
    for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
    {
      v18 = *(unsigned int *)(v5 + 4 * j + 120);
      if ( (unsigned int)v18 >= 0x80 )
      {
        v19 = *(unsigned int *)(v5 + 16);
        if ( (unsigned int)v18 < (unsigned int)v19 )
        {
          a3 = (unsigned int)v18;
          v20 = *(_DWORD *)(v18 + v5) - 64;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 == 1 && a3 + 40 <= v19 )
                break;
            }
            else if ( a3 + 56 <= v19 )
            {
              LOBYTE(a2) = *(_BYTE *)(a3 + v5 + 10);
              v15 = 1;
            }
          }
          else if ( a3 + 40 <= v19 )
          {
            LOBYTE(a2) = *(_BYTE *)(a3 + v5 + 10);
            break;
          }
          if ( v15 )
            break;
        }
      }
    }
  }
LABEL_39:
  if ( v7 && (unsigned __int8)a2 >= 6u )
  {
    v22 = *v7;
    if ( *v7 == 0xA2 || v22 == -75 )
      goto LABEL_51;
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 && *(_DWORD *)(a1 + 64) )
    {
      if ( v22 == -96 )
      {
        LOBYTE(a3) = 5;
        LOBYTE(a2) = 6;
        SetSrbSenseData(v5, a2, a3, 32, 0);
        *(_QWORD *)(v4 + 56) = 0LL;
        return (unsigned int)-1073741808;
      }
      if ( v22 == 37 || v22 == -98 )
      {
        CapacityRequest = NvmeNamespaceScsiReadCapacityRequest(a1, a2, v5, v7);
        v25 = (__int64 *)(a1 + 16);
        goto LABEL_63;
      }
LABEL_51:
      v25 = (__int64 *)(a1 + 16);
      ExtendedCommand = NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16));
      v3 = (_DWORD *)ExtendedCommand;
      if ( !ExtendedCommand )
      {
        v23 = -1073741670;
        *(_BYTE *)(v5 + 3) = RaidNtStatusToSrbStatus(-1073741670);
        return v23;
      }
      ScsiToNVMeCommand(a1, v5, v4, ExtendedCommand);
      v28 = *(_BYTE *)(v5 + 3);
      if ( (v28 & 0x3F) != 0 )
      {
        v23 = RaidSrbStatusToNtStatus(v28);
        if ( (v23 & 0x80000000) == 0 )
          goto LABEL_65;
        goto LABEL_64;
      }
      v29 = *v7;
      if ( *v7 == 66 || (unsigned __int8)(v29 - 94) <= 1u || v29 == 53 || v29 == -111 )
        v30 = *(_DWORD *)(*(_QWORD *)v3 + 4256LL) & 0xFFFFFFFE;
      else
        v30 = *(_DWORD *)(*(_QWORD *)v3 + 4256LL) | 1;
      *(_DWORD *)(*(_QWORD *)v3 + 4256LL) = v30;
      *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x20u;
      *(_QWORD *)(*(_QWORD *)v3 + 4184LL) = v4;
      *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = NvmeNamespaceExecuteScsiSrbComplete;
      *(_QWORD *)(*(_QWORD *)v3 + 4200LL) = v3;
      *(_QWORD *)(*(_QWORD *)v3 + 4216LL) = a1;
      NvmeAdapterMapBuffers(*(_DWORD **)(*v25 + 128), v4);
      CapacityRequest = NvmeControllerProcessCommand(*v25, v3);
LABEL_63:
      v23 = CapacityRequest;
      if ( CapacityRequest >= 0 )
        return v23;
LABEL_64:
      if ( !v3 )
        return v23;
LABEL_65:
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v3 + 4256LL), 3u);
      NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)*v25, (__int64)v3);
      return v23;
    }
    v26 = 37;
    LOBYTE(a2) = 8;
  }
  else
  {
    v26 = 32;
    LOBYTE(a2) = 6;
  }
  LOBYTE(a3) = 5;
  SetSrbSenseData(v5, a2, a3, v26, 0);
  return 3221225488LL;
}
