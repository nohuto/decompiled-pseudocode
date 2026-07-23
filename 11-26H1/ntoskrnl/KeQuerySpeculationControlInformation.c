/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x1407BD6B8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1404D5AAC (MiIsImportOptimizationEnabled.c)
 *     KeKvaShadowingActive @ 0x1404DF8A8 (KeKvaShadowingActive.c)
 *     HvlQueryL1tfMitigationInformation @ 0x1404E4654 (HvlQueryL1tfMitigationInformation.c)
 *     SpcIsFbClearSupported @ 0x140722F18 (SpcIsFbClearSupported.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(void *a1, size_t Size, int *a3)
{
  SIZE_T v3; // r13
  int v6; // eax
  bool IsImportOptimizationEnabled; // al
  unsigned __int8 v8; // dl
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // rdi
  int v11; // r9d
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // edi
  bool v18; // zf
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int Sizea; // [rsp+24h] [rbp-44h]
  int Src[14]; // [rsp+30h] [rbp-38h] BYREF
  char v29; // [rsp+78h] [rbp+10h]
  char PreviousMode; // [rsp+88h] [rbp+20h]

  v3 = (unsigned int)Size;
  if ( (unsigned int)Size < 4 )
  {
    *a3 = 8;
    return 3221225476LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = Size;
  if ( (unsigned int)Size >= 8 )
    v6 = 8;
  Sizea = v6;
  *a3 = v6;
  *(_QWORD *)Src = ((unsigned __int64)KiSpeculationFeatures >> 36) & 1 | ((unsigned __int64)KiSpeculationFeatures >> 33) & 2 | ((unsigned __int64)KiSpeculationFeatures >> 33) & 4;
  if ( (KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0 )
    Src[0] |= 8u;
  if ( (KiSpeculationFeatures & 4) != 0 )
    Src[0] |= 0x10u;
  if ( (KiSpeculationFeatures & 0x1000000000LL) != 0 && (KiSpeculationFeatures & 0x2000000000LL) != 0 )
    Src[0] |= 0x2000u;
  Src[0] = Src[0] & 0xFFFFE11F | (2 * (_BYTE)KiSpeculationFeatures) & 0x20 | KiSpeculationFeatures & 0x40 | (4 * KiSpeculationFeatures) & 0x80 | 0x100 | (4 * (_WORD)KiSpeculationFeatures) & 0x200 | ((unsigned __int64)KiSpeculationFeatures >> 28) & 0x400 | ((unsigned __int64)KiSpeculationFeatures >> 28) & 0x800 | ~(16 * (_WORD)KiSpeculationFeatures) & 0x1000;
  IsImportOptimizationEnabled = MiIsImportOptimizationEnabled();
  v10 = KeFeatureBits2;
  v12 = Src[0] & 0xFEFE3FFF | (v9 >> 27) & 0x4000 | (unsigned __int16)(IsImportOptimizationEnabled << 15) | ((KeFeatureBits2 & 0x20) != 0 ? 0x1000000 : 0) | ((v11 | KiSpeculationFeatures & 1) << 16);
  v29 = KiKvaShadow;
  if ( !KiKvaShadow || (v13 = 637534208, ((unsigned __int8)KeFeatureBits2 & v8) == 0) )
    v13 = 603979776;
  v14 = v13 | v12 & 0xFDFFFFFF;
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx || !KiTsxSupported )
  {
    v15 = v14 | 0x18000000;
  }
  else if ( (KeFeatureBits2 & 0x10000) != 0
         || ((unsigned __int8)KeFeatureBits2 & v8) != 0
         && (KeFeatureBits2 & 0x20) == 0
         && (unsigned int)KeKvaShadowingActive() )
  {
    v15 = v14 & 0xE7FFFFFF | 0x10000000;
  }
  else if ( (v10 & 0x8000) != 0 )
  {
    v15 = v14 & 0xE7FFFFFF | 0x8000000;
  }
  else
  {
    v15 = v14 & 0xE7FFFFFF;
  }
  if ( (v10 & 0x10000) != 0 || !KiTsxSupportedAtBoot )
    v16 = 0x40000000;
  else
    v16 = 0;
  Src[0] = v16 | v15 & 0xBFFFFFFF;
  HvlQueryL1tfMitigationInformation(Src);
  v17 = Src[1] & 0xFFFFFFF8 | (v10 >> 19) & 7;
  if ( !v29 || (v18 = !SpcIsFbClearSupported(), v19 = 1048, v18) )
    v19 = 1040;
  Src[1] = v19 | v17 & 0xFFFFFFF7;
  if ( (KiSpeculationFeatures & 0x8000) == 0 )
  {
    v20 = Src[1] & 0xFFFFFCFF | 0x200;
LABEL_45:
    Src[1] = v20;
    goto LABEL_46;
  }
  if ( (KiSpeculationFeatures & 0x400000000LL) != 0
    || (KiSpeculationFeatures & 0x2000000000LL) != 0
    || (KiSpeculationFeatures & 0x100000000000LL) != 0 )
  {
    v20 = Src[1] & 0xFFFFFCFF | 0x100;
    goto LABEL_45;
  }
  if ( (KiSpeculationFeatures & 0x800000000LL) != 0 || (KiSpeculationFeatures & 0x200000000000LL) != 0 )
    Src[1] &= 0xFFFFFCFF;
  else
    Src[1] |= 0x300u;
LABEL_46:
  if ( (KiSpeculationFeatures & 0x10000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x10000000000000LL) != 0 || (KiSpeculationFeatures & 0x400000000LL) != 0 )
    {
      Src[1] |= 0x40u;
    }
    else if ( (KiSpeculationFeatures & 0x20000000000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
    {
      Src[1] |= 0x80u;
    }
    else if ( (KiSpeculationFeatures & 0x40000000000000LL) != 0 || (KiSpeculationFeatures & 0x80000000000000LL) != 0 )
    {
      Src[1] |= 0x20u;
    }
  }
  Src[1] = Src[1] & 0xFFFFEFFF | ((_WORD)KeFeatureBits2 << 8) & 0x1000 | 0x2800;
  if ( (KiSpeculationFeatures & 0x40000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x80000) != 0 )
    {
      if ( (KiSpeculationFeatures & 0x100000) != 0 )
      {
        v21 = Src[1] & 0xFFFE3FFF | 0x10000;
      }
      else if ( (KiSpeculationFeatures & 0x400000000000LL) != 0 )
      {
        v21 = Src[1] & 0xFFFE3FFF | 0x4000;
      }
      else
      {
        v21 = Src[1] & 0xFFFE3FFF | 0xC000;
      }
    }
    else
    {
      v21 = Src[1] & 0xFFFE3FFF;
    }
  }
  else
  {
    v21 = Src[1] & 0xFFFE3FFF | 0x8000;
  }
  Src[1] = v21 | 0x20000;
  if ( (KiSpeculationFeatures & 0x200000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x400000000LL) != 0
      || (KiSpeculationFeatures & 0x2000000000LL) != 0
      || (KiSpeculationFeatures & 0x800000000000LL) != 0 )
    {
      v22 = Src[1] & 0xFFF3FFFF | 0x40000;
    }
    else if ( (KiSpeculationFeatures & 0x800000000LL) != 0 || (KiSpeculationFeatures & 0x1000000000000LL) != 0 )
    {
      v22 = Src[1] & 0xFFF3FFFF;
    }
    else
    {
      v22 = Src[1] | 0xC0000;
    }
  }
  else
  {
    v22 = Src[1] & 0xFFF3FFFF | 0x80000;
  }
  Src[1] = v22 | 0x100000;
  v23 = v22 | 0x100000;
  if ( (KiSpeculationFeatures & 0x400000) != 0 )
    v24 = v23 | 0x200000;
  else
    v24 = v23 & 0xFFDFFFFF;
  Src[1] = v24 | 0x400000;
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x2000000000000LL) != 0 )
    {
      v25 = Src[1] & 0xFE7FFFFF | 0x800000;
    }
    else if ( (KiSpeculationFeatures & 0x4000000000000LL) != 0 )
    {
      v25 = Src[1] & 0xFE7FFFFF;
    }
    else
    {
      v25 = Src[1] | 0x1800000;
    }
  }
  else
  {
    v25 = Src[1] & 0xFE7FFFFF | 0x1000000;
  }
  Src[1] = v25 | 0x2000000;
  if ( (KiSpeculationFeatures & 0x8000000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x400000000LL) == 0
      && (KiSpeculationFeatures & 0x2000000000LL) == 0
      && (KiSpeculationFeatures & 0x200000000000000LL) == 0 )
    {
      if ( (KiSpeculationFeatures & 0x800000000LL) != 0 || (KiSpeculationFeatures & 0x400000000000000LL) != 0 )
        Src[1] &= 0xF3FFFFFF;
      else
        Src[1] |= 0xC000000u;
      goto LABEL_96;
    }
    v26 = Src[1] & 0xF3FFFFFF | 0x4000000;
  }
  else
  {
    v26 = Src[1] & 0xF3FFFFFF | 0x8000000;
  }
  Src[1] = v26;
LABEL_96:
  if ( PreviousMode )
    RtlSetUserMemory(a1, 0, v3);
  else
    RtlSetVolatileMemory(a1, 0, v3);
  if ( PreviousMode )
    RtlCopyToUser(a1, Src, Sizea);
  else
    RtlCopyVolatileMemory(a1, Src, Sizea);
  return 0LL;
}
