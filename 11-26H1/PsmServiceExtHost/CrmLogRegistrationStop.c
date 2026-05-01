/*
 * XREFs of CrmLogRegistrationStop @ 0x180032494
 * Callers:
 *     CrmSrvUnregister @ 0x180032344 (CrmSrvUnregister.c)
 *     CrmRegistrationCleanup @ 0x180032430 (CrmRegistrationCleanup.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogRegistrationStop(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-58h] BYREF
  UUID *v4; // [rsp+60h] [rbp-38h]
  __int64 v5; // [rsp+68h] [rbp-30h]
  __int64 *v6; // [rsp+70h] [rbp-28h]
  __int64 v7; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 2) != 0 )
  {
    result = qword_1800E1300 & 2;
    if ( result == qword_1800E1300 )
    {
      v2 = a1;
      v4 = &Uuid;
      v5 = 16LL;
      v6 = &v2;
      v7 = 8LL;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CCB25, 0LL, 0LL, 4, v3);
    }
  }
  return result;
}
