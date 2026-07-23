/*
 * XREFs of PopEtGetProcessAppId @ 0x1409C9DD4
 * Callers:
 *     PoEnergyContextStart @ 0x1409CA91C (PoEnergyContextStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1409C9B4C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PopEtAppIdIntern @ 0x1409C9F6C (PopEtAppIdIntern.c)
 *     PopEtGetProcessVersionInfo @ 0x1409CA0AC (PopEtGetProcessVersionInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1409CA204 (PopEtGetProcessImageInfo.c)
 *     PopEtAppIdDereference @ 0x1409CD7D8 (PopEtAppIdDereference.c)
 */

__int64 __fastcall PopEtGetProcessAppId(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING *p_DestinationString; // rbx
  struct _KLOCK_ENTRIES *v5; // r9
  int v6; // ebx
  __int64 v7; // rcx
  unsigned __int64 i; // rcx
  WCHAR v10; // ax
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-90h]
  __int64 *v17; // [rsp+78h] [rbp-88h]
  wchar_t *Buffer; // [rsp+80h] [rbp-80h]
  char *v19; // [rsp+88h] [rbp-78h]
  char *v20; // [rsp+90h] [rbp-70h]
  _DWORD *v21; // [rsp+98h] [rbp-68h]
  __int16 v22; // [rsp+A0h] [rbp-60h]
  __int16 v23; // [rsp+A2h] [rbp-5Eh]
  __int16 v24; // [rsp+A4h] [rbp-5Ch]
  __int16 v25; // [rsp+A6h] [rbp-5Ah]
  _DWORD v26[20]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v27[2]; // [rsp+100h] [rbp+0h] BYREF
  char v28; // [rsp+104h] [rbp+4h] BYREF
  char v29; // [rsp+204h] [rbp+104h] BYREF
  WCHAR SourceString[16]; // [rsp+290h] [rbp+190h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  DestinationString = 0LL;
  memset_0(v27, 0, 0x188uLL);
  memset_0(v26, 0, 0x44uLL);
  p_DestinationString = *(UNICODE_STRING **)(a1 + 848);
  v11 = 0LL;
  if ( !p_DestinationString || !p_DestinationString->Length )
  {
    for ( i = 0LL; i < 0xF; ++i )
    {
      v10 = *(unsigned __int8 *)(a1 + i + 824);
      SourceString[i] = v10;
      if ( !(_BYTE)v10 )
        break;
    }
    SourceString[14] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  PopEtGetProcessImageInfo(a1, &v13);
  PopEtGetProcessSidAndPackageIdentity(a1, v26, (__int64)v27, v5);
  v16 = &v13;
  memset(v15, 0, sizeof(v15));
  if ( (int)PopEtGetProcessVersionInfo(a1, &v11) < 0 )
    v11 = 0LL;
  v17 = &v11;
  v21 = v26;
  v25 = 4 * (BYTE1(v26[0]) + 2);
  Buffer = p_DestinationString->Buffer;
  v22 = p_DestinationString->Length >> 1;
  v19 = &v28;
  v23 = v27[0];
  v20 = &v29;
  v24 = v27[1];
  v6 = PopEtAppIdIntern(v15, &v12);
  if ( v6 < 0 )
  {
    v7 = v12;
  }
  else
  {
    v7 = 0LL;
    *a2 = v12;
    v6 = 0;
  }
  if ( v7 )
    PopEtAppIdDereference(v7);
  return (unsigned int)v6;
}
