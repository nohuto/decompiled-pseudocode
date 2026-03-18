/*
 * XREFs of ExpLogSecurePoolCreate @ 0x1406CC7F0
 * Callers:
 *     ExCreatePool @ 0x1406CBA60 (ExCreatePool.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x1403EEB48 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall ExpLogSecurePoolCreate(__int64 a1)
{
  const CHAR *v2; // rbx
  int v3; // r8d
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v7[46]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v8; // [rsp+76h] [rbp-8Ah]
  _BYTE v9[280]; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+190h] [rbp+90h] BYREF
  __int64 *v11; // [rsp+1B0h] [rbp+B0h]
  __int64 v12; // [rsp+1B8h] [rbp+B8h]
  int *v13; // [rsp+1C0h] [rbp+C0h]
  __int64 v14; // [rsp+1C8h] [rbp+C8h]
  _BYTE v15[16]; // [rsp+1D0h] [rbp+D0h] BYREF

  if ( dword_140E09178 && tlgKeywordOn((__int64)&dword_140E09178, 0x200000000000LL) )
  {
    v2 = "Unknown";
    memset_0(v7, 0, 0x140uLL);
    v6 = a1;
    if ( (int)ZwQuerySystemInformation(167LL, &v6, 328LL, 0LL) >= 0 )
      v2 = &v9[v8];
    if ( (unsigned int)dword_140E09178 > 5 && tlgKeywordOn((__int64)&dword_140E09178, 0x200000000000LL) )
    {
      v12 = 8LL;
      v5 = 0x80000000LL;
      v4 = v3;
      v11 = &v5;
      v14 = 4LL;
      v13 = &v4;
      tlgCreate1Sz_char((__int64)v15, v2);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09178,
        (unsigned __int8 *)byte_140055931,
        0LL,
        0LL,
        5u,
        &v10);
    }
  }
}
