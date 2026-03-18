/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x1405C07D4
 * Callers:
 *     HvlGetEncryptedData @ 0x1405C0510 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpGetPageList @ 0x1405C2250 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1405C2308 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x1405C2460 (HvlpStartPageListIteration.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(__int64 a1, char *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 PageListIterator; // rax
  __int64 v11; // r14
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  HIDWORD(v19) = HIDWORD(a1);
  v18[0] = 0LL;
  LODWORD(v19) = 0;
  *a5 = 0;
  if ( (HvlpRootFlags & 4) == 0 && !VslVsmEnabled )
    return 3221226021LL;
  if ( !VslpReservedTransferLock.WaitBlockFill7[152] )
  {
    HvlpStartPageListIteration(1LL, BYTE4(VslpReservedTransferLock.WaitStatus) == 0 ? 2 : 0);
    *(_QWORD *)&VslpReservedTransferLock.WaitBlockFill11[160] = -1LL;
    *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[168] = 0;
    VslpReservedTransferLock.WaitBlockFill7[152] = 1;
  }
  v9 = *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[168];
  if ( *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[168] )
  {
    v11 = *(_QWORD *)&VslpReservedTransferLock.WaitBlockFill11[160];
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, v18, &v19) )
    {
      PageListIterator = HvlpGetPageListIterator(1LL);
      *(_QWORD *)(PageListIterator + 8) = 0LL;
      *(_WORD *)PageListIterator = 0;
      *(_WORD *)(PageListIterator + 3) = 0;
      *(_BYTE *)(PageListIterator + 2) = 0;
      VslpReservedTransferLock.WaitBlockFill7[152] = 0;
      *(_QWORD *)&VslpReservedTransferLock.WaitBlockFill11[160] = -1LL;
      *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[168] = 0;
      return 3221226021LL;
    }
    v11 = v18[0];
    v9 = v19;
  }
  v12 = a3 >> 12;
  v13 = v9;
  if ( v12 < v9 )
    v13 = v12;
  if ( (_DWORD)v13 )
  {
    v19 = (unsigned int)v13;
    v14 = v11 << 12;
    v15 = v11;
    do
    {
      *(_QWORD *)(8
                * (((unsigned __int64)VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink >> 12) & 0xFFFFFFFFFLL)
                - 0x98000000000LL) = v14 & 0xFFFFFFFFFF000LL ^ 0x8000000000000001uLL;
      v16 = __readcr4();
      if ( (v16 & 0x20080) != 0 )
      {
        __writecr4(v16 ^ 0x80);
        __writecr4(v16);
      }
      else
      {
        v17 = __readcr3();
        __writecr3(v17);
      }
      memmove(a2, VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink, 0x1000uLL);
      *a4 = v15;
      a2 += 4096;
      v14 += 4096LL;
      ++a4;
      ++v15;
      --v19;
    }
    while ( v19 );
  }
  *a5 = (_DWORD)v13 << 12;
  *(_QWORD *)&VslpReservedTransferLock.WaitBlockFill11[160] = v13 + v11;
  result = 0LL;
  *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[168] = v9 - v13;
  return result;
}
