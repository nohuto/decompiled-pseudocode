/*
 * XREFs of NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x140020860
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareActivateCompletionAfterReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r10

  SrbExtension = GetSrbExtension(a3);
  *(_DWORD *)(v4 + 24) &= ~0x800u;
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  *(_BYTE *)(v5 + 3) = 1;
  return NVMeRequestComplete(v4, v6, 0);
}
