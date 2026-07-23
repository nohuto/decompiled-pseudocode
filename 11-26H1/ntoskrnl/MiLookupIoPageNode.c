/*
 * XREFs of MiLookupIoPageNode @ 0x140369BEC
 * Callers:
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MmGetCacheAttributeEx @ 0x1406EFBD0 (MmGetCacheAttributeEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIoSpaceGetBounds @ 0x140315778 (MiIoSpaceGetBounds.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiLookupIoPageNode(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v5; // di
  unsigned int v6; // ebp
  char v7; // r10
  unsigned int v8; // r11d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]

  v2 = a2;
  v18 = 0LL;
  v3 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  v5 = CurrentIrql;
  if ( CurrentIrql == 2 )
    v5 = 17;
  v6 = 5;
  if ( CurrentIrql != 2 )
    v6 = 1;
  MiIoSpaceGetBounds((__int64)v17, v3);
  if ( HIDWORD(v18) == 3 )
  {
    MiLockIoPfnTree(v8);
    v12 = (_QWORD *)qword_140E36000;
    while ( v12 )
    {
      v13 = v12[3];
      if ( v3 < v13 )
      {
        v12 = (_QWORD *)*v12;
      }
      else
      {
        if ( v3 < v13 + 512 )
          break;
        v12 = (_QWORD *)v12[1];
      }
    }
    if ( v12 )
    {
      v14 = 2
          * (((unsigned int)v3 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1))
           - *((_DWORD *)v12 + 6));
      LOBYTE(v14) = v5;
      v15 = (*((_DWORD *)v12
             + ((unsigned __int64)(2
                                 * (((unsigned int)v3 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878 - 12))
                                                       - 1))
                                  - *((_DWORD *)v12 + 6))) >> 5)
             + 11) >> (2 * ((v3 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *((_BYTE *)v12 + 24)))) & 3;
      MiUnlockIoPfnTree(v14, v6, v10, v11);
      return v15;
    }
    else
    {
      if ( v2 )
        KeBugCheckEx(0x1Au, 0x61949uLL, v3, 1uLL, 0LL);
      LOBYTE(v9) = v5;
      MiUnlockIoPfnTree(v9, v6, v10, v11);
      return 3LL;
    }
  }
  else
  {
    if ( v5 != v7 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      __writecr8(v5);
    }
    return (unsigned int)v18;
  }
}
