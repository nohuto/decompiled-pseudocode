/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400B9AFC
 * Callers:
 *     ??$UserAllocateIsolatedType@UtagTIMER@@@@YAPEAUtagTIMER@@_K@Z @ 0x1400B98EC (--$UserAllocateIsolatedType@UtagTIMER@@@@YAPEAUtagTIMER@@_K@Z.c)
 *     ??$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_1_@?1??Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ@SAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1400B9AE0 (--$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_1_@-1--Initialize@-$.c)
 *     ??$UserAllocateIsolatedType@UtagBWND@@@@YAPEAUtagBWND@@_K@Z @ 0x1401DC5B8 (--$UserAllocateIsolatedType@UtagBWND@@@@YAPEAUtagBWND@@_K@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B6964 (-Allocate@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A2E8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015AA00 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Allocate(__int64 *a1)
{
  PVOID v2; // rax
  PVOID v3; // rbx
  struct W32_PUSH_LOCK *v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // edx
  __int64 *i; // rsi
  __int64 v9; // r14
  struct W32_PUSH_LOCK *v10; // rbx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  _QWORD *v18; // rsi
  struct W32_PUSH_LOCK *v19; // rbx
  __int64 v20; // rcx
  struct W32_PUSH_LOCK *v21; // [rsp+20h] [rbp-18h] BYREF
  char v22; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    v2 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
    v3 = v2;
    if ( v2 )
      memset(v2, 0, 0x90uLL);
    return (__int64)v3;
  }
  else
  {
    v5 = (struct W32_PUSH_LOCK *)a1[2];
    v6 = 0LL;
    v21 = v5;
    v22 = 0;
    RIMLockShared((__int64)v5);
    for ( i = (__int64 *)*a1; i != a1; i = (__int64 *)*i )
    {
      v9 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(i[4], v7);
      if ( v9 )
      {
        if ( i == (__int64 *)*a1 )
        {
          W32ReleasePushLockShared(v5);
          return v9;
        }
        W32ReleasePushLockShared(v5);
        v10 = (struct W32_PUSH_LOCK *)a1[2];
        W32AcquirePushLockExclusiveEx(v10);
        v11 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i
          || (v12 = (__int64 **)i[1], *v12 != i)
          || (*v12 = v11, v11[1] = (__int64)v12, v13 = (_QWORD *)*a1, *(__int64 **)(*a1 + 8) != a1) )
        {
LABEL_14:
          __fastfail(3u);
        }
        *i = (__int64)v13;
        i[1] = (__int64)a1;
        v13[1] = i;
        *a1 = (__int64)i;
        W32ReleasePushLockExclusiveEx(v10);
        return v9;
      }
    }
    NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v21);
    v16 = NSInstrumentation::CSectionEntry<36864,144>::Create(v15, v14);
    v18 = (_QWORD *)v16;
    if ( v16 )
    {
      v6 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(*(_QWORD *)(v16 + 32), v17);
      if ( v6 )
      {
        v19 = (struct W32_PUSH_LOCK *)a1[2];
        W32AcquirePushLockExclusiveEx(v19);
        v20 = *a1;
        if ( *(__int64 **)(*a1 + 8) != a1 )
          goto LABEL_14;
        *v18 = v20;
        v18[1] = a1;
        *(_QWORD *)(v20 + 8) = v18;
        *((_DWORD *)a1 + 8) += 252;
        *a1 = (__int64)v18;
        W32ReleasePushLockExclusiveEx(v19);
      }
      else
      {
        NSInstrumentation::CSectionEntry<49152,192>::Destroy(v18);
      }
    }
    return v6;
  }
}
