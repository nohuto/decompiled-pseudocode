/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002BE28
 * Callers:
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1403F55B0 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Remove@?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@QEAAPEAUCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@QEAU23@@Z @ 0x140067D20 (-Remove@-$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U-$DoublyLinkedListElem.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::ReleaseModeSet(
        struct DMMVIDPNSOURCEMODESET **this,
        struct DMMVIDPNSOURCEMODESET *a2)
{
  DMMVIDPNSOURCE *v4; // rdx
  __int64 result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 892;
  }
  v4 = (DMMVIDPNSOURCE *)*((_QWORD *)a2 + 14);
  if ( v4 == (DMMVIDPNSOURCE *)this )
  {
    if ( a2 == this[15] )
    {
      WdLogSingleEntry2(7LL, a2, *((unsigned int *)this + 6));
      WdLogGlobalForLineNumber = 909;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(this + 15, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 914;
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1 )
      DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::Remove(
        this[14],
        a2);
    ReferenceCounted::Release((struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 898;
  }
  return result;
}
