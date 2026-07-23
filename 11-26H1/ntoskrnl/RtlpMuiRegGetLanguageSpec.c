/*
 * XREFs of RtlpMuiRegGetLanguageSpec @ 0x1408AEF70
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x1408AF744 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1408AFCF4 (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x14077CEE0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddString @ 0x1408AF03C (RtlpMuiRegGetOrAddString.c)
 */

__int64 __fastcall RtlpMuiRegGetLanguageSpec(__int64 a1, const WCHAR *a2, char *a3, __int64 a4, _WORD *a5)
{
  __int16 v6; // bx
  char v9; // di
  __int64 v10; // r8
  __int64 result; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+70h] [rbp+18h] BYREF
  __int16 v14; // [rsp+78h] [rbp+20h] BYREF

  Lcid = 0;
  v6 = 0;
  v14 = 0;
  v9 = 0;
  String = 0LL;
  RtlInitUnicodeString(&String, a2);
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    v6 = Lcid;
    if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
    {
      v9 = 1;
    }
    else
    {
      LOBYTE(v10) = 1;
      result = RtlpMuiRegGetOrAddString(a1, a2, v10, &v14);
      if ( (int)result < 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v6 = v14;
      v9 = 3;
    }
    result = 0LL;
  }
  else
  {
    result = 3221225485LL;
  }
LABEL_9:
  if ( a3 )
    *a3 = v9;
  if ( a5 )
    *a5 = v6;
  return result;
}
