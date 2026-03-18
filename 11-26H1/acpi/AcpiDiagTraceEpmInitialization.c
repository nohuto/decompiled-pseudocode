/*
 * XREFs of AcpiDiagTraceEpmInitialization @ 0x140056400
 * Callers:
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400B434C (ACPIPepInitializeEpmNotificationSupport.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140038430 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagTraceEpmInitialization(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  char v5; // [rsp+30h] [rbp-39h] BYREF
  int v6; // [rsp+34h] [rbp-35h] BYREF
  int v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-19h] BYREF
  int *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  char *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  int *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  __int64 *v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_14008C310 > 5 )
  {
    v6 = a2;
    v10 = &v6;
    v5 = *(_BYTE *)(a1 + 257);
    v12 = &v5;
    v7 = *(_DWORD *)(a1 + 260);
    v14 = &v7;
    v8 = *(_QWORD *)(a1 + 768);
    v16 = &v8;
    v11 = 4LL;
    v13 = 1LL;
    v15 = 4LL;
    v17 = 8LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_14008C310,
             (unsigned __int8 *)dword_14007D111,
             a3,
             a4,
             6u,
             &v9);
  }
  return result;
}
