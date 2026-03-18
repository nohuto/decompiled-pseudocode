/*
 * XREFs of ?DestroyVmWpProcess@DXGPROCESSVMWP@@QEAAXXZ @ 0x1400805F0
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F5250 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVMWP::DestroyVmWpProcess(DXGPROCESSVMWP *this)
{
  DXGVIRTUALMACHINE *v1; // rbx
  void *v3; // rcx
  void *v4; // rcx

  v1 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 74);
  if ( v1 )
  {
    v3 = (void *)*((_QWORD *)v1 + 34);
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      *((_QWORD *)v1 + 34) = 0LL;
    }
    v4 = (void *)*((_QWORD *)v1 + 35);
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      *((_QWORD *)v1 + 35) = 0LL;
    }
    DXGVIRTUALMACHINE::DestroyVirtualMachine(v1);
    *((_QWORD *)this + 74) = 0LL;
  }
}
