/*
 * XREFs of HalpCreateSecondaryIcEntry @ 0x140591D4C
 * Callers:
 *     HalpRegisterSecondaryIcInterface @ 0x14059220C (HalpRegisterSecondaryIcInterface.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpCreateSecondaryIcEntry(__int64 a1)
{
  __int64 Pool2; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  __int64 *v6; // rcx

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = 0;
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(Pool2 + 20) = *(unsigned __int16 *)(a1 + 20);
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a1 + 64);
    *(_QWORD *)(Pool2 + 104) = *(_QWORD *)(a1 + 80);
    ObfReferenceObjectWithTag(*(PVOID *)(Pool2 + 48), 0x326C6148u);
    *(_WORD *)(v4 + 120) = 1;
    *(_BYTE *)(v4 + 122) = 6;
    *(_DWORD *)(v4 + 124) = 1;
    *(_QWORD *)(v4 + 136) = v4 + 128;
    *(_QWORD *)(v4 + 128) = v4 + 128;
    v5 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
    v6 = (__int64 *)qword_140F89DD8;
    if ( *(__int64 **)qword_140F89DD8 != &SecondaryIcList )
      __fastfail(3u);
    *(_QWORD *)v4 = &SecondaryIcList;
    *(_QWORD *)(v4 + 8) = v6;
    *v6 = v4;
    qword_140F89DD8 = v4;
    HalpReleaseHighLevelLock(&SecondaryIcListSpinLock, v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
