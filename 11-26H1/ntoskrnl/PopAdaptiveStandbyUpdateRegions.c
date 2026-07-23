/*
 * XREFs of PopAdaptiveStandbyUpdateRegions @ 0x1407E5F5C
 * Callers:
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x1407E4C70 (PopAdaptiveStandbyPowerSettingCallback.c)
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x14060E86C (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 */

__int64 __fastcall PopAdaptiveStandbyUpdateRegions(__int64 a1)
{
  __int64 result; // rax

  result = Feature_AdaptiveHibernateEnhancements__private_GetVariant(a1);
  if ( (_DWORD)result == 6 )
  {
    *(_QWORD *)((char *)&PopAdaptiveStandbyRegions + 4) = *(_QWORD *)(a1 + 4);
    HIDWORD(PopAdaptiveStandbyRegions) = *(_DWORD *)(a1 + 12);
    result = *(unsigned int *)(a1 + 16);
    LODWORD(xmmword_140E0C440) = *(_DWORD *)(a1 + 16);
  }
  else if ( (_DWORD)result == 9 )
  {
    *((_QWORD *)&xmmword_140E0C440 + 1) = *(_QWORD *)(a1 + 4);
    LODWORD(xmmword_140E0C450) = *(_DWORD *)(a1 + 12);
    DWORD1(xmmword_140E0C450) = *(_DWORD *)(a1 + 16) >> 1;
    LODWORD(qword_140E0C460) = *(_DWORD *)(a1 + 8);
    HIDWORD(xmmword_140E0C450) = *(_DWORD *)(a1 + 4);
    HIDWORD(qword_140E0C460) = *(_DWORD *)(a1 + 12);
    result = *(unsigned int *)(a1 + 16);
    dword_140E0C468 = *(_DWORD *)(a1 + 16);
  }
  return result;
}
