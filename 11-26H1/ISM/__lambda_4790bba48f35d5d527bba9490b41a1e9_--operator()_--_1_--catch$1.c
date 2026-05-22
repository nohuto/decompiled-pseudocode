/*
 * XREFs of __lambda_4790bba48f35d5d527bba9490b41a1e9_::operator()_::_1_::catch$1 @ 0x1801DD81F
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801A0CB4 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall _lambda_4790bba48f35d5d527bba9490b41a1e9_::operator()_::_1_::catch_1(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int *v3; // rax

  v2 = *(_QWORD *)(a2 + 80);
  **(_DWORD **)(v2 + 48) = -2147024882;
  v3 = *(int **)(v2 + 48);
  if ( *v3 >= 0 )
    return 1LL;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(
      (unsigned int)*v3,
      a2,
      "HotKeyProcessor::RegisterHotKey::<lambda_4790bba48f35d5d527bba9490b41a1e9>::operator ()",
      268LL,
      *v3);
  return 0LL;
}
