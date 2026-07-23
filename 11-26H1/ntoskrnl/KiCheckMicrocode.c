/*
 * XREFs of KiCheckMicrocode @ 0x140C13A9C
 * Callers:
 *     KiRestoreFeatureBits @ 0x140510000 (KiRestoreFeatureBits.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiCheckMicrocode(__int64 a1)
{
  char v2; // al
  unsigned __int64 v3; // r11
  unsigned int v4; // r9d
  unsigned int v10; // r10d
  unsigned __int64 v16; // rax
  __int64 i; // rbx
  unsigned int v18; // ecx

  if ( KiMicrocodeTrackerEnabled
    && (!KiBootProcessorsStarted || *(_DWORD *)(a1 + 36) < (unsigned int)KiBootProcessorCount) )
  {
    v2 = *(_BYTE *)(a1 + 141);
    if ( v2 == 1 )
    {
      v3 = 0LL;
      v4 = __readmsr(0x8Bu);
      _RAX = 1LL;
      __asm { cpuid }
      v10 = _RAX;
    }
    else
    {
      if ( v2 != 2 )
        return;
      __writemsr(0x8Bu, 0LL);
      _RAX = 1LL;
      __asm { cpuid }
      v10 = _RAX;
      v16 = __readmsr(0x8Bu);
      v4 = HIDWORD(v16);
      v3 = __readmsr(0x17u);
    }
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      if ( !*((_DWORD *)&KiMicrocodeTracker + 6 * i) )
      {
        *((_DWORD *)&KiMicrocodeTracker + 6 * i) = 1;
        *((_DWORD *)&KiMicrocodeTracker + 6 * i + 1) = v10;
        *((_QWORD *)&KiMicrocodeTracker + 3 * i + 1) = v3;
        *((_DWORD *)&KiMicrocodeTracker + 6 * i + 4) = v4;
        return;
      }
      if ( *((_DWORD *)&KiMicrocodeTracker + 6 * i + 1) == v10 && *((_QWORD *)&KiMicrocodeTracker + 3 * i + 1) == v3 )
      {
        v18 = *((_DWORD *)&KiMicrocodeTracker + 6 * i + 4);
        if ( v18 != v4 )
          KeBugCheckEx(0x17Eu, v10, v18, v4, *(unsigned int *)(a1 + 36));
        return;
      }
    }
  }
}
