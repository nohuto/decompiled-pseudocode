/*
 * XREFs of KiDetectAmdNonArchSsbdSupport @ 0x1405F43C4
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 */

void __fastcall KiDetectAmdNonArchSsbdSupport(__int64 a1)
{
  __int64 v12; // rax

  if ( (KiSpeculationFeatures & 0x80u) == 0LL )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x2000000) != 0 )
    {
      DWORD2(KiSpeculationFeatures) = -1073676001;
      KiSsbdMsr = -1073676001;
      *(_QWORD *)&KiSpeculationFeatures = KiSpeculationFeatures | 0x80;
      return;
    }
    if ( !HviIsAnyHypervisorPresent() )
    {
      switch ( *(_BYTE *)(a1 + 64) )
      {
        case 0x15:
          v12 = 0x40000000000000LL;
          break;
        case 0x16:
          v12 = 0x200000000LL;
          break;
        case 0x17:
          v12 = 1024LL;
          break;
        default:
          return;
      }
      *(_QWORD *)&KiSpeculationFeatures = KiSpeculationFeatures | 0x80;
      DWORD2(KiSpeculationFeatures) = -1073672160;
      KiSsbdMsr = -1073672160;
      qword_140FC0C68 = v12;
      KiSsbdBit = v12;
    }
  }
}
