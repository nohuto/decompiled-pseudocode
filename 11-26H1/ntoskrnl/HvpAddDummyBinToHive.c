/*
 * XREFs of HvpAddDummyBinToHive @ 0x14085D5C8
 * Callers:
 *     HvpPerformLogFileRecovery @ 0x140AEB2A8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HvpFreeBin @ 0x1408B78AC (HvpFreeBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1408DD510 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x140A8802C (HvpAllocateBin.c)
 */

__int64 __fastcall HvpAddDummyBinToHive(ULONG_PTR BugCheckParameter2, int a2, _QWORD *a3)
{
  int Bin; // ebx
  _DWORD *v7; // rbx
  void *v8; // r8
  void *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  Bin = HvpAllocateBin(BugCheckParameter2, 4096, 0, 808668483, (__int64)&v10);
  if ( Bin < 0 )
  {
    v8 = v10;
  }
  else
  {
    v7 = v10;
    memset_0(v10, 0, 0x1000uLL);
    v7[1] = a2;
    v7[2] = 4096;
    *v7 = 0;
    v7[8] = -4064;
    HvpPointMapEntriesToBuffer(BugCheckParameter2, 1, 0LL);
    v8 = 0LL;
    *a3 = v7;
    Bin = 0;
  }
  if ( v8 )
    HvpFreeBin(BugCheckParameter2, 4096LL);
  return (unsigned int)Bin;
}
