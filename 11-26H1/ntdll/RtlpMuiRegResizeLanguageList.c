/*
 * XREFs of RtlpMuiRegResizeLanguageList @ 0x180111530
 * Callers:
 *     RtlpMuiRegGrowLanguageList @ 0x1800DBADC (RtlpMuiRegGrowLanguageList.c)
 * Callees:
 *     _SafeReallocBlob @ 0x18003826C (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegResizeLanguageList(__int64 a1, int a2)
{
  signed int v2; // ebx
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  if ( !a1 )
    return 0LL;
  if ( v2 < *(unsigned __int16 *)(a1 + 4) )
    return 0LL;
  result = SafeReallocBlob(a1, 0x40u, v2, 6u, v4, v5, &v6);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v6;
  *(_QWORD *)(result + 24) = result + 64;
  *(_WORD *)(result + 6) = v2;
  return result;
}
