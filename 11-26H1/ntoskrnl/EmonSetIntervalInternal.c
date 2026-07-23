/*
 * XREFs of EmonSetIntervalInternal @ 0x140599218
 * Callers:
 *     EmonSetInterval @ 0x140599120 (EmonSetInterval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonSetIntervalInternal(int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r8d
  __int64 v6; // r10
  __int64 result; // rax
  __int64 v8; // r11
  int v9; // r9d
  __int64 i; // rdx

  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(KiProcessorBlock[a4] + 88);
  result = *(unsigned int *)(v6 + 4);
  v8 = *(_QWORD *)(v6 + 16);
  if ( (_DWORD)result )
  {
    do
    {
      v9 = 0;
      for ( i = 0LL; (unsigned int)i <= *(_DWORD *)(v6 + 8); i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 16) + 48 * i + 28) != 3 && ++v9 > v5 )
          goto LABEL_8;
      }
      i = 0xFFFFFFFFLL;
LABEL_8:
      if ( *(_DWORD *)(v8 + 48 * i + 36) == a1 && !*(_DWORD *)(v8 + 48 * i + 24) )
        *(_QWORD *)(v8 + 48 * i) = v4;
      result = *(unsigned int *)(v6 + 4);
      ++v5;
    }
    while ( v5 < (unsigned int)result );
  }
  return result;
}
