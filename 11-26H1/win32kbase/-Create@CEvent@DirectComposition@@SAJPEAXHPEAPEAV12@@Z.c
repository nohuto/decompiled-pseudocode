/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1400B17A4
 * Callers:
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B15CC (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140229D3C (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140247A90 (-SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PE.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140045C9C (DirectComposition--Memory--AllocateAndClear.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400AE780 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1400B1814 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, __int64 a2, struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v5; // rax
  DirectComposition::CEvent *v6; // rbx
  int v7; // edi

  v5 = (DirectComposition::CEvent *)DirectComposition::Memory::AllocateAndClear(0x10uLL, 0x76654344u, 1);
  v6 = v5;
  if ( v5 )
  {
    v7 = DirectComposition::CEvent::Initialize(v5, a1, 0);
    if ( v7 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6);
    else
      *a3 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
