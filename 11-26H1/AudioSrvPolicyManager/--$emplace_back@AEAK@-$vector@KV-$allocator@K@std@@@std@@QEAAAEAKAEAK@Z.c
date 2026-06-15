/*
 * XREFs of ??$emplace_back@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAAEAKAEAK@Z @ 0x180042FF4
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180044920 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 */

_DWORD *__fastcall std::vector<unsigned long>::emplace_back<unsigned long &>(_QWORD *a1, int *a2)
{
  int *v3; // rdx
  __int64 v4; // rdx

  v3 = (int *)a1[1];
  if ( v3 == (int *)a1[2] )
    return std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(a1, (__int64)v3, a2);
  *v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 4;
  return (_DWORD *)v4;
}
