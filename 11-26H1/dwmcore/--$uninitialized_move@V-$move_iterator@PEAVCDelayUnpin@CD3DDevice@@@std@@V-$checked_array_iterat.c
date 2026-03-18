/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1802961A0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800D80E4 (-ensure_extra_capacity@-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@de.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@Z @ 0x1800D8320 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA-A_TAEA.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@PEAVCDelayUnpin@CD3DDevice@@@std@@YAPEAVCDelayUnpin@CD3DDevice@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@V30@PEAV12@@Z @ 0x180295F04 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@PEAVCDelayUn.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
        __int64 a1,
        struct CD3DDevice::CDelayUnpin *a2,
        struct CD3DDevice::CDelayUnpin *a3,
        _QWORD *a4)
{
  CD3DDevice::CDelayUnpin *v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = (CD3DDevice::CDelayUnpin *)std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D1::Matrix3x2F *> &,__int64>(
                                    a4,
                                    0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 3));
  a4[2] = 0xAAAAAAAAAAAAAAABuLL
        * (((__int64)std::_Uninitialized_move_unchecked<std::move_iterator<CD3DDevice::CDelayUnpin *>,CD3DDevice::CDelayUnpin *>(
                       a2,
                       a3,
                       v8)
          - *a4) >> 3);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
