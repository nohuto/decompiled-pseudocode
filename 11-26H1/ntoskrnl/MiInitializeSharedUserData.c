/*
 * XREFs of MiInitializeSharedUserData @ 0x140CF82E0
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     HvlGetSharedPageVa @ 0x140440388 (HvlGetSharedPageVa.c)
 *     MiLockAndIncrementShareCount @ 0x1404CAEE8 (MiLockAndIncrementShareCount.c)
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 *     KasanMarkAddressRedZoneNoInline @ 0x1405E0190 (KasanMarkAddressRedZoneNoInline.c)
 */

__int64 __fastcall MiInitializeSharedUserData(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 SharedPageVa; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  ULONG_PTR ProtoPool; // r14
  unsigned __int64 i; // rbp
  __int64 v11; // r12
  __int64 v12; // r15
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  ULONG_PTR v18; // rsi
  _QWORD v20[7]; // [rsp+20h] [rbp-38h]
  unsigned __int8 v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v21 = 0;
  v20[0] = 0xFFFFF78000000000uLL;
  v2 = 1LL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa(a1, a2);
  v20[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    v4 = *(_QWORD *)(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v4 & 1) != 0 )
    {
      v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
      if ( v5 <= qword_140E2D920 && ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v2 = 2LL;
        v6 = __rdtsc();
        v7 = 15LL;
        v8 = ((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 4) & 0xF;
        if ( v8 )
          v7 = v8;
        qword_140E2D7B8 = (v7 + 524256) << 12;
      }
    }
  }
  ProtoPool = MiAllocateProtoPool(64LL, 8 * v2, 1951624525LL);
  if ( ProtoPool )
  {
    for ( i = 0LL; i < v2; ++i )
    {
      v11 = MiLockProtoPoolPageForce(ProtoPool + 8 * i, &v21);
      v12 = (v11 + 0x220000000000LL) / 48;
      v13 = (_QWORD *)(((v20[i] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v14 = (*v13 >> 12) & 0xFFFFFFFFFFLL;
      *(_QWORD *)(ProtoPool + 8 * i) = MiMakeValidPte((unsigned __int64)v13, v14, 536870913);
      qword_140E2D7A8[i] = ProtoPool + 8 * i;
      v15 = 48 * v14 - 0x220000000000LL;
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      *(_QWORD *)(v15 + 16) = MiMakeDemandZeroPte(4);
      *(_QWORD *)(v15 + 40) |= 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v15, v12);
      *(_QWORD *)(v15 + 8) = ProtoPool + 8 * i;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiLockAndIncrementShareCount(v12);
      LOBYTE(v16) = v21;
      MiUnlockProtoPoolPage(v11, v16, v17);
    }
    v18 = v2 << 12;
    if ( !byte_140FC8BD8 )
      return 1LL;
    if ( (int)KasanTrackAddressNoInline(0xFFFFF78000000000uLL, v18, 0) >= 0 )
    {
      if ( byte_140FC8BD8 )
        KasanMarkAddressRedZoneNoInline(0xFFFFF78000000000uLL, 0xAA0uLL, v18, 133);
      return 1LL;
    }
  }
  return 0LL;
}
