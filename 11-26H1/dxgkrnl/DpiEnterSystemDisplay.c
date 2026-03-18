/*
 * XREFs of DpiEnterSystemDisplay @ 0x140086F40
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x140063768 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     DpiDxgkDdiSystemDisplayEnable @ 0x140094688 (DpiDxgkDdiSystemDisplayEnable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiEnterSystemDisplay(char a1, __int64 a2, void (**a3)())
{
  __int64 v3; // rbx
  __int64 v4; // r14
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // r13d
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  ADAPTER_DISPLAY *v13; // rcx
  unsigned int v14; // r12d
  int v15; // edx
  unsigned int v16; // r13d
  __int64 v17; // rcx
  _BYTE *v18; // rdi
  unsigned int v19; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+44h] [rbp-54h] BYREF
  int v21; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-4Ch] BYREF
  unsigned int v23; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v24[17]; // [rsp+54h] [rbp-44h] BYREF
  void (**v26)(); // [rsp+B0h] [rbp+18h]
  int v27; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a3;
  v3 = 0LL;
  v23 = -1;
  v4 = a2;
  v19 = 3;
  v22 = 3;
  v24[0] = 0;
  v20 = 0;
  v21 = 0;
  v27 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( byte_1401691F0 )
  {
    v7 = 640;
    *(_DWORD *)(a2 + 16) = 5;
    v8 = 480;
LABEL_69:
    *(_WORD *)v4 = 0;
    *(_QWORD *)(v4 + 32) = DpiSystemDisplayWrite;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 8) = v7;
    *(_DWORD *)(v4 + 4) = v8;
    *(_DWORD *)(v4 + 12) = v7;
    if ( a3 )
      *a3 = DpiLeaveSystemDisplay;
    return 0LL;
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  v9 = 0;
LABEL_8:
  if ( v9 < 4 )
  {
    v10 = qword_140168E08;
    if ( *(_QWORD *)v10 == v10 )
      goto LABEL_49;
    while ( 1 )
    {
      if ( *(_DWORD *)(v10 + 28) >= 0x3004u && *(_QWORD *)(v10 + 744) )
      {
        if ( !a1 )
          KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
        v11 = *(_QWORD *)(v10 + 56);
        if ( *(_QWORD *)v11 != v11 )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v11 + 16) != 1953656900
              || *(_DWORD *)(v11 + 20) != 2
              || v9 == 3 && *(_BYTE *)(v11 + 1153) && *(_BYTE *)(v11 + 480) )
            {
              goto LABEL_37;
            }
            v3 = v11;
            if ( !a1 )
            {
              KeEnterCriticalRegion();
              if ( *(_BYTE *)(v11 + 484) )
                DpiCheckForOutstandingD3Requests(v11);
              ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 168), 1u);
            }
            if ( (*(_BYTE *)(v11 + 4040) & 4) != 0 )
            {
              if ( !a1 )
                DxgkAcquireAdapterCoreSync(*(_QWORD *)(v11 + 4032), 2LL);
              v12 = *(_QWORD *)(v11 + 4032);
              if ( v12 )
              {
                v13 = *(ADAPTER_DISPLAY **)(v12 + 3160);
                if ( v13 )
                {
                  ADAPTER_DISPLAY::GetPrimaryPath(v13, &v19, &v23, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v22);
                  v19 = v22;
                  if ( v22 == v9 )
                  {
LABEL_38:
                    v4 = a2;
                    if ( !v3 )
                      break;
                    v14 = v23;
                    if ( (int)DpiDxgkDdiSystemDisplayEnable(
                                v10,
                                *(_QWORD *)(v3 + 48),
                                v23,
                                (unsigned int)v24,
                                (__int64)&v20,
                                (__int64)&v21,
                                (__int64)&v27) >= 0 )
                    {
                      v15 = v27;
                      if ( !v27 && qword_140169078 && v3 == *(_QWORD *)(qword_140169078 + 64) )
                        *(_DWORD *)(a2 + 16) = 1;
                      else
                        *(_DWORD *)(a2 + 16) = 5;
                      v16 = v19;
                      goto LABEL_68;
                    }
                    if ( !a1 )
                    {
                      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
                      if ( *(_BYTE *)(v3 + 484) )
                        DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
                      ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
                      KeLeaveCriticalRegion();
                      KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
                      ReleaseMiniportListMutex();
                    }
                    v3 = 0LL;
LABEL_49:
                    ++v9;
                    goto LABEL_8;
                  }
                }
              }
              if ( !a1 )
              {
                DxgkReleaseAdapterCoreSync(*(_QWORD *)(v11 + 4032), 2LL);
LABEL_33:
                if ( *(_BYTE *)(v11 + 484) )
                  DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
                KeLeaveCriticalRegion();
              }
            }
            else if ( !a1 )
            {
              goto LABEL_33;
            }
            v3 = 0LL;
LABEL_37:
            v11 = *(_QWORD *)v11;
            if ( *(_QWORD *)v11 == *(_QWORD *)(v10 + 56) )
              goto LABEL_38;
          }
        }
        if ( !a1 )
          KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      }
      v10 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 == qword_140168E08 )
        goto LABEL_49;
    }
  }
  if ( qword_140169080 )
  {
    v17 = *(_QWORD *)(qword_140169080 + 64);
    if ( *(_DWORD *)(v17 + 236) == 2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v17 + 40) + 240LL))(*(_QWORD *)(v17 + 48));
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  if ( qword_140169078 )
  {
    v3 = *(_QWORD *)(qword_140169078 + 64);
    v10 = *(_QWORD *)(v3 + 40);
    v18 = (_BYTE *)(v3 + 484);
    if ( !a1 )
    {
      KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( *v18 )
        DpiCheckForOutstandingD3Requests(v3);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
    }
    v16 = 3;
    v14 = -1;
    if ( (int)DpiDxgkDdiSystemDisplayEnable(
                v10,
                *(_QWORD *)(v3 + 48),
                -1,
                (unsigned int)v24,
                (__int64)&v20,
                (__int64)&v21,
                (__int64)&v27) >= 0 )
    {
      v15 = v27;
      *(_DWORD *)(v4 + 16) = v27 != 0 ? 5 : 1;
LABEL_68:
      v7 = v20;
      v8 = v21;
      a3 = v26;
      dword_14016920C = v14;
      dword_140169210 = v20;
      dword_140169214 = v21;
      byte_1401691F1 = a1;
      qword_1401691F8 = v10;
      qword_140169200 = v3;
      dword_140169208 = v16;
      dword_140169218 = v15;
      goto LABEL_69;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
      if ( *v18 )
        DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      ReleaseMiniportListMutex();
    }
  }
  return 3221225473LL;
}
