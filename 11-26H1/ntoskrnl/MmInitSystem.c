/*
 * XREFs of MmInitSystem @ 0x140C7FD84
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     MiInitializeStrongCode @ 0x140C7FF10 (MiInitializeStrongCode.c)
 *     MiComputeNumaCosts @ 0x140CF10D4 (MiComputeNumaCosts.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 *     MiInitializeSystemVa @ 0x140D0AC28 (MiInitializeSystemVa.c)
 */

void __fastcall MmInitSystem(int a1, ULONG_PTR a2)
{
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // al
  signed __int64 v16; // rax
  __int64 v17; // rtt
  signed __int64 v18; // rdx
  char v19; // [rsp+20h] [rbp-18h]

  if ( !dword_140E2D6F8 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      v19 = 36;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      v19 = _RAX;
    }
    byte_140E2D718 = 1;
    v14 = v19;
    if ( (unsigned __int8)v19 > 0x34u )
      v14 = 52;
    dword_140E2D6F8 = v14;
    v15 = v14 - 12;
    if ( (unsigned __int8)(v14 - 12) > 0x26u )
      v15 = 38;
    dword_140E2D6FC = v15;
  }
  if ( a1 == -1 )
  {
    word_140EF8C12 |= 1u;
    BitMapHeader.Buffer = (unsigned int *)&unk_140EF8AB0;
    BitMapHeader.SizeOfBitMap = 2048;
    MiInitializeStrongCode();
    if ( byte_140FC7BE8 )
      MiFlags |= 0x2000000000uLL;
    MiInitializeSystemVa(a2);
  }
  else if ( a1 )
  {
    if ( a1 == 1 )
    {
      _InterlockedOr64(&MiFlags, 0x10uLL);
      MiComputeNumaCosts();
      MiInitSystem(1LL, a2);
      LOBYTE(stru_140E36558.ReadyTime) = 1;
    }
    else if ( a1 == 2 )
    {
      v17 = MiFlags;
      v16 = _InterlockedCompareExchange64(&MiFlags, MiFlags & 0xFFFFFFFFFFFFFFCFuLL | 0x20, MiFlags);
      if ( v17 != v16 )
      {
        do
        {
          v18 = v16;
          v16 = _InterlockedCompareExchange64(&MiFlags, v16 & 0xFFFFFFFFFFFFFFCFuLL | 0x20, v16);
        }
        while ( v16 != v18 );
      }
      MiInitSystem(2LL, a2);
    }
  }
  else
  {
    MiInitNucleus(a2);
    MiInitSystem(0LL, a2);
    _InterlockedOr64(&MiFlags, 0x200uLL);
  }
}
