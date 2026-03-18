/*
 * XREFs of ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140058D78
 * Callers:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x140058A80 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 * Callees:
 *     ?LooksLikeALocalHandle@@YA_NAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x140058E90 (-LooksLikeALocalHandle@@YA_NAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ??$GenerateNonTerminatingUserModeWerReport@$00@@YAXKPEAXAEAY00_K@Z @ 0x140248114 (--$GenerateNonTerminatingUserModeWerReport@$00@@YAXKPEAXAEAY00_K@Z.c)
 */

__int64 __fastcall CompositionInputObject::ValidateInputSink(const struct COMPOSITION_INPUT_SINK_V2 *a1)
{
  unsigned int v1; // ebx
  const struct COMPOSITION_INPUT_SINK_V2 *v2; // rdx
  _DWORD *v3; // rcx
  char v4; // r9
  __int64 v5; // r10
  _DWORD *v7; // rsi
  const struct COMPOSITION_INPUT_QUEUE *v8; // rdi
  const struct COMPOSITION_INPUT_QUEUE *v9; // r11
  const struct COMPOSITION_INPUT_QUEUE *v10; // r8
  bool v11; // al
  _DWORD *v12; // r11
  _DWORD *v13; // r8
  char v14; // r9
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = a1;
  if ( *(_DWORD *)a1 != 232 )
  {
    if ( *(_DWORD *)a1 != 296 )
      return (unsigned int)-1073741811;
    v4 = LooksLikeALocalHandle((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 232));
    if ( *v3 > 4u || v4 )
      goto LABEL_5;
  }
  v7 = (_DWORD *)((char *)v2 + 176);
  v8 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)v2 + 120);
  LooksLikeALocalHandle((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)v2 + 176));
  LooksLikeALocalHandle(v8);
  LooksLikeALocalHandle(v9);
  v11 = LooksLikeALocalHandle(v10);
  LOBYTE(v2) = v11 | (unsigned __int8)v2;
  v4 = (unsigned __int8)v2 | v14;
  if ( *v13 > 4u || *v12 > 4u || *(_DWORD *)v8 > 4u || *v7 > 4u || v4 )
  {
LABEL_5:
    v1 = -1073741811;
    if ( v4 )
    {
      v15 = v5;
      GenerateNonTerminatingUserModeWerReport<1>(v3, v2, &v15);
    }
  }
  return v1;
}
