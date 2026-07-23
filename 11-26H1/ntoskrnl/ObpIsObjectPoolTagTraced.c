/*
 * XREFs of ObpIsObjectPoolTagTraced @ 0x140ADCF24
 * Callers:
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 * Callees:
 *     <none>
 */

char __fastcall ObpIsObjectPoolTagTraced(__int64 a1)
{
  __int64 i; // r8

  if ( (ObpTraceFlags & 0x10) == 0 )
    return 1;
  for ( i = 0LL; (unsigned int)i < HIDWORD(ObpStackTraceLock.UserAffinity); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)]
                   + 192) == *((_DWORD *)&ObpStackTraceLock.Timer.Header.WaitListHead.Flink->Flink + i) )
      return 1;
  }
  return 0;
}
