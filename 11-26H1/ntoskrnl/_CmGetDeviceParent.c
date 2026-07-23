/*
 * XREFs of _CmGetDeviceParent @ 0x14095276C
 * Callers:
 *     _CmIsDeviceSafeRemovalRequired @ 0x140952480 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceSiblings @ 0x140A9794C (_CmGetDeviceSiblings.c)
 *     _CmGetParentDeviceContainerId @ 0x140B2E0A8 (_CmGetParentDeviceContainerId.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall CmGetDeviceParent(__int64 a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  size_t v4; // rbx
  unsigned int inited; // ecx
  int v10; // eax
  unsigned int v11; // eax
  size_t v12; // rdx
  wchar_t *v13; // rcx
  __int64 v14; // rax
  wchar_t v15; // r9
  wchar_t *v16; // rax
  unsigned int v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _WORD v21[200]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *a4;
  v18 = 0;
  v19 = 0;
  *a4 = 0;
  DestinationString = 0LL;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return (unsigned int)-1073741810;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  if ( !*(_QWORD *)(a1 + 272) )
    return (unsigned int)-1073741822;
  v10 = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
  if ( v10 == -2147483643 )
    return (unsigned int)-1073741789;
  if ( v10 == -1073741810 )
  {
    if ( (int)PnpGetObjectProperty(
                a1,
                (_DWORD)a2,
                1,
                0,
                0LL,
                (__int64)DEVPKEY_Device_LastKnownParent,
                (__int64)&v19,
                (__int64)v21,
                400,
                (__int64)&v18,
                0) < 0 )
    {
      *a4 = 13;
      if ( (unsigned int)v4 >= 0xD )
        return (unsigned int)RtlStringCchCopyExW(a3, v4, L"HTREE\\ROOT\\0", 0LL, 0LL, 0x900u);
      return (unsigned int)-1073741789;
    }
    v11 = v18 >> 1;
  }
  else
  {
    inited = v10;
    if ( v10 < 0 )
      return inited;
    v11 = v18;
  }
  *a4 = v11;
  if ( (unsigned int)v4 < v11 )
    return (unsigned int)-1073741789;
  v12 = v4;
  if ( !a3 && (_DWORD)v4 || (unsigned int)v4 > 0x7FFFFFFF )
  {
    inited = -1073741811;
    goto LABEL_27;
  }
  inited = 0;
  if ( (_DWORD)v4 )
  {
    v13 = a3;
    v14 = 2147483646LL;
    do
    {
      if ( !v14 )
        break;
      v15 = *(wchar_t *)((char *)v13 + (char *)v21 - (char *)a3);
      if ( !v15 )
        break;
      *v13 = v15;
      --v14;
      ++v13;
      --v12;
    }
    while ( v12 );
    v16 = v13 - 1;
    if ( v12 )
      v16 = v13;
    *v16 = 0;
    inited = v12 == 0 ? 0x80000005 : 0;
    if ( v12 )
      return inited;
LABEL_27:
    *a3 = 0;
    return inited;
  }
  if ( v21[0] )
    return a3 != 0LL ? -2147483643 : -1073741811;
  return inited;
}
