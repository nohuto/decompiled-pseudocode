/*
 * XREFs of ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x14009B908
 * Callers:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x14009B614 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 * Callees:
 *     ?LooksLikeALocalHandle@@YA_NAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14009C498 (-LooksLikeALocalHandle@@YA_NAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ??$GenerateNonTerminatingUserModeWerReport@$00@@YAXKPEAXAEAY00_K@Z @ 0x14023D984 (--$GenerateNonTerminatingUserModeWerReport@$00@@YAXKPEAXAEAY00_K@Z.c)
 */

__int64 __fastcall CompositionInputObject::ValidateInputSink(const struct COMPOSITION_INPUT_SINK_V2 *a1)
{
  unsigned int v1; // ebx
  const struct COMPOSITION_INPUT_SINK_V2 *v2; // r9
  bool v3; // al
  __int64 v4; // rdx
  _DWORD *v5; // rcx
  __int64 v6; // r10
  char v7; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  bool v12; // al
  _DWORD *v13; // r9
  char v14; // r8
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = a1;
  if ( *(_DWORD *)a1 != 232 )
  {
    if ( *(_DWORD *)a1 != 296 )
      return (unsigned int)-1073741811;
    v3 = LooksLikeALocalHandle((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 232));
    v7 = v3;
    if ( *v5 > 4u || v3 )
      goto LABEL_5;
  }
  LooksLikeALocalHandle((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)v2 + 8));
  LooksLikeALocalHandle((const struct COMPOSITION_INPUT_QUEUE *)(v9 + 64));
  LooksLikeALocalHandle((const struct COMPOSITION_INPUT_QUEUE *)(v10 + 120));
  v12 = LooksLikeALocalHandle((const struct COMPOSITION_INPUT_QUEUE *)(v11 + 176));
  v7 = v12 | v14;
  if ( v13[2] > 4u || v13[16] > 4u || v13[30] > 4u || *v5 > 4u || v7 )
  {
LABEL_5:
    v1 = -1073741811;
    if ( v7 )
    {
      v15 = v6;
      GenerateNonTerminatingUserModeWerReport<1>(v5, v4, &v15);
    }
  }
  return v1;
}
