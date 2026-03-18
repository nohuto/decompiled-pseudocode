/*
 * XREFs of ?Free@?$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DDF88
 * Callers:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x140134FC4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1400B7B38 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0BAAA@$0IA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1401DDBA8 (-Free@-$CSectionBitmapAllocator@$0BAAA@$0IA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<4096,128>::Free(__int64 *a1, ULONG_PTR a2)
{
  __int64 *i; // rdi
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  ULONG_PTR v7; // rax
  int v8; // ecx
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset((void *)a2, 0, 0x80uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], (PVOID)a2);
    return;
  }
  v13 = a1[2];
  v14 = 0;
  RIMLockShared(v13);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v13);
      NSInstrumentation::PlatformAbort(3, a2, 0LL);
      return;
    }
    v5 = (_QWORD *)i[4];
    v6 = v5[1];
    v7 = v6 ^ v5[2];
    if ( a2 >= v7 && a2 < v7 + 4096 )
      break;
LABEL_12:
    ;
  }
  if ( (a2 & 0x7F) != 0 )
  {
    v8 = 2;
LABEL_11:
    NSInstrumentation::PlatformAbort(v8, a2, 0LL);
    goto LABEL_12;
  }
  if ( !RtlTestBit(
          (PRTL_BITMAP)(v5[3] ^ v5[2]),
          ((a2 >> 7) & 0x1F) + 32 * (((unsigned int)a2 - ((unsigned int)v6 ^ (unsigned int)v5[2])) >> 12)) )
  {
    v8 = 1;
    goto LABEL_11;
  }
  NSInstrumentation::CSectionBitmapAllocator<4096,128>::Free((__int64)v5, a2);
  if ( i != (__int64 *)*a1 )
  {
    NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v13);
    v9 = (struct W32_PUSH_LOCK *)a1[2];
    W32AcquirePushLockExclusiveEx(v9);
    v10 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v11 = (__int64 **)i[1], *v11 != i)
      || (*v11 = v10, v10[1] = (__int64)v11, v12 = *a1, *(__int64 **)(*a1 + 8) != a1) )
    {
      __fastfail(3u);
    }
    *i = v12;
    i[1] = (__int64)a1;
    *(_QWORD *)(v12 + 8) = i;
    *a1 = (__int64)i;
    W32ReleasePushLockExclusiveEx(v9);
  }
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v13);
}
