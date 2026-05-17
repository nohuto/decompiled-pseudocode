/*
 * XREFs of RtlpGetInstalledLanguageType @ 0x180142A60
 * Callers:
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180143D50 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 */

__int64 __fastcall RtlpGetInstalledLanguageType(__int64 a1, const wchar_t *a2, int *a3, __int16 **a4)
{
  __int64 result; // rax
  __int16 *v8; // r8
  __int16 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = -1;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  result = RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 0, &v9);
  if ( (int)result >= 0 )
  {
    v8 = (__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v9);
    if ( *v8 >= 0 )
    {
      *a3 = *v8 & 7;
      if ( a4 )
        *a4 = v8;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
