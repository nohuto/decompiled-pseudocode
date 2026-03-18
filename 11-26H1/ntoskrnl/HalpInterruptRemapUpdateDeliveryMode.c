/*
 * XREFs of HalpInterruptRemapUpdateDeliveryMode @ 0x1404E5344
 * Callers:
 *     HalpInterruptRemap @ 0x14057BD44 (HalpInterruptRemap.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptRemapUpdateDeliveryMode(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( *(_DWORD *)(a1 + 4) != 209 )
  {
    v2 = *(_DWORD *)(a2 + 24);
    if ( v2 == 6 || v2 == 5 )
      *(_DWORD *)(a2 + 12) |= 2u;
  }
}
