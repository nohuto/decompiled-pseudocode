/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndex @ 0x180005A20
 * Callers:
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1800E0750 (RtlpMuiRegValidateConfigNode.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E0938 (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndex(__int64 a1, int a2, __int64 a3, _WORD *a4)
{
  __int64 v4; // r10
  __int64 v7; // r9
  int i; // edx
  _WORD *v10; // r11
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  const wchar_t *v14; // rcx
  size_t v15; // rax
  unsigned __int16 v16[2]; // [rsp+20h] [rbp-18h] BYREF
  int v17; // [rsp+24h] [rbp-14h]
  __int64 v18; // [rsp+28h] [rbp-10h]
  int v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int16)a3;
  v19 = 0;
  LOBYTE(a3) = 1;
  if ( !a1 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 24);
  if ( a2 == 3 )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v7 + 6); ++i )
    {
      v10 = (_WORD *)(*(_QWORD *)(v7 + 16) + 28LL * i);
      if ( (*v10 & 0x1020) == 0x20 && v10[3] == (_WORD)v4 && a4 )
      {
        *a4 = i;
        return 0LL;
      }
    }
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
    {
      if ( (v4 & 0x8000u) == 0LL && (unsigned int)v4 < *(unsigned __int16 *)(v11 + 6) )
      {
        v12 = *(__int16 *)(*(_QWORD *)(v11 + 16) + 2 * v4);
        v13 = *(_QWORD *)(v11 + 24);
        v14 = (const wchar_t *)(v13 + 2 * v12);
        if ( v14 )
        {
          v17 = 0;
          v18 = v13 + 2 * v12;
          v15 = 2 * wcslen(v14);
          if ( v15 >= 0xFFFE )
            LOWORD(v15) = -4;
          v16[0] = v15;
          v16[1] = v15 + 2;
          if ( RtlCultureNameToLCID(v16, &v19) )
          {
            LOWORD(v4) = v19;
            LOBYTE(a3) = 0;
            return RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, (unsigned __int16)v4, a3, a4);
          }
        }
      }
    }
    return 3221225524LL;
  }
  if ( a2 == 1 )
    return RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, (unsigned __int16)v4, a3, a4);
  if ( a2 != 2 )
    return 3221225524LL;
  if ( (__int16)v4 <= 0 || (unsigned int)v4 >= *(unsigned __int16 *)(v7 + 6) )
    return 3221225485LL;
  if ( a4 )
    *a4 = v4;
  return 0LL;
}
