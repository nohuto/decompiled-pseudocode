/*
 * XREFs of sub_1405518EC @ 0x1405518EC
 * Callers:
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     sub_1405519DC @ 0x1405519DC (sub_1405519DC.c)
 *     sub_140552AE4 @ 0x140552AE4 (sub_140552AE4.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C74754 @ 0x140C74754 (sub_140C74754.c)
 *     sub_140C8113C @ 0x140C8113C (sub_140C8113C.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140C7B6F0 (KeGuardDispatchICall.c)
 */

char __fastcall sub_1405518EC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int8 v5; // cl
  unsigned __int8 i; // al
  char result; // al
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1032))(a2, a3, v8);
  *(_DWORD *)a4 = v8[4] ^ v8[0];
  *(_DWORD *)(a4 + 4) = v8[5] ^ v8[1];
  *(_DWORD *)(a4 + 8) = v8[6] ^ v8[2];
  *(_DWORD *)(a4 + 12) = v8[7] ^ v8[3];
  v5 = *(_BYTE *)(a4 + 15);
  for ( i = v5; ; i ^= v5 )
  {
    v5 >>= 7;
    if ( !v5 )
      break;
  }
  result = i & 0x7F;
  *(_BYTE *)(a4 + 15) = result;
  return result;
}
