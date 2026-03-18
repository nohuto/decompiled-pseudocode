/*
 * XREFs of McTemplateK0pqqqPR3XR3pPR3_EtwWriteTransfer @ 0x1400258F8
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqqPR3XR3pPR3_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-81h] BYREF
  va_list v5; // [rsp+40h] [rbp-71h]
  __int64 v6; // [rsp+48h] [rbp-69h]
  va_list v7; // [rsp+50h] [rbp-61h]
  __int64 v8; // [rsp+58h] [rbp-59h]
  va_list v9; // [rsp+60h] [rbp-51h]
  __int64 v10; // [rsp+68h] [rbp-49h]
  va_list v11; // [rsp+70h] [rbp-41h]
  __int64 v12; // [rsp+78h] [rbp-39h]
  __int64 v13; // [rsp+80h] [rbp-31h]
  int v14; // [rsp+88h] [rbp-29h]
  int v15; // [rsp+8Ch] [rbp-25h]
  __int64 v16; // [rsp+90h] [rbp-21h]
  int v17; // [rsp+98h] [rbp-19h]
  int v18; // [rsp+9Ch] [rbp-15h]
  va_list v19; // [rsp+A0h] [rbp-11h]
  __int64 v20; // [rsp+A8h] [rbp-9h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  int v22; // [rsp+B8h] [rbp+7h]
  int v23; // [rsp+BCh] [rbp+Bh]
  __int64 v24; // [rsp+F8h] [rbp+47h] BYREF
  va_list va; // [rsp+F8h] [rbp+47h]
  __int64 v26; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+100h] [rbp+4Fh]
  __int64 v28; // [rsp+108h] [rbp+57h] BYREF
  va_list va2; // [rsp+108h] [rbp+57h]
  __int64 v30; // [rsp+110h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+110h] [rbp+5Fh]
  __int64 v32; // [rsp+118h] [rbp+67h]
  __int64 v33; // [rsp+120h] [rbp+6Fh]
  __int64 v34; // [rsp+128h] [rbp+77h] BYREF
  va_list va4; // [rsp+128h] [rbp+77h]
  __int64 v36; // [rsp+130h] [rbp+7Fh]
  va_list va5; // [rsp+138h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v30 = va_arg(va4, _QWORD);
  v32 = va_arg(va4, _QWORD);
  v33 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v34 = va_arg(va5, _QWORD);
  v36 = va_arg(va5, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  v12 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  v13 = v32;
  v15 = 0;
  v18 = 0;
  v20 = 8LL;
  v23 = 0;
  v16 = v33;
  va_copy(v19, va4);
  v21 = v36;
  v14 = 8 * v30;
  v17 = 8 * v30;
  v22 = 8 * v30;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventSignalQueueSubmit2, 0LL, 9u, &v4);
}
