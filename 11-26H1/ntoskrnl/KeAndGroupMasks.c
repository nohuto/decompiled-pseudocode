/*
 * XREFs of KeAndGroupMasks @ 0x1404CBAE0
 * Callers:
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KeAndGroupMasks(__int128 *a1, _QWORD *a2, _OWORD *a3)
{
  unsigned __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-28h]

  v4 = *a1;
  result = *a2 | 0xFFFFFFFF00000000uLL;
  *(_QWORD *)&v4 = result & v4;
  *a3 = v4;
  return result;
}
