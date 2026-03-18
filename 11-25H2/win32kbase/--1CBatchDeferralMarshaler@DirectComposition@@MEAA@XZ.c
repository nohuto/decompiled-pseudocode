/*
 * XREFs of ??1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ @ 0x14023D270
 * Callers:
 *     ??_ECBatchDeferralMarshaler@DirectComposition@@MEAAPEAXI@Z @ 0x1402284E0 (--_ECBatchDeferralMarshaler@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400566AC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CBatchDeferralMarshaler::~CBatchDeferralMarshaler(
        DirectComposition::CBatchDeferralMarshaler *this)
{
  DirectComposition::CEvent *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CBatchDeferralMarshaler::`vftable';
  v1 = (DirectComposition::CEvent *)*((_QWORD *)this + 7);
  if ( v1 )
    DirectComposition::CEvent::`scalar deleting destructor'(v1);
}
