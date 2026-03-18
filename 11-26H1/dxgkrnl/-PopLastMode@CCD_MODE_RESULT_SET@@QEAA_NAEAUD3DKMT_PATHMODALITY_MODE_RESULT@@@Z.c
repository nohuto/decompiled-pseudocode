/*
 * XREFs of ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1403D73E4
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1403D6DA0 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?Remove@?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@QEAAPEAUCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@QEAU23@@Z @ 0x140067D20 (-Remove@-$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U-$DoublyLinkedListElem.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

char __fastcall CCD_MODE_RESULT_SET::PopLastMode(CCD_MODE_RESULT_SET *this, struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rbx
  __int64 v5; // rcx

  if ( !*((_DWORD *)this + 12) )
    return 0;
  if ( *((CCD_MODE_RESULT_SET **)this + 2) == (CCD_MODE_RESULT_SET *)((char *)this + 16) )
  {
    v4 = 0LL;
    goto LABEL_8;
  }
  v4 = (void (__fastcall ***)(_QWORD, __int64))(*((_QWORD *)this + 3) - 8LL);
  if ( *((_QWORD *)this + 3) == 8LL )
  {
LABEL_8:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6162;
  }
  v5 = 14LL * (--*((_DWORD *)this + 12) % 0x32u);
  *(_OWORD *)a2 = *(_OWORD *)&v4[v5 + 3];
  *((_OWORD *)a2 + 1) = *(_OWORD *)&v4[v5 + 5];
  *((_OWORD *)a2 + 2) = *(_OWORD *)&v4[v5 + 7];
  *((_OWORD *)a2 + 3) = *(_OWORD *)&v4[v5 + 9];
  *((_OWORD *)a2 + 4) = *(_OWORD *)&v4[v5 + 11];
  *((_OWORD *)a2 + 5) = *(_OWORD *)&v4[v5 + 13];
  *((_OWORD *)a2 + 6) = *(_OWORD *)&v4[v5 + 15];
  if ( *((_DWORD *)this + 12) == 50 * (*((_DWORD *)this + 12) / 0x32u) )
  {
    DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::Remove(
      (__int64)this,
      (__int64)v4);
    if ( v4 )
      (**v4)(v4, 1LL);
  }
  return 1;
}
