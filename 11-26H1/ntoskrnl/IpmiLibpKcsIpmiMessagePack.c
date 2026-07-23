/*
 * XREFs of IpmiLibpKcsIpmiMessagePack @ 0x140722D14
 * Callers:
 *     IpmiLibpKcsRequestAndReceive @ 0x140722904 (IpmiLibpKcsRequestAndReceive.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall IpmiLibpKcsIpmiMessagePack(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 result; // rax

  v2 = *(_WORD *)(a2 + 1) + 2;
  *a1 = v2;
  if ( v2 > 0x122u )
    return 3221225495LL;
  memmove((char *)a1 + 5, (const void *)(a2 + 3), v2);
  result = 0LL;
  a1[1] = 290;
  return result;
}
