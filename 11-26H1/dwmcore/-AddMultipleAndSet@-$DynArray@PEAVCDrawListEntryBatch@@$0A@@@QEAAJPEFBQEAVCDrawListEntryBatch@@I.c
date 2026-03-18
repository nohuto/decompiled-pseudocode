/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCDrawListEntryBatch@@$0A@@@QEAAJPEFBQEAVCDrawListEntryBatch@@I@Z @ 0x1801389D0
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CDrawListEntryBatch *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v6; // eax
  unsigned int v7; // edi
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
    return 2147942934LL;
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v8 = a2;
    v6 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v8);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xC2u, 0LL);
    else
      *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 24))++) + *(_QWORD *)a1) = *v8;
    return v7;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3) = *a2;
    *(_DWORD *)(a1 + 24) = v4;
    return 0LL;
  }
}
