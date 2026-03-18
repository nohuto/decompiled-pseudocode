/*
 * XREFs of BootPartitionGetInfo @ 0x140019B50
 * Callers:
 *     IoctlFirmwareProcess @ 0x14001B93C (IoctlFirmwareProcess.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     GetFirmwareGranularity @ 0x14001AEA4 (GetFirmwareGranularity.c)
 */

__int64 __fastcall BootPartitionGetInfo(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rax
  int v4; // r10d
  __int64 v5; // r11
  int v6; // r9d
  char *v7; // r8
  char v8; // r10
  unsigned int v9; // r9d
  __int64 v10; // rax
  unsigned int FirmwareGranularity; // eax
  __int64 v12; // r8
  _DWORD *v13; // r11
  _DWORD *v14; // rcx
  unsigned int v15; // ebx
  int ControllerMaxTransferSize; // eax
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v19);
  SrbDataBuffer[5] = v6;
  v7 = (char *)SrbDataBuffer + (unsigned int)SrbDataBuffer[11];
  if ( SrbDataBuffer[12] >= 8u )
  {
    if ( *(_DWORD *)v7 != v4 )
    {
      v8 = 6;
      SrbDataBuffer[5] = 3;
      v9 = -1056964597;
      goto LABEL_11;
    }
    v10 = *(_DWORD *)(*(_QWORD *)(v5 + 176) + 64LL) & 0x7FFF;
    v7[25] = *(int *)(*(_QWORD *)(v5 + 176) + 64LL) < 0;
    *((_QWORD *)v7 + 1) = v10;
    v7[24] = 2;
    FirmwareGranularity = GetFirmwareGranularity(v5);
    v14 = v13;
    if ( FirmwareGranularity )
    {
      *(_DWORD *)(v12 + 16) = FirmwareGranularity;
      v15 = (unsigned int)GetControllerMaxTransferSize(v13) % FirmwareGranularity;
      if ( v15 )
      {
        ControllerMaxTransferSize = GetControllerMaxTransferSize(v14) - v15;
LABEL_10:
        *(_DWORD *)(v17 + 20) = ControllerMaxTransferSize;
        goto LABEL_11;
      }
    }
    else
    {
      *(_DWORD *)(v12 + 16) = 4;
    }
    ControllerMaxTransferSize = GetControllerMaxTransferSize(v14);
    goto LABEL_10;
  }
  SrbDataBuffer[5] = 3;
  v8 = 21;
  v9 = -1056964602;
LABEL_11:
  result = v9;
  *(_BYTE *)(a2 + 3) = v8;
  return result;
}
