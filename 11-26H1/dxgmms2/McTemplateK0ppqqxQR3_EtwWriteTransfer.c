/*
 * XREFs of McTemplateK0ppqqxQR3_EtwWriteTransfer @ 0x140046A98
 * Callers:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_ALLOC@@_K2_N@Z @ 0x14010384C (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_AL.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0ppqqxQR3_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-51h] BYREF
  va_list v6; // [rsp+50h] [rbp-41h]
  __int64 v7; // [rsp+58h] [rbp-39h]
  va_list v8; // [rsp+60h] [rbp-31h]
  __int64 v9; // [rsp+68h] [rbp-29h]
  int *v10; // [rsp+70h] [rbp-21h]
  __int64 v11; // [rsp+78h] [rbp-19h]
  va_list v12; // [rsp+80h] [rbp-11h]
  __int64 v13; // [rsp+88h] [rbp-9h]
  va_list v14; // [rsp+90h] [rbp-1h]
  __int64 v15; // [rsp+98h] [rbp+7h]
  __int64 v16; // [rsp+A0h] [rbp+Fh]
  int v17; // [rsp+A8h] [rbp+17h]
  int v18; // [rsp+ACh] [rbp+1Bh]
  __int64 v19; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v21; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v23; // [rsp+F8h] [rbp+67h]
  __int64 v24; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+6Fh]
  __int64 v26; // [rsp+108h] [rbp+77h] BYREF
  va_list va3; // [rsp+108h] [rbp+77h]
  __int64 v28; // [rsp+110h] [rbp+7Fh]
  va_list va4; // [rsp+118h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  v28 = va_arg(va4, _QWORD);
  v7 = 8LL;
  v4 = 0;
  va_copy(v6, va);
  v9 = 8LL;
  va_copy(v8, va1);
  v11 = 4LL;
  v10 = &v4;
  v13 = 4LL;
  va_copy(v12, va2);
  va_copy(v14, va3);
  v16 = v28;
  v17 = 4 * v24;
  v15 = 8LL;
  v18 = 0;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventCpuHostApertureMap, 0LL, 7u, &v5);
}
