/*
 * XREFs of MiCreatePageFileSpaceBitmaps @ 0x1408713F8
 * Callers:
 *     MiPagefileMaximumChangePrepare @ 0x1406FDBD4 (MiPagefileMaximumChangePrepare.c)
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     KcsanMarkAddressIgnored @ 0x1404F1570 (KcsanMarkAddressIgnored.c)
 */

__int64 __fastcall MiCreatePageFileSpaceBitmaps(unsigned int a1)
{
  ULONG_PTR v2; // rdi
  int CurrentProcessorColor; // eax
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx

  v2 = 8 * ((a1 >> 6) + ((a1 & 0x3F) != 0));
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, (unsigned int)(2 * v2 + 40), 1649438029, CurrentProcessorColor | 0x80000000);
  v5 = result;
  if ( result )
  {
    v6 = result + 40;
    *(_DWORD *)result = 1;
    *(_DWORD *)(result + 8) = a1;
    *(_QWORD *)(result + 16) = result + 40;
    KcsanMarkAddressIgnored(result + 40, v2);
    *(_DWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 32) = v2 + v6;
    KcsanMarkAddressIgnored(v2 + v6, v2);
    return v5;
  }
  return result;
}
