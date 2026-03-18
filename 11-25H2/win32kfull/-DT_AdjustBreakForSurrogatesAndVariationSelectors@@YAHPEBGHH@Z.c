/*
 * XREFs of ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x1400C35B0
 * Callers:
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1400C29A4 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     ?DT_GetLongChar@@YAKPEBGHH@Z @ 0x14020EBDC (-DT_GetLongChar@@YAKPEBGHH@Z.c)
 *     Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline @ 0x1402F3A7C (Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DT_AdjustBreakForSurrogatesAndVariationSelectors(const unsigned __int16 *a1, int a2, int a3)
{
  unsigned int v7; // ebx
  unsigned int LongChar; // esi
  unsigned int v9; // eax

  if ( !a2 )
    return 0LL;
  v7 = a2 - 1;
  LongChar = DT_GetLongChar(a1, a2 - 1, a3);
  if ( LongChar >= 0x10000 )
  {
    if ( (unsigned int)Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a2 <= 1 )
        v7 = a2 + 1;
    }
    else
    {
      v7 = a2 + 1;
    }
LABEL_11:
    if ( LongChar - 917760 > 0xEF )
      goto LABEL_12;
    return v7;
  }
  v7 = a2;
  if ( LongChar < 0xFE00 )
  {
LABEL_12:
    if ( (int)v7 < a3 )
    {
      v9 = DT_GetLongChar(a1, v7, a3);
      if ( v9 - 65024 <= 0xF || v9 - 917760 <= 0xEF )
        v7 += 2 - (v9 < 0x10000);
    }
    return v7;
  }
  if ( LongChar > 0xFE0F )
    goto LABEL_11;
  return v7;
}
