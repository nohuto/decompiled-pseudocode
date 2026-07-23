/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x14094DB54
 * Callers:
 *     PiDevCfgSetDeviceRegProp @ 0x14094DB08 (PiDevCfgSetDeviceRegProp.c)
 *     PiCMSetRegistryProperty @ 0x14094DCB8 (PiCMSetRegistryProperty.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1407B8054 (PiAuditDeviceEnableDisableRequest.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     _CmIsRootEnumeratedDevice @ 0x140A19290 (_CmIsRootEnumeratedDevice.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        int a1,
        const WCHAR *a2,
        int a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int a8)
{
  int v8; // r12d
  int *v9; // rbx
  int v13; // esi
  char v14; // r14
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  int v21; // r9d
  unsigned int v22; // ebx
  struct _KTHREAD *CurrentThread; // rax
  bool v25; // zf
  int v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+44h] [rbp-1Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a7;
  v9 = a6;
  v30 = 0;
  v27 = 0;
  v26 = 0;
  LOBYTE(v13) = 0;
  v14 = 0;
  DestinationString = 0LL;
  v15 = a4 - 2;
  if ( v15 && (v16 = v15 - 1) != 0 )
  {
    v17 = v16 - 6;
    if ( !v17 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v14 = 1;
      goto LABEL_11;
    }
    v18 = v17 - 2;
    if ( !v18 )
    {
      if ( !a6 || a7 != 4 )
        return (unsigned int)-1073741811;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
      {
        v30 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (_DWORD)a2, a3, 11, (__int64)&v27, (__int64)&v26, (__int64)&v30, 0) < 0
          || v30 != 4
          || v27 != 4 )
        {
          v26 = 0;
        }
        v13 = *v9;
      }
      goto LABEL_11;
    }
    v19 = v18 - 5;
    if ( !v19 )
      return (unsigned int)-1073741790;
    v20 = v19 - 1;
    if ( !v20 )
      return (unsigned int)-1073741790;
    v21 = v20 - 12;
    if ( !v21 )
      return (unsigned int)-1073741790;
    v25 = v21 == 8;
  }
  else
  {
    v25 = (unsigned __int8)CmIsRootEnumeratedDevice(a2) == 0;
  }
  if ( v25 )
    return (unsigned int)-1073741790;
LABEL_11:
  v22 = CmSetDeviceRegProp(a1, (_DWORD)a2, a3, a4, a5, (__int64)v9, v8, a8);
  if ( a4 == 11 && (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    PiAuditDeviceEnableDisableRequest((__int64)&DestinationString, v26, v13, (v22 & 0x80000000) == 0);
  }
  if ( v14 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return v22;
}
