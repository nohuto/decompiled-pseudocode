/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCLegacyAnimationTriggerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140230690
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

char *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(a1);
  return a1;
}
