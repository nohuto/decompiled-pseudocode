/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x140A91DA8
 * Callers:
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpIsAppContainer @ 0x14080491C (RtlpIsAppContainer.c)
 *     RtlCompareUnicodeStrings @ 0x140981100 (RtlCompareUnicodeStrings.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A91E38 (RtlpGetPolicyValueForSystemCapability.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(HANDLE ExistingTokenHandle, const UNICODE_STRING *a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  SIZE_T v8; // rbx
  char v9; // [rsp+30h] [rbp-40h] BYREF
  bool v10; // [rsp+31h] [rbp-3Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE Sid[16]; // [rsp+50h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v9 = 0;
  v10 = 0;
  *(_OWORD *)P = 0LL;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, (PUNICODE_STRING)P);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
    goto LABEL_3;
  }
  *a3 = 0;
  if ( PolicyValueForSystemCapability >= 0 )
  {
    v8 = (unsigned __int64)LOWORD(P[0]) >> 1;
    if ( RtlCompareUnicodeStrings((PCWCH)P[1], v8, L"DO", 2uLL, 0) )
    {
      if ( RtlCompareUnicodeStrings((PCWCH)P[1], v8, L"IU", 2uLL, 0) )
      {
        IsAppContainer = -1073741823;
        goto LABEL_3;
      }
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      *RtlSubAuthoritySid(Sid, 0) = 4;
    }
    else
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
      *RtlSubAuthoritySid(Sid, 0) = 32;
      *RtlSubAuthoritySid(Sid, 1u) = 583;
    }
    IsAppContainer = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v9);
    if ( IsAppContainer >= 0 )
    {
      if ( v9 )
      {
        IsAppContainer = RtlpIsAppContainer(ExistingTokenHandle, &v10);
        if ( IsAppContainer >= 0 && v10 )
          *a3 = 1;
      }
    }
  }
LABEL_3:
  if ( P[1] )
    ExFreePool(P[1]);
  return (unsigned int)IsAppContainer;
}
