/*
 * XREFs of NVMeFirmwareActivateCompletion @ 0x14001D5A0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     NVMeControllerAsyncReset @ 0x140010870 (NVMeControllerAsyncReset.c)
 *     FirmwareActivate @ 0x14001A3D8 (FirmwareActivate.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x14001CD3C (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 */

char __fastcall NVMeFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 SrbExtension; // r14
  char result; // al
  char v7; // bp
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int16 v10; // dx
  unsigned int v11; // r8d
  __int16 v12; // ax
  __int16 v13; // dx
  int v14; // r8d
  char v15; // dl
  unsigned int v16; // eax
  __int16 v17; // r8
  int v18; // eax
  int v19; // eax

  SrbExtension = GetSrbExtension(a2);
  result = 24;
  v7 = 1;
  v8 = 64LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v8 = 24LL;
  v9 = *(_QWORD *)(v8 + a2);
  if ( !v4 )
  {
    *(_DWORD *)(v9 + 20) = 16;
    *(_BYTE *)(a2 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
    goto LABEL_34;
  }
  v10 = *(_WORD *)(v4 + 14);
  v11 = v10;
  v12 = v10 & 0xE00;
  v13 = (unsigned __int8)(v10 >> 1);
  if ( !v12 && !v13 )
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
    {
LABEL_17:
      *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_32;
    }
    if ( IsFirmwareActivateWithoutResetEnabled(a1) && (v14 & 0x400) == 0 )
    {
      *(_DWORD *)(v9 + 20) = 0;
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)NVMeQueueWorkItem(a1, NVMeControllerIdentifyWorkItem, 0LL) )
        *(_DWORD *)(a1 + 24) |= 0x20u;
      goto LABEL_32;
    }
    *(_DWORD *)(a1 + 24) = v14 & 0xFF7FFBDF | 0x800020;
    v15 = 0;
    goto LABEL_13;
  }
  if ( v12 == 512 )
  {
    v16 = v11 >> 1;
    if ( (unsigned __int8)(v11 >> 1) == 7 )
    {
      *(_DWORD *)(v9 + 20) = 7;
    }
    else
    {
      if ( (unsigned __int8)v16 == 11 )
      {
LABEL_16:
        *(_DWORD *)(v9 + 20) = 32;
        goto LABEL_17;
      }
      if ( (unsigned int)(unsigned __int8)v16 - 16 < 2 )
      {
        *(_DWORD *)(a1 + 24) |= 0x800020u;
        v15 = v13 == 16;
LABEL_13:
        if ( NVMeControllerAsyncReset(a1, v15, (__int64)NVMeFirmwareActivateCompletionAfterReset, a2) )
        {
          v7 = 0;
          goto LABEL_32;
        }
        *(_DWORD *)(a1 + 24) &= ~0x800000u;
        goto LABEL_16;
      }
      if ( IsFirmwareActivateWithoutResetEnabled(a1) )
      {
        v18 = *(_DWORD *)(a1 + 24);
        if ( (v18 & 0x10400) == 0 )
        {
          *(_DWORD *)(a1 + 24) = v18 | 0x400;
          v7 = 0;
          FirmwareActivate(a1, a2);
          ProcessCommand(a1, a2);
          goto LABEL_32;
        }
      }
      v19 = 6;
      if ( (v17 & 0x1FE) != 0xC )
        v19 = 16;
      *(_DWORD *)(v9 + 20) = v19;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 20) = 16;
  }
  *(_BYTE *)(a2 + 3) = 4;
LABEL_32:
  result = 8 * v7;
  *(_BYTE *)(SrbExtension + 4225) = (8 * v7) | *(_BYTE *)(SrbExtension + 4225) & 0xF7;
  if ( v7 )
    *(_DWORD *)(a1 + 24) &= ~0x800u;
LABEL_34:
  *(_DWORD *)(a1 + 24) &= ~0x10000u;
  if ( *(_BYTE *)(a2 + 3) != 1 && (*(_BYTE *)(a1 + 21) & 2) != 0 )
    return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  return result;
}
