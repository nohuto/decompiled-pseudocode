/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140071C00
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x14003FA58 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400717D8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400BD758 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400FA2A4 (-Allocate@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AB08 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14011BA9C (-Create@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline @ 0x1401A52B8 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140243000 (memset.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<40960,160>::Allocate(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 *i; // rsi
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rsi
  struct W32_PUSH_LOCK *v7; // rbx
  _QWORD *v8; // rcx
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  struct _PAGED_LOOKASIDE_LIST *v15; // rcx
  PVOID v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  char v18; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline();
    v15 = (struct _PAGED_LOOKASIDE_LIST *)a1[3];
    if ( !IsEnabledDeviceUsageNoInline )
      return ExAllocateFromPagedLookasideList(v15);
    v16 = ExAllocateFromPagedLookasideList(v15);
    memset(v16, 0, 0xA0uLL);
    return v16;
  }
  v2 = 0LL;
  v17 = a1[2];
  v18 = 0;
  RIMLockShared(v17);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v17);
      v5 = NSInstrumentation::CSectionEntry<40960,160>::Create();
      v6 = (_QWORD *)v5;
      if ( v5 )
      {
        v2 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::Allocate(*(_QWORD *)(v5 + 32));
        if ( v2 )
        {
          v7 = (struct W32_PUSH_LOCK *)a1[2];
          GreEnterCriticalRegionAndAcquirePushLockExclusive(v7);
          v8 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_9;
          *v6 = v8;
          v6[1] = a1;
          v8[1] = v6;
          *((_DWORD *)a1 + 8) += 250;
          *a1 = (__int64)v6;
          W32ReleasePushLockExclusive(v7);
        }
        else
        {
          NSInstrumentation::CSectionEntry<49152,192>::Destroy(v6);
        }
      }
      return (PVOID)v2;
    }
    v4 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::Allocate(i[4]);
    if ( v4 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_15;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v17);
  v9 = (struct W32_PUSH_LOCK *)a1[2];
  GreEnterCriticalRegionAndAcquirePushLockExclusive(v9);
  v10 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v11 = (__int64 **)i[1], *v11 != i)
    || (*v11 = v10, v10[1] = (__int64)v11, v12 = *a1, *(__int64 **)(*a1 + 8) != a1) )
  {
LABEL_9:
    __fastfail(3u);
  }
  *i = v12;
  i[1] = (__int64)a1;
  *(_QWORD *)(v12 + 8) = i;
  *a1 = (__int64)i;
  W32ReleasePushLockExclusive(v9);
LABEL_15:
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v17);
  return (PVOID)v4;
}
