/*
 * XREFs of Amd64GetEventSelectDef @ 0x1405A6640
 * Callers:
 *     Amd64AddProfileSource @ 0x1405A5810 (Amd64AddProfileSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Amd64GetEventSelectDef(__int16 *a1)
{
  __int64 v1; // rdx
  __int16 v2; // r8
  unsigned int CpuType; // r9d
  unsigned int v4; // r9d
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v1 = 0LL;
  v2 = *a1;
  CpuType = (unsigned __int8)KeGetCurrentPrcb()->CpuType;
  switch ( *((_BYTE *)a1 + 7) )
  {
    case 0:
      return (unsigned __int8)v2 | ((*((unsigned __int8 *)a1 + 2) | ((*((_BYTE *)a1 + 5) & 1 | (32
                                                                                              * (a1[2] & 1 | (2 * (v2 & 0xF00 | *((_BYTE *)a1 + 3) & 0xF | ((unsigned __int64)(a1[3] & 3) << 16)))))) << 10) | 0x300) << 8);
    case 1:
      v7 = v2 & 0xF00;
      if ( CpuType > 0x16 )
        v7 |= (unsigned __int64)(*a1 & 0x3000) << 23;
      return (unsigned __int8)v2 | (v7 << 24) | ((unsigned __int64)*((unsigned __int8 *)a1 + 2) << 8);
    case 2:
      v4 = CpuType - 22;
      if ( v4 )
      {
        v5 = (unsigned __int8)v2;
        if ( v4 == 1 )
          v6 = 0xFF0F000000000000uLL;
        else
          v6 = 0x300C00000000000LL;
      }
      else
      {
        v6 = (unsigned __int8)v2;
        v5 = (unsigned __int64)(v2 & 0xF00) << 24;
      }
      return ((unsigned __int64)*((unsigned __int8 *)a1 + 2) << 8) | v6 | v5;
  }
  return v1;
}
