/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400B9DF4
 * Callers:
 *     ??$UserAllocateIsolatedType@UtagSMWP@@@@YAPEAUtagSMWP@@_K@Z @ 0x1400B9D90 (--$UserAllocateIsolatedType@UtagSMWP@@@@YAPEAUtagSMWP@@_K@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B9F7C (-Allocate@-$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401DD96C (-Create@-$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

_OWORD *__fastcall NSInstrumentation::CTypeIsolation<12288,48>::Allocate(__int64 *a1)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v3; // rbp
  __int64 *i; // rsi
  __int64 v5; // r14
  struct W32_PUSH_LOCK *v6; // rbx
  __int64 *v7; // rcx
  __int64 **v8; // rax
  __int64 v9; // rax
  _OWORD *result; // rax
  __int64 v11; // rax
  _QWORD *v12; // rsi
  struct W32_PUSH_LOCK *v13; // rbx
  _QWORD *v14; // rcx
  struct W32_PUSH_LOCK *v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    result = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    if ( result )
    {
      *result = 0LL;
      result[1] = 0LL;
      result[2] = 0LL;
    }
    return result;
  }
  v2 = (struct W32_PUSH_LOCK *)a1[2];
  v3 = 0LL;
  v15 = v2;
  v16 = 0;
  RIMLockShared((__int64)v2);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v15);
      v11 = NSInstrumentation::CSectionEntry<12288,48>::Create();
      v12 = (_QWORD *)v11;
      if ( v11 )
      {
        v3 = NSInstrumentation::CSectionBitmapAllocator<12288,48>::Allocate(*(_QWORD *)(v11 + 32));
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
          *((_DWORD *)a1 + 8) += 255;
          *a1 = (__int64)v12;
          W32ReleasePushLockExclusiveEx(v13);
        }
        else
        {
          NSInstrumentation::CSectionEntry<32768,128>::Destroy(v12);
        }
      }
      return (_OWORD *)v3;
    }
    v5 = NSInstrumentation::CSectionBitmapAllocator<12288,48>::Allocate(i[4]);
    if ( v5 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_12;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v15);
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
  if ( !v16 )
  {
    v2 = v15;
LABEL_12:
    W32ReleasePushLockShared(v2);
  }
  return (_OWORD *)v5;
}
