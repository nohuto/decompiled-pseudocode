/*
 * XREFs of MiTransferPageFileOwnership @ 0x1402ED5EC
 * Callers:
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiUpdatePageFileBlockOwner @ 0x1402EF100 (MiUpdatePageFileBlockOwner.c)
 */

char __fastcall MiTransferPageFileOwnership(__int64 a1, __int64 a2)
{
  char result; // al
  int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 )
  {
    result = (unsigned __int8)*(_DWORD *)(a1 + 16) >> 3;
    if ( (*(_DWORD *)(a1 + 16) & 8) != 0 )
    {
      v5 = 0;
      v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 16);
      if ( qword_140E2D8C0 )
      {
        if ( (v8 & 0x10) == 0 )
          v8 &= qword_140E2D8C8;
      }
      LOBYTE(v5) = (*(_BYTE *)(a1 + 34) & 8) != 0;
      return MiUpdatePageFileBlockOwner(
               *(_QWORD *)(v6 + 8LL * ((unsigned __int16)v7 >> 12) + 22304),
               HIDWORD(v8),
               *(_QWORD *)(a1 + 8),
               a2,
               v5);
    }
  }
  return result;
}
