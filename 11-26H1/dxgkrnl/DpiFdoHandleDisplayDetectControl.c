/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x140014BDC
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031C134 (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DpiFdoInitializeConnectionChangePackage @ 0x140014A10 (DpiFdoInitializeConnectionChangePackage.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1400150E8 (DpiFdoQueueConnectionChangePackage.c)
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     DpIndicateConnectorChange @ 0x1400566C0 (DpIndicateConnectorChange.c)
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x14018EB90 (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x140319F04 (DpiPdoIsChildConnected.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int64 v5; // rdx
  int v6; // esi
  int IsChildConnected; // ebx
  char v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  _QWORD *v12; // r12
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // rax
  int v17; // eax
  _DWORD *v18; // rax
  _QWORD *v19; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  char v21; // [rsp+A8h] [rbp+48h]
  char v22; // [rsp+B0h] [rbp+50h] BYREF
  char v23; // [rsp+B8h] [rbp+58h] BYREF

  v3 = *a2;
  v22 = 0;
  v5 = v3;
  v23 = 0;
  v6 = v3 & 0xF000000;
  IsChildConnected = 0;
  if ( ((v6 - 50331648) & 0xFEFFFFFF) == 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3624), &LockHandle);
    if ( v6 == 50331648 && *(_QWORD *)(a1 + 3632) != a1 + 3632 )
      IsChildConnected = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
    *(_BYTE *)(a1 + 3648) = v6 == 50331648;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (unsigned int)IsChildConnected;
  }
  if ( ((v6 - 0x1000000) & 0xFEFFFFFF) != 0 )
  {
    IsChildConnected = -1073741811;
    WdLogSingleEntry2(2LL, (v5 >> 24) & 0xF, -1073741811LL);
    WdLogGlobalForLineNumber = 19036;
    return (unsigned int)IsChildConnected;
  }
  v21 = 0;
  v9 = 0;
  if ( v6 != 0x2000000 )
  {
    LOBYTE(a3) = *((_BYTE *)a2 + 21);
    IsChildConnected = DpiPdoIsChildConnected(
                         *(_QWORD *)(a1 + 24),
                         v5 & 0xFFFFFF,
                         a3,
                         (v5 & 0x10000000) != 0,
                         (__int64)&v22,
                         (__int64)&v23);
    if ( IsChildConnected < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 18901;
      goto LABEL_24;
    }
    if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
      && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
    {
      v17 = DmmSetTargetForceableState(*(void *const *)(a1 + 4032), *a2 & 0xFFFFFF, IsChildConnected == 1075708975);
      if ( v17 < 0 )
      {
        WdLogSingleEntry3(2LL, v17, IsChildConnected == 1075708975, 0LL);
        WdLogGlobalForLineNumber = 18922;
      }
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
    }
    if ( !v23 && (!v22 || !*((_BYTE *)a2 + 20)) || IsChildConnected == 1075708975 )
      return (unsigned int)IsChildConnected;
    v18 = DpiFdoInitializeConnectionChangePackage(
            a2 + 1,
            *a2 & 0xFFFFFF,
            v22 != 0 ? 10 : 8,
            -2,
            *((_BYTE *)a2 + 20),
            0,
            0,
            1);
    if ( v18 )
    {
      IsChildConnected = DpiFdoQueueConnectionChangePackage(a1, v18, 0LL);
      if ( IsChildConnected >= 0 )
        goto LABEL_35;
    }
    else
    {
      IsChildConnected = -1073741670;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 18970;
LABEL_24:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 3780), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
    return (unsigned int)IsChildConnected;
  }
  v10 = (_QWORD *)(a1 + 3600);
  v11 = *(_QWORD **)(a1 + 3600);
  while ( 1 )
  {
    v19 = v11;
    v12 = v11;
    if ( v11 == v10 )
      break;
    LOBYTE(a3) = *((_BYTE *)a2 + 21);
    v13 = *((_DWORD *)v11 - 2);
    v11 = (_QWORD *)*v11;
    IsChildConnected = DpiPdoIsChildConnected(
                         *(_QWORD *)(a1 + 24),
                         v13,
                         a3,
                         (*a2 & 0x10000000) != 0,
                         (__int64)&v22,
                         (__int64)&v23);
    if ( IsChildConnected < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 18812;
      goto LABEL_22;
    }
    if ( IsChildConnected == 1075708988 || IsChildConnected == 1075708975 )
    {
      if ( (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
      {
        v14 = DmmSetTargetForceableState(
                *(void *const *)(a1 + 4032),
                *((_DWORD *)v19 - 2),
                IsChildConnected == 1075708975);
        if ( v14 < 0 )
        {
          WdLogSingleEntry3(2LL, v14, IsChildConnected == 1075708975, 0LL);
          WdLogGlobalForLineNumber = 18833;
        }
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
        v12 = v19;
      }
      v9 = v21;
      v10 = (_QWORD *)(a1 + 3600);
      if ( IsChildConnected == 1075708975 )
        continue;
    }
    if ( v23 )
    {
LABEL_17:
      v15 = DpiFdoInitializeConnectionChangePackage(
              a2 + 1,
              *((_DWORD *)v12 - 2),
              v22 != 0 ? 10 : 8,
              -2,
              *((_BYTE *)a2 + 20),
              0,
              0,
              1);
      if ( !v15 )
      {
        IsChildConnected = -1073741670;
LABEL_39:
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 18880;
LABEL_22:
        v9 = v21;
        break;
      }
      IsChildConnected = DpiFdoQueueConnectionChangePackage(a1, v15, 0LL);
      if ( IsChildConnected < 0 )
        goto LABEL_39;
      v9 = 1;
      v21 = 1;
LABEL_20:
      v10 = (_QWORD *)(a1 + 3600);
    }
    else
    {
      v9 = v21;
      v10 = (_QWORD *)(a1 + 3600);
      if ( v22 )
      {
        if ( !*((_BYTE *)a2 + 20) )
          goto LABEL_20;
        goto LABEL_17;
      }
    }
  }
  if ( IsChildConnected < 0 )
    goto LABEL_24;
  if ( !v9 )
    return (unsigned int)IsChildConnected;
LABEL_35:
  if ( !*((_BYTE *)a2 + 22) )
  {
    LOBYTE(a3) = 1;
    IsChildConnected = DpiFdoQueueConnectionChangePackage(a1, 0LL, a3);
    if ( IsChildConnected >= 0 )
      return (unsigned int)IsChildConnected;
    goto LABEL_24;
  }
  LOBYTE(a3) = *((_BYTE *)a2 + 20);
  IsChildConnected = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), 0, a3, *((_BYTE *)a2 + 21), 0, 0);
  if ( IsChildConnected < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 19006;
    goto LABEL_24;
  }
  return (unsigned int)IsChildConnected;
}
