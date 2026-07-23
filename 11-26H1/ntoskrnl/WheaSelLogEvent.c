/*
 * XREFs of WheaSelLogEvent @ 0x1406D8594
 * Callers:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 * Callees:
 *     WheaSelLogErrorPkt @ 0x1406D84A8 (WheaSelLogErrorPkt.c)
 *     WheapLogIpmiSELEvent @ 0x1406DB4B0 (WheapLogIpmiSELEvent.c)
 */

__int64 __fastcall WheaSelLogEvent(char *Src)
{
  int v1; // edx
  size_t v3; // rdx
  char *v4; // rcx
  int v5; // ecx

  v1 = *((_DWORD *)Src + 6);
  if ( (v1 & 0x10) != 0 )
  {
    *((_DWORD *)Src + 4) = 1280201291;
    v3 = *((unsigned int *)Src + 7);
    v4 = Src + 32;
    return WheapLogIpmiSELEvent(v4, v3);
  }
  v5 = *((_DWORD *)Src + 5);
  if ( v5 != -2147483643 )
  {
    v3 = *((unsigned int *)Src + 7);
    if ( v5 == -2147483606 )
    {
      v4 = Src + 32;
    }
    else
    {
      v3 = (unsigned int)(v3 + 32);
      v4 = Src;
    }
    return WheapLogIpmiSELEvent(v4, v3);
  }
  return WheaSelLogErrorPkt((__int64)Src);
}
