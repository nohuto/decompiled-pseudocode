/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140187DA0
 * Callers:
 *     ??$UserAllocateIsolatedType@UtagHOOK@@@@YAPEAUtagHOOK@@_K@Z @ 0x14018FF1C (--$UserAllocateIsolatedType@UtagHOOK@@@@YAPEAUtagHOOK@@_K@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A0E4 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A2E8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x140187F2C (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Allocate(__int64 *a1)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v3; // rbp
  __int64 *i; // rsi
  __int64 v5; // r14
  struct W32_PUSH_LOCK *v6; // rbx
  __int64 *v7; // rcx
  __int64 **v8; // rax
  __int64 v9; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  struct W32_PUSH_LOCK *v13; // rbx
  _QWORD *v14; // rcx
  PVOID v15; // rax
  PVOID v16; // rbx
  struct W32_PUSH_LOCK *v17; // [rsp+20h] [rbp-18h] BYREF
  char v18; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v15 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v16 = v15;
    if ( v15 )
      memset(v15, 0, 0x70uLL);
    return (__int64)v16;
  }
  v2 = (struct W32_PUSH_LOCK *)a1[2];
  v3 = 0LL;
  v17 = v2;
  v18 = 0;
  RIMLockShared((__int64)v2);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v17);
      v11 = NSInstrumentation::CSectionEntry<28672,112>::Create();
      v12 = v11;
      if ( v11 )
      {
        v3 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(v11[4]);
        if ( v3 )
        {
          v13 = (struct W32_PUSH_LOCK *)a1[2];
          W32AcquirePushLockExclusiveEx(v13);
          v14 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_17;
          *v12 = v14;
          v12[1] = a1;
          v14[1] = v12;
          *((_DWORD *)a1 + 8) += 252;
          *a1 = (__int64)v12;
          W32ReleasePushLockExclusiveEx(v13);
        }
        else
        {
          NSInstrumentation::CSectionEntry<49152,192>::Destroy(v12);
        }
      }
      return v3;
    }
    v5 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(i[4]);
    if ( v5 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_12;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v17);
  v6 = (struct W32_PUSH_LOCK *)a1[2];
  W32AcquirePushLockExclusiveEx(v6);
  v7 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v8 = (__int64 **)i[1], *v8 != i)
    || (*v8 = v7, v7[1] = (__int64)v8, v9 = *a1, *(__int64 **)(*a1 + 8) != a1) )
  {
LABEL_17:
    __fastfail(3u);
  }
  *i = v9;
  i[1] = (__int64)a1;
  *(_QWORD *)(v9 + 8) = i;
  *a1 = (__int64)i;
  W32ReleasePushLockExclusiveEx(v6);
  if ( !v18 )
  {
    v2 = v17;
LABEL_12:
    W32ReleasePushLockShared(v2);
  }
  return v5;
}
