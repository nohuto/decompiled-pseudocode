/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x140951BA0
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PiDmGetCachedKeyIndex @ 0x140951FF0 (PiDmGetCachedKeyIndex.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     PiDmCacheDataDecode @ 0x140962C40 (PiDmCacheDataDecode.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     PiDmCacheDataFree @ 0x140967EA0 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x140ADA71C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140AFD84C (PiDmGetReferencedObjectFromProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  char *v6; // r13
  int Object; // esi
  _BYTE *v8; // r15
  int v9; // r12d
  struct _KTHREAD *v10; // rbx
  unsigned int v11; // ecx
  DEVPROPKEY **v12; // rdi
  unsigned int v13; // r9d
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // r14
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // rcx
  int ReferencedObjectFromProperty; // eax
  __int64 v20; // rdi
  int v21; // eax
  LONG v22; // eax
  __int64 v23; // r14
  char *v24; // r13
  int v25; // eax
  unsigned int v26; // esi
  void *Pool2; // rax
  bool v28; // zf
  PVOID v29; // r13
  unsigned int i; // edx
  __int64 v31; // rdi
  __int64 v32; // r8
  __int128 v33; // [rsp+68h] [rbp-29h] BYREF
  __int64 v34; // [rsp+78h] [rbp-19h] BYREF
  PVOID P; // [rsp+80h] [rbp-11h]
  __int64 v36; // [rsp+88h] [rbp-9h] BYREF
  struct _KTHREAD *v37; // [rsp+90h] [rbp-1h] BYREF
  PVOID v40; // [rsp+F8h] [rbp+67h] BYREF
  char v41; // [rsp+100h] [rbp+6Fh]

  v40 = a3;
  *((_QWORD *)&v33 + 1) = 0LL;
  v6 = a3;
  Object = 0;
  LODWORD(v34) = 0;
  v8 = 0LL;
  *a6 = 0;
  v9 = 0;
  v41 = 0;
  v10 = 0LL;
  P = 0LL;
  v36 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  v37 = 0LL;
  if ( a4 )
    return;
  v11 = a1 - 1;
  if ( v11 )
  {
    v17 = v11 - 2;
    if ( v17 )
    {
      if ( v17 != 2 )
        return;
      v12 = &PiDmCachedDeviceContainerKeys;
      v13 = 3;
    }
    else
    {
      v12 = &PiDmCachedDeviceInterfaceKeys;
      v13 = 1;
    }
  }
  else
  {
    v12 = &PiDmCachedDeviceKeys;
    v13 = 10;
  }
  CachedKeyIndex = PiDmGetCachedKeyIndex(v12, v13, a5);
  v15 = CachedKeyIndex;
  if ( CachedKeyIndex >= v16 )
    return;
  if ( !v6 )
  {
    Object = PiDmGetObject(a1, a2, &v40);
    if ( Object < 0 )
      return;
    v6 = (char *)v40;
    v41 = 1;
  }
  v23 = 3 * v15;
  if ( LODWORD(v12[v23 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(0x5A706E50u, 0LL, 0LL, a5, (__int64)&v33, (__int64)&v36, (__int64)&v34, 0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v33) = 0;
      HIDWORD(v33) = 0;
    }
    else
    {
      HIDWORD(v33) = v34;
    }
    v8 = (_BYTE *)v36;
  }
  KsepCacheLock(v6);
  v24 = &v6[8 * v23 + 112];
  if ( !*(_DWORD *)v24 )
  {
    if ( !LODWORD(v12[v23 + 2]) )
      goto LABEL_57;
    goto LABEL_65;
  }
  if ( *(_DWORD *)v24 == 1 || Object < 0 || !LODWORD(v12[v23 + 2]) )
    goto LABEL_65;
  v25 = PiDmCacheDataDecode(v24, (char *)&v33 + 4, 0LL, 0LL, (char *)&v33 + 8);
  Object = v25;
  if ( v25 != -1073741275 )
  {
    if ( (int)(v25 + 0x80000000) >= 0 && v25 != -1073741789 )
      goto LABEL_64;
    v26 = DWORD2(v33);
    if ( DWORD2(v33) )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      P = Pool2;
      if ( !Pool2 )
      {
        Object = -1073741670;
        goto LABEL_64;
      }
    }
    else
    {
      Pool2 = 0LL;
    }
    Object = PiDmCacheDataDecode(v24, (char *)&v33 + 4, Pool2, v26, (char *)&v33 + 8);
    if ( Object >= 0 )
    {
      v9 = DWORD1(v33);
      if ( *(_QWORD *)((char *)&v33 + 4) != __PAIR64__(HIDWORD(v33), v33) )
        goto LABEL_65;
      if ( !DWORD2(v33) )
      {
LABEL_56:
        *a6 = 1;
        goto LABEL_57;
      }
      v28 = memcmp(P, v8, DWORD2(v33)) == 0;
      goto LABEL_55;
    }
LABEL_64:
    v9 = DWORD1(v33);
    goto LABEL_65;
  }
  Object = 0;
  v28 = (_DWORD)v33 == 0;
LABEL_55:
  if ( v28 )
    goto LABEL_56;
LABEL_65:
  PiDmCacheDataFree(v24);
  if ( Object >= 0 && LODWORD(v12[v23 + 2]) == 1 && !HIDWORD(v12[v23 + 1]) )
    Object = PiDmCacheDataEncode((unsigned int)v33, v8, HIDWORD(v33), LODWORD(v12[v23 + 1]), 0, v24);
LABEL_57:
  v29 = v40;
  CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)v40);
  if ( LODWORD(v12[v23 + 2]) && !*a6 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 3 )
        goto LABEL_26;
      v31 = 7LL * i;
      v32 = PiDmAggregatedBooleanDefs[v31 + 1];
      if ( *(_DWORD *)(v32 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v18 = *(_QWORD *)v32 - *(_QWORD *)a5;
        if ( *(_QWORD *)v32 == *(_QWORD *)a5 )
          v18 = *(_QWORD *)(v32 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v18 && a1 == LODWORD(PiDmAggregatedBooleanDefs[v31]) )
          break;
      }
    }
    if ( &PiDmAggregatedBooleanDefs[v31] )
    {
      ReferencedObjectFromProperty = PiDmGetReferencedObjectFromProperty(
                                       a1,
                                       a2,
                                       (_DWORD)v29,
                                       a5,
                                       PiDmAggregatedBooleanDefs[v31 + 2],
                                       PiDmAggregatedBooleanDefs[v31 + 3],
                                       (__int64)&v37);
      v10 = v37;
      if ( ReferencedObjectFromProperty >= 0 )
      {
        v20 = PiDmAggregatedBooleanDefs[v31 + 6];
        KsepCacheLock(v37);
        if ( Object < 0 || (v21 = *(volatile LONG *)((char *)&v10->Header.Lock + v20), v21 == 0x80000000) )
        {
          *(LONG *)((char *)&v10->Header.LockNV + v20) = 0x80000000;
          goto LABEL_25;
        }
        if ( v9 == 17 )
        {
          if ( *(_BYTE *)P == 0xFF )
          {
            if ( (_DWORD)v33 == 17 && *v8 )
              goto LABEL_25;
            v22 = v21 - 1;
LABEL_24:
            *(LONG *)((char *)&v10->Header.LockNV + v20) = v22;
            goto LABEL_25;
          }
          if ( *(_BYTE *)P )
          {
LABEL_25:
            CmpUnlockSiloKeyLockTracker(v10);
            goto LABEL_26;
          }
        }
        if ( (_DWORD)v33 != 17 || *v8 != 0xFF )
          goto LABEL_25;
        v22 = v21 + 1;
        goto LABEL_24;
      }
    }
  }
LABEL_26:
  if ( P )
    ExFreePoolWithTag(P, 0x5A706E50u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x5A706E50u);
  if ( v10 )
    PiDmObjectRelease(v10);
  if ( v41 )
    PiDmObjectRelease(v29);
}
