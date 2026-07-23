/*
 * XREFs of _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C
 * Callers:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1409AF740 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE6180 (_CmAddDeviceToContainerWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1FA04 (_CmRemoveDeviceFromContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409B7DBC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 */

char __fastcall PnpDeviceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rsi
  __int64 i; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 j; // r8
  DEVPROPKEY *v18; // r9
  char v19; // di
  int v20; // esi
  int ObjectProperty; // eax
  __int64 v22; // rdx
  __int64 m; // r8
  DEVPROPKEY *v24; // r9
  int MatchingFilteredDeviceInterfaceList; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rsi
  __int64 k; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[24]; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+88h] [rbp-78h] BYREF
  char *v41; // [rsp+90h] [rbp-70h]
  __int128 v42; // [rsp+98h] [rbp-68h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-58h]
  __int128 Source2; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v45[80]; // [rsp+D0h] [rbp-30h] BYREF

  v39 = a2;
  v41 = a3;
  v40 = 0;
  v37 = 0;
  *(_OWORD *)&v38[8] = 0LL;
  Source2 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( a4 )
    goto LABEL_2;
  v28 = *(_DWORD *)(a5 + 16);
  if ( v28 == 6 )
  {
    v29 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1 )
      v29 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_SessionId.fmtid.Data4;
LABEL_69:
    if ( !v29 )
    {
LABEL_70:
      *(_QWORD *)v38 = 0LL;
      v10 = 1;
      guard_dispatch_icall_no_overrides(a1, a2);
      goto LABEL_3;
    }
    goto LABEL_2;
  }
  if ( v28 == 100 )
  {
    v35 = *(_QWORD *)a5 - DEVPKEY_Device_RestrictedSD;
    if ( *(_QWORD *)a5 == DEVPKEY_Device_RestrictedSD )
      v35 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
    if ( !v35 )
      goto LABEL_70;
  }
  if ( v28 == 101 )
  {
    v29 = *(_QWORD *)a5 - DEVPKEY_Device_InheritedRestrictedSD;
    if ( *(_QWORD *)a5 == DEVPKEY_Device_InheritedRestrictedSD )
      v29 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
    goto LABEL_69;
  }
LABEL_2:
  v10 = 0;
LABEL_3:
  *(_QWORD *)v38 = a3;
  *(_QWORD *)&v38[8] = a4;
  *(_QWORD *)&v38[16] = a5;
  guard_dispatch_icall_no_overrides(a1, a2);
  v11 = &qword_140001DE8;
  v12 = 14LL;
  do
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v11; i = (unsigned int)(i + 1) )
    {
      v14 = *(_QWORD *)(*(v11 - 1) + 8 * i);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v14 + 16) )
      {
        v15 = *(_QWORD *)a5 - *(_QWORD *)v14;
        if ( *(_QWORD *)a5 == *(_QWORD *)v14 )
          v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v14 + 8);
        if ( !v15 )
        {
          *(_QWORD *)&v38[16] = v11[1];
          guard_dispatch_icall_no_overrides(a1, v39);
          break;
        }
      }
    }
    v11 += 3;
    --v12;
  }
  while ( v12 );
  v16 = 0LL;
LABEL_14:
  if ( (unsigned int)v16 >= 3 )
  {
    v19 = 0;
  }
  else
  {
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= LODWORD((&off_140001D80)[3 * v16 + 1]) )
      {
        v16 = (unsigned int)(v16 + 1);
        goto LABEL_14;
      }
      v18 = (&off_140001D80)[3 * v16][j];
      if ( *(_DWORD *)(a5 + 16) == v18->pid )
      {
        v26 = *(_QWORD *)a5 - *(_QWORD *)&v18->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v18->fmtid.Data1 )
          v26 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v18->fmtid.Data4;
        if ( !v26 )
          break;
      }
    }
    v19 = 1;
  }
  if ( v10 || v19 )
  {
    v20 = v39;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       v39,
                       1,
                       v41,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       &v40,
                       (__int64)&Source2,
                       0x10u,
                       (__int64)&v37,
                       0);
    if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
      goto LABEL_23;
    if ( ObjectProperty < 0 )
      goto LABEL_71;
    if ( RtlCompareMemory(qword_140014D70, &Source2, 0x10uLL) == 16 )
      goto LABEL_23;
    if ( (int)PnpStringFromGuid(&Source2, v45) < 0 )
    {
LABEL_71:
      *(_QWORD *)v38 = 0LL;
      guard_dispatch_icall_no_overrides(a1, 0LL);
      goto LABEL_23;
    }
    if ( v10 )
    {
      *(_QWORD *)v38 = 0LL;
      guard_dispatch_icall_no_overrides(a1, (__int64)v45);
    }
    if ( !v19 )
      goto LABEL_23;
    v30 = &qword_140001D88;
    *(_OWORD *)v38 = 0LL;
    v31 = 3LL;
    do
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)v30; k = (unsigned int)(k + 1) )
      {
        v33 = *(_QWORD *)(*(v30 - 1) + 8 * k);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v33 + 16) )
        {
          v34 = *(_QWORD *)a5 - *(_QWORD *)v33;
          if ( *(_QWORD *)a5 == *(_QWORD *)v33 )
            v34 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v33 + 8);
          if ( !v34 )
          {
            *(_QWORD *)&v38[16] = v30[1];
            guard_dispatch_icall_no_overrides(a1, (__int64)v45);
            break;
          }
        }
      }
      v30 += 3;
      --v31;
    }
    while ( v31 );
  }
  v20 = v39;
LABEL_23:
  v22 = 0LL;
LABEL_24:
  if ( (_DWORD)v22 )
  {
    LOBYTE(MatchingFilteredDeviceInterfaceList) = 0;
  }
  else
  {
    for ( m = 0LL; ; m = (unsigned int)(m + 1) )
    {
      if ( (unsigned int)m >= LODWORD((&off_140001DC8)[3 * v22 + 1]) )
      {
        v22 = 1LL;
        goto LABEL_24;
      }
      v24 = (&off_140001DC8)[3 * v22][m];
      if ( *(_DWORD *)(a5 + 16) == v24->pid )
      {
        v27 = *(_QWORD *)a5 - *(_QWORD *)&v24->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v24->fmtid.Data1 )
          v27 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v24->fmtid.Data4;
        if ( !v27 )
          break;
      }
    }
    LOBYTE(MatchingFilteredDeviceInterfaceList) = 1;
  }
  if ( v10 || (_BYTE)MatchingFilteredDeviceInterfaceList )
  {
    *(_QWORD *)&v42 = a6;
    BYTE12(v43) = v10;
    if ( (_BYTE)MatchingFilteredDeviceInterfaceList )
    {
      *((_QWORD *)&v42 + 1) = a5;
      *(_QWORD *)&v43 = &off_140001DC8;
      DWORD2(v43) = 1;
    }
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0,
                                            v20,
                                            0,
                                            (__int64)PnpUpdateInterfacesCallback,
                                            (__int64)&v42,
                                            0LL,
                                            0,
                                            (__int64)&v37,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
    {
      *(_QWORD *)v38 = 0LL;
      LOBYTE(MatchingFilteredDeviceInterfaceList) = guard_dispatch_icall_no_overrides(a1, 0LL);
    }
  }
  return MatchingFilteredDeviceInterfaceList;
}
