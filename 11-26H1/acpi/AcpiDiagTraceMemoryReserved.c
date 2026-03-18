/*
 * XREFs of AcpiDiagTraceMemoryReserved @ 0x1400AB0EC
 * Callers:
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400B7B04 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400CE1DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400CF578 (PnpiBiosAddressDoubleToIoDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

char AcpiDiagTraceMemoryReserved(char a1, char a2, char a3, ...)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-59h] BYREF
  char *v6; // [rsp+48h] [rbp-49h]
  __int64 v7; // [rsp+50h] [rbp-41h]
  char *v8; // [rsp+58h] [rbp-39h]
  __int64 v9; // [rsp+60h] [rbp-31h]
  va_list v10; // [rsp+68h] [rbp-29h]
  __int64 v11; // [rsp+70h] [rbp-21h]
  va_list v12; // [rsp+78h] [rbp-19h]
  __int64 v13; // [rsp+80h] [rbp-11h]
  va_list v14; // [rsp+88h] [rbp-9h]
  __int64 v15; // [rsp+90h] [rbp-1h]
  va_list v16; // [rsp+98h] [rbp+7h]
  __int64 v17; // [rsp+A0h] [rbp+Fh]
  va_list v18; // [rsp+A8h] [rbp+17h]
  __int64 v19; // [rsp+B0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+3Fh] BYREF
  char v21; // [rsp+D8h] [rbp+47h] BYREF
  char v22; // [rsp+E0h] [rbp+4Fh] BYREF
  char v23; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v24; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+5Fh]
  __int64 v26; // [rsp+F8h] [rbp+67h] BYREF
  va_list va1; // [rsp+F8h] [rbp+67h]
  __int64 v28; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+6Fh]
  __int64 v30; // [rsp+108h] [rbp+77h] BYREF
  va_list va3; // [rsp+108h] [rbp+77h]
  va_list va4; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v30 = va_arg(va4, _QWORD);
  v3 = &retaddr;
  v23 = a3;
  v22 = a2;
  v21 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(v3) = EtwEventEnabled(
                   *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                   &ACPI_ETW_EVENT_MEMORY_RESERVED);
    if ( (_BYTE)v3 )
    {
      UserData.Ptr = (unsigned __int64)&v21;
      *(_QWORD *)&UserData.Size = 1LL;
      v7 = 1LL;
      v6 = &v22;
      v9 = 1LL;
      v8 = &v23;
      va_copy(v10, va);
      va_copy(v12, va1);
      va_copy(v14, va2);
      va_copy(v16, va3);
      va_copy(v18, va4);
      v11 = 8LL;
      v13 = 8LL;
      v15 = 8LL;
      v17 = 8LL;
      v19 = 8LL;
      LOBYTE(v3) = EtwWrite(
                     *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                     &ACPI_ETW_EVENT_MEMORY_RESERVED,
                     0LL,
                     8u,
                     &UserData);
    }
  }
  return (char)v3;
}
