/*
 * XREFs of PopDiagTraceDIrpAfterSx @ 0x14048093C
 * Callers:
 *     PoHandleIrp @ 0x1404804CC (PoHandleIrp.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopDiagGetDriverName @ 0x1404809A8 (PopDiagGetDriverName.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDIrpAfterSx(__int64 a1)
{
  char result; // al
  int v2; // r8d
  __int64 v3; // r11
  const WCHAR *v4; // rdx
  int v5; // r8d
  int v6; // [rsp+20h] [rbp-E0h]
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v10[6]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v12; // [rsp+90h] [rbp-70h]
  __int64 v13; // [rsp+98h] [rbp-68h]
  _BYTE v14[128]; // [rsp+A0h] [rbp-60h] BYREF

  result = PopDiagGetDriverName(*(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 232LL), v14);
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( result )
    {
      v4 = (const WCHAR *)v14;
      v8 = *(_DWORD *)(v3 + 192);
      v10[5] = 4LL;
      v10[4] = (__int64)&v8;
      if ( v2 < 0 )
        v4 = &SourceString;
      tlgCreate1Sz_wchar_t((__int64)v11, v4);
      v9 = 0x1000000LL;
      v12 = &v9;
      v13 = 8LL;
      return tlgWriteEx_EtwWriteEx((int)&dword_140E07560, (int)&byte_14004D6AD, v5, 1, v6, v7, 5u, (__int64)v10);
    }
  }
  return result;
}
