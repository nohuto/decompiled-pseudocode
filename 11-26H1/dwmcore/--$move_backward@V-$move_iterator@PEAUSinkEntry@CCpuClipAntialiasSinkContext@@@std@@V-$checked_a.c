/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180207258
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C2910 (--$emplace_back@$$V@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USin.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@_J@Z @ 0x1802073B0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@st.c)
 *     ??4SinkEntry@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x18020742C (--4SinkEntry@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v7 = a3;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *> &,__int64>(
         a4,
         0x7B425ED097B425EDLL * ((a3 - a2) >> 4));
  while ( a2 != v7 )
  {
    v8 -= 432LL;
    v7 -= 432LL;
    CCpuClipAntialiasSinkContext::SinkEntry::operator=(v8, v7);
  }
  result = a1;
  a4[2] = 0x84BDA12F684BDA13uLL * ((v8 - *a4) >> 4);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
