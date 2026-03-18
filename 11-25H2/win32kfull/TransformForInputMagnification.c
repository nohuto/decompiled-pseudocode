/*
 * XREFs of TransformForInputMagnification @ 0x140165510
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     MagInputTransform @ 0x140165624 (MagInputTransform.c)
 *     AcquireMagInputLock @ 0x140165668 (AcquireMagInputLock.c)
 *     ReleaseMagInputLock @ 0x1401656B4 (ReleaseMagInputLock.c)
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x140165778 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 *     MagnificationTransformPoint @ 0x14016581C (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__m128i *a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // r9
  __m128i v12; // xmm2
  unsigned __int64 v13; // rax
  __m128i v14; // xmm1
  int v15; // [rsp+34h] [rbp-34h]
  __int64 plResult; // [rsp+88h] [rbp+20h] BYREF

  AcquireMagInputLock();
  v6 = MagInputTransform();
  if ( v6 )
  {
    if ( PtInRect((_DWORD *)(v6 + 16), *a3) )
    {
      MagnificationTransformPoint(v11, a3);
      v12 = a1[11];
      v13 = *a3;
      v14 = a1[10];
      *a2 = 0LL;
      plResult = 0LL;
      v15 = HIDWORD(v13);
      if ( (unsigned int)ConvertCoordinatesWithRounding(
                           _mm_cvtsi128_si32(v14),
                           _mm_cvtsi128_si32(_mm_srli_si128(v14, 8)),
                           _mm_cvtsi128_si32(v12),
                           _mm_cvtsi128_si32(_mm_srli_si128(v12, 8)),
                           v13,
                           (LONG *)&plResult) )
      {
        if ( (unsigned int)ConvertCoordinatesWithRounding(
                             v14.m128i_i32[1],
                             v14.m128i_i32[3],
                             v12.m128i_i32[1],
                             v12.m128i_i32[3],
                             v15,
                             (LONG *)&plResult + 1) )
          *a2 = plResult;
      }
    }
  }
  return ReleaseMagInputLock(v8, v7, v9);
}
