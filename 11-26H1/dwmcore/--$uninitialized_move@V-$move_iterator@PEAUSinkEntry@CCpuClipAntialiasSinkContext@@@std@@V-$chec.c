/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180207314
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C2910 (--$emplace_back@$$V@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USin.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@_J@Z @ 0x1802073B0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@st.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@YAPEAUSinkEntry@CCpuClipAntialiasSinkContext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@V30@PEAU12@@Z @ 0x1802073D8 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@s.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *> &,__int64>(
         a4,
         0x84BDA12F684BDA13uLL * ((a3 - a2) >> 4));
  a4[2] = 0x84BDA12F684BDA13uLL
        * ((std::_Uninitialized_move_unchecked<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,CCpuClipAntialiasSinkContext::SinkEntry *>(
              a2,
              a3,
              v8)
          - *a4) >> 4);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
