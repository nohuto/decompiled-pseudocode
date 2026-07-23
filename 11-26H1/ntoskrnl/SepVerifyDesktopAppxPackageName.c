/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x1403AF970
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x14051E754 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B2488 (AuthzBasepAllocateSecurityAttributesList.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeQuerySecurityAttributesToken @ 0x140A82D30 (SeQuerySecurityAttributesToken.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // r15d
  int SecurityAttributesToken; // ebx
  size_t v7; // rax
  _BYTE *Pool2; // rsi
  __int64 SecurityAttributesList; // rax
  _DWORD *v11; // r14
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned int i; // ecx
  unsigned int v17; // r15d
  int v18; // ebx
  int v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+64h] [rbp-9Ch] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v22; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v23; // [rsp+80h] [rbp-80h]
  _BYTE P[512]; // [rsp+90h] [rbp-70h] BYREF

  v23 = a3;
  v20 = 0;
  v19 = 0;
  *a3 = 0;
  *(_DWORD *)(&v22.MaximumLength + 1) = 0;
  v21 = 2;
  v5 = 0;
  SecurityAttributesToken = 0;
  v22.Buffer = (wchar_t *)L"WIN://SYSAPPID";
  v7 = 2 * wcslen(L"WIN://SYSAPPID");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v22.Length = v7;
  v22.MaximumLength = v7 + 2;
  if ( (unsigned __int8)SeSecurityAttributePresent((__int64)a1, &v22) )
  {
    Pool2 = P;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                (_DWORD)a1,
                                (unsigned int)&v22,
                                1,
                                (unsigned int)P,
                                512,
                                (__int64)&v19);
    if ( SecurityAttributesToken == -1073741789 )
    {
      v18 = v19;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                  (_DWORD)a1,
                                  (unsigned int)&v22,
                                  1,
                                  (_DWORD)Pool2,
                                  v18,
                                  (__int64)&v19);
    }
    if ( SecurityAttributesToken < 0 )
    {
      if ( !Pool2 )
        return (unsigned int)SecurityAttributesToken;
      goto LABEL_30;
    }
    if ( !Pool2 )
      return (unsigned int)-1073739509;
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v11 = (_DWORD *)SecurityAttributesList;
    if ( !SecurityAttributesList )
    {
      SecurityAttributesToken = -1073741670;
LABEL_30:
      if ( Pool2 != P )
        ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)SecurityAttributesToken;
    }
    SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v21, Pool2);
    if ( SecurityAttributesToken < 0 )
    {
LABEL_10:
      AuthzBasepFreeSecurityAttributesList(v11);
      ExFreePoolWithTag(v11, 0);
      goto LABEL_30;
    }
LABEL_11:
    v12 = *(_WORD *)(a2 + 2);
    if ( (v12 & 4) != 0 )
    {
      if ( v12 >= 0 )
      {
        v14 = *(_QWORD *)(a2 + 32);
LABEL_15:
        if ( v14 )
        {
          v15 = v14 + 8;
          for ( i = 0; i < *(unsigned __int16 *)(v14 + 4); ++i )
          {
            if ( i >= v5 && *(_BYTE *)v15 == 9 )
            {
              v17 = i;
              if ( !v15 )
                goto LABEL_24;
              SecurityAttributesToken = AuthzBasepEvaluateAceCondition(
                                          a1,
                                          v11,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0LL,
                                          (_DWORD *)(v15 + 4 * (unsigned int)*(unsigned __int8 *)(v15 + 9) + 8 + 8LL),
                                          *(unsigned __int16 *)(v15 + 2)
                                        - (4 * (unsigned int)*(unsigned __int8 *)(v15 + 9)
                                         + 8)
                                        - 8,
                                          0,
                                          0,
                                          &v20);
              if ( SecurityAttributesToken < 0 )
                goto LABEL_18;
              if ( v20 != 1 )
              {
LABEL_24:
                v5 = v17 + 1;
                if ( v15 )
                  goto LABEL_11;
                goto LABEL_18;
              }
              goto LABEL_28;
            }
            v15 += *(unsigned __int16 *)(v15 + 2);
          }
        }
        goto LABEL_18;
      }
      v13 = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)v13 )
      {
        v14 = v13 + a2;
        goto LABEL_15;
      }
    }
LABEL_18:
    if ( v20 == 1 )
LABEL_28:
      *v23 = 1;
    goto LABEL_10;
  }
  return (unsigned int)SecurityAttributesToken;
}
