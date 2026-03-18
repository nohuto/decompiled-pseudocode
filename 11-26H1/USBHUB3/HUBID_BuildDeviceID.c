/*
 * XREFs of HUBID_BuildDeviceID @ 0x14001F0E4
 * Callers:
 *     HUBPDO_AssignPDOIds @ 0x140080B00 (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x14001E3CC (HUBID_AssignIDString.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HUBID_BuildDeviceID(__int64 a1, __int64 a2)
{
  int v4; // eax
  const void **p_DestinationString; // rcx
  unsigned __int16 v6; // r8
  unsigned __int16 v7; // ax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+40h] [rbp-C0h] BYREF
  char v19; // [rsp+A0h] [rbp-60h] BYREF

  *(_QWORD *)&v17.Length = 6029312LL;
  *(_QWORD *)&DestinationString.Length = 9961472LL;
  v17.Buffer = (wchar_t *)&v18;
  DestinationString.Buffer = (wchar_t *)&v19;
  v4 = *(_DWORD *)(a1 + 1644);
  if ( (v4 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 1640) & 3) == 1 )
    {
      p_DestinationString = (const void **)(a1 + 2128);
      return HUBID_AssignIDString(p_DestinationString, 0, a2, 0LL);
    }
    v6 = *(_WORD *)(a1 + 2004);
    v7 = *(_WORD *)(a1 + 2006);
  }
  else if ( (v4 & 0x2000) != 0 )
  {
    v6 = *(_WORD *)(a1 + 2004);
    v7 = *(_WORD *)(a1 + 2006);
  }
  else
  {
    v6 = 0;
    v8 = *(_DWORD *)(a1 + 2440) - 1073807360;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 2;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 2;
              if ( v13 )
              {
                v14 = v13 - 18;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    v7 = 8;
                  else
                    v7 = 0;
                }
                else
                {
                  v7 = 7;
                }
              }
              else
              {
                v7 = 3;
              }
            }
            else
            {
              v7 = 5;
            }
          }
          else
          {
            v7 = 6;
          }
        }
        else
        {
          v7 = 1;
        }
      }
      else
      {
        v7 = 4;
      }
    }
    else
    {
      v7 = 2;
    }
  }
  if ( (*(_DWORD *)(a1 + 1652) & 0x10000) != 0 )
  {
    result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X_NON_FUNCTIONAL", v6, v7);
    if ( result < 0 )
      return result;
    p_DestinationString = (const void **)&DestinationString;
  }
  else
  {
    result = RtlUnicodeStringPrintf(
               &v17,
               L"USB\\VID_%04X&PID_%04X",
               v6,
               v7,
               *(_QWORD *)&DestinationString.Length,
               DestinationString.Buffer);
    if ( result < 0 )
      return result;
    p_DestinationString = (const void **)&v17;
  }
  return HUBID_AssignIDString(p_DestinationString, 0, a2, 0LL);
}
