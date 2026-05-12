/*
 * XREFs of NvmeValidateProtocolCommandIoctl @ 0x140090310
 * Callers:
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeValidateProtocolCommandIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r9d
  __int64 v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  int v23; // edx
  unsigned __int64 v24; // r8
  int v25; // ecx
  char v26; // al

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = *(unsigned int *)(v2 + 16);
  if ( (unsigned int)v6 >= 0x54 )
  {
    if ( *(_QWORD *)v4 != 0x5400000001LL || *(_DWORD *)(v4 + 8) != 3 || *(_DWORD *)(v4 + 24) != 64 )
    {
      if ( a1 )
        StorEtwNvmeControllerEvent(
          a1,
          0,
          2LL,
          (__int64)L"Invalid protocol command version or type. Only NVMe protocol commands are supported at this time.",
          L"Version",
          *(_DWORD *)v4,
          L"Length",
          *(_DWORD *)(v4 + 4),
          L"ProtocolType",
          *(_DWORD *)(v4 + 8),
          L"CommandLength",
          *(_DWORD *)(v4 + 24),
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
      goto LABEL_71;
    }
    v7 = *(unsigned int *)(v2 + 16);
    if ( v6 < 0x90 )
    {
      if ( a1 )
        StorEtwNvmeControllerEvent(
          a1,
          0,
          2LL,
          (__int64)L"Invalid protocol command. Not enough input buffer for an NVMe protocol command.",
          L"InputLength",
          v6,
          L"CommandLength",
          64,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
      v3 = -1073741820;
      goto LABEL_72;
    }
    v8 = *(unsigned int *)(v4 + 28);
    if ( (_DWORD)v8 )
    {
      v9 = *(unsigned int *)(v4 + 44);
      if ( v9 < 0x90 || (v9 & 7) != 0 || *(unsigned int *)(v2 + 8) < v9 + v8 )
      {
        if ( a1 )
          StorEtwNvmeControllerEvent(
            a1,
            0,
            2LL,
            (__int64)L"Invalid protocol command. ErrorInfo buffer formatting is invalid.",
            L"ErrorInfoOffset",
            v9,
            L"ErrorInfoLength",
            *(_DWORD *)(v4 + 28),
            L"CommandLength",
            64,
            L"OutputLength",
            *(_DWORD *)(v2 + 8),
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0);
LABEL_71:
        v3 = -1073741811;
LABEL_72:
        *(_DWORD *)(v4 + 16) = 3;
        return v3;
      }
    }
    v10 = *(unsigned int *)(v4 + 32);
    if ( (_DWORD)v10 )
    {
      v11 = *(unsigned int *)(v4 + 48);
      if ( v11 < 0x90 || (v11 & 7) != 0 || v7 < v11 + v10 )
      {
        if ( a1 )
          StorEtwNvmeControllerEvent(
            a1,
            0,
            2LL,
            (__int64)L"Invalid protocol command. DataToDeviceTransfer buffer formatting is invalid (1).",
            L"DataToDeviceTransferLength",
            v10,
            L"DataToDeviceBufferOffset",
            v11,
            L"CommandLength",
            64,
            L"InputLength",
            v7,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0);
        goto LABEL_71;
      }
    }
    v12 = *(unsigned int *)(v4 + 36);
    if ( (_DWORD)v12 )
    {
      v13 = *(unsigned int *)(v4 + 52);
      if ( v13 < 0x90 || (v13 & 7) != 0 || *(unsigned int *)(v2 + 8) < v13 + v12 )
      {
        if ( a1 )
          StorEtwNvmeControllerEvent(
            a1,
            0,
            2LL,
            (__int64)L"Invalid protocol command. DataFromDeviceTransfer buffer formatting is invalid (1).",
            L"DataFromDeviceTransferLength",
            v12,
            L"DataFromDeviceBufferOffset",
            v13,
            L"CommandLength",
            *(_DWORD *)(v4 + 24),
            L"OutputLength",
            *(_DWORD *)(v2 + 8),
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0);
        goto LABEL_71;
      }
    }
    if ( (_DWORD)v10 )
    {
      v14 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v14 )
      {
        v15 = *(unsigned int *)(v4 + 44);
        v16 = *(unsigned int *)(v4 + 48);
        if ( v16 < v15 + v14 )
        {
          if ( a1 )
            StorEtwNvmeControllerEvent(
              a1,
              0,
              2LL,
              (__int64)L"Invalid protocol command. DataToDeviceTransfer buffer formatting is invalid (2).",
              L"DataToDeviceTransferLength",
              *(_DWORD *)(v4 + 32),
              L"DataToDeviceBufferOffset",
              v16,
              L"ErrorInfoLength",
              v14,
              L"ErrorInfoOffset",
              v15,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0);
          goto LABEL_71;
        }
      }
    }
    if ( (_DWORD)v12 )
    {
      v17 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v17 )
      {
        v18 = *(unsigned int *)(v4 + 44);
        v19 = *(unsigned int *)(v4 + 52);
        if ( v19 < v18 + v17 )
        {
          if ( a1 )
            StorEtwNvmeControllerEvent(
              a1,
              0,
              2LL,
              (__int64)L"Invalid protocol command. DataFromDeviceTransfer buffer formatting is invalid (2).",
              L"DataFromDeviceTransferLength",
              *(_DWORD *)(v4 + 36),
              L"DataFromDeviceBufferOffset",
              v19,
              L"ErrorInfoLength",
              v17,
              L"ErrorInfoOffset",
              v18,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0);
          goto LABEL_71;
        }
      }
      v20 = *(unsigned int *)(v4 + 32);
      if ( (_DWORD)v20 )
      {
        v21 = *(unsigned int *)(v4 + 48);
        v22 = *(unsigned int *)(v4 + 52);
        if ( v22 < v21 + v20 )
        {
          if ( a1 )
            StorEtwNvmeControllerEvent(
              a1,
              0,
              2LL,
              (__int64)L"Invalid protocol command. DataToDeviceTransfer buffer formatting is invalid (3).",
              L"DataToDeviceTransferLength",
              *(_DWORD *)(v4 + 32),
              L"DataToDeviceBufferOffset",
              v21,
              L"DataFromDeviceBufferOffset",
              v22,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0);
          goto LABEL_71;
        }
      }
    }
    if ( *(_DWORD *)(v4 + 8) != 3 )
      return v3;
    v23 = *(_DWORD *)(v4 + 56);
    if ( v23 == 1 )
    {
      if ( (unsigned __int8)*(_DWORD *)(v4 + 80) == 2 )
      {
        v24 = *(unsigned int *)(v4 + 36);
        if ( 4 * (*(unsigned __int16 *)(v4 + 122) | (unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 124) << 16)) + 4 > v24 )
        {
          if ( a1 )
            StorEtwNvmeControllerEvent(
              a1,
              0,
              2LL,
              (__int64)L"Invalid protocol command. NVMe command specifies transfer size bigger than supplied buffer.",
              L"DataFromDeviceTransferLength",
              v24,
              L"RequestedTransferLength",
              4 * *(_WORD *)(v4 + 122) + 4,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0);
          goto LABEL_71;
        }
      }
    }
    else if ( v23 != 2 )
    {
      if ( a1 )
        StorEtwNvmeControllerEvent(
          a1,
          0,
          2LL,
          (__int64)L"Invalid protocol command. Only Admin and NVM protocol commands are supported.",
          L"CommandSpecific",
          v23,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
      goto LABEL_71;
    }
    if ( g_InWinPE )
      return v3;
    if ( v23 == 1 )
    {
      v25 = *(_DWORD *)(v4 + 80);
      if ( (unsigned __int8)v25 >= 0xC0u )
        return v3;
    }
    else
    {
      v25 = *(_DWORD *)(v4 + 80);
      if ( (unsigned __int8)v25 >= 0x80u )
        return v3;
    }
    if ( (unsigned __int8)v25 != 2 )
    {
      if ( (unsigned __int8)v25 == 4 )
      {
        v26 = StorageTestFlags & 1;
LABEL_64:
        if ( v26 )
          return v3;
        goto LABEL_65;
      }
      if ( (unsigned __int8)v25 != 20 )
      {
LABEL_65:
        if ( a1 )
          StorEtwNvmeControllerEvent(
            a1,
            0,
            2LL,
            (__int64)L"Invalid protocol command. This protocol command is disallowed outside of WinPE environment.",
            L"Opcode",
            *(_DWORD *)(v4 + 80),
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0);
        v3 = -1056964602;
        goto LABEL_72;
      }
    }
    v26 = 1;
    goto LABEL_64;
  }
  if ( a1 )
    StorEtwNvmeControllerEvent(
      a1,
      0,
      2LL,
      (__int64)L"Invalid protocol command. Not enough input buffer to contain STORAGE_PROTOCOL_COMMAND.",
      L"InputLength",
      v6,
      L"MinimumLength",
      84,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
  if ( *(_DWORD *)(v2 + 16) >= 0x14u )
    *(_DWORD *)(v4 + 16) = 3;
  return (unsigned int)-1073741820;
}
