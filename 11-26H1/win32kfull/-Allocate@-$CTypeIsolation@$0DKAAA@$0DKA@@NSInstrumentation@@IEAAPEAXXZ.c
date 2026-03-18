/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400D35B8
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1400D3580 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAPEAXXZ.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400D1488 (-Allocate@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400D2054 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D21E8 (-ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2214 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Create@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14025367C (-Create@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1402873C0 (-Destroy@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int64 __fastcall NSInstrumentation::CTypeIsolation<237568,928>::Allocate(__int64 *a1)
{
  NSInstrumentation::CPlatformReaderWriterLock *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 *i; // rsi
  unsigned __int64 v5; // r14
  PVOID v7; // rax
  PVOID v8; // rbx
  NSInstrumentation::CPlatformReaderWriterLock *v9; // rbx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  NSInstrumentation::CPlatformReaderWriterLock *v15; // rbx
  __int64 v16; // rcx
  NSInstrumentation::CPlatformReaderWriterLock *v17; // [rsp+20h] [rbp-18h] BYREF
  char v18; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v7 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v8 = v7;
    if ( v7 )
      memset_0(v7, 0, 0x3A0uLL);
    return (unsigned __int64)v8;
  }
  else
  {
    v2 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
    v3 = 0LL;
    v17 = v2;
    v18 = 0;
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v2);
    for ( i = (__int64 *)*a1; i != a1; i = (__int64 *)*i )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<237568,928>::Allocate(i[4]);
      if ( v5 )
      {
        if ( i == (__int64 *)*a1 )
          goto LABEL_6;
        NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v17);
        v9 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
        NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v9);
        v10 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i
          || (v11 = (__int64 **)i[1], *v11 != i)
          || (*v11 = v10, v10[1] = (__int64)v11, v12 = (_QWORD *)*a1, *(__int64 **)(*a1 + 8) != a1) )
        {
LABEL_17:
          __fastfail(3u);
        }
        *i = (__int64)v12;
        i[1] = (__int64)a1;
        v12[1] = i;
        *a1 = (__int64)i;
        NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v9);
        if ( !v18 )
        {
          v2 = v17;
LABEL_6:
          NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v2);
        }
        return v5;
      }
    }
    NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v17);
    v13 = NSInstrumentation::CSectionEntry<237568,928>::Create();
    v14 = (_QWORD *)v13;
    if ( v13 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<237568,928>::Allocate(*(_QWORD *)(v13 + 32));
      if ( v3 )
      {
        v15 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
        NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v15);
        v16 = *a1;
        if ( *(__int64 **)(*a1 + 8) != a1 )
          goto LABEL_17;
        *v14 = v16;
        v14[1] = a1;
        *(_QWORD *)(v16 + 8) = v14;
        *((_DWORD *)a1 + 8) += 232;
        *a1 = (__int64)v14;
        NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v15);
      }
      else
      {
        NSInstrumentation::CSectionEntry<36864,144>::Destroy(v14);
      }
    }
    return v3;
  }
}
