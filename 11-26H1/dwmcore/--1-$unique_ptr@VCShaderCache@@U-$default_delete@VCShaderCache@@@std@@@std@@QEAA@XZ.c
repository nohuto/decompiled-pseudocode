/*
 * XREFs of ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x18021F244
 * Callers:
 *     _dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__ @ 0x1802B99E0 (_dynamic_atexit_destructor_for__CCustomKernelEffect--s_rgspCache__.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x180175B78 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *__fastcall std::unique_ptr<CShaderCache>::~unique_ptr<CShaderCache>(CShaderCache **a1)
{
  CShaderCache *v1; // rcx
  CShaderCache *result; // rax

  v1 = *a1;
  if ( v1 )
    return CShaderCache::`scalar deleting destructor'(v1);
  return result;
}
