/*
 * XREFs of ?Clear@?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@QEAAXXZ @ 0x14006A990
 * Callers:
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x14006A970 (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@UEAAPEAXI@Z @ 0x1400783B0 (--_E-$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U-$DoublyLinkedListElementP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::Clear(
        __int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *result; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    result = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)result[1] != v2 || (v4 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_QWORD *)(a1 + 32);
    *result = 0LL;
    result[1] = 0LL;
    if ( result != (_QWORD *)8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*(result - 1))(result - 1, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    return (_QWORD *)DxgkLogInternalTriageEvent(
                       0LL,
                       262146,
                       -1,
                       (__int64)L"this->GetNumElements() == 0",
                       394LL,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
  }
  return result;
}
