/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4
 * Callers:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheckEx @ 0x1402ACD9C (SepMaximumAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1402AF210 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1402B0BC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1402B1890 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x1409F7C30 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x1409F8430 (SeExamineSacl.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1403CAE50 (AuthzBasepMemAlloc.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403CC900 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403CF030 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404F0C10 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  __int64 v3; // r13
  _BYTE *v4; // rdi
  _DWORD *Pool2; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r15d
  __int64 v11; // rcx
  unsigned int v12; // r13d
  int v13; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  __int128 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-A8h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 0;
  v19 = a2;
  v16 = 0x200000000LL;
  v18 = 0LL;
  v3 = a1;
  v17 = a1;
  v4 = P;
  v15 = 256;
  Pool2 = (_DWORD *)ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL);
  v6 = (__int64)Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0;
    v7 = v3 + 8;
    v8 = Pool2 + 2;
    v9 = 0;
    v8[1] = v8;
    *v8 = v8;
    *(_DWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 40) = v6 + 32;
    *(_QWORD *)(v6 + 32) = v6 + 32;
    while ( v9 < *(unsigned __int16 *)(v3 + 4) )
    {
      if ( v4 && v4 != P )
        ExFreePoolWithTag(v4, 0);
      v15 = 256;
      v4 = P;
      if ( *(_BYTE *)v7 == 18 && (*(_BYTE *)(v7 + 1) & 8) == 0 )
      {
        v11 = 4 * (unsigned int)*(unsigned __int8 *)(v7 + 9) + 8;
        v12 = *(unsigned __int16 *)(v7 + 2) - (_DWORD)v11 - 8;
        v2 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(v7 + 8 + v11, v12, P, &v15);
        if ( v2 == -1073741789 )
        {
          v4 = (_BYTE *)AuthzBasepMemAlloc();
          if ( !v4 )
          {
            v2 = -1073741801;
            goto LABEL_16;
          }
          v2 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
                 v7 + 8 + 4 * (*(unsigned __int8 *)(v7 + 9) + 2LL),
                 v12,
                 v4,
                 &v15);
        }
        if ( v2 < 0 )
          break;
        *((_QWORD *)&v18 + 1) = v4;
        LOWORD(v18) = 1;
        DWORD1(v18) = 1;
        LODWORD(Size) = 0;
        v13 = AuthzBasepQuerySecurityAttributesToken((unsigned int *)v6, (__int64)v4, 1u, 0LL, Size, &v16);
        v2 = v13;
        if ( v13 == -1073741789 || v13 == -1073741275 )
        {
          v2 = 0;
        }
        else if ( v13 < 0 )
        {
          break;
        }
        if ( (unsigned int)v16 <= 0x10 )
        {
          v2 = AuthzBasepSetSecurityAttributesToken(v6, (int *)&v16 + 1, (__int64)&v18);
          if ( v2 < 0 )
            break;
        }
        v3 = v17;
      }
      ++v9;
      v7 += *(unsigned __int16 *)(v7 + 2);
    }
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    if ( v2 >= 0 )
    {
      *v19 = v6;
      return (unsigned int)v2;
    }
LABEL_16:
    AuthzBasepFreeSecurityAttributesList((_DWORD *)v6);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v2;
}
