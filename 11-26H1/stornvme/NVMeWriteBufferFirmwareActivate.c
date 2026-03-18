/*
 * XREFs of NVMeWriteBufferFirmwareActivate @ 0x140002940
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x140020630 (NVMeWriteBufferFirmwareActivateCompletion.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x14001CD3C (IsFirmwareActivateWithoutResetEnabled.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareActivate(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int8 v7; // bl
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // ecx

  SrbExtension = GetSrbExtension(a2);
  v7 = *(_BYTE *)(v4 + 2);
  v8 = SrbExtension;
  v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1560) + 260LL);
  if ( v7 <= (unsigned __int8)(((unsigned __int8)v9 >> 1) & 7) )
  {
    *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
    SrbAssignQueueId(a1, v6);
    if ( !(unsigned __int8)IsFirmwareActivateWithoutResetEnabled(a1) || (v11 = 24, (*(_DWORD *)(a1 + 24) & 0x400) != 0) )
      v11 = 8;
    v12 = *(_DWORD *)(v8 + 4136) & 0xFFFFFFF8;
    *(_BYTE *)(v8 + 4096) = 16;
    *(_DWORD *)(v8 + 4136) = v11 | (v12 ^ v7 & 7) & 0xFFFFFFC7;
    result = 0LL;
    *(_QWORD *)(v8 + 4192) = NVMeWriteBufferFirmwareActivateCompletion;
  }
  else
  {
    LOBYTE(v5) = 36;
    LOBYTE(v4) = 5;
    LOBYTE(v9) = 6;
    NVMeSetSenseData(v6, v9, v4, v5);
    return 3238002694LL;
  }
  return result;
}
