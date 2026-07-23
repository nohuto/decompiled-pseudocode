/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140A60770 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B1220 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x1403B24D0 (AuthzBasepMemAlloc.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404EA1F0 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v3; // r13
  _BYTE *v4; // rdi
  _DWORD *Pool2; // rax
  _DWORD *v6; // rsi
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
  _QWORD *v19; // [rsp+58h] [rbp-A8h]
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
  v6 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0;
    v7 = v3 + 8;
    v8 = Pool2 + 2;
    v9 = 0;
    v8[1] = v8;
    *v8 = v8;
    v6[6] = 0;
    *((_QWORD *)v6 + 5) = v6 + 8;
    *((_QWORD *)v6 + 4) = v6 + 8;
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
        v13 = AuthzBasepQuerySecurityAttributesToken(v6, (__int64)v4, 1u, 0LL, Size, &v16);
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
    AuthzBasepFreeSecurityAttributesList(v6);
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v2;
}
