/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x140966B10
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140A85248 (PiDmObjectUpdateCachedCmProperty.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     PiDmCacheDataFree @ 0x140967EA0 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x140ADA71C (PiDmCacheDataEncode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectUpdateCachedObjectProperty(
        int a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *Buf2,
        unsigned int a8)
{
  unsigned int v8; // edi
  DEVPROPKEY **v11; // r14
  unsigned int v12; // r8d
  unsigned int v13; // ebx
  __int64 v14; // rsi
  DEVPROPKEY *v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // r15
  unsigned int v18; // r13d
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // r12
  bool v22; // bl
  int ObjectProperty; // eax
  PVOID v24; // rbx
  PVOID P; // [rsp+60h] [rbp-48h] BYREF
  PVOID v26; // [rsp+68h] [rbp-40h] BYREF
  int v28; // [rsp+C0h] [rbp+18h] BYREF
  int v29; // [rsp+C4h] [rbp+1Ch]
  __int64 v30; // [rsp+C8h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v29 = HIDWORD(a3);
    v8 = 0;
    v26 = 0LL;
    v28 = 0;
    P = 0LL;
    LODWORD(v30) = 0;
    switch ( a1 )
    {
      case 1:
        v11 = &PiDmCachedDeviceKeys;
        v12 = 10;
LABEL_4:
        v13 = 0;
        v14 = a5;
        while ( 1 )
        {
          if ( v13 >= v12 )
            return;
          v15 = v11[3 * v13];
          if ( *(_DWORD *)(a5 + 16) == v15->pid )
          {
            v16 = *(_QWORD *)a5 - *(_QWORD *)&v15->fmtid.Data1;
            if ( *(_QWORD *)a5 == *(_QWORD *)&v15->fmtid.Data1 )
              v16 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v15->fmtid.Data4;
            if ( !v16 )
              break;
          }
          ++v13;
        }
        if ( (int)PiDmGetObject(a1, a2, &v26) < 0 )
          return;
        v17 = (struct _KTHREAD *)v26;
        KsepCacheLock(v26);
        v18 = a8;
        v19 = 3LL * v13;
        v20 = *((_DWORD *)&v17->WaitRegister.Flags + 6 * v13);
        v21 = (__int64)(&v17->WaitRegister + 8 * v19);
        if ( v20 <= 1 )
        {
          PiDmCacheDataEncode(a6, Buf2, a8, LODWORD(v11[v19 + 1]), HIDWORD(v11[v19 + 1]), v21);
          v22 = v20 == 0;
        }
        else
        {
          v22 = 0;
        }
        CmpUnlockSiloKeyLockTracker(v17);
        if ( v22 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             0x5A706E50u,
                             v18,
                             (__int64)a2,
                             a1,
                             0LL,
                             0LL,
                             v14,
                             &v28,
                             &P,
                             (unsigned int *)&v30,
                             0x10000);
          v24 = P;
          if ( ObjectProperty == -1073741275 )
          {
            v28 = 0;
            if ( P )
            {
              ExFreePoolWithTag(P, 0x5A706E50u);
              v24 = 0LL;
            }
          }
          else
          {
            if ( ObjectProperty < 0 )
            {
LABEL_17:
              KsepCacheLock(v17);
              PiDmCacheDataFree(v21);
              CmpUnlockSiloKeyLockTracker(v17);
              goto LABEL_18;
            }
            v8 = v30;
          }
          if ( v8 != v18 || v28 != a6 )
            goto LABEL_17;
          if ( v24 )
          {
            if ( !Buf2 )
              goto LABEL_17;
          }
          else if ( Buf2 )
          {
            goto LABEL_17;
          }
          if ( !v8 )
          {
LABEL_18:
            if ( v24 )
              ExFreePoolWithTag(v24, 0x5A706E50u);
            goto LABEL_20;
          }
          if ( v24 )
          {
            if ( memcmp(v24, Buf2, v8) )
              goto LABEL_17;
            goto LABEL_18;
          }
        }
LABEL_20:
        PiDmObjectRelease((unsigned int *)v17);
        return;
      case 3:
        v11 = &PiDmCachedDeviceInterfaceKeys;
        v12 = 1;
        goto LABEL_4;
      case 5:
        v11 = &PiDmCachedDeviceContainerKeys;
        v12 = 3;
        goto LABEL_4;
    }
  }
}
