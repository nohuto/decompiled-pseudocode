/*
 * XREFs of NVMeFirmwareActivateCompletionAfterReset @ 0x14001D840
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 */

__int64 __fastcall NVMeFirmwareActivateCompletionAfterReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r8
  char v6; // r9
  __int64 v7; // r11
  __int64 v8; // rdx

  SrbExtension = GetSrbExtension(a3);
  v8 = 64LL;
  if ( *(_BYTE *)(v5 + 2) != 40 )
    v8 = 24LL;
  *(_DWORD *)(*(_QWORD *)(v8 + v5) + 20LL) = v6 == 0 ? 0x20 : 0;
  *(_DWORD *)(v7 + 24) &= 0xFF7FF7FF;
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  *(_BYTE *)(v5 + 3) = 1;
  return NVMeRequestComplete(v7, a3, 0);
}
