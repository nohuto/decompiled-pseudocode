/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18016D360
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800702C0 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x1800C47E0 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall DynArray<CBatchCommand *,0>::AddMultipleAndSet(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // edi
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v6 = v3 + a3;
  if ( v3 + a3 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
    return 2147942934LL;
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    Src = a2;
    v8 = DynArrayImpl<0>::Grow(a1, 8u, a3, 0, (unsigned __int64 *)&Src);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xC2u, 0LL);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + (unsigned int)(8 * *(_DWORD *)(a1 + 24))), Src, 8 * a3);
      *(_DWORD *)(a1 + 24) += a3;
    }
    return v9;
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 8LL * v3), a2, 8LL * a3);
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v6;
  }
  return result;
}
