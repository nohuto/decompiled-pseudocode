/*
 * XREFs of ?AppendConsumedBrushes@CMaskBrush@@MEBAXPEAV?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@@Z @ 0x18027AC00
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@PEAVCBrush@@@?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@AEAAPEAPEAVCBrush@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18026DA04 (--$_Emplace_reallocate@PEAVCBrush@@@-$vector@PEAVCBrush@@V-$allocator@PEAVCBrush@@@std@@@std@@AE.c)
 */

char *__fastcall CMaskBrush::AppendConsumedBrushes(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v5; // rdx
  char *result; // rax
  char **v7; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    v5 = *(_QWORD **)(a2 + 8);
    v8 = *(_QWORD *)(a1 + 120);
    if ( v5 == *(_QWORD **)(a2 + 16) )
    {
      std::vector<CBrush *>::_Emplace_reallocate<CBrush *>((void **)a2, (__int64)v5, &v8);
    }
    else
    {
      *v5 = v2;
      *(_QWORD *)(a2 + 8) += 8LL;
    }
  }
  result = *(char **)(a1 + 112);
  if ( result )
  {
    v7 = *(char ***)(a2 + 8);
    v8 = *(_QWORD *)(a1 + 112);
    if ( v7 == *(char ***)(a2 + 16) )
    {
      return std::vector<CBrush *>::_Emplace_reallocate<CBrush *>((void **)a2, (__int64)v7, &v8);
    }
    else
    {
      *v7 = result;
      *(_QWORD *)(a2 + 8) += 8LL;
    }
  }
  return result;
}
