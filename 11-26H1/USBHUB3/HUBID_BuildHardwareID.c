/*
 * XREFs of HUBID_BuildHardwareID @ 0x14001F278
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B864 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x140080B00 (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x14001E3CC (HUBID_AssignIDString.c)
 *     HUBID_GetUnknownId @ 0x14001F718 (HUBID_GetUnknownId.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildHardwareID(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  const void **UnknownId; // rcx
  unsigned int v8; // r15d
  unsigned int v9; // r9d
  unsigned __int16 v10; // cx
  _DWORD *v11; // r12
  unsigned int v12; // r14d
  char v13; // al
  const wchar_t *v14; // rdx
  bool v15; // zf
  int result; // eax
  const wchar_t *v17; // rdx
  _BYTE *v18; // [rsp+20h] [rbp-A9h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-89h] BYREF
  char v21; // [rsp+50h] [rbp-79h] BYREF

  *(_QWORD *)&DestinationString.Length = 9961472LL;
  DestinationString.Buffer = (wchar_t *)&v21;
  if ( a3 )
    *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 1644) & 0x2002) == 0 )
  {
    UnknownId = (const void **)HUBID_GetUnknownId(a1, a1, a3, a4);
    return HUBID_AssignIDString(UnknownId, 1, a2, (__int64)a3);
  }
  if ( (*(_DWORD *)(a1 + 1640) & 3) == 1 && a2 )
  {
    UnknownId = (const void **)(a1 + 2128);
    return HUBID_AssignIDString(UnknownId, 1, a2, (__int64)a3);
  }
  v8 = *(unsigned __int16 *)(a1 + 2004);
  v9 = *(unsigned __int16 *)(a1 + 2006);
  if ( *(_WORD *)(a1 + 1998) > 0x200u )
  {
    v11 = (_DWORD *)(a1 + 1652);
    v12 = *(unsigned __int16 *)(a1 + 2006);
    v14 = L"USB\\VID_%04X&PID_%04X&REV_%04X&MAUSB";
    LODWORD(v18) = *(unsigned __int16 *)(a1 + 2008);
    if ( (*(_DWORD *)(a1 + 1652) & 0x2000000) == 0 )
      v14 = L"USB\\VID_%04X&PID_%04X&REV_%04X";
  }
  else
  {
    v10 = *(_WORD *)(a1 + 2008);
    v11 = (_DWORD *)(a1 + 1652);
    v20[4] = 0;
    v20[0] = (v10 >> 12) + 48;
    v12 = v9;
    v20[2] = ((unsigned __int8)v10 >> 4) + 48;
    v20[1] = (HIBYTE(v10) & 0xF) + 48;
    v13 = *(_BYTE *)(a1 + 2008);
    v14 = L"USB\\VID_%04X&PID_%04X&REV_%S&MAUSB";
    v15 = (*v11 & 0x2000000) == 0;
    v20[3] = (v13 & 0xF) + 48;
    if ( v15 )
      v14 = L"USB\\VID_%04X&PID_%04X&REV_%S";
    v18 = v20;
  }
  result = RtlUnicodeStringPrintf(&DestinationString, v14);
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 1, a2, (__int64)a3);
    if ( result >= 0 )
    {
      v17 = L"USB\\VID_%04X&PID_%04X&MAUSB";
      if ( (*v11 & 0x2000000) == 0 )
        v17 = L"USB\\VID_%04X&PID_%04X";
      result = RtlUnicodeStringPrintf(&DestinationString, v17, v8, v12, v18);
      if ( result >= 0 )
      {
        UnknownId = (const void **)&DestinationString;
        return HUBID_AssignIDString(UnknownId, 1, a2, (__int64)a3);
      }
    }
  }
  return result;
}
