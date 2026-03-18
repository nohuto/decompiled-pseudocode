/*
 * XREFs of ??1?$unique_ptr@VCKst@@U?$default_delete@VCKst@@@std@@@std@@QEAA@XZ @ 0x18021F224
 * Callers:
 *     ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1802148F8 (-Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x1802946DC (--_GCKst@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CKst>::~unique_ptr<CKst>(CKst **a1, unsigned int a2)
{
  CKst *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CKst::`scalar deleting destructor'(v2, a2);
  return result;
}
