/*
 * XREFs of sub_140553DDC @ 0x140553DDC
 * Callers:
 *     sub_140553E5C @ 0x140553E5C (sub_140553E5C.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
 *     sub_140C88510 @ 0x140C88510 (sub_140C88510.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_140553DDC(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int8 result; // al
  __int64 v7; // rcx
  unsigned __int8 i; // dl

  v5 = a3;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 1040))(a2, a3);
  if ( a3 )
  {
    v7 = a2 + 20;
    do
    {
      *(_DWORD *)(v7 - 4) ^= *(_DWORD *)(v7 + 12);
      *(_DWORD *)v7 ^= *(_DWORD *)(v7 + 16);
      *(_DWORD *)(v7 + 4) ^= *(_DWORD *)(v7 + 20);
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(v7 + 24);
      result = *(_BYTE *)(v7 + 11);
      for ( i = result; ; i ^= result )
      {
        result >>= 7;
        if ( !result )
          break;
      }
      *(_BYTE *)(v7 + 11) = i & 0x7F;
      v7 += 48LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
