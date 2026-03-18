/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x140056550
 * Callers:
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x140056378 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x1402279DC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x14023D2D0 (-SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140048E6C (DirectComposition--Memory--AllocateAndClear.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1400565C0 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400566AC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, __int64 a2, struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v5; // rax
  DirectComposition::CEvent *v6; // rdi
  unsigned int v7; // edx
  int v8; // ebx

  v5 = (DirectComposition::CEvent *)DirectComposition::Memory::AllocateAndClear(0x10uLL, 0x76654344u, 1);
  v6 = v5;
  if ( v5 )
  {
    v8 = DirectComposition::CEvent::Initialize(v5, a1, 0);
    if ( v8 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v7);
    else
      *a3 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
