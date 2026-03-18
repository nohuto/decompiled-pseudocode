/*
 * XREFs of sub_14000DA00 @ 0x14000DA00
 * Callers:
 *     DriverEntry @ 0x140049010 (DriverEntry.c)
 * Callees:
 *     sub_1400322E8 @ 0x1400322E8 (sub_1400322E8.c)
 *     sub_14003233C @ 0x14003233C (sub_14003233C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 *     sub_140049078 @ 0x140049078 (sub_140049078.c)
 */

__int64 __fastcall sub_14000DA00(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  unsigned int v7; // ebx
  _DWORD v8[2]; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+28h] [rbp-71h]
  __int64 (__fastcall *v10)(); // [rsp+30h] [rbp-69h]
  char (__fastcall *v11)(__int64); // [rsp+38h] [rbp-61h]
  __int64 (__fastcall *v12)(int, int, int, int, __int64); // [rsp+40h] [rbp-59h]
  __int64 (__fastcall *v13)(); // [rsp+48h] [rbp-51h]
  int v14; // [rsp+60h] [rbp-39h]
  int v15; // [rsp+68h] [rbp-31h]
  int v16; // [rsp+6Ch] [rbp-2Dh]
  int v17; // [rsp+78h] [rbp-21h]
  char v18; // [rsp+7Ch] [rbp-1Dh]
  __int64 (__fastcall *v19)(); // [rsp+98h] [rbp-1h]
  char (__fastcall *v20)(__int64, __int64); // [rsp+A0h] [rbp+7h]
  __int64 (__fastcall *v21)(); // [rsp+D0h] [rbp+37h]
  int v22; // [rsp+D8h] [rbp+3Fh]
  int v23; // [rsp+DCh] [rbp+43h]
  __int64 (__fastcall *v24)(); // [rsp+E8h] [rbp+4Fh]

  sub_140032C80(v8, 0LL, 208LL);
  if ( !byte_140042131 )
    sub_140049078();
  v8[0] = 208;
  if ( (unsigned int)sub_1400322E8(v4) || (v5 = sub_14003233C()) != 0 )
    LOBYTE(v5) = 1;
  v22 |= 0xC003B1B8;
  byte_140042130 = v5;
  v17 = 16843010;
  v9 = sub_140019D00;
  v16 = 2;
  v10 = sub_140019F10;
  v8[1] = 5;
  v11 = sub_140008040;
  v12 = sub_140019450;
  v13 = sub_140019EC0;
  v19 = sub_14000DBA0;
  v20 = sub_1400024C0;
  v21 = sub_14001A0C0;
  v24 = sub_14000EBE0;
  v18 = 1;
  v14 = 4352;
  v15 = 8328;
  v23 = 2;
  result = StorPortInitialize(a1, a2, v8, 0LL);
  v7 = result;
  if ( !byte_140042131 )
  {
    if ( (_DWORD)result )
    {
      if ( qword_140042330 )
      {
        RtlUnregisterFeatureConfigurationChangeNotification();
        qword_140042330 = 0LL;
      }
      if ( qword_140042088 )
      {
        RtlUnregisterFeatureUsageProvider();
        qword_140042088 = 0LL;
      }
      dword_1400423B0 = 0;
    }
    else
    {
      qword_140042258 = *(_QWORD *)(a1 + 104);
      if ( !qword_140042258 )
        return result;
      *(_QWORD *)(a1 + 104) = sub_140032390;
    }
    return v7;
  }
  return result;
}
