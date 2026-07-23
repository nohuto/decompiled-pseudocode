/*
 * XREFs of HalpPicDiscover @ 0x1405A4984
 * Callers:
 *     HalpInitializeInterrupts @ 0x140CB3DD8 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalSocGetAcpiTable @ 0x14059A7D4 (HalSocGetAcpiTable.c)
 *     HalpInterruptRegisterController @ 0x14059D384 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x14059D844 (HalpInterruptRegisterLine.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpPicDiscover()
{
  __int64 AcpiTable; // rax
  __int64 result; // rax
  int v2; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v3; // [rsp+2Ch] [rbp-DCh]
  __int64 v4; // [rsp+34h] [rbp-D4h]
  _QWORD v5[3]; // [rsp+3Ch] [rbp-CCh]
  int v6; // [rsp+54h] [rbp-B4h]
  __int64 v7; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall *v9)(); // [rsp+68h] [rbp-A0h]
  __int64 v10; // [rsp+70h] [rbp-98h]
  __int64 v11; // [rsp+78h] [rbp-90h]
  __int64 v12; // [rsp+80h] [rbp-88h]
  __int64 v13; // [rsp+90h] [rbp-78h]
  __int64 (__fastcall *v14)(); // [rsp+A0h] [rbp-68h]
  __int64 (__fastcall *v15)(); // [rsp+B0h] [rbp-58h]
  __int64 (*v16)(); // [rsp+B8h] [rbp-50h]
  __int64 v17; // [rsp+C0h] [rbp-48h]
  int *v18; // [rsp+130h] [rbp+28h]
  int v19; // [rsp+138h] [rbp+30h]
  int v20; // [rsp+13Ch] [rbp+34h]
  __int64 v21; // [rsp+140h] [rbp+38h]
  int v22; // [rsp+148h] [rbp+40h]
  __int64 v23; // [rsp+14Ch] [rbp+44h]
  int v24; // [rsp+178h] [rbp+70h] BYREF

  AcpiTable = HalSocGetAcpiTable(1128878145);
  if ( AcpiTable && (*(_BYTE *)(AcpiTable + 40) & 1) == 0 )
    return 0LL;
  memset_0(&v7, 0, 0x100uLL);
  v7 = 0x10000000001LL;
  v18 = &v24;
  v14 = HalpPicWriteEndOfInterrupt;
  v19 = 4;
  v15 = HalpPicSetLineState;
  v20 = 1;
  v16 = xKdEnumerateDebuggingDevices;
  v21 = 45056LL;
  v23 = 0LL;
  v8 = 0LL;
  v9 = HalpPicInitializeIoUnit;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v17 = 0LL;
  v22 = 0;
  v24 = 45056;
  result = HalpInterruptRegisterController((__int64)&v7);
  if ( (int)result >= 0 )
  {
    memset_0(&v7, 0, 0x100uLL);
    v7 = 0x10000000001LL;
    v18 = &v24;
    v14 = HalpPicWriteEndOfInterrupt;
    v15 = HalpPicSetLineState;
    v16 = xKdEnumerateDebuggingDevices;
    v19 = 4;
    v20 = 1;
    v21 = 45057LL;
    v23 = 0LL;
    v8 = 0LL;
    v9 = HalpPicInitializeIoUnit;
    v13 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v17 = 0LL;
    v22 = 0;
    v24 = 45057;
    result = HalpInterruptRegisterController((__int64)&v7);
    if ( (int)result >= 0 )
    {
      v3 = 0x200000001LL;
      v4 = 6LL;
      v6 = 0;
      v5[0] = -1LL;
      *(_OWORD *)&v5[1] = 0LL;
      v2 = 45056;
      result = HalpInterruptRegisterLine((__int64)&v2);
      if ( (int)result >= 0 )
      {
        LODWORD(v4) = 2;
        v3 = 0x800000000LL;
        HIDWORD(v5[0]) = -1;
        v2 = 45056;
        result = HalpInterruptRegisterLine((__int64)&v2);
        if ( (int)result >= 0 )
        {
          v4 = 6LL;
          v6 = 0;
          *(_OWORD *)&v5[1] = 0LL;
          v5[0] = -4294922240LL;
          v3 = 0x300000002LL;
          v2 = 45057;
          result = HalpInterruptRegisterLine((__int64)&v2);
          if ( (int)result >= 0 )
          {
            LODWORD(v4) = 2;
            v3 = 0x800000000LL;
            HIDWORD(v5[0]) = -1;
            v2 = 45057;
            return HalpInterruptRegisterLine((__int64)&v2);
          }
        }
      }
    }
  }
  return result;
}
