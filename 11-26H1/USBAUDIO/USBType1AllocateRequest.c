/*
 * XREFs of USBType1AllocateRequest @ 0x140040040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall USBType1AllocateRequest(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  _QWORD *Pool2; // rbx
  char v4; // di
  PIRP Irp; // rax

  Pool2 = 0LL;
  v4 = NumberOfBytes;
  if ( PoolType == 512 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 592LL, 1096972357LL);
    if ( Pool2 )
    {
      Irp = IoAllocateIrp(v4 - 8, 0);
      Pool2[2] = Irp;
      if ( Irp )
      {
        Pool2[3] = Pool2 + 7;
      }
      else
      {
        ExFreePool(Pool2);
        return 0LL;
      }
    }
  }
  return Pool2;
}
