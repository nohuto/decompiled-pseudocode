/*
 * XREFs of MiHandleBootImage @ 0x140D0637C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140D01B84 (MiUpdateBootHpatPagesInUse.c)
 *     MiGetBootImagePageProtection @ 0x140D062A0 (MiGetBootImagePageProtection.c)
 *     MiTradeBootImagePage @ 0x140D071EC (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiHandleBootImage(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  int v6; // r15d
  unsigned __int64 v7; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r9
  PIMAGE_NT_HEADERS v13; // r15
  _QWORD *v14; // rsi
  __int64 v15; // r8
  char BootImagePageProtection; // al
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 48);
  v5 = (unsigned __int64)(unsigned int)(LODWORD(stru_140E366D8.QuantumTarget) + HIDWORD(stru_140E366D8.SListFaultAddress)) >> 12;
  v19 = *(unsigned int *)&stru_140E2D2D0.WaitBlockFill11[72];
  if ( (PVOID)v4 == PsNtosImageBase || (v6 = 0, (PVOID)v4 == PsHalImageBase) )
    v6 = 1;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)v4, 0LL, &OutHeaders);
  v7 = ((unsigned __int64)*(unsigned int *)(a2 + 64) + 4095) >> 12;
  v8 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = &v8[v7];
  if ( v6 )
  {
    v5 = (unsigned __int64)HIDWORD(stru_140E366D8.SListFaultAddress) >> 12;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
    {
      v7 = (v7 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      v5 = (v5 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      v9 = &v8[v7];
    }
  }
  result = MiUpdateBootHpatPagesInUse(a2, v9, a1);
  v11 = v5 - result;
  v12 = v11 + v19;
  if ( v6 )
    v12 = v11;
  if ( v12 )
    result = MiFreeBootDriverPages(0LL, v4, &v9[result], v12);
  if ( !v6 )
  {
    v13 = OutHeaders;
    OutHeaders->OptionalHeader.ImageBase = v4;
    if ( (*(_DWORD *)(a2 + 104) & 0x800000) == 0 )
    {
      v14 = &v8[v7];
      OutHeaders = 0LL;
      while ( v8 < v14 )
      {
        result = MiGetPfnSlabType(48 * ((*v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        if ( (_DWORD)result == 9 )
        {
          BootImagePageProtection = MiGetBootImagePageProtection(v2, (__int64)v13, v15, &OutHeaders);
          result = MiAllocateDriverPage((__int64)&MiSystemPartition, BootImagePageProtection, 1);
          if ( result != -1 )
            result = MiTradeBootImagePage(v8, result);
        }
        ++v8;
        v2 += 4096;
      }
    }
  }
  return result;
}
