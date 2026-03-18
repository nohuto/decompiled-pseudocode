/*
 * XREFs of ?EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D5130
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401981B0 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitReleaseCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  _QWORD *v4; // rbx
  char result; // al
  __int64 v6; // rax

  while ( 1 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 60);
    if ( !v4 )
      return 1;
    *((_QWORD *)this + 60) = v4[1];
    v6 = *v4;
    v4[1] = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v6 + 56))(v4, a2) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4) )
      ++*((_DWORD *)*a2 + 29);
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 96LL))(v4, 1LL);
  }
  v4[1] = *((_QWORD *)this + 60);
  result = 0;
  *((_QWORD *)this + 60) = v4;
  return result;
}
