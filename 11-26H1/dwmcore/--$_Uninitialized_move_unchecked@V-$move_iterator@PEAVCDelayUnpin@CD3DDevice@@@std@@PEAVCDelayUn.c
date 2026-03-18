/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@PEAVCDelayUnpin@CD3DDevice@@@std@@YAPEAVCDelayUnpin@CD3DDevice@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@V30@PEAV12@@Z @ 0x180295F04
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1802961A0 (--$uninitialized_move@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterat.c)
 * Callees:
 *     ??0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z @ 0x1802963A0 (--0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z.c)
 */

CD3DDevice::CDelayUnpin *__fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CD3DDevice::CDelayUnpin *>,CD3DDevice::CDelayUnpin *>(
        struct CD3DDevice::CDelayUnpin *a1,
        struct CD3DDevice::CDelayUnpin *a2,
        CD3DDevice::CDelayUnpin *a3)
{
  while ( a1 != a2 )
  {
    CD3DDevice::CDelayUnpin::CDelayUnpin(a3, a1);
    a3 = (CD3DDevice::CDelayUnpin *)((char *)a3 + 24);
    a1 = (struct CD3DDevice::CDelayUnpin *)((char *)a1 + 24);
  }
  return a3;
}
