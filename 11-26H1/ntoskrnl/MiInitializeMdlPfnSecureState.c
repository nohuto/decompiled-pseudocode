/*
 * XREFs of MiInitializeMdlPfnSecureState @ 0x14033BD48
 * Callers:
 *     MiInitializeMdlPfn @ 0x14033BC60 (MiInitializeMdlPfn.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14028C010 (MiUpdatePageFileHighInPte.c)
 *     MiAbortCombineScan @ 0x1403691D0 (MiAbortCombineScan.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 */

unsigned __int64 __fastcall MiInitializeMdlPfnSecureState(__int64 a1, int a2)
{
  unsigned int v4; // edx
  __int64 v5; // rcx
  unsigned __int64 result; // rax

  if ( (a2 & 0x200) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    MiAbortCombineScan(a1);
    MiSetPfnIdentity(a1, 3LL);
    v4 = 1;
    if ( (a2 & 0x40000) != 0 )
    {
      if ( (a2 & 0x20000) == 0 )
        _InterlockedIncrement64(&qword_140E2D7A8);
    }
    else
    {
      v4 = 17;
      _InterlockedIncrement64(&qword_140E2D7B0);
    }
    v5 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    v4 = 0;
    v5 = *(_QWORD *)(a1 + 16);
  }
  result = MiUpdatePageFileHighInPte(v5, v4);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
