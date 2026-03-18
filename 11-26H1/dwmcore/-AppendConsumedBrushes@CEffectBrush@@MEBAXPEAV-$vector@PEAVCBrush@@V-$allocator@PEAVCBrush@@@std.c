/*
 * XREFs of ?AppendConsumedBrushes@CEffectBrush@@MEBAXPEAV?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@@Z @ 0x18026DE00
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@PEAVCBrush@@@?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@AEAAPEAPEAVCBrush@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18026DA04 (--$_Emplace_reallocate@PEAVCBrush@@@-$vector@PEAVCBrush@@V-$allocator@PEAVCBrush@@@std@@@std@@AE.c)
 */

void __fastcall CEffectBrush::AppendConsumedBrushes(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 216);
  v4 = *(__int64 **)(a1 + 224);
  while ( v2 != v4 )
  {
    v5 = *v2;
    v7 = v5;
    if ( v5 )
    {
      v6 = *(__int64 **)(a2 + 8);
      if ( v6 == *(__int64 **)(a2 + 16) )
      {
        std::vector<CBrush *>::_Emplace_reallocate<CBrush *>((void **)a2, (__int64)v6, &v7);
      }
      else
      {
        *v6 = v5;
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
    ++v2;
  }
}
