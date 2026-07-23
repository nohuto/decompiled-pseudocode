/*
 * XREFs of _CmGetDeviceCompoundFiltersWorker @ 0x140B24BE8
 * Callers:
 *     _CmGetDeviceCompoundFilters @ 0x140953508 (_CmGetDeviceCompoundFilters.c)
 * Callees:
 *     _CmGetDeclarativeFilterList @ 0x1408A1C14 (_CmGetDeclarativeFilterList.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     _CmMergeFilterLists @ 0x140B54D7C (_CmMergeFilterLists.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceCompoundFiltersWorker(
        __int64 a1,
        __int64 a2,
        char *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  char *Pool2; // rsi
  wchar_t *v14; // rdi
  __int64 *v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // r15
  const char *v18; // r12
  __int64 v19; // rax
  int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rbx
  int ObjectProperty; // eax
  void *v25; // rax
  int DeclarativeFilterList; // eax
  int DeviceMappedPropertyFromRegProp; // eax
  __int64 v28; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v29; // [rsp+70h] [rbp-21h] BYREF
  PVOID P; // [rsp+78h] [rbp-19h]
  __int64 *v31; // [rsp+80h] [rbp-11h]
  PVOID v32; // [rsp+88h] [rbp-9h]

  LODWORD(v29) = 0;
  v32 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v28 = 0LL;
  if ( (int)PnpCtxRegQueryInfoKey(a1, a4, &v29, 0LL, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v29 )
    return (unsigned int)-1073741275;
  if ( *(_DWORD *)(a5 + 16) != 22 )
    goto LABEL_4;
  v22 = *(_QWORD *)a5 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_CompoundUpperFilters )
    v22 = *(_QWORD *)(a5 + 8) - 0x293B573F92A15394LL;
  if ( v22 )
  {
LABEL_4:
    v15 = DEVPKEY_Device_LowerFilterCache;
    v16 = DEVPKEY_Device_LowerFilterLevels;
    v17 = DEVPKEY_Device_LowerFilterDefaultLevel;
    v18 = L"*Lower";
  }
  else
  {
    v15 = DEVPKEY_Device_UpperFilterCache;
    v16 = DEVPKEY_Device_UpperFilterLevels;
    v17 = DEVPKEY_Device_UpperFilterDefaultLevel;
    v18 = L"*Upper";
  }
  v29 = v16;
  v31 = v15;
  if ( (unsigned int)PnpGetObjectProperty(
                       a1,
                       a2,
                       1,
                       a3,
                       0LL,
                       (__int64)v15,
                       (_DWORD *)&v28 + 1,
                       0LL,
                       0,
                       (__int64)&v28,
                       0) != -1073741789
    || HIDWORD(v28) != 8210 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1,
                       a3,
                       0LL,
                       (__int64)v17,
                       (_DWORD *)&v28 + 1,
                       0LL,
                       0,
                       (__int64)&v28,
                       0);
    v20 = ObjectProperty;
    if ( ObjectProperty == -1073741789 )
    {
      if ( HIDWORD(v28) == 18 )
      {
        Pool2 = (char *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        v20 = PnpGetObjectProperty(
                a1,
                a2,
                1,
                a3,
                0LL,
                (__int64)v17,
                (_DWORD *)&v28 + 1,
                (__int64)Pool2,
                v28,
                (__int64)&v28,
                0);
        if ( v20 < 0 )
          goto LABEL_22;
        if ( (unsigned int)PnpGetObjectProperty(
                             a1,
                             a2,
                             1,
                             a3,
                             0LL,
                             (__int64)v29,
                             (_DWORD *)&v28 + 1,
                             0LL,
                             0,
                             (__int64)&v28,
                             0) != -1073741789 )
        {
          v20 = -1073741275;
          goto LABEL_22;
        }
        v25 = (void *)ExAllocatePool2(0x100uLL);
        P = v25;
        if ( !v25 )
        {
          v20 = -1073741801;
          goto LABEL_22;
        }
        v20 = PnpGetObjectProperty(
                a1,
                a2,
                1,
                a3,
                0LL,
                (__int64)v29,
                (_DWORD *)&v28 + 1,
                (__int64)v25,
                v28,
                (__int64)&v28,
                0);
        if ( v20 < 0 )
        {
LABEL_22:
          if ( Pool2 != v18 )
            ExFreePoolWithTag(Pool2, 0);
LABEL_13:
          if ( !v14 )
            goto LABEL_14;
          goto LABEL_11;
        }
LABEL_38:
        DeclarativeFilterList = CmGetDeclarativeFilterList(
                                  a1,
                                  (__int64)a4,
                                  (wchar_t *)P,
                                  (wchar_t *)Pool2,
                                  (__int64)v18,
                                  0LL,
                                  0,
                                  (unsigned int *)&v28);
        v20 = DeclarativeFilterList;
        if ( !DeclarativeFilterList )
        {
          v20 = -1073741762;
          goto LABEL_12;
        }
        if ( DeclarativeFilterList != -1073741789 )
        {
LABEL_12:
          if ( !Pool2 )
            goto LABEL_13;
          goto LABEL_22;
        }
        v14 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !v14 )
          goto LABEL_46;
        v20 = CmGetDeclarativeFilterList(
                a1,
                (__int64)a4,
                (wchar_t *)P,
                (wchar_t *)Pool2,
                (__int64)v18,
                v14,
                v28,
                (unsigned int *)&v28);
        if ( v20 < 0 )
          goto LABEL_12;
        v23 = (__int64)a3;
        PnpSetObjectProperty(a1, a2, 1, (__int64)a3, 0LL, (__int64)v31, 8210, (__int64)v14, v28, 0);
LABEL_44:
        DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                            a1,
                                            a2,
                                            v23,
                                            a6,
                                            (_DWORD *)&v28 + 1,
                                            0LL,
                                            0,
                                            (unsigned int *)&v28,
                                            0);
        v20 = DeviceMappedPropertyFromRegProp;
        if ( DeviceMappedPropertyFromRegProp == -1073741275 )
        {
          LODWORD(v28) = 0;
LABEL_52:
          v20 = CmMergeFilterLists(v14, (wchar_t *)v32, a9, a10);
          if ( (int)(v20 + 0x80000000) < 0 || v20 == -1073741789 )
            *a7 = 8210;
          goto LABEL_12;
        }
        if ( DeviceMappedPropertyFromRegProp != -1073741789 )
          goto LABEL_12;
        if ( !(_DWORD)v28 || !a9 )
          goto LABEL_52;
        v32 = (PVOID)ExAllocatePool2(0x100uLL);
        if ( v32 )
        {
          v20 = CmGetDeviceMappedPropertyFromRegProp(
                  a1,
                  a2,
                  (__int64)a3,
                  a6,
                  (_DWORD *)&v28 + 1,
                  v32,
                  v28,
                  (unsigned int *)&v28,
                  0);
          if ( v20 < 0 )
            goto LABEL_12;
          goto LABEL_52;
        }
LABEL_46:
        v20 = -1073741801;
        goto LABEL_12;
      }
    }
    else if ( ObjectProperty == -1073741275 )
    {
      Pool2 = (char *)v18;
      goto LABEL_38;
    }
    if ( HIDWORD(v28) == 8210 && ObjectProperty != -1073739509 && ObjectProperty )
      return (unsigned int)v20;
    return (unsigned int)-1073741275;
  }
  v19 = ExAllocatePool2(0x100uLL);
  v14 = (wchar_t *)v19;
  if ( !v19 )
    return (unsigned int)-1073741801;
  v20 = PnpGetObjectProperty(a1, a2, 1, a3, 0LL, (__int64)v31, (_DWORD *)&v28 + 1, v19, v28, (__int64)&v28, 0);
  if ( v20 >= 0 )
  {
    v23 = (__int64)a3;
    goto LABEL_44;
  }
LABEL_11:
  ExFreePoolWithTag(v14, 0);
LABEL_14:
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v20;
}
