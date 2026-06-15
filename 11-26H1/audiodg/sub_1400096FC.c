/*
 * XREFs of sub_1400096FC @ 0x1400096FC
 * Callers:
 *     sub_140009440 @ 0x140009440 (sub_140009440.c)
 *     sub_1400572A0 @ 0x1400572A0 (sub_1400572A0.c)
 *     sub_140057350 @ 0x140057350 (sub_140057350.c)
 *     sub_1400573F0 @ 0x1400573F0 (sub_1400573F0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_140048384 @ 0x140048384 (sub_140048384.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1400096FC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // edi
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v11; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+18h]

  v11 = 0LL;
  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 72);
  while ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v6 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    sub_140009AA8(v6);
    if ( *(_DWORD *)(v5 + 40) == 2 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL);
      v12 = v7;
      if ( v7 )
        sub_1400B6010(v7);
      if ( (int)sub_1400B6010(v7) >= 0 )
      {
        v12 = 0LL;
        v11 = v7;
        if ( v7 )
        {
          v8 = sub_1400B6010(v7);
          sub_1400B6010(v7);
          return v8;
        }
        break;
      }
      if ( v7 )
        sub_1400B6010(v7);
    }
  }
  if ( *(_DWORD *)(a1 + 112) == 1 && !*(_DWORD *)(a1 + 12) && !*(_DWORD *)(a1 + 128) )
    sub_140048384(
      retaddr,
      4859LL,
      "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      2147943568LL,
      "Could not find ASAR in device pipe for EndpointId: {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      *(_DWORD *)(a1 + 160),
      *(unsigned __int16 *)(a1 + 164),
      *(unsigned __int16 *)(a1 + 166),
      *(unsigned __int8 *)(a1 + 168),
      *(unsigned __int8 *)(a1 + 169),
      *(unsigned __int8 *)(a1 + 170),
      *(unsigned __int8 *)(a1 + 171),
      *(unsigned __int8 *)(a1 + 172),
      *(unsigned __int8 *)(a1 + 173),
      *(unsigned __int8 *)(a1 + 174),
      *(unsigned __int8 *)(a1 + 175));
  sub_140003238(&v11);
  return 2147943568LL;
}
