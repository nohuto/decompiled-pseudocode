/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14003240C
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400322FC (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B7454 (-Allocate@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A2E8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401ECB30 (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Allocate(__int64 *a1)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v3; // rbp
  __int64 *i; // rsi
  __int64 v5; // r14
  struct W32_PUSH_LOCK *v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // edx
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  unsigned int v15; // edx
  struct W32_PUSH_LOCK *v16; // rbx
  unsigned int v17; // edx
  _QWORD *v18; // rcx
  PVOID v19; // rax
  PVOID v20; // rbx
  struct W32_PUSH_LOCK *v21; // [rsp+20h] [rbp-18h] BYREF
  char v22; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v19 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v20 = v19;
    if ( v19 )
      memset(v19, 0, 0xC0uLL);
    return (__int64)v20;
  }
  v2 = (struct W32_PUSH_LOCK *)a1[2];
  v3 = 0LL;
  v21 = v2;
  v22 = 0;
  RIMLockShared(v2);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v21);
      v13 = NSInstrumentation::CSectionEntry<49152,192>::Create();
      v14 = (_QWORD *)v13;
      if ( v13 )
      {
        v3 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(*(_QWORD *)(v13 + 32));
        if ( v3 )
        {
          v16 = (struct W32_PUSH_LOCK *)a1[2];
          W32AcquirePushLockExclusiveEx(v16, v15);
          v18 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_17;
          *v14 = v18;
          v14[1] = a1;
          v18[1] = v14;
          *((_DWORD *)a1 + 8) += 252;
          *a1 = (__int64)v14;
          W32ReleasePushLockExclusiveEx(v16, v17);
        }
        else
        {
          NSInstrumentation::CSectionEntry<49152,192>::Destroy(v14);
        }
      }
      return v3;
    }
    v5 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(i[4]);
    if ( v5 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_12;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v21);
  v6 = (struct W32_PUSH_LOCK *)a1[2];
  W32AcquirePushLockExclusiveEx(v6, v7);
  v9 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v10 = (__int64 **)i[1], *v10 != i)
    || (*v10 = v9, v9[1] = (__int64)v10, v11 = *a1, *(__int64 **)(*a1 + 8) != a1) )
  {
LABEL_17:
    __fastfail(3u);
  }
  *i = v11;
  i[1] = (__int64)a1;
  *(_QWORD *)(v11 + 8) = i;
  *a1 = (__int64)i;
  W32ReleasePushLockExclusiveEx(v6, v8);
  if ( !v22 )
  {
    v2 = v21;
LABEL_12:
    W32ReleasePushLockShared(v2);
  }
  return v5;
}
