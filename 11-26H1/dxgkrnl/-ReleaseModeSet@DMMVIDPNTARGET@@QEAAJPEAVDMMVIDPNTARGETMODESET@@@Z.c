/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002A794
 * Callers:
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1403CF4A0 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Remove@?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@QEAAPEAUCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@QEAU23@@Z @ 0x140067D20 (-Remove@-$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U-$DoublyLinkedListElem.c)
 */

__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET *a2)
{
  DMMVIDPNTARGET *v4; // rdx
  __int64 result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 908;
  }
  v4 = (DMMVIDPNTARGET *)*((_QWORD *)a2 + 14);
  if ( v4 == (DMMVIDPNTARGET *)this )
  {
    if ( a2 == this[14] )
    {
      WdLogSingleEntry2(7LL, a2, *((unsigned int *)this + 6));
      WdLogGlobalForLineNumber = 925;
      auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 14, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 930;
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1 )
      DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::Remove(
        this[15],
        a2);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 914;
  }
  return result;
}
