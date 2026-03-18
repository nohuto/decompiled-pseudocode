/*
 * XREFs of PiDevCfgInitDeviceContext @ 0x140AD1214
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x1407A9BB0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AA380 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1407ABD9C (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407ABE10 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AC218 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AC990 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AD10DC (PpDevCfgProcessDeviceOperations.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AD11C4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AD2A4C (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgInitDeviceContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  int ObjectProperties; // ebp
  char *v8; // rcx
  __int64 v9; // r9
  DEVPROPKEY **v10; // rdx
  _QWORD *v11; // r8
  __int64 v12; // rax
  unsigned int v13; // edi
  int *v14; // rsi
  _BYTE v16[8]; // [rsp+40h] [rbp-A8h] BYREF
  char v17; // [rsp+48h] [rbp-A0h] BYREF
  char v18; // [rsp+60h] [rbp-88h] BYREF

  memset_0(a3, 0, 0x48uLL);
  a3[1] = a1;
  v6 = a3 + 2;
  if ( a2 )
  {
    *v6 = a2;
  }
  else
  {
    ObjectProperties = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 16, 0, 983103, 0, (__int64)(a3 + 2), 0LL);
    if ( ObjectProperties < 0 )
    {
LABEL_13:
      PiDevCfgFreeDeviceContext((__int64)a3);
      return (unsigned int)ObjectProperties;
    }
    *(_DWORD *)a3 |= 0x80000000;
  }
  memset_0(v16, 0, 0x78uLL);
  v8 = &v17;
  v9 = 3LL;
  v10 = off_140FD5740;
  v11 = a3 + 3;
  do
  {
    v12 = (__int64)*v10++;
    *((_QWORD *)v8 + 1) = v11;
    v11 += 2;
    *((_QWORD *)v8 - 1) = v12;
    *(_DWORD *)v8 = 8210;
    *((_DWORD *)v8 + 5) = 6;
    v8 += 40;
    --v9;
  }
  while ( v9 );
  ObjectProperties = PiDevCfgQueryObjectProperties((_DWORD)v8, a3[1], 1, *v6, (__int64)v16, 3);
  if ( ObjectProperties < 0 )
    goto LABEL_13;
  v13 = 0;
  v14 = (int *)&v18;
  do
  {
    if ( *v14 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)&a3[2 * v13 + 3], 0LL);
    ++v13;
    v14 += 10;
  }
  while ( v13 < 3 );
  return (unsigned int)ObjectProperties;
}
