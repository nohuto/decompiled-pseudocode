/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x1409A4440
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1409A2D70 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        int a1,
        unsigned __int16 *a2,
        signed __int64 *a3,
        __int64 a4,
        _DWORD *a5,
        GUID *Guid,
        unsigned int a7,
        unsigned int *a8)
{
  char v8; // r14
  signed __int64 *v9; // rdi
  unsigned int v12; // esi
  DEVPROPKEY **v13; // r10
  unsigned int v14; // r8d
  unsigned int i; // ebx
  DEVPROPKEY *v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v19; // rdx
  LegacyAutoBoost *v20; // rbp
  signed __int64 *v21; // rdx
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  signed __int64 v30; // rtt
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 result; // rax
  bool v34; // cf
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  signed __int64 *v40; // [rsp+60h] [rbp+18h] BYREF

  v40 = a3;
  v8 = 0;
  v9 = a3;
  v12 = -1073741802;
  switch ( a1 )
  {
    case 1:
      v13 = &PiDmCachedDeviceKeys;
      v14 = 10;
      break;
    case 3:
      v13 = &PiDmCachedDeviceInterfaceKeys;
      v14 = 1;
      break;
    case 5:
      v13 = &PiDmCachedDeviceContainerKeys;
      v14 = 3;
      break;
    default:
      return 3221225494LL;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= v14 )
      return v12;
    v16 = v13[3 * i];
    if ( *(_DWORD *)(a4 + 16) == v16->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v17 )
        break;
    }
  }
  if ( v9 )
  {
LABEL_11:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v20 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
    if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9, 0, v20, (struct _KTHREAD *)v9);
    if ( v20 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v20, v19);
      else
        *((_BYTE *)v20 + 10) = 1;
    }
    v21 = &v9[3 * i];
    v22 = *((_DWORD *)v21 + 28);
    if ( v22 <= 1 )
      goto LABEL_25;
    v12 = 0;
    DestinationString = 0LL;
    if ( v22 == 6 )
    {
      v23 = *((_DWORD *)v21 + 30);
      if ( v23 == 18 )
      {
        *a5 = 18;
        v24 = -1LL;
        while ( *(_WORD *)(*(_QWORD *)(v21[16] + 16) + 2 * v24++ + 2) != 0 )
          ;
        v26 = 2 * v24 + 2;
        *a8 = v26;
        if ( a7 >= v26 )
        {
          memmove(Guid, *(const void **)(v21[16] + 16), v26);
          goto LABEL_25;
        }
      }
      else
      {
        if ( v23 != 13 )
        {
          v12 = -1073741595;
          goto LABEL_25;
        }
        v34 = a7 < 0x10;
        *a5 = 13;
        *a8 = 16;
        if ( !v34 )
        {
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v21[16] + 16));
          v12 = RtlGUIDFromString(&DestinationString, Guid);
          goto LABEL_25;
        }
      }
    }
    else
    {
      v27 = v22 - 2;
      if ( !v27 )
      {
        v12 = -1073741275;
        goto LABEL_25;
      }
      v35 = v27 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
          {
            v12 = -1073741595;
            goto LABEL_25;
          }
          *a5 = *((_DWORD *)v21 + 30);
          v37 = *((_DWORD *)v21 + 31);
          *a8 = v37;
          if ( a7 >= v37 )
          {
            memmove(Guid, (const void *)v21[16], v37);
            goto LABEL_25;
          }
        }
        else
        {
          v34 = a7 < 0x10;
          *a5 = 13;
          *a8 = 16;
          if ( !v34 )
          {
            *Guid = *(GUID *)(v21 + 15);
            goto LABEL_25;
          }
        }
      }
      else
      {
        *a5 = *((_DWORD *)v21 + 30);
        v38 = *((_DWORD *)v21 + 31);
        *a8 = v38;
        if ( a7 >= v38 )
        {
          memmove(Guid, v21 + 16, v38);
          goto LABEL_25;
        }
      }
    }
    v12 = -1073741789;
LABEL_25:
    _m_prefetchw(v9);
    v28 = *v9;
    v29 = *v9 - 16;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v29 = 0LL;
    if ( (v28 & 2) != 0 || (v30 = *v9, v30 != _InterlockedCompareExchange64(v9, v29, v28)) )
      ExfReleasePushLock(v9);
    KeAbPostRelease((unsigned __int64)v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32);
    if ( v8 )
      PiDmObjectRelease(v9);
    return v12;
  }
  result = PiDmGetObject(a1, a2, &v40);
  if ( (int)result >= 0 )
  {
    v9 = v40;
    v8 = 1;
    goto LABEL_11;
  }
  return result;
}
