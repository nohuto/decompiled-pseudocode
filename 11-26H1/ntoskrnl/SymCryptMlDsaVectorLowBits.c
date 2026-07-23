/*
 * XREFs of SymCryptMlDsaVectorLowBits @ 0x1405737CC
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptMlDsaVectorLowBits(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r9d
  _BYTE *v6; // rbx
  __int64 v7; // rdi
  _DWORD *v8; // r8
  int v9; // r11d
  int v10; // r11d
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = 0;
  if ( *a2 )
  {
    v6 = &a2[-a3];
    do
    {
      v7 = 256LL;
      v8 = (_DWORD *)(a3 + ((unsigned __int64)v4 << 10) + 8);
      do
      {
        v9 = *(_DWORD *)&v6[(_QWORD)v8]
           - 2
           * *(_DWORD *)(a1 + 32)
           * (((*(_DWORD *)(a1 + 28) * ((unsigned int)(*(_DWORD *)&v6[(_QWORD)v8] + 127) >> 7) + 0x800000) >> 24) & ((((*(_DWORD *)(a1 + 28) * ((unsigned int)(*(_DWORD *)&v6[(_QWORD)v8] + 127) >> 7) + 0x800000) >> 24) - (unsigned __int64)*(unsigned __int8 *)(a1 + 27)) >> 32));
        v10 = v9 - (((4190208 - v9) >> 31) & 0x7FE001);
        if ( v8 )
          *v8 = v10 + ((v10 >> 31) & 0x7FE001);
        ++v8;
        --v7;
      }
      while ( v7 );
      result = (unsigned __int8)*a2;
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  return result;
}
