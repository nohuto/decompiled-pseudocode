/*
 * XREFs of PfSnGetAppVersion @ 0x1404CFF74
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 */

__int64 __fastcall PfSnGetAppVersion(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  _QWORD v6[3]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
  {
    return (unsigned int)-1073741816;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 688);
    if ( v3 )
    {
      v6[0] = 16LL;
      v6[1] = 1LL;
      v6[2] = 0LL;
      v8 = 0LL;
      v7 = 0LL;
      v4 = LdrResSearchResource(v3, (unsigned int)v6, 3, 48, (__int64)&v7, (__int64)&v8, 0LL, 0LL);
      if ( v4 >= 0 )
      {
        if ( v8 < 0x5C
          || (unsigned __int16)RtlReadUShortFromUser(v7 + 4)
          || (unsigned __int16)RtlReadUShortFromUser(v7 + 2) != 52 )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = RtlReadULongFromUser(v7 + 52);
          *(_DWORD *)(a2 + 4) = RtlReadULongFromUser(v7 + 48);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
