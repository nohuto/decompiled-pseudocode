/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402E2850
 * Callers:
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14004C9C4 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B2A44 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B473C (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B4870 (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?Destroy@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140265764 (-Destroy@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline @ 0x140288070 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1402E2700 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1402E2C10 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Allocate(__int64 *a1)
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
  struct W32_PUSH_LOCK *v17; // [rsp+20h] [rbp-18h] BYREF
  char v18; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline();
    v15 = (struct _PAGED_LOOKASIDE_LIST *)a1[3];
    if ( !IsEnabledDeviceUsageNoInline )
      return ExAllocateFromPagedLookasideList(v15);
    v16 = ExAllocateFromPagedLookasideList(v15);
    memset_0(v16, 0, 0x70uLL);
    return v16;
  }
  v2 = 0LL;
  v17 = (struct W32_PUSH_LOCK *)a1[2];
  v18 = 0;
  W32AcquirePushLockShared(v17);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v17);
      v5 = NSInstrumentation::CSectionEntry<28672,112>::Create();
      v6 = (_QWORD *)v5;
      if ( v5 )
      {
        v2 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(*(_QWORD *)(v5 + 32));
        if ( v2 )
        {
          v7 = (struct W32_PUSH_LOCK *)a1[2];
          W32AcquirePushLockExclusive(v7);
          v8 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_9;
          *v6 = v8;
          v6[1] = a1;
          v8[1] = v6;
          *((_DWORD *)a1 + 8) += 252;
          *a1 = (__int64)v6;
          W32ReleasePushLockExclusive(v7);
        }
        else
        {
          NSInstrumentation::CSectionEntry<36864,144>::Destroy(v6);
        }
      }
      return (PVOID)v2;
    }
    v4 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(i[4]);
    if ( v4 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_15;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v17);
  v9 = (struct W32_PUSH_LOCK *)a1[2];
  W32AcquirePushLockExclusive(v9);
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
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v17);
  return (PVOID)v4;
}
