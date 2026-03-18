/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14016C890
 * Callers:
 *     ??$UserAllocateIsolatedType@UtagWND@@@@YAPEAUtagWND@@_K@Z @ 0x1400B9CC4 (--$UserAllocateIsolatedType@UtagWND@@@@YAPEAUtagWND@@_K@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B657C (-Allocate@-$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Create@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140159F8C (-Create@-$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A2E8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<106496,416>::Allocate(__int64 *a1)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // edx
  __int64 *i; // rsi
  __int64 v6; // r14
  struct W32_PUSH_LOCK *v8; // rbx
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
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
      memset(v17, 0, 0x1A0uLL);
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
      v12 = NSInstrumentation::CSectionEntry<106496,416>::Create();
      v14 = v12;
      if ( v12 )
      {
        v3 = NSInstrumentation::CSectionBitmapAllocator<106496,416>::Allocate(v12[4], v13);
        if ( v3 )
        {
          v15 = (struct W32_PUSH_LOCK *)a1[2];
          W32AcquirePushLockExclusiveEx(v15);
          v16 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_18;
          *v14 = v16;
          v14[1] = a1;
          v16[1] = v14;
          *((_DWORD *)a1 + 8) += 234;
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
    v6 = NSInstrumentation::CSectionBitmapAllocator<106496,416>::Allocate(i[4], v4);
    if ( v6 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_6;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v19);
  v8 = (struct W32_PUSH_LOCK *)a1[2];
  W32AcquirePushLockExclusiveEx(v8);
  v9 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v10 = (__int64 **)i[1], *v10 != i)
    || (*v10 = v9, v9[1] = (__int64)v10, v11 = *a1, *(__int64 **)(*a1 + 8) != a1) )
  {
LABEL_18:
    __fastfail(3u);
  }
  *i = v11;
  i[1] = (__int64)a1;
  *(_QWORD *)(v11 + 8) = i;
  *a1 = (__int64)i;
  W32ReleasePushLockExclusiveEx(v8);
  if ( !v20 )
  {
    v2 = v19;
LABEL_6:
    W32ReleasePushLockShared(v2);
  }
  return v6;
}
