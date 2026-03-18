/*
 * XREFs of ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1400AA368
 * Callers:
 *     ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x140114718 (-ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJ.c)
 *     ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1401148FC (-ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectCompositi.c)
 *     ?TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14014B5E8 (-TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectCompositio.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        DirectComposition::CApplicationChannel **a1,
        unsigned int *a2,
        int a3,
        char a4,
        _DWORD *a5)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  __int64 i; // rcx

  if ( !a4 || *a2 )
  {
    v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*a1, *a2);
    if ( v7 )
    {
      for ( i = *((unsigned int *)v7 + 9); (unsigned int)i < 0xA6; LODWORD(i) = dword_14027CC90[i] )
      {
        if ( (_DWORD)i == a3 )
        {
          *a2 = *((_DWORD *)v7 + 8);
          return;
        }
      }
    }
    *a5 = -1073741811;
  }
}
