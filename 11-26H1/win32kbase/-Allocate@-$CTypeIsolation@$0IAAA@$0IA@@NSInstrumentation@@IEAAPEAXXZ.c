/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140016244
 * Callers:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400FE0EC (-Allocate@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A890 (-Create@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<32768,128>::Allocate(__int64 *a1)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v3; // rbp
  __int64 *i; // rsi
  __int64 v5; // r14
  struct W32_PUSH_LOCK *v7; // rbx
  unsigned int v8; // edx
  unsigned int v9; // edx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  unsigned int v15; // edx
  struct W32_PUSH_LOCK *v16; // rbx
  unsigned int v17; // edx
  __int64 v18; // rcx
  PVOID v19; // rax
  PVOID v20; // rbx
  struct W32_PUSH_LOCK *v21; // [rsp+20h] [rbp-18h] BYREF
  char v22; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v19 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v20 = v19;
    if ( v19 )
      memset(v19, 0, 0x80uLL);
    return (__int64)v20;
  }
  else
  {
    v2 = (struct W32_PUSH_LOCK *)a1[2];
    v3 = 0LL;
    v21 = v2;
    v22 = 0;
    RIMLockShared(v2);
    for ( i = (__int64 *)*a1; i != a1; i = (__int64 *)*i )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(i[4]);
      if ( v5 )
      {
        if ( i == (__int64 *)*a1 )
        {
          W32ReleasePushLockShared(v2);
          return v5;
        }
        W32ReleasePushLockShared(v2);
        v7 = (struct W32_PUSH_LOCK *)a1[2];
        W32AcquirePushLockExclusiveEx(v7, v8);
        v10 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i
          || (v11 = (__int64 **)i[1], *v11 != i)
          || (*v11 = v10, v10[1] = (__int64)v11, v12 = (_QWORD *)*a1, *(__int64 **)(*a1 + 8) != a1) )
        {
LABEL_12:
          __fastfail(3u);
        }
        *i = (__int64)v12;
        i[1] = (__int64)a1;
        v12[1] = i;
        *a1 = (__int64)i;
        W32ReleasePushLockExclusiveEx(v7, v9);
        return v5;
      }
    }
    NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v21);
    v13 = NSInstrumentation::CSectionEntry<32768,128>::Create();
    v14 = (_QWORD *)v13;
    if ( v13 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(*(_QWORD *)(v13 + 32));
      if ( v3 )
      {
        v16 = (struct W32_PUSH_LOCK *)a1[2];
        W32AcquirePushLockExclusiveEx(v16, v15);
        v18 = *a1;
        if ( *(__int64 **)(*a1 + 8) != a1 )
          goto LABEL_12;
        *v14 = v18;
        v14[1] = a1;
        *(_QWORD *)(v18 + 8) = v14;
        *((_DWORD *)a1 + 8) += 256;
        *a1 = (__int64)v14;
        W32ReleasePushLockExclusiveEx(v16, v17);
      }
      else
      {
        NSInstrumentation::CSectionEntry<32768,128>::Destroy(v14);
      }
    }
    return v3;
  }
}
