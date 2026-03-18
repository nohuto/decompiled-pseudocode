/*
 * XREFs of ??R?$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z @ 0x1801A353C
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801A3300 (--1-$out_param_t@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualRefere.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801A3454 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ??1?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@QEAA@XZ @ 0x1801A351C (--1-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReference@@@std@@@std.c)
 * Callees:
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1801A356C (--1CExcludeVisualReference@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CExcludeVisualReference>::operator()(__int64 a1, CExcludeVisualReference *a2)
{
  if ( a2 )
  {
    CExcludeVisualReference::~CExcludeVisualReference(a2);
    operator delete(a2, 0x18uLL);
  }
}
