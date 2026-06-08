/*
 * XREFs of ProcLibTraceInvalidPowerCurve @ 0x14004403C
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1400461E0 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001034 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     memmove @ 0x14000E740 (memmove.c)
 */

char __fastcall ProcLibTraceInvalidPowerCurve(char a1, unsigned int a2, const void *a3)
{
  unsigned __int16 v3; // bx
  char result; // al
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // [rsp+30h] [rbp-49h] BYREF
  char v9; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int16 v10; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-39h] BYREF
  char *v12; // [rsp+60h] [rbp-19h]
  __int64 v13; // [rsp+68h] [rbp-11h]
  char *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  __int16 *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  _BYTE *v18; // [rsp+90h] [rbp+17h]
  int v19; // [rsp+98h] [rbp+1Fh]
  int v20; // [rsp+9Ch] [rbp+23h]
  _BYTE v21[32]; // [rsp+A0h] [rbp+27h] BYREF

  v3 = a2;
  result = (char)a3;
  if ( a2 )
    result = (unsigned __int8)memmove(v21, a3, 4LL * a2);
  if ( (unsigned int)dword_1400150F8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_1400150F8, 0x400000000000LL);
    if ( result )
    {
      v8 = a1;
      v12 = &v8;
      v16 = (__int16 *)&v10;
      v14 = &v9;
      v10 = v3;
      v19 = 4 * v3;
      v18 = v21;
      v13 = 1LL;
      v9 = v3;
      v15 = 1LL;
      v17 = 2LL;
      v20 = 0;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_1400150F8,
               (unsigned __int8 *)dword_140012711,
               v6,
               v7,
               (ULONG)6,
               &v11);
    }
  }
  return result;
}
