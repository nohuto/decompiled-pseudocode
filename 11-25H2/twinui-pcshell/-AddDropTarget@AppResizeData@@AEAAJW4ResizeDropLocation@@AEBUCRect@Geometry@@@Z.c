/*
 * XREFs of ?AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z @ 0x180511FBC
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1805120F8 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UResizeDropTarget@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UResizeDropTarget@@@@V?$CSimpleArrayStandardCompareHelper@UResizeDropTarget@@@@V?$CSimpleArrayStandardMergeHelper@UResizeDropTarget@@@@@@QEAAJ_K0@Z @ 0x1805129A8 (-_EnsureCapacity@-$CTSimpleArray@UResizeDropTarget@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UResizeDropT.c)
 */

__int64 __fastcall AppResizeData::AddDropTarget(_QWORD *a1, int a2, __m128i *a3)
{
  _QWORD *v3; // rdi
  __m128i v4; // xmm6
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE v9[20]; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = a1 + 7;
  v4 = *a3;
  *(_DWORD *)v9 = a2;
  v5 = 0;
  v6 = a1[8];
  *(__m128i *)&v9[4] = *a3;
  if ( v6 != a1[10]
    || (v5 = CTSimpleArray<ResizeDropTarget,4294967294,CTPolicyCoTaskMem<ResizeDropTarget>,CSimpleArrayStandardCompareHelper<ResizeDropTarget>,CSimpleArrayStandardMergeHelper<ResizeDropTarget>>::_EnsureCapacity(
               a1 + 7,
               v6 + 1),
        v5 >= 0) )
  {
    ++v3[1];
    v7 = *v3 + 4 * (5LL * v3[1] - 5);
    if ( !v7 )
      return (unsigned int)v5;
    *(_OWORD *)v7 = *(_OWORD *)v9;
    *(_DWORD *)(v7 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
  }
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
