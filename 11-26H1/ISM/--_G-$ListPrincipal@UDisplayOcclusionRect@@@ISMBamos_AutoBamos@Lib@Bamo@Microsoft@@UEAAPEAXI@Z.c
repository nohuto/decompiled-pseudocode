/*
 * XREFs of ??_G?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x18013EC00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UDisplayOcclusionRect@@@Bamo@Microsoft@@UEAA@XZ @ 0x18013EB54 (--1-$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Mi.c)
 */

void *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,DisplayOcclusionRect>::~ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,DisplayOcclusionRect>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
