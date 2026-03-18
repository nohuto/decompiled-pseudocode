/*
 * XREFs of McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer @ 0x140094FB0
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-D0h] BYREF
  va_list v5; // [rsp+40h] [rbp-C0h]
  __int64 v6; // [rsp+48h] [rbp-B8h]
  va_list v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  va_list v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  va_list v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  va_list v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  va_list v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  va_list v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  va_list v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  int v22; // [rsp+C8h] [rbp-38h]
  int v23; // [rsp+CCh] [rbp-34h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  int v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+DCh] [rbp-24h]
  va_list v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  va_list v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+138h] [rbp+38h] BYREF
  va_list va; // [rsp+138h] [rbp+38h]
  __int64 v33; // [rsp+140h] [rbp+40h] BYREF
  va_list va1; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h] BYREF
  va_list va2; // [rsp+148h] [rbp+48h]
  __int64 v37; // [rsp+150h] [rbp+50h] BYREF
  va_list va3; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h] BYREF
  va_list va4; // [rsp+158h] [rbp+58h]
  __int64 v41; // [rsp+160h] [rbp+60h] BYREF
  va_list va5; // [rsp+160h] [rbp+60h]
  __int64 v43; // [rsp+168h] [rbp+68h] BYREF
  va_list va6; // [rsp+168h] [rbp+68h]
  __int64 v45; // [rsp+170h] [rbp+70h] BYREF
  va_list va7; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  __int64 v48; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h] BYREF
  va_list va8; // [rsp+188h] [rbp+88h]
  va_list va9; // [rsp+190h] [rbp+90h] BYREF

  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v35 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v37 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v39 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v41 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v43 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v45 = va_arg(va8, _QWORD);
  v47 = va_arg(va8, _QWORD);
  v48 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v49 = va_arg(va9, _QWORD);
  v6 = 8LL;
  v23 = 0;
  va_copy(v5, va);
  v26 = 0;
  va_copy(v7, va1);
  v8 = 8LL;
  va_copy(v9, va2);
  v10 = 4LL;
  va_copy(v11, va3);
  va_copy(v13, va4);
  va_copy(v15, va5);
  va_copy(v17, va6);
  va_copy(v19, va7);
  v21 = v47;
  v22 = v43;
  v24 = v48;
  v25 = v45;
  va_copy(v27, va8);
  va_copy(v29, va9);
  v12 = 4LL;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  v28 = 8LL;
  v30 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventExitDdiI2CIoctl, a3, 0xDu, &v4);
}
