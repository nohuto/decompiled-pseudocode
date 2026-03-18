/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x14088FB44
 * Callers:
 *     SeRmInitPhase1 @ 0x140D0B16C (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403CAE7C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403CF030 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x140A91D70 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *SecurityAttributesList; // rdi
  unsigned int v5; // ebx
  char IsMultiSessionSku; // al
  char v7; // si
  _DWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-38h]
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 *v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+84h] [rbp+24h]
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF

  v15 = HIDWORD(a1);
  v11[0] = 3145774LL;
  v11[1] = L"WIN://ISMULTISESSIONSKU";
  v9[0] = 1;
  v13 = 0LL;
  v1 = 0LL;
  v12 = 0LL;
  v14 = 2;
  v9[1] = 1;
  v10 = v11;
  SecurityAttributesList = (_DWORD *)AuthzBasepAllocateSecurityAttributesList();
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku(v3, v2);
    DWORD2(v12) = 1;
    v7 = IsMultiSessionSku;
    LOWORD(v12) = 6;
    LOBYTE(v1) = IsMultiSessionSku != 0;
    v16 = v1;
    v13 = &v16;
    v5 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v14, (__int64)v9);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&WheapPfaLock.600,
           (signed __int64)SecurityAttributesList,
           0LL) )
    {
      v5 = -1073741823;
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
    }
    else
    {
      SepAllowAccessUponLogoff = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
