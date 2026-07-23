/*
 * XREFs of HalpNumaQueryMemoryNumaAttributes @ 0x140594670
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaQueryProximityNode @ 0x1405948B0 (HalpNumaQueryProximityNode.c)
 */

__int64 __fastcall HalpNumaQueryMemoryNumaAttributes(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // rdi
  unsigned __int16 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v10 = 0;
  if ( HalpHmaConfig )
  {
    if ( a1 == 1 && a3 )
    {
      v6 = 0;
      v7 = *(_DWORD *)HalpHmaConfig;
      v8 = HalpHmaConfig + *(unsigned int *)(HalpHmaConfig + 12);
      while ( v6 < v7 )
      {
        if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v8 + 8), &v10) < 0 )
          return (unsigned int)-1072431089;
        if ( v10 == a2 )
        {
          if ( (*(_BYTE *)v8 & 1) != 0 )
          {
            if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v8 + 4), &v10) >= 0 )
            {
              *a3 = v10;
              return v3;
            }
            return (unsigned int)-1072431089;
          }
          return (unsigned int)-1073741275;
        }
        v8 += 12LL;
        ++v6;
      }
      return (unsigned int)-1073741275;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741595;
  }
}
