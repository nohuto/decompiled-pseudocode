/*
 * XREFs of ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B75CC
 * Callers:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x140134FC4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<81920,160>::Free(__int64 *a1, ULONG_PTR a2)
{
  struct W32_PUSH_LOCK *v4; // r15
  __int64 *i; // rsi
  __int64 v6; // r12
  __int64 v7; // r10
  ULONG_PTR v8; // rax
  unsigned int v9; // edx
  struct W32_PUSH_LOCK *v10; // rdi
  ULONG v11; // ebx
  struct W32_PUSH_LOCK *v12; // rbx
  unsigned int v13; // edx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  _QWORD *v16; // rax

  if ( a2 )
  {
    if ( *((_BYTE *)a1 + 36) )
    {
      memset((void *)a2, 0, 0xA0uLL);
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], (PVOID)a2);
    }
    else
    {
      v4 = (struct W32_PUSH_LOCK *)a1[2];
      RIMLockShared((__int64)v4);
      for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
      {
        if ( i == a1 )
        {
          W32ReleasePushLockShared(v4);
          KeBugCheckEx(0x164u, 0x21uLL, a2, 0LL, 0LL);
        }
        v6 = i[4];
        v7 = *(_QWORD *)(v6 + 8);
        v8 = v7 ^ *(_QWORD *)(v6 + 16);
        if ( a2 >= v8 && a2 < v8 + 81920 )
          break;
      }
      if ( (a2 & 0xFFF) != 160 * ((a2 & 0xFFF) / 0xA0) )
        KeBugCheckEx(0x164u, 0x22uLL, a2, 0LL, 0LL);
      if ( !RtlTestBit(
              (PRTL_BITMAP)(*(_QWORD *)(v6 + 24) ^ *(_QWORD *)(v6 + 16)),
              (a2 & 0xFFF) / 0xA0
            + 25 * (((unsigned int)a2 - ((unsigned int)*(_QWORD *)(v6 + 16) ^ (unsigned int)v7)) >> 12)) )
        KeBugCheckEx(0x164u, 0x23uLL, a2, 0LL, 0LL);
      v10 = *(struct W32_PUSH_LOCK **)v6;
      W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)v6, v9);
      v11 = 25 * (((unsigned int)a2 - (*(_DWORD *)(v6 + 8) ^ (unsigned int)*(_QWORD *)(v6 + 16))) >> 12)
          + (a2 & 0xFFF) / 0xA0;
      RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(v6 + 24) ^ *(_QWORD *)(v6 + 16)), v11);
      memset((void *)a2, 0, 0xA0uLL);
      *(_DWORD *)(v6 + 32) = v11;
      W32ReleasePushLockExclusiveEx(v10);
      if ( i == (__int64 *)*a1 )
      {
        W32ReleasePushLockShared(v4);
      }
      else
      {
        W32ReleasePushLockShared(v4);
        v12 = (struct W32_PUSH_LOCK *)a1[2];
        W32AcquirePushLockExclusiveEx(v12, v13);
        v14 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i
          || (v15 = (__int64 **)i[1], *v15 != i)
          || (*v15 = v14, v14[1] = (__int64)v15, v16 = (_QWORD *)*a1, *(__int64 **)(*a1 + 8) != a1) )
        {
          __fastfail(3u);
        }
        *i = (__int64)v16;
        i[1] = (__int64)a1;
        v16[1] = i;
        *a1 = (__int64)i;
        W32ReleasePushLockExclusiveEx(v12);
      }
    }
  }
}
