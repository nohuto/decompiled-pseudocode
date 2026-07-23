/*
 * XREFs of _CmGetDeviceCompoundFilters @ 0x140953508
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140B24BE8 (_CmGetDeviceCompoundFiltersWorker.c)
 */

__int64 __fastcall CmGetDeviceCompoundFilters(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  bool v10; // zf
  const DEVPROPKEY *v14; // r14
  int DeviceCompoundFiltersWorker; // eax
  HANDLE v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r12
  int v21; // r13d
  int DeviceMappedPropertyFromRegProp; // eax
  __int64 v24; // rax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v26; // [rsp+A8h] [rbp+20h] BYREF

  v8 = 0;
  v10 = *(_DWORD *)(a4 + 16) == 22;
  Handle = 0LL;
  v26 = 0LL;
  if ( !v10 )
    goto LABEL_2;
  v24 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
    v24 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  v14 = &DEVPKEY_Device_UpperFilters;
  if ( v24 )
LABEL_2:
    v14 = &DEVPKEY_Device_LowerFilters;
  if ( a3 )
  {
    v16 = a3;
    Handle = a3;
  }
  else
  {
    DeviceCompoundFiltersWorker = CmOpenDeviceRegKey(a1, a2, 16, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( DeviceCompoundFiltersWorker < 0 )
    {
LABEL_23:
      v8 = DeviceCompoundFiltersWorker;
      goto LABEL_12;
    }
    v16 = Handle;
  }
  if ( a1 && (v17 = *(_QWORD *)(a1 + 224)) != 0 )
    v18 = *(_QWORD *)(v17 + 8);
  else
    v18 = 0LL;
  v19 = RegRtlOpenKeyTransacted(v16, L"Filters", 0LL, 131103LL, &v26, v18);
  v20 = a8;
  v21 = a7;
  if ( v19 < 0
    || (DeviceCompoundFiltersWorker = CmGetDeviceCompoundFiltersWorker(a1, a4, (__int64)v14, a5, a6, a7, a8),
        DeviceCompoundFiltersWorker == -1073741772)
    || DeviceCompoundFiltersWorker == -1073741444
    || DeviceCompoundFiltersWorker == -1073741275 )
  {
    DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                        a1,
                                        a2,
                                        (_DWORD)Handle,
                                        (_DWORD)v14,
                                        a5,
                                        a6,
                                        v21,
                                        v20,
                                        0);
    if ( DeviceMappedPropertyFromRegProp < 0 )
      v8 = DeviceMappedPropertyFromRegProp;
  }
  else if ( DeviceCompoundFiltersWorker < 0 )
  {
    goto LABEL_23;
  }
LABEL_12:
  if ( v26 )
    ZwClose(v26);
  if ( Handle && !a3 )
    ZwClose(Handle);
  return v8;
}
