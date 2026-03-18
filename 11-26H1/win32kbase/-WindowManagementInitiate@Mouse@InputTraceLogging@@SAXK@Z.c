/*
 * XREFs of ?WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z @ 0x1400D102C
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1400D0C28 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::WindowManagementInitiate(int a1)
{
  int v1; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v2[32]; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  __int64 v4; // [rsp+60h] [rbp-18h]

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    v1 = a1;
    v3 = &v1;
    v4 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_1402A9E40, &unk_14028CA39, 0LL, 0LL, 3, v2);
  }
}
