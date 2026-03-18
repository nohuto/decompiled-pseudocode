/*
 * XREFs of AcpiDiagTraceDeviceReset @ 0x14002D070
 * Callers:
 *     AcpiDeviceReset @ 0x1400D4160 (AcpiDeviceReset.c)
 * Callees:
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

void __fastcall AcpiDiagTraceDeviceReset(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rcx
  _BYTE *ObjectPath; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rcx
  _BYTE *v9; // rax
  __int64 v10; // rdx
  wchar_t *Buffer; // r8
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // dx
  __int64 v14; // rcx
  unsigned __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+6Ch] [rbp-94h]
  int *v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  int *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  _BYTE v25[128]; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+158h] [rbp+58h] BYREF
  int v27; // [rsp+160h] [rbp+60h] BYREF

  v27 = a3;
  v26 = a2;
  v3 = *(__int64 **)(a1 + 760);
  DestinationString = 0LL;
  if ( v3 )
  {
    ObjectPath = GetObjectPath(*v3);
    if ( ObjectPath )
    {
      v5 = -1LL;
      v6 = -1LL;
      do
        ++v6;
      while ( ObjectPath[v6] );
      if ( (unsigned __int64)(v6 + 1) > 0x80 )
      {
        v7 = -1073741789;
      }
      else
      {
        do
          ++v5;
        while ( ObjectPath[v5] );
        memmove(v25, ObjectPath, v5 + 1);
        v7 = 0;
      }
      ExFreePoolWithTag(ObjectPath, 0);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        v8 = 128LL;
        v9 = v25;
        do
        {
          if ( !*v9 )
            break;
          ++v9;
          --v8;
        }
        while ( v8 );
        v10 = (128 - v8) & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64);
        if ( !v8 )
          LOWORD(v10) = 512;
        v15 = v10;
        DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, 2LL * (unsigned __int16)v10 + 2, 1399874369LL);
        Buffer = DestinationString.Buffer;
        if ( DestinationString.Buffer )
        {
          v12 = v15;
          v13 = 0;
          DestinationString.Length = 2 * v15;
          for ( DestinationString.MaximumLength = 2 * v15 + 2; v13 < v15; Buffer = DestinationString.Buffer )
          {
            v14 = v13++;
            Buffer[v14] = (char)v25[v14];
            v12 = v15;
          }
          Buffer[v12] = 0;
          UserData.Ptr = (unsigned __int64)&v15;
          v18 = DestinationString.Buffer;
          *(_QWORD *)&UserData.Size = 2LL;
          v19 = 2 * v15;
          v21 = &v26;
          v23 = &v27;
          v20 = 0;
          v22 = 2LL;
          v24 = 4LL;
          EtwWrite(
            *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
            &ACPI_ETW_EVENT_DEVICE_RESET,
            0LL,
            4u,
            &UserData);
          Buffer = DestinationString.Buffer;
        }
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
      }
    }
  }
}
