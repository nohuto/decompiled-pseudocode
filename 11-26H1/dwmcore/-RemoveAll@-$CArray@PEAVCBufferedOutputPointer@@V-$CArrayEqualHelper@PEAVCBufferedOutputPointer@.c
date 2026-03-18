/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1801ACE84
 * Callers:
 *     ??1CInteractionContextWrapper@@EEAA@XZ @ 0x1801ACD8C (--1CInteractionContextWrapper@@EEAA@XZ.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1801ACEC0 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
