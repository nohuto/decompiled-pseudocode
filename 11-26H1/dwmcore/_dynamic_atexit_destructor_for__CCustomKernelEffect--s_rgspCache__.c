/*
 * XREFs of _dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__ @ 0x1802B99E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x18021F244 (--1-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ.c)
 */

CShaderCache *dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__()
{
  CShaderCache **v0; // rbx
  __int64 v1; // rdi
  CShaderCache *result; // rax

  v0 = (CShaderCache **)&_dyn_tls_init_callback;
  v1 = 9LL;
  do
  {
    result = std::unique_ptr<CShaderCache>::~unique_ptr<CShaderCache>(--v0);
    --v1;
  }
  while ( v1 );
  return result;
}
