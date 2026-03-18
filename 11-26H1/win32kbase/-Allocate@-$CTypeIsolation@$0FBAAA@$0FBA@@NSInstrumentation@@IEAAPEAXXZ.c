/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD4A0
 * Callers:
 *     ??$UserAllocateIsolatedType@UtagHID_POINTER_DEVICE_INFO@@@@YAPEAUtagHID_POINTER_DEVICE_INFO@@_K@Z @ 0x1401DC67C (--$UserAllocateIsolatedType@UtagHID_POINTER_DEVICE_INFO@@@@YAPEAUtagHID_POINTER_DEVICE_INFO@@_K@.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0FBAAA@$0FBA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1401DCD88 (-Allocate@-$CSectionBitmapAllocator@$0FBAAA@$0FBA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401DDB1C (-Create@-$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<331776,1296>::Allocate(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 *i; // rsi
  __int64 v4; // r14
  struct W32_PUSH_LOCK *v5; // rbx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  _QWORD *v11; // rsi
  struct W32_PUSH_LOCK *v12; // rbx
  _QWORD *v13; // rcx
  PVOID v14; // rax
  PVOID v15; // rbx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v14 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v15 = v14;
    if ( v14 )
      memset(v14, 0, 0x510uLL);
    return (__int64)v15;
  }
  v2 = 0LL;
  v16 = a1[2];
  v17 = 0;
  RIMLockShared(v16);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
      v10 = NSInstrumentation::CSectionEntry<331776,1296>::Create();
      v11 = (_QWORD *)v10;
      if ( v10 )
      {
        v2 = NSInstrumentation::CSectionBitmapAllocator<331776,1296>::Allocate(*(_QWORD *)(v10 + 32));
        if ( v2 )
        {
          v12 = (struct W32_PUSH_LOCK *)a1[2];
          W32AcquirePushLockExclusiveEx(v12);
          v13 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_15;
          *v11 = v13;
          v11[1] = a1;
          v13[1] = v11;
          *((_DWORD *)a1 + 8) += 243;
          *a1 = (__int64)v11;
          W32ReleasePushLockExclusiveEx(v12);
        }
        else
        {
          NSInstrumentation::CSectionEntry<32768,128>::Destroy(v11);
        }
      }
      return v2;
    }
    v4 = NSInstrumentation::CSectionBitmapAllocator<331776,1296>::Allocate(i[4]);
    if ( v4 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_11;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
  v5 = (struct W32_PUSH_LOCK *)a1[2];
  W32AcquirePushLockExclusiveEx(v5);
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
  W32ReleasePushLockExclusiveEx(v5);
LABEL_11:
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
  return v4;
}
