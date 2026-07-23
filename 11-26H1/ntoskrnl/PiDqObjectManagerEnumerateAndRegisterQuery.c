/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14094F1CC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ConstraintEval @ 0x14094EB24 (ConstraintEval.c)
 *     PiDqQueryLock @ 0x140950830 (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1409508A4 (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x140950AA4 (PiDqQueryFreeActiveData.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409649B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x140967EEC (PiDmObjectIsEnumerable.c)
 *     PiDqQueryEnumObject @ 0x140968E04 (PiDqQueryEnumObject.c)
 *     PiDqQueryAppendActionEntry @ 0x140968F98 (PiDqQueryAppendActionEntry.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // ebx
  _BYTE *v6; // r12
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int Object; // eax
  PVOID v11; // rsi
  __int64 Pool2; // rax
  __int64 *v14; // rsi
  unsigned int j; // r14d
  __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r9d
  __int128 v20; // xmm0
  _DWORD *v21; // rdx
  int v22; // eax
  const wchar_t *v23; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  __int64 v26; // rax
  const wchar_t *i; // r14
  __int64 v28; // rax
  int v29; // eax
  PVOID v30; // r14
  __int64 v31; // rax
  char v32; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v34; // [rsp+40h] [rbp-99h] BYREF
  __int128 v35; // [rsp+50h] [rbp-89h]
  _OWORD v36[2]; // [rsp+60h] [rbp-79h] BYREF
  __int128 v37; // [rsp+80h] [rbp-59h]
  _BYTE *v38; // [rsp+90h] [rbp-49h]
  _BYTE v39[80]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  LOBYTE(v2) = *(_BYTE *)(v2 + 40) & 1;
  v38 = 0LL;
  v32 = v2;
  EnumObject = 0;
  v6 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  memset(v36, 0, sizeof(v36));
  v37 = 0LL;
  if ( !(_BYTE)v2 )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  ExAcquireFastMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( (HIDWORD(Resource[2].OwnerTable) & 2) != 0 )
  {
    EnumObject = -1073741670;
  }
  else
  {
    SpinLock = (PERESOURCE *)Resource[1].SpinLock;
    if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
      __fastfail(3u);
    *(_QWORD *)a2 = (char *)Resource + 192;
    *(_QWORD *)(a2 + 8) = SpinLock;
    *SpinLock = (PERESOURCE)a2;
    Resource[1].SpinLock = a2;
    ++LODWORD(Resource[2].OwnerTable);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 212));
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( EnumObject >= 0 )
  {
LABEL_2:
    PiDqQueryLock(a2);
    v7 = *(_QWORD *)(a2 + 24);
    v8 = *(_DWORD *)(v7 + 20);
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v7 + 24), &P);
        EnumObject = Object;
        if ( Object != -1073741772 )
        {
          if ( Object < 0 )
            goto LABEL_12;
          v11 = P;
          if ( (unsigned __int8)PiDmObjectIsEnumerable((struct _KTHREAD *)P) )
            EnumObject = PiDqQueryEnumObject(a2, v11);
          PiDmObjectRelease(v11);
          goto LABEL_9;
        }
LABEL_10:
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 32) = 0;
          *(_QWORD *)(Pool2 + 16) = 0LL;
          *(_QWORD *)(Pool2 + 24) = 0LL;
          EnumObject = 0;
          PiDqQueryAppendActionEntry(a2, Pool2);
          *(_DWORD *)(a2 + 216) |= 0x20u;
        }
        else
        {
          EnumObject = -1073741670;
        }
        goto LABEL_12;
      }
      if ( v9 != 1 )
        goto LABEL_10;
      v23 = *(const wchar_t **)(v7 + 32);
      while ( 2 )
      {
        if ( !*v23 )
          goto LABEL_9;
        v26 = -1LL;
        do
          ++v26;
        while ( v23[v26] );
        for ( i = &v23[v26 + 1]; *i; i += v28 + 1 )
        {
          if ( !wcsicmp(v23, i) )
            goto LABEL_60;
          v28 = -1LL;
          do
            ++v28;
          while ( i[v28] );
        }
        v29 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, v23, &P);
        EnumObject = v29;
        if ( v29 == -1073741772 )
        {
          EnumObject = 0;
LABEL_60:
          v31 = -1LL;
          do
            ++v31;
          while ( v23[v31] );
          v23 += v31 + 1;
          continue;
        }
        break;
      }
      if ( v29 >= 0 )
      {
        v30 = P;
        if ( (unsigned __int8)PiDmObjectIsEnumerable((struct _KTHREAD *)P) )
          EnumObject = PiDqQueryEnumObject(a2, v30);
        PiDmObjectRelease(v30);
        P = 0LL;
        if ( EnumObject >= 0 )
          goto LABEL_60;
      }
    }
    else
    {
      v14 = &PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 6; ++j )
      {
        v16 = v14;
        if ( *(_DWORD *)v14 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v17 = v14[1];
          v18 = *(_QWORD *)(a2 + 24);
          v19 = *((_DWORD *)v14 + 4);
          v20 = *(_OWORD *)v17;
          v21 = *(_DWORD **)(v18 + 88);
          LODWORD(v18) = *(_DWORD *)(v18 + 80);
          LODWORD(v35) = *(_DWORD *)(v17 + 16);
          v34 = v20;
          EnumObject = ConstraintEval(v18, v21, (__int64)&v34, v19, (__int64)v36);
          if ( EnumObject != -1073741823 )
            break;
        }
        v14 += 4;
      }
      if ( EnumObject >= 0 )
      {
        if ( DWORD2(v37) != *((_DWORD *)v16 + 5) )
          goto LABEL_10;
        if ( DWORD2(v37) == 13 )
        {
          EnumObject = PnpStringFromGuid(v38, v39);
          if ( EnumObject < 0 )
            goto LABEL_12;
          v6 = v39;
        }
        else if ( DWORD2(v37) == 18 )
        {
          v6 = v38;
        }
        v22 = PiDmGetObject(*((unsigned int *)v16 + 6), v6, &P);
        EnumObject = v22;
        if ( v22 == -1073741772 )
          goto LABEL_10;
        if ( v22 < 0 )
          goto LABEL_12;
        EnumObject = PiDmListEnumObjectsWithCallback(*((unsigned int *)v16 + 7), P, PiDqEnumQueryObjectsCallback, a2);
        PiDmObjectRelease(P);
        goto LABEL_9;
      }
      if ( EnumObject == -1073741823 )
      {
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(unsigned int *)&Resource[2].ActiveCount,
                       PiDqEnumQueryObjectsCallback,
                       a2);
        if ( EnumObject >= 0 )
        {
LABEL_9:
          if ( EnumObject < 0 )
            goto LABEL_12;
          goto LABEL_10;
        }
      }
    }
LABEL_12:
    PiDqQueryUnlock(a2);
    if ( EnumObject >= 0 )
      goto LABEL_13;
  }
  PiDqQueryLock(a2);
  *(_DWORD *)(a2 + 216) |= 1u;
  PiDqQueryFreeActiveData(a2);
  PiDqQueryUnlock(a2);
LABEL_13:
  if ( v32 )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)EnumObject;
}
