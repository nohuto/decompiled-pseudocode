/*
 * XREFs of PpmParkFreeParkNodes @ 0x1407E1C00
 * Callers:
 *     PpmParkFreeAllParkNodes @ 0x1407E1AE0 (PpmParkFreeAllParkNodes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmParkFreeParkNodes(char *P, unsigned int a2)
{
  char *v3; // rbx
  __int64 v4; // rbp
  void *v5; // rcx
  void *v6; // rcx
  unsigned int i; // esi
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  if ( P )
  {
    if ( a2 )
    {
      v3 = P + 1072;
      v4 = a2;
      do
      {
        if ( *(_QWORD *)v3 )
          ExFreePoolWithTag(*(PVOID *)v3, 0x704D5050u);
        v5 = (void *)*((_QWORD *)v3 + 22);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x704D5050u);
        v6 = (void *)*((_QWORD *)v3 + 21);
        if ( v6 )
          ExFreePoolWithTag(v6, 0x704D5050u);
        for ( i = 0; i < (unsigned __int8)*(v3 - 1062); ++i )
        {
          v8 = *(void **)(624LL * i + *((_QWORD *)v3 + 23) + 552);
          if ( v8 )
            ExFreePoolWithTag(v8, 0x704D5050u);
        }
        v9 = (void *)*((_QWORD *)v3 + 18);
        if ( v9 )
          ExFreePoolWithTag(v9, 0x704D5050u);
        v3 += 1264;
        --v4;
      }
      while ( v4 );
    }
    v10 = (void *)*((_QWORD *)P + 157);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x704D5050u);
    ExFreePoolWithTag(P, 0x704D5050u);
  }
}
