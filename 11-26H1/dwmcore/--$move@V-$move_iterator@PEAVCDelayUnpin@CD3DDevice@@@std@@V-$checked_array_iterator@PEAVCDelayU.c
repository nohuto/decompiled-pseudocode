/*
 * XREFs of ??$move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1800D8214
 * Callers:
 *     ?clear_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D7EB4 (-clear_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$.c)
 * Callees:
 *     ??4CDelayUnpin@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D82BC (--4CDelayUnpin@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@Z @ 0x1800D8320 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA-A_TAEA.c)
 */

__int64 __fastcall std::move<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D1::Matrix3x2F *> &,__int64>(
         a4,
         0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 3));
  while ( v4 != a3 )
  {
    CD3DDevice::CDelayUnpin::operator=(v8, v4);
    v8 += 24LL;
    v4 += 24LL;
  }
  result = a1;
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * ((v8 - *a4) >> 3);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
