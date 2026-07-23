/*
 * XREFs of sub_140553D6C @ 0x140553D6C
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     sub_140553E5C @ 0x140553E5C (sub_140553E5C.c)
 *     sub_140554F64 @ 0x140554F64 (sub_140554F64.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C7A754 @ 0x140C7A754 (sub_140C7A754.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

char __fastcall sub_140553D6C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
