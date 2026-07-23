/*
 * XREFs of HalpVerifySratEntryLengthAndFlag @ 0x140CB8ACC
 * Callers:
 *     HalpGetNumaProcMemoryCount @ 0x140CB7480 (HalpGetNumaProcMemoryCount.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpVerifySratEntryLengthAndFlag(unsigned __int8 *a1, char a2)
{
  char v3; // r10
  int v5; // eax
  unsigned int v6; // ecx
  bool v7; // zf

  v3 = 1;
  if ( !*a1 )
  {
    v5 = *((_DWORD *)a1 + 1);
    v6 = 16;
LABEL_15:
    v7 = (v5 & 1) == 0;
    goto LABEL_16;
  }
  if ( *a1 != 1 )
  {
    switch ( *a1 )
    {
      case 2u:
        v5 = *((_DWORD *)a1 + 3);
        v6 = a2 != 0 ? 24 : 16;
        break;
      case 3u:
        v5 = *(_DWORD *)(a1 + 10);
        v6 = 18;
        break;
      case 4u:
        v6 = 12;
        goto LABEL_17;
      default:
        if ( (unsigned int)*a1 - 5 >= 2 )
          return 0;
        v5 = *((_DWORD *)a1 + 6);
        v6 = 32;
        break;
    }
    goto LABEL_15;
  }
  v6 = 40;
  if ( (a1[28] & 1) == 0 )
    return 0;
  v7 = *((_QWORD *)a1 + 2) == 0LL;
LABEL_16:
  if ( v7 )
    return 0;
LABEL_17:
  if ( a1[1] < v6 )
    return 0;
  return v3;
}
