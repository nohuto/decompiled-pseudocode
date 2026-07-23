/*
 * XREFs of PiDcResetChildDeviceContainers @ 0x1407AABA4
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _CmEnumDevicesInContainerWithCallback @ 0x14089DA48 (_CmEnumDevicesInContainerWithCallback.c)
 *     _CmRemoveDeviceFromContainer @ 0x14089E454 (_CmRemoveDeviceFromContainer.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDcResetChildDeviceContainers(__int64 a1, const wchar_t *a2)
{
  int v3; // ebx
  PVOID *i; // rdi
  int DeviceRegProp; // eax
  int v6; // eax
  PVOID v7; // rcx
  __int64 v8; // rax
  int v10; // [rsp+40h] [rbp-49h] BYREF
  int v11; // [rsp+44h] [rbp-45h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-41h] BYREF
  PVOID P[3]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v14[80]; // [rsp+70h] [rbp-19h] BYREF

  v12[0] = a1;
  v12[1] = a2;
  P[1] = P;
  v3 = 0;
  P[0] = P;
  v11 = 0;
  v10 = 0;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    CmEnumDevicesInContainerWithCallback(
      PiPnpRtlCtx,
      (_DWORD)a2,
      0,
      (unsigned int)PiDcResetChildDeviceContainerCallback,
      (__int64)v12);
    for ( i = (PVOID *)P[0]; i != P; i = (PVOID *)*i )
    {
      v10 = 78;
      DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, (int)i + 16, 0, 37, (__int64)&v11, (__int64)v14, (__int64)&v10, 0);
      v3 = DeviceRegProp;
      if ( DeviceRegProp == -1073741275 || v11 != 1 || v10 != 78 )
        goto LABEL_11;
      if ( DeviceRegProp < 0 )
        break;
      v3 = CmRemoveDeviceFromContainer(*(_QWORD *)&PiPnpRtlCtx, a2, v14, i + 2);
      if ( v3 < 0 )
        break;
      v6 = CmSetDeviceRegProp(PiPnpRtlCtx, (int)i + 16, 0, 37, 1, 0LL, 0, 0);
      v3 = v6;
      if ( v6 == -1073741275 )
      {
LABEL_11:
        v3 = 0;
      }
      else if ( v6 < 0 )
      {
        break;
      }
    }
  }
  while ( 1 )
  {
    v7 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v8 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v8 + 8) = P;
    ExFreePoolWithTag(v7, 0x47706E50u);
  }
  return (unsigned int)v3;
}
