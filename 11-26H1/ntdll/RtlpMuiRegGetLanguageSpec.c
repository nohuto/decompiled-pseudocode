/*
 * XREFs of RtlpMuiRegGetLanguageSpec @ 0x180001F90
 * Callers:
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014DCB4 (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegGetLanguageSpec(__int64 a1, const wchar_t *a2, char *a3, __int64 a4, _WORD *a5)
{
  __int16 v5; // bx
  char v9; // di
  size_t v10; // rax
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  const wchar_t *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+68h] [rbp+10h] BYREF
  __int16 v16; // [rsp+78h] [rbp+20h] BYREF

  v14 = a2;
  v15 = 0;
  v5 = 0;
  v16 = 0;
  v13 = 0LL;
  v9 = 0;
  if ( a2 )
  {
    v10 = 2 * wcslen(a2);
    if ( v10 >= 0xFFFE )
      LOWORD(v10) = -4;
    LOWORD(v13) = v10;
    WORD1(v13) = v10 + 2;
  }
  if ( (unsigned __int8)RtlCultureNameToLCID(&v13, &v15) )
  {
    v5 = v15;
    if ( ((v15 - 4096) & 0xFFFFFBFF) != 0 )
    {
      v9 = 1;
LABEL_8:
      result = 0LL;
      goto LABEL_9;
    }
    LOBYTE(v11) = 1;
    result = RtlpMuiRegGetOrAddString(a1, a2, v11, &v16, v13, v14);
    if ( (int)result >= 0 )
    {
      v5 = v16;
      v9 = 3;
      goto LABEL_8;
    }
    v5 = 0;
  }
  else
  {
    result = 3221225485LL;
  }
LABEL_9:
  if ( a3 )
    *a3 = v9;
  if ( a5 )
    *a5 = v5;
  return result;
}
