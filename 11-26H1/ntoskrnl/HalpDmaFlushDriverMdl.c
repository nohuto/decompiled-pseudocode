/*
 * XREFs of HalpDmaFlushDriverMdl @ 0x14057B1D8
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x1404379C0 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140437D70 (HalMapTransferEx.c)
 * Callees:
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 */

char __fastcall HalpDmaFlushDriverMdl(_QWORD *BugCheckParameter4, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  char result; // al

  if ( BugCheckParameter4 )
  {
    v5 = BugCheckParameter4;
    do
    {
      LOBYTE(a3) = 1;
      result = KeFlushIoBuffers((ULONG_PTR)v5, a2, a3, a4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  return result;
}
