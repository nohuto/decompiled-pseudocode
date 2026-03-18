/*
 * XREFs of sub_140516AFC @ 0x140516AFC
 * Callers:
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     sub_140516BE4 @ 0x140516BE4 (sub_140516BE4.c)
 *     sub_140517CE8 @ 0x140517CE8 (sub_140517CE8.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BC2A04 @ 0x140BC2A04 (sub_140BC2A04.c)
 *     sub_140BCE96C @ 0x140BCE96C (sub_140BCE96C.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140BC9A60 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_140516AFC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1024))(a2, a3, v8);
  for ( i = 0LL; i < 4; ++i )
    *(_DWORD *)(a4 + 4 * i) = v8[i] ^ v8[i + 4];
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}
