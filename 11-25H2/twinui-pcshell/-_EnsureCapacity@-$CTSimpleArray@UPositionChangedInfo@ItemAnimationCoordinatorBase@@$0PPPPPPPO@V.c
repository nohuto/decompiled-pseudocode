/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardCompareHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardMergeHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@@@QEAAJ_K0@Z @ 0x1804C3F54
 * Callers:
 *     ??$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ$$QEAVLayoutRow@GridLayoutFactory@@PEA_K@Z @ 0x1804C2BBC (--$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPP.c)
 *     ?PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1804CDEB0 (-PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18008CD48 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180150724 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall CTSimpleArray<ItemAnimationCoordinatorBase::PositionChangedInfo,4294967294,CTPolicyCoTaskMem<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardCompareHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardMergeHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>>::_EnsureCapacity(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  IMalloc *v11; // rcx
  void *v12; // r11
  void *v13; // r10
  void *v14; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  v3 = 4294967294LL;
  result = 2147942522LL;
  if ( a2 <= 0xFFFFFFFE )
  {
    v6 = a1[3];
    result = 0LL;
    if ( a2 > v6 )
    {
      v15 = 0LL;
      result = ULongLongMult(v6, 2uLL, &v15);
      if ( (int)result >= 0 )
      {
        v9 = v15;
        if ( v15 - v8 > 0x1000 )
          v9 = v8 + 4096;
        if ( v7 > v9 || v9 <= 0xFFFFFFFE )
        {
          v3 = v9;
          if ( v7 > v9 )
            v3 = v7;
        }
        v15 = 0LL;
        v14 = 0LL;
        result = ULongLongMult(v3, 0x30uLL, &v15);
        if ( (int)result >= 0 )
        {
          result = CTCoAllocPolicy::Realloc(v11, v10, v12, v15, &v14);
          v13 = v14;
          if ( (int)result >= 0 )
          {
            a1[3] = v3;
            *a1 = v13;
          }
        }
      }
    }
  }
  return result;
}
