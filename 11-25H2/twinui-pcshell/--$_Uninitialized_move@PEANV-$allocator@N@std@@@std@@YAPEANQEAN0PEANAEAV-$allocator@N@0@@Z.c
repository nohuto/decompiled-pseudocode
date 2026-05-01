/*
 * XREFs of ??$_Uninitialized_move@PEANV?$allocator@N@std@@@std@@YAPEANQEAN0PEANAEAV?$allocator@N@0@@Z @ 0x18033EBB0
 * Callers:
 *     ??$_Emplace_reallocate@AEBN@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z @ 0x1801D75B0 (--$_Emplace_reallocate@AEBN@-$vector@NV-$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z.c)
 *     ??$_Emplace_reallocate@N@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEAN$$QEAN@Z @ 0x1801D76A0 (--$_Emplace_reallocate@N@-$vector@NV-$allocator@N@std@@@std@@AEAAPEANQEAN$$QEAN@Z.c)
 * Callees:
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall std::_Uninitialized_move<double *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + 8 * (v4 >> 3);
}
