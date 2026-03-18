/*
 * XREFs of ObpIsObjectPoolTagTraced @ 0x140ADF6E4
 * Callers:
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 * Callees:
 *     <none>
 */

char __fastcall ObpIsObjectPoolTagTraced(__int64 a1)
{
  __int64 i; // r8

  if ( (ObpTraceFlags & 0x10) == 0 )
    return 1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)&stru_140F132C8.AffinityPrimaryGroup; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)]
                   + 192) == *(_DWORD *)(stru_140F132C8.Timer.DueTime.QuadPart + 4 * i) )
      return 1;
  }
  return 0;
}
