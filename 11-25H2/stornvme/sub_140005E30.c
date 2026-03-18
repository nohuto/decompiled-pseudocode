/*
 * XREFs of sub_140005E30 @ 0x140005E30
 * Callers:
 *     sub_1400095E0 @ 0x1400095E0 (sub_1400095E0.c)
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_140005E30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // rdi
  __int64 i; // r8
  __int128 v6; // [rsp+D0h] [rbp-48h]

  result = sub_140005000(a2);
  v6 = *(_OWORD *)(result + 4096);
  if ( DWORD1(v6) != -1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 224); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(v3 + 8 * i + 1672);
      if ( v4 && *(_DWORD *)(v4 + 16) == DWORD1(v6) )
        goto LABEL_3;
    }
  }
  v4 = 0LL;
LABEL_3:
  if ( (*(_BYTE *)(v3 + 21) & 2) != 0 )
    return StorPortExtendedFunction(87LL, v3, v4, 1LL);
  return result;
}
