/*
 * XREFs of HalpPmTimerDiscover @ 0x14059AD00
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140585324 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalSocGetAcpiTable @ 0x14059A7D4 (HalSocGetAcpiTable.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     HalpPmTimerConfigure @ 0x14059AC44 (HalpPmTimerConfigure.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpPmTimerDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rdi
  bool v2; // zf
  _DWORD v4[2]; // [rsp+20h] [rbp-69h] BYREF
  __int64 (__fastcall *v5)(); // [rsp+28h] [rbp-61h]
  _OWORD *v6; // [rsp+78h] [rbp-11h]
  int v7; // [rsp+80h] [rbp-9h]
  int v8; // [rsp+84h] [rbp-5h]
  __int64 v9; // [rsp+88h] [rbp-1h]
  int v10; // [rsp+94h] [rbp+Bh]
  int v11; // [rsp+A8h] [rbp+1Fh]
  _OWORD v12[2]; // [rsp+B0h] [rbp+27h] BYREF

  AcpiTable = HalSocGetAcpiTable(1346584902);
  v1 = AcpiTable;
  if ( AcpiTable && (*(_BYTE *)(AcpiTable + 8) < 5u || (*(_DWORD *)(AcpiTable + 112) & 0x100000) == 0) )
  {
    memset_0(v4, 0, 0x90uLL);
    v4[0] = 1;
    v4[1] = 144;
    memset(v12, 0, sizeof(v12));
    if ( !(unsigned int)HalpPmTimerConfigure(v1, (__int64)v12, (__int64)v4) )
    {
      v2 = (*(_DWORD *)(v1 + 112) & 0x100) == 0;
      v8 = 24;
      if ( !v2 )
      {
        LOBYTE(v12[0]) = 1;
        v8 = 32;
      }
      v7 = 32;
      v6 = v12;
      v9 = 3579545LL;
      v5 = HalpPmTimerInitialize;
      v10 = 2;
      v11 = 1;
      HalpTimerRegister((__int64)v4, 0LL);
    }
  }
  return 0LL;
}
