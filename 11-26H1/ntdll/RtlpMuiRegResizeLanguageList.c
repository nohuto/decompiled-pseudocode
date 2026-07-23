/*
 * XREFs of RtlpMuiRegResizeLanguageList @ 0x1801110B0
 * Callers:
 *     RtlpMuiRegGrowLanguageList @ 0x1800D89BC (RtlpMuiRegGrowLanguageList.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180001008 (_SafeReallocBlob.c)
 */

_QWORD *__fastcall RtlpMuiRegResizeLanguageList(unsigned __int16 *a1, int a2)
{
  signed int v2; // ebx
  _QWORD *result; // rax
  int v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  if ( !a1 )
    return 0LL;
  if ( v2 < a1[2] )
    return 0LL;
  result = SafeReallocBlob(a1, 0x40u, v2, 6u, v4, v5, (unsigned int *)&v6);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v6;
  result[3] = result + 8;
  *((_WORD *)result + 3) = v2;
  return result;
}
