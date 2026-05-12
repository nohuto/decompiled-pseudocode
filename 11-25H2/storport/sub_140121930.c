/*
 * XREFs of sub_140121930 @ 0x140121930
 * Callers:
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140121930(unsigned int a1, __int64 a2)
{
  __int64 v3; // rbx
  KIRQL v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // edx

  *(_OWORD *)a2 = 0LL;
  v3 = *((_QWORD *)qword_140168E40 + 3) + 80LL * a1;
  if ( *(_QWORD *)(v3 + 48) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 24));
    *(_QWORD *)a2 = 1LL << *(_DWORD *)(v3 + 36);
    *(_WORD *)(a2 + 8) = *(_WORD *)(v3 + 16);
    v5 = *(_QWORD *)(v3 + 48);
    LODWORD(v6) = *(_DWORD *)(v3 + 36) + 1;
    if ( (unsigned int)v6 > 0x3F )
      LODWORD(v6) = 0;
    if ( ((unsigned int)v6 & (unsigned int)v5) == 0 )
    {
      do
      {
        v7 = v6 + 1;
        v6 = 0LL;
        if ( v7 <= 0x3F )
          v6 = v7;
      }
      while ( (v6 & v5) == 0 );
    }
    *(_DWORD *)(v3 + 36) = v6;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 24), v4);
  }
}
