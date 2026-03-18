/*
 * XREFs of HalpInterruptBuildStartupStub @ 0x140592E3C
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14057C69C (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     HalpInterruptCreateGdtEntry32 @ 0x140593010 (HalpInterruptCreateGdtEntry32.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

PVOID HalpInterruptBuildStartupStub()
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _OWORD *v1; // rdi
  PHYSICAL_ADDRESS v2; // rbx
  int v3; // ecx
  int v4; // r8d
  int v5; // r8d
  int v6; // r11d
  int v7; // r8d
  unsigned __int64 v8; // rax
  PVOID result; // rax

  PhysicalAddress = MmGetPhysicalAddress(HalpInterruptGlobalStartupBlock);
  v1 = HalpInterruptGlobalStartupBlock;
  v2 = PhysicalAddress;
  memmove(HalpInterruptGlobalStartupBlock, HalpRMStub, 0x6ACuLL);
  v1 = (_OWORD *)((char *)v1 + 1708);
  v3 = (int)v1;
  *v1 = HalpPMStub;
  v1[1] = xmmword_14002B9E0;
  v1[2] = xmmword_14002B9F0;
  v1[3] = xmmword_14002BA00;
  v1[4] = xmmword_14002BA10;
  v1[5] = xmmword_14002BA20;
  *((_BYTE *)v1 + 96) = 86;
  v1 = (_OWORD *)((char *)v1 + 97);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 42) = 48;
  *((_DWORD *)HalpInterruptGlobalStartupBlock + 20) = v2.LowPart + v3 - (_DWORD)HalpInterruptGlobalStartupBlock;
  memmove(v1, HalpLMIdentityStub, HalpLMIdentityStubEnd - (_BYTE *)HalpLMIdentityStub);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 45) = 16;
  *(_DWORD *)((char *)HalpInterruptGlobalStartupBlock + 86) = v2.LowPart
                                                            + (_DWORD)v1
                                                            - (_DWORD)HalpInterruptGlobalStartupBlock;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 12) = HalpInterruptGlobalStartupBlock;
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 16, 48, v4, -1, 27, 0);
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 16, 32, v5, v6, 19, 0);
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 16, 16, v7, 0, 27, 1);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 4) = 63;
  *(_DWORD *)((char *)HalpInterruptGlobalStartupBlock + 10) = v2.LowPart + 16;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 13) = __readmsr(0x277u);
  v8 = __readmsr(0xC0000080);
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 14) = ((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8;
  result = HalpInterruptGlobalStartupBlock;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 14) &= ~0x400uLL;
  HalpInterruptGlobalStartupCodePhysical = v2.QuadPart;
  return result;
}
