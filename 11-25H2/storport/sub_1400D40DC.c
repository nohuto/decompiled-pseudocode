/*
 * XREFs of sub_1400D40DC @ 0x1400D40DC
 * Callers:
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 *     sub_1400D7410 @ 0x1400D7410 (sub_1400D7410.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400D40DC(__int64 a1, KIRQL a2)
{
  __int64 v2; // r8
  KIRQL v3; // bp
  __int64 v4; // rdi
  unsigned int v5; // ebx
  PKINTERRUPT *v6; // rsi
  struct _KINTERRUPT *v7; // rcx

  v2 = *(_QWORD *)(a1 + 584);
  v3 = a2;
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x800LL) != 0 )
    {
      v4 = *(_QWORD *)(v2 + 120);
      if ( *(_DWORD *)(v2 + 104) == 2 )
      {
        v5 = *(_DWORD *)(v4 + 4) - 1;
        if ( *(_DWORD *)(v4 + 4) != 1 )
        {
          v6 = (PKINTERRUPT *)(v4 + 48LL * v5 + 24);
          do
          {
            KeReleaseInterruptSpinLock(*v6, *(_BYTE *)v4);
            v6 -= 6;
            --v5;
          }
          while ( v5 );
        }
      }
      v7 = *(struct _KINTERRUPT **)(v4 + 24);
      a2 = v3;
    }
    else
    {
      v7 = *(struct _KINTERRUPT **)v2;
      if ( !*(_QWORD *)v2 )
        return;
    }
    KeReleaseInterruptSpinLock(v7, a2);
  }
}
