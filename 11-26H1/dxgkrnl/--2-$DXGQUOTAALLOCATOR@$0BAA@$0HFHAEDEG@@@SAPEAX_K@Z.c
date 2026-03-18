/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z @ 0x140023138
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140022F48 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 DXGQUOTAALLOCATOR<256,1970291526>::operator new()
{
  return ExAllocatePool2(257LL, 96LL, 1970291526LL);
}
