/*
 * XREFs of sub_1400A3A70 @ 0x1400A3A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D620 @ 0x14009D620 (sub_14009D620.c)
 *     sub_1400A2E00 @ 0x1400A2E00 (sub_1400A2E00.c)
 */

__int64 __fastcall sub_1400A3A70(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // r15
  int v7; // ebx
  signed __int64 v8; // rdx
  char v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = a1 - 344;
  v7 = 0;
  if ( a2 )
  {
    *a2 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 16LL), 0LL, 0LL);
    if ( a3 )
    {
      *a3 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 56LL), 0LL, 0LL);
      if ( *(_BYTE *)(a1 - 16) )
      {
        if ( (unsigned int)sub_14009D620(a3) )
          *(_BYTE *)(a1 - 16) = 0;
      }
    }
    *(_QWORD *)(a1 - 232) = *a2;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( (byte_1400E8401 & 4) != 0 )
  {
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), 0LL, 0LL);
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 16LL), 0LL, 0LL);
    v10 = 0LL;
    if ( a3 )
      v10 = *a3;
    LOBYTE(v11) = 0;
    if ( a2 )
      v11 = *a2;
    sub_1400A2E00(v10, v8, 0LL, 6, v11, v10, v9, v8, 0, 0, 0, 0);
  }
  if ( v7 < 0 )
    sub_140048108();
  return (unsigned int)v7;
}
