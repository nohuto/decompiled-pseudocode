/*
 * XREFs of _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408369DC
 * Callers:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140836790 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmAddDeviceToContainerWorker @ 0x14094F44C (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlObjectEventCallback @ 0x140836EF0 (PiPnpRtlObjectEventCallback.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14094E664 (_PnpStringFromGuid.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409A013C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 */

char __fastcall PnpDeviceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(int, int, int, int, __int64))
{
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 i; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 j; // r8
  DEVPROPKEY *v16; // r9
  char v17; // di
  int v18; // esi
  int ObjectProperty; // eax
  __int64 v20; // rdx
  __int64 m; // r8
  DEVPROPKEY *v22; // r9
  int MatchingFilteredDeviceInterfaceList; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rsi
  __int64 k; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  char v36; // [rsp+60h] [rbp-A0h]
  _BYTE v37[24]; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int128 v42; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-50h]
  __int128 Source2; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v45[80]; // [rsp+D0h] [rbp-30h] BYREF

  v41 = a3;
  v39 = a2;
  v40 = 0;
  v38 = 0;
  *(_OWORD *)&v37[8] = 0LL;
  Source2 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( a4 )
    goto LABEL_2;
  v26 = *(_DWORD *)(a5 + 16);
  if ( v26 == 6 )
  {
    v28 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1 )
      v28 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_SessionId.fmtid.Data4;
    if ( !v28 )
      goto LABEL_59;
  }
  if ( v26 == 100 )
  {
    v34 = *(_QWORD *)a5 - DEVPKEY_Device_RestrictedSD;
    if ( *(_QWORD *)a5 == DEVPKEY_Device_RestrictedSD )
      v34 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
    if ( !v34 )
      goto LABEL_59;
  }
  if ( v26 != 101 )
    goto LABEL_2;
  v27 = *(_QWORD *)a5 - DEVPKEY_Device_InheritedRestrictedSD;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_InheritedRestrictedSD )
    v27 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
  if ( v27 )
  {
LABEL_2:
    v36 = 0;
  }
  else
  {
LABEL_59:
    *(_QWORD *)v37 = 0LL;
    v36 = 1;
    guard_dispatch_icall_no_overrides(a1);
    LODWORD(a2) = v39;
  }
  *(_QWORD *)v37 = a3;
  *(_QWORD *)&v37[8] = a4;
  *(_QWORD *)&v37[16] = a5;
  if ( a6 == PiPnpRtlObjectEventCallback )
    PiPnpRtlObjectEventCallback(a1, a2, 1, 4, (__int64)v37);
  else
    guard_dispatch_icall_no_overrides(a1);
  v9 = &qword_140001778;
  v10 = 14LL;
  do
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v9; i = (unsigned int)(i + 1) )
    {
      v12 = *(_QWORD *)(*(v9 - 1) + 8 * i);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v12 + 16) )
      {
        v13 = *(_QWORD *)a5 - *(_QWORD *)v12;
        if ( *(_QWORD *)a5 == *(_QWORD *)v12 )
          v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v12 + 8);
        if ( !v13 )
        {
          *(_QWORD *)&v37[16] = v9[1];
          guard_dispatch_icall_no_overrides(a1);
          break;
        }
      }
    }
    v9 += 3;
    --v10;
  }
  while ( v10 );
  v14 = 0LL;
LABEL_16:
  if ( (unsigned int)v14 >= 3 )
  {
    v17 = 0;
  }
  else
  {
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= LODWORD((&off_1400019B0)[3 * v14 + 1]) )
      {
        v14 = (unsigned int)(v14 + 1);
        goto LABEL_16;
      }
      v16 = (&off_1400019B0)[3 * v14][j];
      if ( *(_DWORD *)(a5 + 16) == v16->pid )
      {
        v24 = *(_QWORD *)a5 - *(_QWORD *)&v16->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v16->fmtid.Data1 )
          v24 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v16->fmtid.Data4;
        if ( !v24 )
          break;
      }
    }
    v17 = 1;
  }
  if ( v36 || v17 )
  {
    v18 = v39;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       v39,
                       1,
                       v41,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v40,
                       (__int64)&Source2,
                       16,
                       (__int64)&v38,
                       0);
    if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
      goto LABEL_25;
    if ( ObjectProperty < 0 )
      goto LABEL_55;
    if ( RtlCompareMemory(qword_140010930, &Source2, 0x10uLL) == 16 )
      goto LABEL_25;
    if ( (int)PnpStringFromGuid(&Source2, v45) < 0 )
    {
LABEL_55:
      *(_QWORD *)v37 = 0LL;
      guard_dispatch_icall_no_overrides(a1);
      goto LABEL_25;
    }
    if ( v36 )
    {
      *(_QWORD *)v37 = 0LL;
      guard_dispatch_icall_no_overrides(a1);
    }
    if ( !v17 )
      goto LABEL_25;
    v29 = &qword_1400019B8;
    *(_OWORD *)v37 = 0LL;
    v30 = 3LL;
    do
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)v29; k = (unsigned int)(k + 1) )
      {
        v32 = *(_QWORD *)(*(v29 - 1) + 8 * k);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v32 + 16) )
        {
          v33 = *(_QWORD *)a5 - *(_QWORD *)v32;
          if ( *(_QWORD *)a5 == *(_QWORD *)v32 )
            v33 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v32 + 8);
          if ( !v33 )
          {
            *(_QWORD *)&v37[16] = v29[1];
            guard_dispatch_icall_no_overrides(a1);
            break;
          }
        }
      }
      v29 += 3;
      --v30;
    }
    while ( v30 );
  }
  v18 = v39;
LABEL_25:
  v20 = 0LL;
LABEL_26:
  if ( (_DWORD)v20 )
  {
    LOBYTE(MatchingFilteredDeviceInterfaceList) = 0;
  }
  else
  {
    for ( m = 0LL; ; m = (unsigned int)(m + 1) )
    {
      if ( (unsigned int)m >= LODWORD((&off_140001750)[3 * v20 + 1]) )
      {
        v20 = 1LL;
        goto LABEL_26;
      }
      v22 = (&off_140001750)[3 * v20][m];
      if ( *(_DWORD *)(a5 + 16) == v22->pid )
      {
        v25 = *(_QWORD *)a5 - *(_QWORD *)&v22->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v22->fmtid.Data1 )
          v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v22->fmtid.Data4;
        if ( !v25 )
          break;
      }
    }
    LOBYTE(MatchingFilteredDeviceInterfaceList) = 1;
  }
  if ( v36 || (_BYTE)MatchingFilteredDeviceInterfaceList )
  {
    *(_QWORD *)&v42 = a6;
    BYTE12(v43) = v36;
    if ( (_BYTE)MatchingFilteredDeviceInterfaceList )
    {
      *((_QWORD *)&v42 + 1) = a5;
      *(_QWORD *)&v43 = &off_140001750;
      DWORD2(v43) = 1;
    }
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0,
                                            v18,
                                            0,
                                            (__int64)PnpUpdateInterfacesCallback,
                                            (__int64)&v42,
                                            0LL,
                                            0,
                                            (__int64)&v38,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
    {
      *(_QWORD *)v37 = 0LL;
      LOBYTE(MatchingFilteredDeviceInterfaceList) = guard_dispatch_icall_no_overrides(a1);
    }
  }
  return MatchingFilteredDeviceInterfaceList;
}
