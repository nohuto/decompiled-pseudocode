/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x18000D958
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x18000E6E0 (RtlCheckTokenMembershipEx.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180057510 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     RtlpIsAppContainer @ 0x180115654 (RtlpIsAppContainer.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(__int64 a1, __int64 a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  unsigned __int64 v8; // rbx
  int v9; // [rsp+20h] [rbp-40h]
  char v10; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v11[7]; // [rsp+31h] [rbp-2Fh] BYREF
  __int128 v12; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v13[2]; // [rsp+48h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+54h] [rbp-Ch]

  v10 = 0;
  v12 = 0LL;
  v11[0] = 0;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, &v12);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
    goto LABEL_3;
  }
  *a3 = 0;
  if ( PolicyValueForSystemCapability >= 0 )
  {
    v8 = (unsigned __int64)(unsigned __int16)v12 >> 1;
    if ( (unsigned int)RtlCompareUnicodeStrings(*((_QWORD *)&v12 + 1), v8, L"DO", 2LL, 0) )
    {
      LOBYTE(v9) = 0;
      if ( (unsigned int)RtlCompareUnicodeStrings(*((_QWORD *)&v12 + 1), v8, L"IU", 2LL, v9) )
      {
        IsAppContainer = -1073741823;
        goto LABEL_3;
      }
      v13[0] = 257;
      v14 = 4;
    }
    else
    {
      v13[0] = 513;
      v14 = 32;
      v15 = 583;
    }
    v13[1] = 83886080;
    IsAppContainer = RtlCheckTokenMembershipEx(a1, v13, 2LL, &v10);
    if ( IsAppContainer >= 0 )
    {
      if ( v10 )
      {
        IsAppContainer = RtlpIsAppContainer(a1, v11);
        if ( IsAppContainer >= 0 )
        {
          if ( v11[0] )
            *a3 = 1;
        }
      }
    }
  }
LABEL_3:
  if ( *((_QWORD *)&v12 + 1) )
    RtlpSysVolFree(*((_QWORD *)&v12 + 1));
  return (unsigned int)IsAppContainer;
}
