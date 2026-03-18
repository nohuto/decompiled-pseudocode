/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400BA0E4
 * Callers:
 *     ??$UserAllocateIsolatedType@UtagCURSOR@@@@YAPEAUtagCURSOR@@_K@Z @ 0x1400B9A7C (--$UserAllocateIsolatedType@UtagCURSOR@@@@YAPEAUtagCURSOR@@_K@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B6A64 (-Allocate@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A1B0 (-Create@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A2E8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<81920,160>::Allocate(__int64 *a1)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // edx
  __int64 *i; // rsi
  __int64 v6; // r14
  struct W32_PUSH_LOCK *v7; // rbx
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  _QWORD *v14; // rsi
  struct W32_PUSH_LOCK *v15; // rbx
  _QWORD *v16; // rcx
  PVOID v17; // rax
  PVOID v18; // rbx
  struct W32_PUSH_LOCK *v19; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v17 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v18 = v17;
    if ( v17 )
      memset(v17, 0, 0xA0uLL);
    return (__int64)v18;
  }
  v2 = (struct W32_PUSH_LOCK *)a1[2];
  v3 = 0LL;
  v19 = v2;
  v20 = 0;
  RIMLockShared((__int64)v2);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v19);
      v12 = NSInstrumentation::CSectionEntry<81920,160>::Create();
      v14 = (_QWORD *)v12;
      if ( v12 )
      {
        v3 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(*(_QWORD *)(v12 + 32), v13);
        if ( v3 )
        {
          v15 = (struct W32_PUSH_LOCK *)a1[2];
          W32AcquirePushLockExclusiveEx(v15);
          v16 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_17;
          *v14 = v16;
          v14[1] = a1;
          v16[1] = v14;
          *((_DWORD *)a1 + 8) += 500;
          *a1 = (__int64)v14;
          W32ReleasePushLockExclusiveEx(v15);
        }
        else
        {
          NSInstrumentation::CSectionEntry<49152,192>::Destroy(v14);
        }
      }
      return v3;
    }
    v6 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(i[4], v4);
    if ( v6 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_12;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v19);
  v7 = (struct W32_PUSH_LOCK *)a1[2];
  W32AcquirePushLockExclusiveEx(v7);
  v8 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v9 = (__int64 **)i[1], *v9 != i)
    || (*v9 = v8, v8[1] = (__int64)v9, v10 = *a1, *(__int64 **)(*a1 + 8) != a1) )
  {
LABEL_17:
    __fastfail(3u);
  }
  *i = v10;
  i[1] = (__int64)a1;
  *(_QWORD *)(v10 + 8) = i;
  *a1 = (__int64)i;
  W32ReleasePushLockExclusiveEx(v7);
  if ( !v20 )
  {
    v2 = v19;
LABEL_12:
    W32ReleasePushLockShared(v2);
  }
  return v6;
}
