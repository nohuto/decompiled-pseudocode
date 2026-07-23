/*
 * XREFs of RtlpNlsGetNameIndex @ 0x180050060
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18004CECC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x18004D470 (RtlIsValidLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18004EDD0 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlLocaleNameToLcid @ 0x18004FCE0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x1801214A4 (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsGetNameIndex(__int64 a1)
{
  int v1; // ebx
  int v2; // r10d
  __int64 v3; // r11
  unsigned __int16 *v4; // r8
  __int64 v5; // r9
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  int v8; // edx

  v1 = 0;
  v2 = *(unsigned __int16 *)(pTblPtrs + 2) - 1;
LABEL_2:
  if ( v1 > v2 )
    return 0xFFFFFFFFLL;
  v3 = (v2 + v1) / 2;
  v4 = (unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32)
                          + 2LL
                          + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8 * v3));
  v5 = a1 - (_QWORD)v4;
  while ( 1 )
  {
    v6 = *(unsigned __int16 *)((char *)v4 + v5);
    if ( !v6 )
      break;
    v7 = *v4;
    if ( !*v4 )
      goto LABEL_19;
    if ( (unsigned __int16)(v6 - 65) <= 0x19u )
      v6 |= 0x20u;
    if ( (unsigned __int16)(v7 - 65) <= 0x19u )
      v7 |= 0x20u;
    if ( v6 == 95 )
      v6 = 45;
    if ( v7 == 95 )
      v7 = 45;
    v8 = v6 - v7;
    if ( v8 )
    {
      if ( v8 >= 0 )
      {
LABEL_19:
        v1 = v3 + 1;
        goto LABEL_2;
      }
LABEL_17:
      v2 = v3 - 1;
      goto LABEL_2;
    }
    ++v4;
  }
  if ( *v4 )
    goto LABEL_17;
  return (unsigned int)v3;
}
