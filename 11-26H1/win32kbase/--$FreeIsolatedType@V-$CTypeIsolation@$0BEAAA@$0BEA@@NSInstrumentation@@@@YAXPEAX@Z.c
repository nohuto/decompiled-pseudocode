/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B7864
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140011BA0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2174 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1400B7B38 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(void *a1)
{
  __int64 *v2; // r14
  struct W32_PUSH_LOCK *v3; // r15
  __int64 *i; // rsi
  __int64 *v5; // r12
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  ULONG v11; // ebx
  struct W32_PUSH_LOCK *v12; // rbx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rax
  struct W32_PUSH_LOCK *v16; // [rsp+30h] [rbp-28h] BYREF
  char v17; // [rsp+38h] [rbp-20h]

  v2 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4384LL) + 32LL);
  if ( !v2 || !a1 )
    return;
  if ( *((_BYTE *)v2 + 36) )
  {
    memset(a1, 0, 0x140uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v2[3], a1);
    return;
  }
  v16 = (struct W32_PUSH_LOCK *)v2[2];
  v3 = v16;
  v17 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v16, 0LL);
  for ( i = (__int64 *)*v2; ; i = (__int64 *)*i )
  {
    if ( i == v2 )
    {
      W32ReleasePushLockShared(v16);
      KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)a1, 0LL, 0LL);
    }
    v5 = (__int64 *)i[4];
    v6 = v5[1];
    v7 = v6 ^ v5[2];
    if ( (unsigned __int64)a1 >= v7 && (unsigned __int64)a1 < v7 + 81920 )
      break;
LABEL_12:
    ;
  }
  v8 = ((unsigned __int16)a1 & 0xFFFu) / 0x140uLL;
  if ( ((unsigned __int16)a1 & 0xFFF) != 320 * v8 )
  {
    v9 = 2LL;
    goto LABEL_11;
  }
  if ( !RtlTestBit(
          (PRTL_BITMAP)(v5[3] ^ v5[2]),
          v8 + 12 * (((unsigned int)a1 - ((unsigned int)v5[2] ^ (unsigned int)v6)) >> 12)) )
  {
    v9 = 1LL;
LABEL_11:
    NSInstrumentation::PlatformAbort(v9, a1);
    goto LABEL_12;
  }
  v10 = *v5;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  v11 = ((unsigned __int16)a1 & 0xFFFu) / 0x140
      + 12 * (((unsigned int)a1 - (*((_DWORD *)v5 + 2) ^ (unsigned int)v5[2])) >> 12);
  RtlClearBit((PRTL_BITMAP)(v5[3] ^ v5[2]), v11);
  memset(a1, 0, 0x140uLL);
  *((_DWORD *)v5 + 8) = v11;
  ExReleasePushLockExclusiveEx(v10);
  KeLeaveCriticalRegion();
  if ( i == (__int64 *)*v2 )
    goto LABEL_15;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v16);
  v12 = (struct W32_PUSH_LOCK *)v2[2];
  W32AcquirePushLockExclusiveEx(v12);
  v13 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v14 = (__int64 **)i[1], *v14 != i)
    || (*v14 = v13, v13[1] = (__int64)v14, v15 = *v2, *(__int64 **)(*v2 + 8) != v2) )
  {
    __fastfail(3u);
  }
  *i = v15;
  i[1] = (__int64)v2;
  *(_QWORD *)(v15 + 8) = i;
  *v2 = (__int64)i;
  W32ReleasePushLockExclusiveEx(v12);
  if ( !v17 )
  {
    v3 = v16;
LABEL_15:
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
