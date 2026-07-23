/*
 * XREFs of MxMapLargeVa @ 0x1406EC0F4
 * Callers:
 *     MxMapVa @ 0x140CFE330 (MxMapVa.c)
 * Callees:
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiGetLargePteAddress @ 0x14042D440 (MiGetLargePteAddress.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 */

unsigned __int64 __fastcall MxMapLargeVa(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 LeafVa; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 LargePteAddress; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 result; // rax

  v3 = MiWriteLargePte(*(_QWORD *)a1, a2, 1u, -1275068412);
  LeafVa = MiGetLeafVa(v3);
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.WaitBlock[0].Thread, 0x200uLL);
  if ( *(_DWORD *)(a1 + 12)
    || (v5 = *(_QWORD *)(a1 + 24)) != 0
    && (v6 = MiGetLeafVa(v5), LargePteAddress = MiGetLargePteAddress(v6, 1u), v8 <= LargePteAddress)
    || (v9 = *(_QWORD *)(a1 + 32)) != 0 && (v10 = MiGetLeafVa(v9), v11 = MiGetLargePteAddress(v10, 1u), v12 >= v11) )
  {
    KeZeroPages(LeafVa, 0x200000LL);
  }
  result = LeafVa + 0x200000;
  *(_QWORD *)a1 = LeafVa + 0x200000;
  return result;
}
