/*
 * XREFs of ??$_Copy_memmove@PEANPEAN@std@@YAPEANPEAN00@Z @ 0x18033D2B0
 * Callers:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x18013B8F4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ?erase@?$vector@NV?$allocator@N@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@N@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@N@std@@@std@@@2@@Z @ 0x1803593C0 (-erase@-$vector@NV-$allocator@N@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_t.c)
 * Callees:
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<double *,double *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
