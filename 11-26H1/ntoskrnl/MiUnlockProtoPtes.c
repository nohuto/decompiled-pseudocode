/*
 * XREFs of MiUnlockProtoPtes @ 0x1404820C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnlockProtoPtes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 *i; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  signed __int64 v8; // rcx
  __int64 v9; // rbx
  signed __int64 v10; // rax
  signed __int64 j; // rdx

  v3 = a3;
  for ( i = (unsigned __int64 *)(*(_QWORD *)a1 + 8 * a2); v3; --v3 )
  {
    v6 = *i;
    if ( (*i & 1) == 0 && qword_140E2D8C0 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= qword_140E2D8C8;
    }
    v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(int *)(a1 + 128) >= 0 )
    {
      v8 = *(_QWORD *)(v7 + 40);
      v9 = *(_QWORD *)(a1 + 24);
      v10 = v8;
      for ( j = v8 ^ v9; ; j = v10 ^ v9 )
      {
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 40), v9 ^ j & 0xFFFFFF0000000000uLL, v10);
        if ( v8 == v10 )
          break;
        v8 = v10;
      }
    }
    --*(_DWORD *)(a1 + 124);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++i;
  }
  return 0LL;
}
