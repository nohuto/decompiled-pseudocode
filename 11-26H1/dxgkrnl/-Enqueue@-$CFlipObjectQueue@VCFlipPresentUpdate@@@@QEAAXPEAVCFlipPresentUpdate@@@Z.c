/*
 * XREFs of ?Enqueue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1400557EC
 * Callers:
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C4D8 (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CFlipObjectQueue<CFlipPresentUpdate>::Enqueue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)((a2 + 24) & -(__int64)(a2 != 0));
  result = *(_QWORD **)(a1 + 8);
  if ( *result != a1 )
    __fastfail(3u);
  *v2 = a1;
  *(_QWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 8) = result;
  *result = v2;
  *(_QWORD *)(a1 + 8) = v2;
  return result;
}
