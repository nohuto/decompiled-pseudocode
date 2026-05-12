/*
 * XREFs of sub_1400697CC @ 0x1400697CC
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_140069314 @ 0x140069314 (sub_140069314.c)
 *     sub_14006AE00 @ 0x14006AE00 (sub_14006AE00.c)
 *     sub_14017A968 @ 0x14017A968 (sub_14017A968.c)
 * Callees:
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 */

void __fastcall sub_1400697CC(PVOID P)
{
  __int64 i; // r14
  __int64 v3; // rbp
  int v4; // eax
  unsigned __int16 *v5; // rdi
  void *v6; // rcx
  int v7; // eax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  if ( *((_QWORD *)P + 9) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 14); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)P + 9);
      v4 = sub_1400567A0();
      v5 = *(unsigned __int16 **)(v3 + 72 * i + 48);
      if ( v4 )
      {
        if ( v5 )
        {
          memset(v5, 0, *(unsigned int *)(v3 + 72 * i + 40));
          v6 = *(void **)(v3 + 72 * i + 48);
          if ( v6 )
          {
            ExFreePoolWithTag(v6, 0x72436152u);
            *(_QWORD *)(v3 + 72 * i + 48) = 0LL;
          }
        }
        *(_DWORD *)(v3 + 72 * i + 40) = 0;
      }
      else if ( v5 )
      {
        memset(v5 + 8, 0, v5[2]);
        KeSweepLocalCaches();
        ExFreePoolWithTag(*(PVOID *)(v3 + 72 * i + 48), 0x72436152u);
        *(_QWORD *)(v3 + 72 * i + 48) = 0LL;
      }
    }
    if ( (unsigned int)sub_1400567A0() )
      KeSweepLocalCaches();
    ExFreePoolWithTag(*((PVOID *)P + 9), 0x72436152u);
    *((_QWORD *)P + 9) = 0LL;
  }
  v7 = sub_1400567A0();
  v8 = (void *)*((_QWORD *)P + 4);
  if ( !v7 )
  {
    ExFreePoolWithTag(v8, 0x53446152u);
    v9 = (void *)*((_QWORD *)P + 5);
LABEL_23:
    ExFreePoolWithTag(v9, 0x72436152u);
    goto LABEL_24;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x53446152u);
  v10 = (void *)*((_QWORD *)P + 6);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x72436152u);
  v11 = (void *)*((_QWORD *)P + 5);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72436152u);
  v9 = (void *)*((_QWORD *)P + 13);
  if ( v9 )
    goto LABEL_23;
LABEL_24:
  ExFreePoolWithTag(P, 0x72436152u);
}
