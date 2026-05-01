/*
 * XREFs of CrmLogSrvActivityWindowClosedReasonSubscribeStop @ 0x18002E6D8
 * Callers:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18002E5E0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogSrvActivityWindowClosedReasonSubscribeStop(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // [rsp+30h] [rbp-59h] BYREF
  int v7; // [rsp+34h] [rbp-55h] BYREF
  int v8; // [rsp+38h] [rbp-51h] BYREF
  __int64 v9; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v10[32]; // [rsp+50h] [rbp-39h] BYREF
  UUID *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  int *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  __int64 v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  int *v18; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]
  __int64 *v20; // [rsp+B0h] [rbp+27h]
  __int64 v21; // [rsp+B8h] [rbp+2Fh]
  int *v22; // [rsp+C0h] [rbp+37h]
  __int64 v23; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 )
  {
    result = qword_1800E1300 & 1;
    if ( result == qword_1800E1300 )
    {
      v7 = a2;
      v11 = &Uuid;
      v6 = *(_DWORD *)(a1 + 24);
      v13 = &v6;
      v15 = a1 + 72;
      v5 = *(unsigned __int8 *)(a1 + 73);
      v9 = a3;
      v21 = 8LL;
      v8 = a4;
      v12 = 16LL;
      v16 = 4 * v5 + 8;
      v18 = &v7;
      v20 = &v9;
      v22 = &v8;
      v14 = 4LL;
      v17 = 0;
      v19 = 4LL;
      v23 = 4LL;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CBF2F, 0LL, 0LL, 8, v10);
    }
  }
  return result;
}
