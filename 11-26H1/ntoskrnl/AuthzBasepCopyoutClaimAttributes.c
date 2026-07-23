/*
 * XREFs of AuthzBasepCopyoutClaimAttributes @ 0x140B30D10
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A92D0C (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x14047FFEC (RtlStringCbCopyNW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x140B30E80 (AuthzBasepCopyoutClaimAttributeValues.c)
 */

__int64 __fastcall AuthzBasepCopyoutClaimAttributes(unsigned int *a1, _OWORD *a2, size_t a3)
{
  unsigned __int64 v6; // rbp
  _OWORD *v7; // rdi
  int v8; // r8d
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  unsigned int *v14; // r12
  unsigned int *v15; // r14
  wchar_t *v16; // rcx
  size_t v17; // r9
  char *v18; // r15
  size_t v19; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 || !a3 || (v6 = (unsigned __int64)a2 + a3, (_OWORD *)((char *)a2 + a3) < a2) )
  {
    result = 3221225485LL;
    goto LABEL_16;
  }
  memset_0(a2, 0, a3);
  v7 = a2 + 1;
  if ( (unsigned __int64)(a2 + 1) > v6 )
  {
    result = 3221225507LL;
    goto LABEL_16;
  }
  v8 = *a1;
  v9 = *a1;
  v19 = 0LL;
  v11 = v9;
  v10 = 2 * v9;
  if ( !is_mul_ok(0x20uLL, v11) )
  {
    result = 3221225621LL;
    goto LABEL_16;
  }
  v12 = (unsigned __int64)&v7[v10];
  result = 0LL;
  if ( v12 > v6 )
  {
LABEL_15:
    result = 2147483653LL;
LABEL_16:
    if ( a3 >= 0x10 )
      *a2 = 0LL;
    return result;
  }
  v14 = a1 + 2;
  *(_DWORD *)a2 = 1;
  *((_DWORD *)a2 + 1) = v8;
  *((_QWORD *)a2 + 1) = v7;
  v15 = (unsigned int *)*((_QWORD *)a1 + 1);
  while ( v15 != v14 )
  {
    *((_WORD *)v7 + 4) = *((_WORD *)v15 + 24);
    v16 = (wchar_t *)((v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    *((_DWORD *)v7 + 4) = v15[15];
    *((_WORD *)v7 + 5) = 0;
    *((_DWORD *)v7 + 3) = v15[13];
    v17 = *((unsigned __int16 *)v15 + 16);
    v18 = (char *)v16 + v17 + 2;
    v19 = v17 + 2;
    if ( (unsigned __int64)v18 > v6 )
      goto LABEL_15;
    *(_QWORD *)v7 = v16;
    RtlStringCbCopyNW(v16, v17 + 2, *((STRSAFE_PCNZWCH *)v15 + 5), v17);
    result = AuthzBasepCopyoutClaimAttributeValues(
               (_DWORD)v15,
               (_DWORD)v7,
               (_DWORD)v18,
               (int)v6 - (int)v18,
               (__int64)&v19);
    if ( (int)result < 0 )
      goto LABEL_16;
    v15 = *(unsigned int **)v15;
    v12 = (unsigned __int64)&v18[v19];
    v7 += 2;
  }
  return result;
}
