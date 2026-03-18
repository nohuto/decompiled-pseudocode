/*
 * XREFs of DpiMiracastFindDisplayAdapterFdo @ 0x1403E7010
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x14004CC44 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x14042A5B4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdo(struct _DEVICE_OBJECT *Object, __int64 *a2, _BYTE *a3)
{
  struct _DEVICE_OBJECT *v5; // r12
  char v6; // bl
  __int64 v7; // rsi
  int v8; // edi
  char v9; // al
  __int64 v10; // r14
  int v11; // r15d
  __int64 i; // rdi
  struct _IO_REMOVE_LOCK *v13; // rbp
  int v14; // ecx
  struct _DEVICE_OBJECT *LowerDeviceObject; // rbp
  int DisplayAdapterFdoIhv; // eax
  struct _DEVICE_OBJECT *v18; // r12
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v5 = Object;
  v6 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v6 = 1;
  }
  v7 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v8 = DxgkMiracastQueryMiracastSupportInternal(&v19);
  if ( v8 < 0 )
  {
    if ( v6 )
      ReleaseMiniportListMutex();
    return (unsigned int)v8;
  }
  else
  {
    v9 = BYTE8(v19);
    if ( a3 )
      *a3 = BYTE8(v19);
    if ( v9 )
    {
      DisplayAdapterFdoIhv = DpiMiracastFindDisplayAdapterFdoIhv(&v21);
      v7 = v21;
      v11 = DisplayAdapterFdoIhv;
LABEL_30:
      if ( v11 >= 0 )
        goto LABEL_31;
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v10 = qword_140168E08;
      v11 = -1073741275;
      if ( *(_QWORD *)v10 != v10 )
      {
        while ( v11 < 0 )
        {
          KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
          for ( i = *(_QWORD *)(v10 + 56); *(_QWORD *)i != *(_QWORD *)(v10 + 56); i = *(_QWORD *)i )
          {
            v7 = i;
            if ( *(_DWORD *)(i + 16) == 1953656900 && *(_DWORD *)(i + 20) == 2 )
            {
              v13 = (struct _IO_REMOVE_LOCK *)(i + 64);
              if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(i + 64), (PVOID)i, File, 1u, 0x20u) >= 0 )
              {
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(i + 484) )
                  DpiCheckForOutstandingD3Requests(i);
                ExAcquireResourceSharedLite(*(PERESOURCE *)(i + 168), 1u);
                v14 = *(_DWORD *)(i + 236);
                if ( (v14 == 2 || *(_DWORD *)(i + 240) == 2 && ((v14 - 3) & 0xFFFFFFFC) == 0 && v14 != 4)
                  && *(_DWORD *)(i + 3360) != -1
                  && *(_DWORD *)(i + 4120) != 1
                  && *(_DWORD *)(i + 284) == 1
                  && *(_QWORD *)(i + 5000) )
                {
                  LowerDeviceObject = v5;
                  ObfReferenceObject(v5);
                  if ( v5 )
                  {
                    while ( LowerDeviceObject != *(struct _DEVICE_OBJECT **)(i + 24) )
                    {
                      v18 = LowerDeviceObject;
                      LowerDeviceObject = IoGetLowerDeviceObject(LowerDeviceObject);
                      if ( v18 )
                        ObfDereferenceObject(v18);
                      if ( !LowerDeviceObject )
                        goto LABEL_47;
                    }
                    ObfDereferenceObject(LowerDeviceObject);
LABEL_47:
                    v5 = Object;
                  }
                  if ( LowerDeviceObject == *(struct _DEVICE_OBJECT **)(i + 24) )
                  {
                    v11 = 0;
                    break;
                  }
                  v13 = (struct _IO_REMOVE_LOCK *)(i + 64);
                }
                if ( *(_BYTE *)(i + 484) )
                  DpiEnableD3Requests(*(_QWORD *)(i + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(i + 168));
                KeLeaveCriticalRegion();
                IoReleaseRemoveLockEx(v13, (PVOID)i, 0x20u);
                v7 = 0LL;
              }
            }
          }
          KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
          v10 = *(_QWORD *)v10;
          if ( *(_QWORD *)v10 == qword_140168E08 )
            goto LABEL_30;
        }
LABEL_31:
        *a2 = v7;
        if ( v6 )
          ReleaseMiniportListMutex();
        return 0LL;
      }
    }
    *a2 = 0LL;
    if ( v6 )
      ReleaseMiniportListMutex();
    return (unsigned int)v11;
  }
}
