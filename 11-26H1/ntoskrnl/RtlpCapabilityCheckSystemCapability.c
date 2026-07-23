/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x140A968F8
 * Callers:
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpIsAppContainer @ 0x14080A3BC (RtlpIsAppContainer.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A96988 (RtlpGetPolicyValueForSystemCapability.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(HANDLE TokenHandle, const UNICODE_STRING *a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  SIZE_T v8; // rbx
  BOOLEAN IsMember; // [rsp+30h] [rbp-40h] BYREF
  bool v10; // [rsp+31h] [rbp-3Fh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE Sid[16]; // [rsp+50h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  IsMember = 0;
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
    IsAppContainer = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &IsMember);
    if ( IsAppContainer >= 0 )
    {
      if ( IsMember )
      {
        IsAppContainer = RtlpIsAppContainer(TokenHandle, &v10);
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
