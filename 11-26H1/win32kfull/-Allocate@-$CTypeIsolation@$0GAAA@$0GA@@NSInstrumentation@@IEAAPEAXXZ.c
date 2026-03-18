/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14028ECFC
 * Callers:
 *     MNAllocPopup @ 0x140244270 (MNAllocPopup.c)
 * Callees:
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400D2054 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2214 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ @ 0x14025D800 (-Allocate@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Destroy@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1402873C0 (-Destroy@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1402D0588 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Allocate(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 *i; // rsi
  __int64 v4; // r14
  NSInstrumentation::CPlatformReaderWriterLock *v5; // rbx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  _QWORD *v11; // rsi
  NSInstrumentation::CPlatformReaderWriterLock *v12; // rbx
  _QWORD *v13; // rcx
  PVOID v14; // rax
  PVOID v15; // rbx
  NSInstrumentation::CPlatformReaderWriterLock *v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v14 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v15 = v14;
    if ( v14 )
      memset_0(v14, 0, 0x60uLL);
    return (__int64)v15;
  }
  v2 = 0LL;
  v16 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
  v17 = 0;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v16);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
      v10 = NSInstrumentation::CSectionEntry<24576,96>::Create();
      v11 = (_QWORD *)v10;
      if ( v10 )
      {
        v2 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(*(_QWORD *)(v10 + 32));
        if ( v2 )
        {
          v12 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
          NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v12);
          v13 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_15;
          *v11 = v13;
          v11[1] = a1;
          v13[1] = v11;
          *((_DWORD *)a1 + 8) += 252;
          *a1 = (__int64)v11;
          NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v12);
        }
        else
        {
          NSInstrumentation::CSectionEntry<36864,144>::Destroy(v11);
        }
      }
      return v2;
    }
    v4 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(i[4]);
    if ( v4 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_11;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
  v5 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v5);
  v6 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v7 = (__int64 **)i[1], *v7 != i)
    || (*v7 = v6, v6[1] = (__int64)v7, v8 = *a1, *(__int64 **)(*a1 + 8) != a1) )
  {
LABEL_15:
    __fastfail(3u);
  }
  *i = v8;
  i[1] = (__int64)a1;
  *(_QWORD *)(v8 + 8) = i;
  *a1 = (__int64)i;
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v5);
LABEL_11:
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
  return v4;
}
