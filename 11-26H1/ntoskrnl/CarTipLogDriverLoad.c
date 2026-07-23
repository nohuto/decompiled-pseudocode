/*
 * XREFs of CarTipLogDriverLoad @ 0x14064CF60
 * Callers:
 *     CarEtwRegister @ 0x14064C674 (CarEtwRegister.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void CarTipLogDriverLoad()
{
  __int64 i; // rbx
  int v1; // [rsp+30h] [rbp-49h] BYREF
  __int64 v2; // [rsp+38h] [rbp-41h] BYREF
  __int64 v3; // [rsp+40h] [rbp-39h] BYREF
  __int64 v4; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-29h] BYREF
  int *v6; // [rsp+70h] [rbp-9h]
  __int64 v7; // [rsp+78h] [rbp-1h]
  _BYTE v8[16]; // [rsp+80h] [rbp+7h] BYREF
  __int64 *v9; // [rsp+90h] [rbp+17h]
  __int64 v10; // [rsp+98h] [rbp+1Fh]
  __int64 *v11; // [rsp+A0h] [rbp+27h]
  __int64 v12; // [rsp+A8h] [rbp+2Fh]
  __int64 *v13; // [rsp+B0h] [rbp+37h]
  __int64 v14; // [rsp+B8h] [rbp+3Fh]

  if ( (VfRuleClasses & 0x400000) != 0 )
  {
    for ( i = CarDriverInfo; i; i = *(_QWORD *)i )
    {
      if ( (unsigned int)dword_140E08E50 > 5 && tlgKeywordOn((__int64)&dword_140E08E50, 0x800000000000LL) )
      {
        v1 = CarTipTag;
        v7 = 4LL;
        v6 = &v1;
        tlgCreate1Sz_wchar_t((__int64)v8, (const WCHAR *)(i + 8));
        v9 = &v2;
        v3 = *(unsigned int *)(i + 84);
        v2 = CarEtwRandomSeed;
        v11 = &v3;
        v4 = *(unsigned int *)(i + 88);
        v13 = &v4;
        v10 = 8LL;
        v12 = 8LL;
        v14 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08E50,
          (unsigned __int8 *)&word_140053C66,
          0LL,
          0LL,
          7u,
          &v5);
      }
    }
  }
}
