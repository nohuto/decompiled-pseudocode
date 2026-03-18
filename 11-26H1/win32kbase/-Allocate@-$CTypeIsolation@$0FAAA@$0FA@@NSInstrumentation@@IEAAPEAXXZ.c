/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140180E14
 * Callers:
 *     ??$UserAllocateIsolatedType@UtagIMC@@@@YAPEAUtagIMC@@_K@Z @ 0x1400B9D28 (--$UserAllocateIsolatedType@UtagIMC@@@@YAPEAUtagIMC@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagEVENTHOOK@@@@YAPEAUtagEVENTHOOK@@_K@Z @ 0x1401B468C (--$UserAllocateIsolatedType@UtagEVENTHOOK@@@@YAPEAUtagEVENTHOOK@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@U_CALLPROCDATA@@@@YAPEAU_CALLPROCDATA@@_K@Z @ 0x1401B6F88 (--$UserAllocateIsolatedType@U_CALLPROCDATA@@@@YAPEAU_CALLPROCDATA@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagXSTATE@@@@YAPEAUtagXSTATE@@_K@Z @ 0x1401DC86C (--$UserAllocateIsolatedType@UtagXSTATE@@@@YAPEAUtagXSTATE@@_K@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QEAAPEAXXZ @ 0x140180FB8 (-Allocate@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401DDA44 (-Create@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<20480,80>::Allocate(__int64 *a1)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v3; // rbp
  __int64 *i; // rsi
  __int64 v5; // r14
  PVOID v7; // rax
  PVOID v8; // rbx
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  struct W32_PUSH_LOCK *v15; // rbx
  _QWORD *v16; // rcx
  struct W32_PUSH_LOCK *v17; // [rsp+20h] [rbp-18h] BYREF
  char v18; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v7 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v8 = v7;
    if ( v7 )
      memset(v7, 0, 0x50uLL);
    return (__int64)v8;
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
      v13 = NSInstrumentation::CSectionEntry<20480,80>::Create();
      v14 = (_QWORD *)v13;
      if ( v13 )
      {
        v3 = NSInstrumentation::CSectionBitmapAllocator<20480,80>::Allocate(*(_QWORD *)(v13 + 32));
        if ( v3 )
        {
          v15 = (struct W32_PUSH_LOCK *)a1[2];
          W32AcquirePushLockExclusiveEx(v15);
          v16 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_21;
          *v14 = v16;
          v14[1] = a1;
          v16[1] = v14;
          *((_DWORD *)a1 + 8) += 255;
          *a1 = (__int64)v14;
          W32ReleasePushLockExclusiveEx(v15);
        }
        else
        {
          NSInstrumentation::CSectionEntry<32768,128>::Destroy(v14);
        }
      }
      return v3;
    }
    v5 = NSInstrumentation::CSectionBitmapAllocator<20480,80>::Allocate(i[4]);
    if ( v5 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_6;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v17);
  v9 = (struct W32_PUSH_LOCK *)a1[2];
  W32AcquirePushLockExclusiveEx(v9);
  v10 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v11 = (__int64 **)i[1], *v11 != i)
    || (*v11 = v10, v10[1] = (__int64)v11, v12 = *a1, *(__int64 **)(*a1 + 8) != a1) )
  {
LABEL_21:
    __fastfail(3u);
  }
  *i = v12;
  i[1] = (__int64)a1;
  *(_QWORD *)(v12 + 8) = i;
  *a1 = (__int64)i;
  W32ReleasePushLockExclusiveEx(v9);
  if ( !v18 )
  {
    v2 = v17;
LABEL_6:
    W32ReleasePushLockShared(v2);
  }
  return v5;
}
