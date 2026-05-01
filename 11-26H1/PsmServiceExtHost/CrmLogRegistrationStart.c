/*
 * XREFs of CrmLogRegistrationStart @ 0x180030AC8
 * Callers:
 *     CrmRegistrationStart @ 0x180030A3C (CrmRegistrationStart.c)
 *     CrmRpcSrvRegister @ 0x180031660 (CrmRpcSrvRegister.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogRegistrationStart(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v4[32]; // [rsp+40h] [rbp-9h] BYREF
  UUID *v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  __int64 *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  int *v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 2) != 0 )
  {
    result = qword_1800E1300 & 2;
    if ( result == qword_1800E1300 )
    {
      v6 = 16LL;
      v2 = 0;
      v5 = &Uuid;
      v3 = *(_QWORD *)(a1 + 16);
      v8 = 8LL;
      v7 = &v3;
      v10 = 4LL;
      v9 = &v2;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CCCF4, 0LL, 0LL, 5, v4);
    }
  }
  return result;
}
