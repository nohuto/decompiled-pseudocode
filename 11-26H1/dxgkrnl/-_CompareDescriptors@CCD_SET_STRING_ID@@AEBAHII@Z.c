/*
 * XREFs of ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x14033D004
 * Callers:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14033DB6C (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_SortNormOrder@CCD_SET_STRING_ID@@AEAAXII@Z @ 0x14033DE50 (-_SortNormOrder@CCD_SET_STRING_ID@@AEAAXII@Z.c)
 * Callees:
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x14033D070 (-_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z.c)
 */

int __fastcall CCD_SET_STRING_ID::_CompareDescriptors(CCD_SET_STRING_ID *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  CCD_SET_STRING_ID *v5; // r11
  unsigned __int16 DescriptorLength; // ax
  unsigned int v7; // r10d
  __int64 v8; // r11

  v3 = a3;
  v4 = a2;
  CCD_SET_STRING_ID::_GetDescriptorLength(this, a2);
  DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(v5, v3);
  if ( (unsigned __int16)v7 > DescriptorLength )
    return 1;
  if ( (unsigned __int16)v7 < DescriptorLength )
    return -1;
  return memcmp(
           (const void *)(*(_QWORD *)(v8 + 16) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 8 * v4)),
           (const void *)(*(_QWORD *)(v8 + 16) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 8 * v3)),
           v7);
}
