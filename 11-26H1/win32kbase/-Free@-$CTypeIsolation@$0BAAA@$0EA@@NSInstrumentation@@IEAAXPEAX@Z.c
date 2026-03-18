/*
 * XREFs of ?Free@?$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DDDAC
 * Callers:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x140134FC4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1400B7B38 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<4096,64>::Free(__int64 *a1, ULONG_PTR a2)
{
  __int64 *i; // rsi
  __int64 v5; // r15
  __int64 v6; // rdx
  ULONG_PTR v7; // rax
  int v8; // ecx
  struct W32_PUSH_LOCK *v9; // rdi
  ULONG v10; // ebx
  struct W32_PUSH_LOCK *v11; // rbx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+28h] [rbp-20h]

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset((void *)a2, 0, 0x40uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], (PVOID)a2);
    return;
  }
  v15 = a1[2];
  v16 = 0;
  RIMLockShared(v15);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v15);
      NSInstrumentation::PlatformAbort(3, a2, 0LL);
      return;
    }
    v5 = i[4];
    v6 = *(_QWORD *)(v5 + 8);
    v7 = v6 ^ *(_QWORD *)(v5 + 16);
    if ( a2 >= v7 && a2 < v7 + 4096 )
      break;
LABEL_12:
    ;
  }
  if ( (a2 & 0x3F) != 0 )
  {
    v8 = 2;
LABEL_11:
    NSInstrumentation::PlatformAbort(v8, a2, 0LL);
    goto LABEL_12;
  }
  if ( !RtlTestBit(
          (PRTL_BITMAP)(*(_QWORD *)(v5 + 24) ^ *(_QWORD *)(v5 + 16)),
          ((a2 >> 6) & 0x3F) + (((unsigned int)a2 - ((unsigned int)v6 ^ (unsigned int)*(_QWORD *)(v5 + 16))) >> 12 << 6)) )
  {
    v8 = 1;
    goto LABEL_11;
  }
  v9 = *(struct W32_PUSH_LOCK **)v5;
  W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)v5);
  v10 = ((a2 >> 6) & 0x3F)
      + (((unsigned int)a2 - (*(_DWORD *)(v5 + 8) ^ (unsigned int)*(_QWORD *)(v5 + 16))) >> 12 << 6);
  RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(v5 + 24) ^ *(_QWORD *)(v5 + 16)), v10);
  memset((void *)a2, 0, 0x40uLL);
  *(_DWORD *)(v5 + 32) = v10;
  W32ReleasePushLockExclusiveEx(v9);
  if ( i != (__int64 *)*a1 )
  {
    NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v15);
    v11 = (struct W32_PUSH_LOCK *)a1[2];
    W32AcquirePushLockExclusiveEx(v11);
    v12 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v13 = (__int64 **)i[1], *v13 != i)
      || (*v13 = v12, v12[1] = (__int64)v13, v14 = *a1, *(__int64 **)(*a1 + 8) != a1) )
    {
      __fastfail(3u);
    }
    *i = v14;
    i[1] = (__int64)a1;
    *(_QWORD *)(v14 + 8) = i;
    *a1 = (__int64)i;
    W32ReleasePushLockExclusiveEx(v11);
  }
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v15);
}
