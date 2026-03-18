/*
 * XREFs of ?EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14017FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140180020 (-EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetNotificationDataSourceIdCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14018009C (-EmitSetNotificationDataSourceIdCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetNotificationDataProviderIdCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140180110 (-EmitSetNotificationDataProviderIdCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPE.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0BGL@$0BGM@$0A@$09@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234748 (-Marshal@-$CResourceMarshalerArray@$0BGL@$0BGM@$0A@$09@DirectComposition@@QEAA_NPEAPEAVCBatch@2@.c)
 */

bool __fastcall DirectComposition::CAnimationTriggerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CAnimationTriggerMarshaler::EmitSetConditionCommand(this, a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<363,364,0,10>::Marshal(
                          (char *)this + 80,
                          a2,
                          *((unsigned int *)this + 8))
    && DirectComposition::CAnimationTriggerMarshaler::EmitSetNotificationDataProviderIdCommand(this, a2) )
  {
    return DirectComposition::CAnimationTriggerMarshaler::EmitSetNotificationDataSourceIdCommand(this, a2);
  }
  return v4;
}
