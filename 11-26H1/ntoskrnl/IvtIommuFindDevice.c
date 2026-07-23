/*
 * XREFs of IvtIommuFindDevice @ 0x1405B1DE8
 * Callers:
 *     IvtCreateDevice @ 0x1405B1C90 (IvtCreateDevice.c)
 *     IvtFindDevice @ 0x1405B1D80 (IvtFindDevice.c)
 * Callees:
 *     IvtpGetNextInternalDeviceScope @ 0x14052DB54 (IvtpGetNextInternalDeviceScope.c)
 *     HalpIvtCheckIdPathMatch @ 0x140530258 (HalpIvtCheckIdPathMatch.c)
 */

char __fastcall IvtIommuFindDevice(__int64 a1, __int64 a2, char a3)
{
  char v3; // bl
  __int64 v5; // rdi
  __int64 v6; // rdx
  char *NextInternalDeviceScope; // rax
  char *v8; // rsi

  v3 = 0;
  v5 = a1;
  if ( *(_DWORD *)a2 == 1 && *(_DWORD *)(a1 + 252) == *(unsigned __int16 *)(a2 + 8) )
  {
    if ( (a3 & 1) != 0 && *(_BYTE *)(a1 + 268) || (a3 & 8) != 0 )
    {
      return 1;
    }
    else
    {
      v6 = 0LL;
      while ( 1 )
      {
        NextInternalDeviceScope = (char *)IvtpGetNextInternalDeviceScope(a1, v6);
        v8 = NextInternalDeviceScope;
        if ( !NextInternalDeviceScope )
          break;
        if ( HalpIvtCheckIdPathMatch(a2, NextInternalDeviceScope) )
          return 1;
        v6 = (__int64)v8;
        a1 = v5;
      }
    }
  }
  return v3;
}
