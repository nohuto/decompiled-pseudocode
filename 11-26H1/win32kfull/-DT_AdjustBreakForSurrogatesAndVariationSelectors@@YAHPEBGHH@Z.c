/*
 * XREFs of ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x140291F08
 * Callers:
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x14012142C (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     ?DT_GetLongChar@@YAKPEBGHH@Z @ 0x14024A7D8 (-DT_GetLongChar@@YAKPEBGHH@Z.c)
 *     Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline @ 0x140303440 (Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DT_AdjustBreakForSurrogatesAndVariationSelectors(const unsigned __int16 *a1, int a2, int a3)
{
  unsigned int v4; // ebx
  unsigned int LongChar; // esi
  int v9; // ebx
  unsigned int v10; // eax

  v4 = a2;
  if ( !a2 )
    return 0LL;
  LongChar = DT_GetLongChar(a1, a2 - 1, a3);
  if ( LongChar >= 0x10000 )
  {
    if ( (unsigned int)Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline() )
    {
      v9 = -1;
      if ( a2 <= 1 )
        v9 = 1;
      v4 = a2 + v9;
    }
    else
    {
      ++v4;
    }
LABEL_11:
    if ( LongChar - 917760 > 0xEF )
      goto LABEL_12;
    return v4;
  }
  if ( LongChar < 0xFE00 )
  {
LABEL_12:
    if ( (int)v4 < a3 )
    {
      v10 = DT_GetLongChar(a1, v4, a3);
      if ( v10 - 65024 <= 0xF || v10 - 917760 <= 0xEF )
        v4 += 2 - (v10 < 0x10000);
    }
    return v4;
  }
  if ( LongChar > 0xFE0F )
    goto LABEL_11;
  return v4;
}
