/*
 * XREFs of sub_140053AA4 @ 0x140053AA4
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400ECECC @ 0x1400ECECC (sub_1400ECECC.c)
 *     sub_1400F604C @ 0x1400F604C (sub_1400F604C.c)
 * Callees:
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     sub_140053BCC @ 0x140053BCC (sub_140053BCC.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140053AA4(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  struct _MDL *v9; // rcx
  unsigned int *v10; // r14

  v1 = *(_BYTE **)(a1 - 16);
  v2 = 0LL;
  v3 = 0LL;
  if ( (v1[248] & 1) == 0 )
  {
    v7 = sub_140039148(v1);
    v2 = v7;
    if ( v7 )
    {
      v5 = *(unsigned int **)(v7 + 5600);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v7 + 880);
        goto LABEL_10;
      }
      return 3238002689LL;
    }
    return 3238002694LL;
  }
  v4 = sub_140053BCC();
  v3 = v4;
  if ( !v4 )
    return 3238002694LL;
  v5 = *(unsigned int **)(v4 + 1408);
  if ( !v5 )
    return 3238002689LL;
  v6 = *(_QWORD *)(v4 + 1144);
  do
  {
LABEL_10:
    v9 = (struct _MDL *)*((_QWORD *)v5 + 1);
    v10 = *(unsigned int **)v5;
    if ( v9 )
    {
      MmFreePagesFromMdl(v9);
      ExFreePoolWithTag(*((PVOID *)v5 + 1), 0);
    }
    if ( *((_QWORD *)v5 + 3) )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v6 + 8) + 24LL))(v6, v5[8], *((_QWORD *)v5 + 2));
    ExFreePoolWithTag(v5, 0);
    v5 = v10;
  }
  while ( v10 );
  if ( v2 )
  {
    *(_QWORD *)(v2 + 5600) = 0LL;
  }
  else if ( v3 )
  {
    *(_QWORD *)(v3 + 1408) = 0LL;
  }
  return 0LL;
}
