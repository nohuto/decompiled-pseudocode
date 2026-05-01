/*
 * XREFs of ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x180534F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18006F940 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x18053483C (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 */

__int64 __fastcall AppResizeData::RecomputeDropTargets(AppResizeData *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)this + 32);
  v2 = AppResizeData::ComputeDropTargets((AppResizeData *)((char *)this - 24));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
