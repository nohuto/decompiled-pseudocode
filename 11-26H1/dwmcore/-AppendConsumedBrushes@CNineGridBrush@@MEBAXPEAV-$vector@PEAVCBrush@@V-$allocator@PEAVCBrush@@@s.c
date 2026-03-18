/*
 * XREFs of ?AppendConsumedBrushes@CNineGridBrush@@MEBAXPEAV?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@@Z @ 0x1801DD170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridBrush::AppendConsumedBrushes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx

  result = a2;
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    v4 = *(_QWORD **)(a2 + 8);
    if ( v4 == *(_QWORD **)(result + 16) )
    {
      return std::vector<CBrush *>::_Emplace_reallocate<CBrush *>(result);
    }
    else
    {
      *v4 = v3;
      *(_QWORD *)(result + 8) += 8LL;
    }
  }
  return result;
}
