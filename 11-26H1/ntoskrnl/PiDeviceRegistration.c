/*
 * XREFs of PiDeviceRegistration @ 0x1409B4E08
 * Callers:
 *     PnpCleanupDeviceRegistryValues @ 0x1409B4D20 (PnpCleanupDeviceRegistryValues.c)
 *     PpDeviceRegistration @ 0x1409B4D7C (PpDeviceRegistration.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     IopAllocateUnicodeString @ 0x1409AFF18 (IopAllocateUnicodeString.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409B50C0 (PpForEachDeviceInstanceDriver.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDeviceRegistration(unsigned __int16 *a1, char a2, UNICODE_STRING *a3)
{
  WCHAR *v6; // r15
  unsigned int v7; // ecx
  _WORD *v8; // rdi
  unsigned __int16 v9; // r9
  __int64 v10; // rdx
  _WORD *Pool2; // rax
  int DeviceRegProp; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v16; // rax
  _WORD *v17; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+50h] BYREF
  int v21; // [rsp+A8h] [rbp+58h] BYREF

  v21 = 0;
  v20 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  if ( a3 )
  {
    *(_DWORD *)&a3->Length = 0;
    a3->Buffer = 0LL;
  }
  v7 = *a1;
  if ( (unsigned __int16)v7 <= 2u )
    goto LABEL_38;
  v8 = (_WORD *)*((_QWORD *)a1 + 1);
  v9 = v7;
  if ( v8[((unsigned __int64)v7 >> 1) - 1] == 92 )
  {
    LOWORD(v7) = v7 - 2;
    *a1 = v7;
    v9 = v7;
  }
  v10 = a1[1];
  if ( (unsigned __int16)v10 < 2u || !v8 )
  {
    v8 = 0LL;
    goto LABEL_16;
  }
  if ( (unsigned __int16)v7 > (unsigned __int16)v10 )
  {
LABEL_38:
    DeviceRegProp = -1073741811;
    goto LABEL_29;
  }
  if ( (_WORD)v7 )
  {
    if ( *v8 && ((_WORD)v7 != (_WORD)v10 || v8[((unsigned __int64)v9 >> 1) - 1]) )
    {
      if ( (unsigned __int16)v7 > (unsigned __int64)(v10 - 2)
        || (v16 = (unsigned __int64)v9 >> 1, v8[v16 - 1]) && v8[v16] )
      {
        Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
        v8 = Pool2;
        if ( !Pool2 )
        {
LABEL_43:
          DeviceRegProp = -1073741670;
          goto LABEL_29;
        }
        memmove(Pool2, *((const void **)a1 + 1), *a1);
        v8[(unsigned __int64)*a1 >> 1] = 0;
      }
    }
  }
  else if ( *v8 )
  {
    v17 = (_WORD *)ExAllocatePool2(0x100uLL);
    v8 = v17;
    if ( !v17 )
      goto LABEL_43;
    *v17 = 0;
  }
LABEL_16:
  v20 = 512;
  v6 = (WCHAR *)ExAllocatePool2(0x100uLL);
  if ( !v6 )
    goto LABEL_43;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v8,
                    0LL,
                    5u,
                    (__int64)&v21,
                    (__int64)v6,
                    (__int64)&v20,
                    0);
  PnpUnicodeStringToWstrFree(v8, a1);
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp != -1073741275 )
      goto LABEL_29;
    goto LABEL_26;
  }
  DeviceRegProp = -1073741772;
  if ( v21 != 1 || v20 <= 2 )
    goto LABEL_29;
  RtlInitUnicodeStringEx(&DestinationString, v6);
  if ( !a3 )
    goto LABEL_26;
  DeviceRegProp = IopAllocateUnicodeString((__int64)a3, DestinationString.Length);
  if ( DeviceRegProp >= 0 )
  {
    RtlCopyUnicodeString(a3, &DestinationString);
    DeviceRegProp = 0;
  }
  if ( DeviceRegProp >= 0 )
  {
LABEL_26:
    v19 = a2;
    DeviceRegProp = PpForEachDeviceInstanceDriver(a1, v13, &v19);
    if ( DeviceRegProp >= 0 )
    {
LABEL_33:
      ExFreePoolWithTag(v6, 0);
      return (unsigned int)DeviceRegProp;
    }
    if ( a2 )
    {
      v19 = 0;
      PpForEachDeviceInstanceDriver(a1, v14, &v19);
    }
LABEL_29:
    if ( !a3 )
      goto LABEL_32;
  }
  if ( a3->Length )
  {
    ExFreePoolWithTag(a3->Buffer, 0);
    a3->Buffer = 0LL;
    *(_DWORD *)&a3->Length = 0;
  }
LABEL_32:
  if ( v6 )
    goto LABEL_33;
  return (unsigned int)DeviceRegProp;
}
