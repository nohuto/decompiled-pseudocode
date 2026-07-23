/*
 * XREFs of HvpLogUnreadableLog @ 0x140ADD478
 * Callers:
 *     HvAnalyzeLogFiles @ 0x140ADCF88 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int __fastcall HvpLogUnreadableLog(char a1, int a2)
{
  __int64 v2; // rax
  char v4; // [rsp+30h] [rbp-68h] BYREF
  int v5; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  char *v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  int *v9; // [rsp+70h] [rbp-28h]
  __int64 v10; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 8) != 0 )
  {
    v2 = qword_140E09F00 & 8;
    if ( v2 == qword_140E09F00 )
    {
      v4 = a1;
      v7 = &v4;
      v5 = a2;
      v9 = &v5;
      v10 = 4LL;
      v8 = 1LL;
      LODWORD(v2) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E09EE8,
                      (unsigned __int8 *)byte_14005837D,
                      0LL,
                      0LL,
                      4u,
                      &v6);
    }
  }
  return v2;
}
