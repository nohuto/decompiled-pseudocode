/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K0@Z @ 0x1804CE240
 * Callers:
 *     ?ItemAdded@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1804CD760 (-ItemAdded@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_.c)
 *     ?ItemHidden@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1804CD8D0 (-ItemHidden@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA.c)
 *     ?ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1804CDC40 (-ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_.c)
 *     ?MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z @ 0x180542CA0 (-MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18008CD48 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180150724 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::_EnsureCapacity(
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
        result = ULongLongMult(v3, 0x20uLL, &v15);
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
