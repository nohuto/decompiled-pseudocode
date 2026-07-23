/*
 * XREFs of GetLCIDFromLangListNode @ 0x1800555D0
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180055400 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

__int64 __fastcall GetLCIDFromLangListNode(_QWORD *a1, unsigned __int16 *a2, _WORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // r8
  int v6; // ecx
  __int16 v7; // ax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  wchar_t *v14; // rcx
  size_t v15; // rax
  _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  Lcid = 0;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v5 = g_RegInfo;
  *a3 = 0;
  if ( a1 )
    v5 = a1;
  v6 = *a2;
  if ( v6 == 2 )
  {
    v7 = *(_WORD *)(28LL * (__int16)a2[2] + *(_QWORD *)(v5[3] + 16LL) + 4);
    *a3 = v7;
    if ( v7 )
      return v3;
    v10 = 28LL * (__int16)a2[2];
    v11 = *(_QWORD *)(v5[3] + 16LL);
    if ( *(__int16 *)(v10 + v11 + 6) <= 0 )
      return (unsigned int)-1073741595;
    v12 = *(__int16 *)(v10 + v11 + 6);
LABEL_14:
    v13 = v5[4];
    *(_QWORD *)&String.Length = 0LL;
    v14 = (wchar_t *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2 * v12));
    String.Buffer = v14;
    if ( v14 )
    {
      v15 = 2 * wcslen(v14);
      if ( v15 >= 0xFFFE )
        LOWORD(v15) = -4;
      String.Length = v15;
      String.MaximumLength = v15 + 2;
    }
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      *a3 = Lcid;
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
