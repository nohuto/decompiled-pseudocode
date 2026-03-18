/*
 * XREFs of MiReservePoolMemory @ 0x1402A4C9C
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x140364570 (RtlpHpEnvAllocVA.c)
 *     MmAllocateSecurePoolMemory @ 0x1406FBC98 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiObtainSystemVa @ 0x1402A4D3C (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x1402A4DF8 (MiObtainDynamicVa.c)
 *     MiMarkSystemVaAllocated @ 0x14050AA78 (MiMarkSystemVaAllocated.c)
 */

__int64 __fastcall MiReservePoolMemory(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r10

  v4 = a3 >> 21;
  if ( a3 >> 21 > 0xFFFFFFFF )
    return 0LL;
  switch ( (_DWORD)a2 )
  {
    case 4:
      return MiObtainDynamicVa(qword_140E2D6B8 + 384LL * a4, (unsigned int)v4);
    case 5:
      return MiObtainSystemVa((unsigned int)v4, a2);
    case 0xE:
      return a1 & -(__int64)((unsigned int)MiMarkSystemVaAllocated(
                                             14,
                                             ((unsigned int)(a1 >> 18) & 0x3FFFFFF8) + 0x40000000,
                                             ((a1 >> 18) & 0x3FFFFFF8) + 0x40000000 + 8 * v4,
                                             1,
                                             1) != 0);
    default:
      return 0LL;
  }
}
