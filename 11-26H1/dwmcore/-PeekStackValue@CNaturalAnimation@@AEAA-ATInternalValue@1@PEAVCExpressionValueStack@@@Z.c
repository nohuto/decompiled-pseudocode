/*
 * XREFs of ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18027BD60
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::PeekStackValue(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v3 = *(_DWORD *)(a1 + 152);
  switch ( v3 )
  {
    case 18:
      v8 = *(unsigned int *)(a3 + 96);
      if ( (_DWORD)v8 )
        v8 = (unsigned int)(v8 - 1);
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)a3 + 72 * v8);
      break;
    case 35:
      v7 = *(unsigned int *)(a3 + 96);
      if ( (_DWORD)v7 )
        v7 = (unsigned int)(v7 - 1);
      *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)a3 + 72 * v7);
      break;
    case 52:
      v4 = *(unsigned int *)(a3 + 96);
      if ( (_DWORD)v4 )
        v4 = (unsigned int)(v4 - 1);
      v5 = 9 * v4;
      v6 = *(_DWORD *)(*(_QWORD *)a3 + 8 * v5 + 8);
      *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v5);
      *(_DWORD *)(a2 + 8) = v6;
      break;
    default:
      ModuleFailFastForHRESULT(-2147467259, retaddr);
  }
  return a2;
}
