/*
 * XREFs of sub_140516B60 @ 0x140516B60
 * Callers:
 *     sub_140516BE4 @ 0x140516BE4 (sub_140516BE4.c)
 *     sub_140BCE96C @ 0x140BCE96C (sub_140BCE96C.c)
 *     sub_140BCFC70 @ 0x140BCFC70 (sub_140BCFC70.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140BC9A60 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_140516B60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int8 result; // al
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  unsigned __int8 i; // cl

  v5 = a3;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 1032))(a2, a3);
  if ( a3 )
  {
    v7 = a2 + 16;
    do
    {
      v8 = (_DWORD *)v7;
      v9 = 4LL;
      do
      {
        *v8 ^= v8[4];
        ++v8;
        --v9;
      }
      while ( v9 );
      result = *(_BYTE *)(v7 + 15);
      for ( i = result; ; i ^= result )
      {
        result >>= 7;
        if ( !result )
          break;
      }
      *(_BYTE *)(v7 + 15) = i & 0x7F;
      v7 += 48LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
