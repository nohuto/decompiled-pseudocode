/*
 * XREFs of sub_14000DAE0 @ 0x14000DAE0
 * Callers:
 *     sub_140025E00 @ 0x140025E00 (sub_140025E00.c)
 * Callees:
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 */

__int64 __fastcall sub_14000DAE0(__int64 a1)
{
  KIRQL v2; // al
  signed __int64 v3; // rbp
  KIRQL v4; // r14
  bool v5; // zf
  signed __int64 v6; // rax
  __int64 v7; // rax
  signed __int64 v8; // rdi
  __int64 v9; // rbp
  char v10; // r8
  __int64 v11; // rax
  signed __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v3 = *(_QWORD *)(a1 + 88);
  v4 = v2;
  if ( (v3 & 1) == 0 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 80));
    ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 80));
    do
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v3 | 1, v3);
      v5 = v3 == v6;
      v3 = v6;
    }
    while ( !v5 && (v6 & 1) == 0 );
  }
  v7 = sub_14000DC80(a1, 0LL);
  v8 = *(_QWORD *)(a1 + 88);
  v9 = v7;
  v10 = 0;
  while ( (v8 & 3) != 0
       && !*(_DWORD *)(a1 + 28)
       && !*(_DWORD *)(a1 + 16)
       && !*(_DWORD *)(a1 + 32)
       && !*(_BYTE *)(a1 + 37)
       && !*(_BYTE *)(a1 + 39)
       && !*(_BYTE *)(a1 + 36)
       && *(int *)(a1 + 24) <= 0
       && !*(_BYTE *)(a1 + 38) )
  {
    v11 = v8;
    if ( (v8 & 1) != 0 )
    {
      if ( !v10 )
      {
        ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
        v10 = 1;
      }
      v11 = v8 ^ 1;
    }
    v12 = v11 ^ 2;
    if ( (v8 & 2) == 0 )
      v12 = v11;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v12, v8);
    v5 = v8 == v13;
    v8 = v13;
    if ( v5 )
    {
      if ( *(_BYTE *)(a1 + 37) || *(_BYTE *)(a1 + 39) || *(_BYTE *)(a1 + 36) || *(int *)(a1 + 24) > 0 )
      {
        v15 = *(_QWORD *)(a1 + 88);
        if ( (v15 & 3) == 0 )
        {
          do
          {
            v16 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v15 | 2, v15);
          }
          while ( v16 != v15 && (v15 & 3) == 0 );
        }
      }
      break;
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
  return v9;
}
