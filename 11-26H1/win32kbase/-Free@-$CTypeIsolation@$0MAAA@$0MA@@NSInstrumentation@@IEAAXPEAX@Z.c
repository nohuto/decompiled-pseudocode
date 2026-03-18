/*
 * XREFs of ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B6DEC
 * Callers:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400B6D54 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1400B7B38 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Free(__int64 *a1, ULONG_PTR a2)
{
  struct W32_PUSH_LOCK *v4; // r15
  __int64 *i; // rsi
  __int64 v6; // r12
  __int64 v7; // r10
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rcx
  struct W32_PUSH_LOCK *v12; // rdi
  ULONG v13; // ebx
  unsigned int v14; // edx
  struct W32_PUSH_LOCK *v15; // rbx
  unsigned int v16; // edx
  unsigned int v17; // edx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rax

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset((void *)a2, 0, 0xC0uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], (PVOID)a2);
    return;
  }
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
    if ( a2 >= v8 && a2 < v8 + 49152 )
      break;
LABEL_11:
    ;
  }
  v9 = (a2 & 0xFFF) / 0xC0;
  if ( (a2 & 0xFFF) != 192 * v9 )
  {
    v11 = 2LL;
    goto LABEL_10;
  }
  if ( !RtlTestBit(
          (PRTL_BITMAP)(*(_QWORD *)(v6 + 24) ^ *(_QWORD *)(v6 + 16)),
          v9 + 21 * (((unsigned int)a2 - ((unsigned int)*(_QWORD *)(v6 + 16) ^ (unsigned int)v7)) >> 12)) )
  {
    v11 = 1LL;
LABEL_10:
    NSInstrumentation::PlatformAbort(v11, a2);
    goto LABEL_11;
  }
  v12 = *(struct W32_PUSH_LOCK **)v6;
  W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)v6, v10);
  v13 = 21 * (((unsigned int)a2 - (*(_DWORD *)(v6 + 8) ^ (unsigned int)*(_QWORD *)(v6 + 16))) >> 12)
      + (a2 & 0xFFF) / 0xC0;
  RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(v6 + 24) ^ *(_QWORD *)(v6 + 16)), v13);
  memset((void *)a2, 0, 0xC0uLL);
  *(_DWORD *)(v6 + 32) = v13;
  W32ReleasePushLockExclusiveEx(v12, v14);
  if ( i == (__int64 *)*a1 )
  {
    W32ReleasePushLockShared(v4);
  }
  else
  {
    W32ReleasePushLockShared(v4);
    v15 = (struct W32_PUSH_LOCK *)a1[2];
    W32AcquirePushLockExclusiveEx(v15, v16);
    v18 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v19 = (__int64 **)i[1], *v19 != i)
      || (*v19 = v18, v18[1] = (__int64)v19, v20 = *a1, *(__int64 **)(*a1 + 8) != a1) )
    {
      __fastfail(3u);
    }
    *i = v20;
    i[1] = (__int64)a1;
    *(_QWORD *)(v20 + 8) = i;
    *a1 = (__int64)i;
    W32ReleasePushLockExclusiveEx(v15, v17);
  }
}
