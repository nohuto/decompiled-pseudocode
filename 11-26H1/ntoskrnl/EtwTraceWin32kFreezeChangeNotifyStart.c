/*
 * XREFs of EtwTraceWin32kFreezeChangeNotifyStart @ 0x140827D24
 * Callers:
 *     PspPostFreezeOperationWorker @ 0x140AEF430 (PspPostFreezeOperationWorker.c)
 *     PspWin32kProcessFreezeNotify @ 0x140B05828 (PspWin32kProcessFreezeNotify.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void EtwTraceWin32kFreezeChangeNotifyStart()
{
  __int64 v0; // rdx
  __int16 v1; // r8
  int v2; // r9d
  __int16 v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  __int64 v7; // [rsp+68h] [rbp-30h]
  __int16 *v8; // [rsp+70h] [rbp-28h]
  __int64 v9; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_140E08F80 > 5 && tlgKeywordOn((__int64)&dword_140E08F80, 4LL) )
  {
    v4 = v2;
    v6 = &v4;
    v7 = v0;
    v8 = &v3;
    v3 = v1;
    v9 = 2LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08F80, (unsigned __int8 *)word_140053C92, 0LL, 0LL, v0, &v5);
  }
}
