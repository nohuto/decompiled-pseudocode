/*
 * XREFs of _lambda_c7448c75b3dac8478dfa1698e822be3e_::operator() @ 0x140277960
 * Callers:
 *     _DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140098A90 (_DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140049164 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

char __fastcall lambda_c7448c75b3dac8478dfa1698e822be3e_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  int v3; // r10d
  int *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  int v7; // ecx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-19h] BYREF
  int *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  int *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  int *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]

  v1 = *a1;
  if ( (unsigned int)dword_1401665B8 > 5 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1401665B8, 4096LL);
    if ( (_BYTE)v1 )
    {
      v4 = *(int **)(v2 + 24);
      v9 = v3;
      v21 = 4LL;
      v19 = 4LL;
      v5 = *v4;
      v6 = *(_QWORD *)(v2 + 16);
      v10 = v5;
      v17 = 8LL;
      v15 = 4LL;
      v12 = *(_QWORD *)(*(_QWORD *)v6 + 412LL);
      v7 = **(_DWORD **)(v2 + 8);
      v20 = &v9;
      v18 = &v10;
      v16 = &v12;
      v14 = &v11;
      v11 = v7;
      LOBYTE(v1) = tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1401665B8, byte_140146621, 0LL, 0LL, 6u, &v13);
    }
  }
  return v1;
}
