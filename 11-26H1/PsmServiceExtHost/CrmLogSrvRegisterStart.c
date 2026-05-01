/*
 * XREFs of CrmLogSrvRegisterStart @ 0x180031810
 * Callers:
 *     CrmSrvRegister @ 0x180031590 (CrmSrvRegister.c)
 *     CrmRpcSrvRegister @ 0x180031660 (CrmRpcSrvRegister.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 CrmLogSrvRegisterStart()
{
  __int64 result; // rax
  _BYTE v1[32]; // [rsp+30h] [rbp-48h] BYREF
  UUID *v2; // [rsp+50h] [rbp-28h]
  __int64 v3; // [rsp+58h] [rbp-20h]

  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 )
  {
    result = qword_1800E1300 & 1;
    if ( result == qword_1800E1300 )
    {
      v3 = 16LL;
      v2 = &Uuid;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CC3DD, 0LL, 0LL, 3, v1);
    }
  }
  return result;
}
