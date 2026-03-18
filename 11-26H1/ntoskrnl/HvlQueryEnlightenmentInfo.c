/*
 * XREFs of HvlQueryEnlightenmentInfo @ 0x14077A5A4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

__int64 __fastcall HvlQueryEnlightenmentInfo(void *a1, int a2, char a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  _BYTE Src[4]; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+2Ch] [rbp-1Ch]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a2 == 16 )
  {
    v8 = 0;
    Src[0] = HvlHypervisorConnected != 0;
    Src[1] = (HvlpRootFlags & 8) != 0;
    Src[2] = (HvlpFlags & 0x1000) != 0;
    Src[3] = HvlpSchedulerType;
    v9 = (unsigned int)HvlEnlightenments;
    v5 = 0;
    if ( a3 )
      RtlCopyToUser(a1, Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(a1, Src, 0x10uLL);
    *a4 = 16;
  }
  else
  {
    v5 = -1073741584;
    *a4 = 0;
  }
  return v5;
}
