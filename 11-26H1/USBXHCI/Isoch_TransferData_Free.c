/*
 * XREFs of Isoch_TransferData_Free @ 0x140013E54
 * Callers:
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x140013290 (Isoch_Stage_CompleteTD.c)
 * Callees:
 *     <none>
 */

void __fastcall Isoch_TransferData_Free(__int64 a1)
{
  struct _MDL *v2; // rcx
  __int64 v3; // r8

  v2 = *(struct _MDL **)(a1 + 72);
  if ( v2 )
  {
    if ( (v3 = *(_QWORD *)(a1 + 48), *(_WORD *)(v3 + 2) != 8)
      && *(_WORD *)(v3 + 2) != 9
      && *(_WORD *)(v3 + 2) != 10
      && *(_WORD *)(v3 + 2) != 50
      && *(_WORD *)(v3 + 2) != 55
      && *(_WORD *)(v3 + 2) != 56
      && (unsigned int)*(unsigned __int16 *)(v3 + 2) - 57 < 2
      || v2 != *(struct _MDL **)(v3 + 48) )
    {
      IoFreeMdl(v2);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a1 + 16) = 0;
}
