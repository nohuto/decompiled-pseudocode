/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x180296048
 * Callers:
 *     ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x1800D7FB4 (-reserve_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@.c)
 * Callees:
 *     ??4CDelayUnpin@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D82BC (--4CDelayUnpin@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@Z @ 0x1800D8320 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA-A_TAEA.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v7 = a3;
  v8 = (__int64 *)std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D1::Matrix3x2F *> &,__int64>(
                    a4,
                    0x5555555555555555LL * (a3 - a2));
  while ( a2 != v7 )
  {
    v8 -= 3;
    v7 -= 3;
    CD3DDevice::CDelayUnpin::operator=(v8, v7);
  }
  result = a1;
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v8 - *a4) >> 3);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
