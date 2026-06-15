/*
 * XREFs of sub_140098BF0 @ 0x140098BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001D564 @ 0x14001D564 (sub_14001D564.c)
 */

__int64 __fastcall sub_140098BF0(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 440);
  if ( *(_QWORD *)(a1 + 440) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 456);
  if ( !v3 )
    return 0LL;
  _InterlockedExchange64((volatile __int64 *)(a1 + 448), v3);
  v4 = *(_QWORD *)(a1 + 448);
  if ( v4 )
  {
    v9 = v4;
    sub_140019444(v1);
    v5 = sub_14001D564(v1, &v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        229,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPBaseEndpoint.h",
        v5);
      return v6;
    }
    *(_QWORD *)(a1 + 456) = 0LL;
    return 0LL;
  }
  sub_14000C2A8(
    (int)retaddr,
    239,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPBaseEndpoint.h",
    -2147467259);
  return 2147500037LL;
}
