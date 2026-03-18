/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402F352C
 * Callers:
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400D2054 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2214 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Destroy@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1402873C0 (-Destroy@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1402F33EC (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1402F3B28 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Allocate(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *i; // rsi
  __int64 v4; // r14
  NSInstrumentation::CPlatformReaderWriterLock *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 *Pool2; // rax
  __int64 *v11; // rsi
  NSInstrumentation::CPlatformReaderWriterLock *v12; // rbx
  _QWORD *v13; // rcx
  PVOID v14; // rax
  PVOID v15; // rbx
  NSInstrumentation::CPlatformReaderWriterLock *v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 36) )
  {
    v14 = ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
    v15 = v14;
    if ( v14 )
      memset_0(v14, 0, 0x70uLL);
    return (__int64)v15;
  }
  v2 = 0LL;
  v16 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
  v17 = 0;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v16);
  for ( i = *(_QWORD **)a1; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
      Pool2 = (__int64 *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
      v11 = Pool2;
      if ( Pool2 )
      {
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        Pool2[4] = 0LL;
        if ( (unsigned __int8)NSInstrumentation::CSectionEntry<28672,112>::Initialize(Pool2)
          && (v2 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(v11[4])) != 0 )
        {
          v12 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
          NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v12);
          v13 = *(_QWORD **)a1;
          if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
            goto LABEL_16;
          *v11 = (__int64)v13;
          v11[1] = a1;
          v13[1] = v11;
          *(_DWORD *)(a1 + 32) += 252;
          *(_QWORD *)a1 = v11;
          NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v12);
        }
        else
        {
          NSInstrumentation::CSectionEntry<36864,144>::Destroy(v11);
        }
      }
      return v2;
    }
    v4 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(i[4]);
    if ( v4 )
      break;
  }
  if ( i == *(_QWORD **)a1 )
    goto LABEL_11;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
  v5 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v5);
  v6 = (_QWORD *)*i;
  if ( *(_QWORD **)(*i + 8LL) != i
    || (v7 = (_QWORD *)i[1], (_QWORD *)*v7 != i)
    || (*v7 = v6, v6[1] = v7, v8 = *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1) )
  {
LABEL_16:
    __fastfail(3u);
  }
  *i = v8;
  i[1] = a1;
  *(_QWORD *)(v8 + 8) = i;
  *(_QWORD *)a1 = i;
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v5);
LABEL_11:
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
  return v4;
}
