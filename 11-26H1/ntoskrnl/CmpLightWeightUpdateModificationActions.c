/*
 * XREFs of CmpLightWeightUpdateModificationActions @ 0x140A40C40
 * Callers:
 *     CmpLightWeightCreateModificationData @ 0x140A40714 (CmpLightWeightCreateModificationData.c)
 * Callees:
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLightWeightUpdateModificationActions(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = 32LL;
  v3 = a2 + 208;
  while ( 1 )
  {
    result = CmListGetNextElement(v3, &v7, v2);
    if ( !result )
      break;
    if ( (*(_DWORD *)(result + 68) == 1 || *(_DWORD *)(result + 68) == 3) && *(_QWORD *)(result + 56) == v5 )
      *(_QWORD *)(result + 104) = v6;
  }
  return result;
}
