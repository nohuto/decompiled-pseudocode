/*
 * XREFs of ?GetFrameIdFromBatchId@CApplicationChannel@DirectComposition@@QEBA_KK@Z @ 0x1400B3B04
 * Callers:
 *     NtDCompositionGetFrameIdFromBatchId @ 0x1400B3A50 (NtDCompositionGetFrameIdFromBatchId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetFrameIdFromBatchId(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2)
{
  unsigned int v3; // r8d
  __int64 v4; // r9
  int v5; // r11d
  __int64 v6; // rcx

  v3 = a2 & 0x7F;
  v4 = 0LL;
  do
  {
    v5 = *((_DWORD *)this + 4 * v3 + 146);
    v6 = *((_QWORD *)this + 2 * v3 + 74);
    if ( v5 == a2 && !v6 && a2 > 1 )
      v3 = --a2 & 0x7F;
  }
  while ( v5 != *((_DWORD *)this + 4 * v3 + 146) || v6 != *((_QWORD *)this + 2 * v3 + 74) );
  if ( v5 == a2 )
    return v6;
  return v4;
}
