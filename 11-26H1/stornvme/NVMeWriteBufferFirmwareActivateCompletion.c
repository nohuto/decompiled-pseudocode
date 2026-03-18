/*
 * XREFs of NVMeWriteBufferFirmwareActivateCompletion @ 0x140020630
 * Callers:
 *     <none>
 * Callees:
 *     NVMeWriteBufferFirmwareActivate @ 0x140002940 (NVMeWriteBufferFirmwareActivate.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     GetSrbScsiData @ 0x14000EE70 (GetSrbScsiData.c)
 *     NVMeControllerAsyncReset @ 0x140010870 (NVMeControllerAsyncReset.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x14001CD3C (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 */

char __fastcall NVMeWriteBufferFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r8
  __int64 v6; // r14
  char v7; // si
  unsigned __int16 v8; // dx
  unsigned int v9; // eax
  __int16 v10; // cx
  __int16 v11; // dx
  __int64 v12; // r9
  char v13; // dl
  unsigned int v14; // eax
  int v16; // [rsp+90h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  v7 = 1;
  if ( !v5 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
    return SrbExtension;
  }
  v8 = *(_WORD *)(v5 + 14);
  v9 = v8;
  v10 = v8 & 0xE00;
  v11 = (unsigned __int8)(v8 >> 1);
  if ( !v10 && !v11 )
  {
    if ( IsFirmwareActivateWithoutResetEnabled(a1) && (*(_DWORD *)(a1 + 24) & 0x400) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)NVMeQueueWorkItem(a1, (__int64)NVMeControllerIdentifyWorkItem, 0LL, v12) )
      {
        *(_DWORD *)(a1 + 24) |= 0x20u;
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
          StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
      }
      goto LABEL_23;
    }
    *(_DWORD *)(a1 + 24) |= 0x20u;
    *(_DWORD *)(a1 + 24) &= ~0x400u;
    v13 = 0;
LABEL_11:
    if ( NVMeControllerAsyncReset(a1, v13, (__int64)NVMeWriteBufferFirmwareActivateCompletionAfterReset, a2) )
    {
      v7 = 0;
      goto LABEL_23;
    }
    goto LABEL_13;
  }
  if ( v10 != 512 )
    goto LABEL_22;
  v14 = v9 >> 1;
  if ( (unsigned __int8)v14 == 7 )
    goto LABEL_22;
  if ( (unsigned __int8)v14 == 11 )
  {
LABEL_13:
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_23;
  }
  if ( (unsigned int)(unsigned __int8)v14 - 16 < 2 )
  {
    *(_DWORD *)(a1 + 24) |= 0x20u;
    v13 = v11 == 16;
    goto LABEL_11;
  }
  if ( !IsFirmwareActivateWithoutResetEnabled(a1) || (*(_DWORD *)(a1 + 24) & 0x400) != 0 )
  {
LABEL_22:
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    GetSrbScsiData(a2, &v16, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x400u;
    v7 = 0;
    NVMeWriteBufferFirmwareActivate(a1, a2);
    ProcessCommand(a1, a2);
  }
LABEL_23:
  LOBYTE(SrbExtension) = 8 * v7;
  *(_BYTE *)(v6 + 4225) = (8 * v7) | *(_BYTE *)(v6 + 4225) & 0xF7;
  if ( v7 )
    *(_DWORD *)(a1 + 24) &= ~0x800u;
  return SrbExtension;
}
