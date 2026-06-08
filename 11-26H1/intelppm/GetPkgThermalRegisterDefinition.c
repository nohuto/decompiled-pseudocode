/*
 * XREFs of GetPkgThermalRegisterDefinition @ 0x14002B9B4
 * Callers:
 *     InitPkgThermalStats @ 0x14002BA80 (InitPkgThermalStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPkgThermalRegisterDefinition(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 Pool2; // rax
  unsigned int v4; // r8d
  __int64 v5; // r11
  _QWORD *v6; // r10
  __int64 v7; // rcx

  v1 = (unsigned __int8)byte_140018010;
  Pool2 = ExAllocatePool2(256LL, 32 * (unsigned int)(unsigned __int8)byte_140018010 + 16, 1919119952LL);
  v4 = 0;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = v1;
    if ( (_DWORD)v1 )
    {
      v5 = 0LL;
      v6 = (_QWORD *)(Pool2 + 16);
      do
      {
        v6[1] = (unsigned int)dword_140018008;
        v7 = *(_QWORD *)&off_140018018[v5];
        v5 += 8LL;
        *v6 = v7;
        v6 += 4;
        *((_DWORD *)v6 - 4) = LOBYTE(off_140018018[v5 - 4]);
        *((_DWORD *)v6 - 3) = *((unsigned __int8 *)&off_140018018[v5 - 3] - 1);
        *((_DWORD *)v6 - 2) = *(_DWORD *)&off_140018018[v5 - 2];
        --v1;
      }
      while ( v1 );
    }
    *a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
