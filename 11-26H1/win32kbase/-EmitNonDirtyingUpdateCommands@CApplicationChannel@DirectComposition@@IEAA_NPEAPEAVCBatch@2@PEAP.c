/*
 * XREFs of ?EmitNonDirtyingUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140125D5C
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitNonDirtyingUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  struct DirectComposition::CResourceMarshaler *v3; // rbx
  _QWORD *v7; // rax

  v3 = *a3;
  while ( v3
       && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)v3 + 56LL))(
            v3,
            a2) )
  {
    *((_DWORD *)v3 + 4) &= ~2u;
    v7 = (_QWORD *)((char *)v3 + 8);
    v3 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v3 + 1);
    *v7 = 0LL;
  }
  *a3 = v3;
  return v3 == 0LL;
}
