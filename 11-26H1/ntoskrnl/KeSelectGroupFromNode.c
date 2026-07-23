/*
 * XREFs of KeSelectGroupFromNode @ 0x1405F13CC
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KeFindNextSetRightGroupMask @ 0x1404BB7F8 (KeFindNextSetRightGroupMask.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KeSelectGroupFromNode(__int64 a1)
{
  __int128 v1; // xmm0
  char v2; // dl
  __int64 result; // rax
  unsigned __int16 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v1 = *(_OWORD *)(a1 + 16);
  v2 = *(_BYTE *)(a1 + 11) + 1;
  v5 = 0;
  v6 = v1;
  KeFindNextSetRightGroupMask((__int64)&v6, v2 & 0x7F, &v5);
  result = v5;
  *(_BYTE *)(a1 + 11) = v5;
  return result;
}
