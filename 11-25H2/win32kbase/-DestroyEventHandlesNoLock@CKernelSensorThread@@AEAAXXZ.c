/*
 * XREFs of ?DestroyEventHandlesNoLock@CKernelSensorThread@@AEAAXXZ @ 0x140150F80
 * Callers:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x140150F40 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CKernelSensorThread::DestroyEventHandlesNoLock(CKernelSensorThread *this)
{
  HANDLE *v1; // rbx
  __int64 v2; // rdi

  v1 = (HANDLE *)((char *)this + 48);
  v2 = 5LL;
  do
  {
    if ( *v1 )
    {
      ZwClose(*v1);
      *v1 = 0LL;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
