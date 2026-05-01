/*
 * XREFs of ?AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z @ 0x1805346FC
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x18053483C (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UResizeDropTarget@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UResizeDropTarget@@@@V?$CSimpleArrayStandardCompareHelper@UResizeDropTarget@@@@V?$CSimpleArrayStandardMergeHelper@UResizeDropTarget@@@@@@QEAAJ_K0@Z @ 0x1805350FC (-_EnsureCapacity@-$CTSimpleArray@UResizeDropTarget@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UResizeDropT.c)
 */

__int64 __fastcall AppResizeData::AddDropTarget(_QWORD *a1, int a2, __m128i *a3)
{
  _QWORD *v3; // rbx
  __m128i v4; // xmm6
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  _BYTE v10[20]; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = a1 + 7;
  v4 = *a3;
  *(_DWORD *)v10 = a2;
  v5 = 0;
  v6 = a1[8];
  *(__m128i *)&v10[4] = *a3;
  if ( v6 == a1[10]
    && (v7 = CTSimpleArray<ResizeDropTarget,4294967294,CTPolicyCoTaskMem<ResizeDropTarget>,CSimpleArrayStandardCompareHelper<ResizeDropTarget>,CSimpleArrayStandardMergeHelper<ResizeDropTarget>>::_EnsureCapacity(
               a1 + 7,
               v6 + 1),
        v5 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    ++v3[1];
    v8 = *v3 + 4 * (5LL * v3[1] - 5);
    if ( v8 )
    {
      *(_OWORD *)v8 = *(_OWORD *)v10;
      *(_DWORD *)(v8 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
    }
  }
  return v5;
}
