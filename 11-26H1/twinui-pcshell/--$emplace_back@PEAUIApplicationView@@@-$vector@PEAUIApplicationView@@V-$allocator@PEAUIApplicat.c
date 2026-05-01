/*
 * XREFs of ??$emplace_back@PEAUIApplicationView@@@?$vector@PEAUIApplicationView@@V?$allocator@PEAUIApplicationView@@@std@@@std@@QEAAAEAPEAUIApplicationView@@$$QEAPEAU2@@Z @ 0x18031F064
 * Callers:
 *     ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18031F924 (-AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800B5EB0 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQE.c)
 */

_QWORD *__fastcall std::vector<IApplicationView *>::emplace_back<IApplicationView *>(_QWORD *a1, __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rdx

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(a1, (__int64)v3, a2);
  *v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 8;
  return (_QWORD *)v4;
}
