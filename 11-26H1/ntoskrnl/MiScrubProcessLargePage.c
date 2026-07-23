/*
 * XREFs of MiScrubProcessLargePage @ 0x1408842B8
 * Callers:
 *     MiScrubActiveLargePage @ 0x14088418C (MiScrubActiveLargePage.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiIdentifyPfnWrapper @ 0x1402D2DA0 (MiIdentifyPfnWrapper.c)
 *     MiIsVadLargePrivate @ 0x1402ED74C (MiIsVadLargePrivate.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 */

__int64 __fastcall MiScrubProcessLargePage(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  ULONG_PTR v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v6 = 0;
  if ( MiIdentifyPfnWrapper(48 * a2 - 0x220000000000LL, 0LL, &v12) != MiPageSizes[a3] )
    return 0LL;
  v7 = v12;
  if ( (v12 & 0x70) != 0x60 )
    return 0LL;
  if ( (v12 & 0xF) != 0xD )
    return 0LL;
  if ( !MmIsUserAddress(v13) )
    return 0LL;
  if ( LODWORD(KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink) != ((v7 >> 9) & 0xFFFFFFFFFFFFLL) )
    return 0LL;
  v8 = MiObtainReferencedVadEx(v13, 0LL, &v14);
  v9 = (volatile signed __int32 *)v8;
  if ( !v8 )
    return 0LL;
  MiReadVadFlags(v8);
  if ( MiIsVadLargePrivate(v10) )
    v6 = MiScrubLargeMappedPage(a1, a2, a3, (__int64 *)&v12);
  MiUnlockAndDereferenceVad(v9);
  return v6;
}
