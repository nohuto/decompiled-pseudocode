/*
 * XREFs of MiInitializeImageSectionLocks @ 0x140AA5CA8
 * Callers:
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 * Callees:
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 */

__int64 __fastcall MiInitializeImageSectionLocks(__int64 a1)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v2; // rcx
  void *v3; // rdi
  __int64 v4; // rbx
  PIMAGE_NT_HEADERS v5; // rax
  _DWORD *v6; // r15
  unsigned __int16 NumberOfSections; // dx
  __int64 v8; // r14
  __int64 result; // rax
  __int64 PteAddress; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // r11

  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  v3 = *(void **)(v2 + 48);
  v4 = BaseLoaderPortion;
  v5 = RtlImageNtHeader(v3);
  v6 = *(_DWORD **)(v4 + 200);
  NumberOfSections = v5->FileHeader.NumberOfSections;
  v8 = (__int64)&v5->OptionalHeader + v5->FileHeader.SizeOfOptionalHeader;
  *(_QWORD *)(v4 + 288) = v8;
  result = 0LL;
  if ( NumberOfSections )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)v3);
    v11 = -8 - PteAddress;
    v12 = v8 + 16;
    v13 = PteAddress;
    v15 = v14;
    do
    {
      *v6 = (MiGetPteAddress((unsigned __int64)v3 + *(unsigned int *)(v12 - 4)) - v13) >> 3;
      if ( v17 < v18 )
        v17 = v18;
      v6 += 3;
      result = (v11 + MiGetPteAddress(((v20 & (v19 + v16 + v17 - 1LL)) + 4095) & 0xFFFFFFFFFFFFF000uLL)) >> 3;
      v12 += 40LL;
      *(v6 - 2) = result;
      --v15;
    }
    while ( v15 );
  }
  return result;
}
