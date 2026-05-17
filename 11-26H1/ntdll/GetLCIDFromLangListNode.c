/*
 * XREFs of GetLCIDFromLangListNode @ 0x180009EA0
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180009CD0 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall GetLCIDFromLangListNode(__int64 a1, unsigned __int16 *a2, _WORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  int v6; // ecx
  __int16 v7; // ax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  const wchar_t *v14; // rcx
  size_t v15; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF
  int v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v17 = 0;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v5 = g_RegInfo;
  *a3 = 0;
  if ( a1 )
    v5 = a1;
  v6 = *a2;
  if ( v6 == 2 )
  {
    v7 = *(_WORD *)(28LL * (__int16)a2[2] + *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) + 4);
    *a3 = v7;
    if ( v7 )
      return v3;
    v10 = 28LL * (__int16)a2[2];
    v11 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL);
    if ( *(__int16 *)(v10 + v11 + 6) <= 0 )
      return (unsigned int)-1073741595;
    v12 = *(__int16 *)(v10 + v11 + 6);
LABEL_14:
    v13 = *(_QWORD *)(v5 + 32);
    v16[0] = 0LL;
    v14 = (const wchar_t *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2 * v12));
    v16[1] = v14;
    if ( v14 )
    {
      v15 = 2 * wcslen(v14);
      if ( v15 >= 0xFFFE )
        LOWORD(v15) = -4;
      LOWORD(v16[0]) = v15;
      WORD1(v16[0]) = v15 + 2;
    }
    if ( RtlCultureNameToLCID((unsigned __int16 *)v16, &v17) )
    {
      *a3 = v17;
      return 0LL;
    }
    return (unsigned int)-1073741595;
  }
  v9 = v6 - 1;
  if ( v9 )
  {
    if ( v9 != 2 )
      return (unsigned int)-1073741595;
    v12 = (__int16)a2[2];
    goto LABEL_14;
  }
  *a3 = a2[2];
  return 0LL;
}
