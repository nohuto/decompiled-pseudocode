/*
 * XREFs of IoctlFirmwareProcess @ 0x14001B93C
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     FirmwareGetInfo @ 0x140005A10 (FirmwareGetInfo.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     BootPartitionActivate @ 0x140019528 (BootPartitionActivate.c)
 *     BootPartitionDownload @ 0x140019764 (BootPartitionDownload.c)
 *     BootPartitionGetInfo @ 0x140019B50 (BootPartitionGetInfo.c)
 *     FirmwareActivate @ 0x14001A3D8 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x14001A63C (FirmwareDownload.c)
 */

__int64 __fastcall IoctlFirmwareProcess(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int Info; // eax
  __int64 v8; // rdx
  unsigned int v9; // edi
  int v10; // eax
  unsigned int *v12; // [rsp+110h] [rbp+18h] BYREF

  v12 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v12);
  v5 = *v12;
  if ( SrbDataBuffer[4] != 1771392 )
  {
    if ( (unsigned int)v5 < 0x34 )
      goto LABEL_3;
    v8 = (unsigned int)SrbDataBuffer[11];
    if ( v5 >= v8 + (unsigned __int64)(unsigned int)SrbDataBuffer[12] )
    {
      if ( SrbDataBuffer[7] != 1 || (SrbDataBuffer[10] & 1) == 0 )
      {
        SrbDataBuffer[5] = 3;
        *(_BYTE *)(a2 + 3) = 40;
        goto LABEL_32;
      }
      if ( (unsigned int)v8 >= 0x34 && (v8 & 3) == 0 )
      {
        switch ( SrbDataBuffer[9] )
        {
          case 1:
            Info = BootPartitionDownload(a1, a2);
            break;
          case 2:
            Info = BootPartitionActivate(a1, a2);
            break;
          case 3:
            Info = BootPartitionGetInfo(a1, a2);
            break;
          default:
            goto LABEL_13;
        }
        goto LABEL_29;
      }
    }
LABEL_5:
    SrbDataBuffer[5] = 3;
    goto LABEL_3;
  }
  if ( (unsigned int)v5 >= 0x34 )
  {
    v6 = (unsigned int)SrbDataBuffer[11];
    if ( v5 >= v6 + (unsigned __int64)(unsigned int)SrbDataBuffer[12]
      && SrbDataBuffer[7]
      && (SrbDataBuffer[10] & 1) != 0
      && (unsigned int)v6 >= 0x34
      && (v6 & 3) == 0 )
    {
      switch ( SrbDataBuffer[9] )
      {
        case 1:
          Info = FirmwareGetInfo(a1, a2);
          break;
        case 2:
          Info = FirmwareDownload(a1, a2);
          break;
        case 3:
          Info = FirmwareActivate(a1, a2);
          break;
        default:
LABEL_13:
          *(_BYTE *)(a2 + 3) = 6;
          goto LABEL_32;
      }
LABEL_29:
      v9 = Info;
      v10 = SrbDataBuffer[4];
      if ( !v9 )
        return v9;
      goto LABEL_33;
    }
    goto LABEL_5;
  }
LABEL_3:
  *(_BYTE *)(a2 + 3) = 21;
LABEL_32:
  v10 = SrbDataBuffer[4];
  v9 = -1056964602;
LABEL_33:
  if ( v10 == 1771392 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      goto LABEL_37;
  }
  else if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
  {
LABEL_37:
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  }
  return v9;
}
