/*
 * XREFs of ?EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140100B30
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_504b2e656b0331c347eaff34b8484def___ @ 0x140100BA4 (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_504b2e656b0331c347ea.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20e___lambda_c8e4717179366f347b5fcb735f2cbba9___ @ 0x140100C30 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20.c)
 */

char __fastcall DirectComposition::CContainerShapeMarshaler::EmitUpdateCommands(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char v5; // di

  v5 = 0;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_504b2e656b0331c347eaff34b8484def___(
                          this,
                          a2,
                          a3,
                          this) )
  {
    if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20e___lambda_c8e4717179366f347b5fcb735f2cbba9___(
                            this,
                            a2,
                            (char *)this + 76,
                            *((unsigned int *)this + 18)) )
    {
      *((_DWORD *)this + 4) &= ~0x40u;
      return 1;
    }
  }
  return v5;
}
