/*
 * XREFs of MiCompareUserSidHotPatchNodes @ 0x140875ABC
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x14087600C (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140877654 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

__int64 __fastcall MiCompareUserSidHotPatchNodes(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  void *v4; // rbp
  void *v5; // rsi
  ULONG v6; // ebx
  ULONG v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 32);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  if ( *a1 > v2 )
    return 1LL;
  v4 = (void *)a1[1];
  v5 = (void *)(a2 + 40);
  v6 = RtlLengthSid(v4);
  v7 = RtlLengthSid(v5);
  if ( v6 < v7 )
    return 0xFFFFFFFFLL;
  if ( v6 > v7 )
    return 1LL;
  v8 = RtlCompareMemory(v4, v5, v6);
  if ( v8 == v6 )
    return 0LL;
  v9 = v8;
  result = 1LL;
  if ( *(_BYTE *)(v9 + a1[1]) < *((_BYTE *)v5 + v9) )
    return 0xFFFFFFFFLL;
  return result;
}
