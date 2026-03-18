/*
 * XREFs of MapPhysMem @ 0x14000FC90
 * Callers:
 *     MapUnmapPhysMem @ 0x14001017C (MapUnmapPhysMem.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 */

__int64 __fastcall MapPhysMem(__int64 BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 *a3)
{
  ULONG_PTR v3; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // edi
  int MemoryCachingRequirements; // ebx
  __int64 v13; // rax
  int v15; // [rsp+64h] [rbp+Ch]
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v15 = HIDWORD(BugCheckParameter3);
  v3 = (unsigned int)BugCheckParameter4;
  v16 = 0;
  v6 = (unsigned int)BugCheckParameter4 + BugCheckParameter3;
  if ( v6 > 4096 )
  {
    v7 = 4096LL;
    v8 = 0;
    if ( BugCheckParameter3 >= 4096 )
      v7 = BugCheckParameter3;
    while ( (unsigned __int64)v8 < *(_QWORD *)(MemoryInfo + 8) )
    {
      v9 = MemoryInfo + 24LL * v8;
      v10 = *(_QWORD *)(v9 + 16);
      if ( v6 > v10 && v7 < *(_QWORD *)(v9 + 24) + v10 )
      {
        if ( *(_DWORD *)(v9 + 32) == 1 )
          KeBugCheckEx(0xA5u, 0x1000uLL, v15, (unsigned int)BugCheckParameter3, v3);
        if ( *(_DWORD *)(v9 + 32) == 3 )
        {
          if ( gAllowInvalidReclaimMemoryMap )
          {
            LogError(-1072431088);
            AcpiDiagTraceAmlError(0LL, -1072431088);
            PrintDebugMessage(0x67u, (const void *)BugCheckParameter3, (const void *)v6, 0LL, 0LL);
          }
        }
      }
      ++v8;
    }
  }
  v11 = 516;
  MemoryCachingRequirements = HalGetMemoryCachingRequirements(BugCheckParameter3, v3, &v16);
  if ( MemoryCachingRequirements < 0 )
  {
    v16 = 0;
    MemoryCachingRequirements = 0;
  }
  else if ( v16 == 1 )
  {
    v11 = 4;
  }
  v13 = MmMapIoSpaceEx(BugCheckParameter3, v3, v11);
  if ( v13 )
    *a3 = v13;
  else
    return (unsigned int)-1073741670;
  return (unsigned int)MemoryCachingRequirements;
}
