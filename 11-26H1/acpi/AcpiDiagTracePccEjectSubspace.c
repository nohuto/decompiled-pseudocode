/*
 * XREFs of AcpiDiagTracePccEjectSubspace @ 0x140051C68
 * Callers:
 *     AcpiPccEjectInterface @ 0x1400500C8 (AcpiPccEjectInterface.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140038430 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14004B7C8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccEjectSubspace(int a1, char a2, int a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r10d
  char v10; // r11
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  char *v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  int *v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  int *v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  int *v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+A8h] [rbp-60h] BYREF
  int *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  int *v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  int *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  int *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h] BYREF
  int v38; // [rsp+148h] [rbp+40h] BYREF
  char v39; // [rsp+150h] [rbp+48h] BYREF
  int v40; // [rsp+158h] [rbp+50h] BYREF
  int v41; // [rsp+160h] [rbp+58h] BYREF

  v5 = &retaddr;
  v41 = a4;
  v40 = a3;
  v39 = a2;
  v38 = a1;
  if ( (unsigned int)dword_14008C310 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_14008C310, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v13 = a1;
      v27 = &v13;
      v28 = 4LL;
      v29 = &v12;
      LOBYTE(v12) = v10;
      v31 = &v14;
      v33 = &v15;
      v16 = a5;
      v35 = &v16;
      v30 = 1LL;
      v14 = v9;
      v32 = 4LL;
      v15 = v8;
      v34 = 4LL;
      v36 = 4LL;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_14008C310,
                     (unsigned __int8 *)dword_14007D1C8,
                     v7,
                     v8,
                     7u,
                     &v26);
    }
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(v5) = EtwEventEnabled(
                   *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                   &ACPI_ETW_EVENT_PCC_EJECT_SUBSPACE);
    if ( (_BYTE)v5 )
    {
      UserData.Ptr = (unsigned __int64)&v38;
      *(_QWORD *)&UserData.Size = 4LL;
      v18 = &v39;
      v19 = 1LL;
      v20 = &v40;
      v21 = 4LL;
      v22 = &v41;
      v24 = &a5;
      v23 = 4LL;
      v25 = 4LL;
      LOBYTE(v5) = EtwWrite(
                     *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                     &ACPI_ETW_EVENT_PCC_EJECT_SUBSPACE,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v5;
}
