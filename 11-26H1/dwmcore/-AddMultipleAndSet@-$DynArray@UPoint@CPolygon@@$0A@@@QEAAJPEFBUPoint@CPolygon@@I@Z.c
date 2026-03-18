/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UPoint@CPolygon@@$0A@@@QEAAJPEFBUPoint@CPolygon@@I@Z @ 0x1801A2758
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1800741A4 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801A20A0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CPolygon::Point,0>::AddMultipleAndSet(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v10; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v5 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 20, 1, a2);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xC2u, 0LL);
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 5 * v2;
      *(_OWORD *)(v7 + 4 * v8) = *(_OWORD *)a2;
      *(_DWORD *)(v7 + 4 * v8 + 16) = a2[4];
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v6;
}
