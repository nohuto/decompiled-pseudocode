/*
 * XREFs of RtlpGetCompleteLanguageFallback @ 0x180142624
 * Callers:
 *     RtlpAutoCompleteLanguageFallback @ 0x180141E20 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1800C1770 (RtlStringCchCopyExW.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x180142788 (RtlpGetDefaultLanguageBaseOrParent.c)
 */

__int64 __fastcall RtlpGetCompleteLanguageFallback(__int64 a1, _BYTE *a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  _WORD *v5; // rax
  int v7; // edi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  _WORD *v11; // rcx
  bool v12; // zf
  _WORD *v13; // [rsp+40h] [rbp-10h] BYREF
  _BYTE *v14; // [rsp+48h] [rbp-8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+10h] BYREF

  v5 = a4;
  v13 = 0LL;
  v14 = 0LL;
  v7 = a1;
  v15 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v8 = a5;
  if ( a3 )
  {
    result = RtlStringCchCopyExW(a4, a5, a3, &v13, &v15);
    if ( (int)result < 0 )
      return result;
    if ( !v15 )
      return 3221225507LL;
    v8 = v15 - 1;
    v5 = v13 + 1;
  }
  v15 = v8;
  v13 = v5;
  result = RtlpGetDefaultLanguageBaseOrParent(
             v7,
             (_DWORD)a2,
             (unsigned int)&v14,
             (_DWORD)v5,
             v8,
             (__int64)&v13,
             (__int64)&v15);
  if ( (int)result >= 0 )
  {
    if ( v15 )
    {
      v10 = v15 - 1;
      v11 = v13 + 1;
      --v15;
      v12 = (*a2 & 4) == 0;
      ++v13;
      if ( v12 && v14 && (*v14 & 2) != 0 )
      {
        RtlpGetDefaultLanguageBaseOrParent(v7, (_DWORD)v14, 0, (_DWORD)v11, v10, (__int64)&v13, (__int64)&v15);
        if ( !v15 )
          return 3221225507LL;
        v11 = v13 + 1;
        v10 = v15 - 1;
      }
      if ( v10 )
      {
        *v11 = 0;
        return 0LL;
      }
    }
    return 3221225507LL;
  }
  return result;
}
