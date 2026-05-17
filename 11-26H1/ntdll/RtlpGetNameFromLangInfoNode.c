/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x1800CCE50
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x180125D34 (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlStringCbCopyW @ 0x1800CCF60 (RtlStringCbCopyW.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  size_t v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int16 v8; // r10

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(__int16 *)(a2 + 6);
    if ( (__int16)v5 <= 0 )
    {
      if ( *(_WORD *)(a2 + 4) != 4096 && *(_WORD *)(a2 + 4) != 5120 )
        return (unsigned __int8)RtlLCIDToCultureName(*(unsigned __int16 *)(a2 + 4), a3) == 0 ? 0xC00000E5 : 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 32);
      v7 = *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v5);
      LOWORD(v5) = 0;
      if ( *(_QWORD *)(v6 + 24) + 2 * v7 )
      {
        v5 = 2 * wcslen((const wchar_t *)(*(_QWORD *)(v6 + 24) + 2 * v7));
        if ( v5 >= 0xFFFE )
          LOWORD(v5) = -4;
      }
      if ( (unsigned __int16)v5 <= *(_WORD *)(a3 + 2)
        && (int)RtlStringCbCopyW(*(_QWORD *)(a3 + 8), *(unsigned __int16 *)(a3 + 2)) >= 0 )
      {
        *(_WORD *)a3 = v8;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
