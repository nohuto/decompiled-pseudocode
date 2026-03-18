/*
 * XREFs of McTemplateK0xqdtqi_EtwWriteTransfer @ 0x14005B72C
 * Callers:
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403B7F94 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403C5374 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xqdtqi_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-51h] BYREF
  va_list v6; // [rsp+50h] [rbp-41h]
  __int64 v7; // [rsp+58h] [rbp-39h]
  va_list v8; // [rsp+60h] [rbp-31h]
  __int64 v9; // [rsp+68h] [rbp-29h]
  va_list v10; // [rsp+70h] [rbp-21h]
  __int64 v11; // [rsp+78h] [rbp-19h]
  int *v12; // [rsp+80h] [rbp-11h]
  __int64 v13; // [rsp+88h] [rbp-9h]
  va_list v14; // [rsp+90h] [rbp-1h]
  __int64 v15; // [rsp+98h] [rbp+7h]
  va_list v16; // [rsp+A0h] [rbp+Fh]
  __int64 v17; // [rsp+A8h] [rbp+17h]
  __int64 v18; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v20; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v22; // [rsp+F8h] [rbp+67h] BYREF
  va_list va2; // [rsp+F8h] [rbp+67h]
  __int64 v24; // [rsp+100h] [rbp+6Fh]
  __int64 v25; // [rsp+108h] [rbp+77h] BYREF
  va_list va3; // [rsp+108h] [rbp+77h]
  va_list va4; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  v7 = 8LL;
  v4 = 0;
  va_copy(v6, va);
  v9 = 4LL;
  va_copy(v8, va1);
  v11 = 4LL;
  va_copy(v10, va2);
  v13 = 4LL;
  v12 = &v4;
  va_copy(v14, va3);
  va_copy(v16, va4);
  v15 = 4LL;
  v17 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventBltQueueAddEntry, 0LL, 7u, &v5);
}
