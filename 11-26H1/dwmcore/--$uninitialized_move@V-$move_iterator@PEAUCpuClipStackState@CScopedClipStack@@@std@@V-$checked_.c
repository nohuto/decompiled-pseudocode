/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801787D8
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C5380 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@_J@Z @ 0x1801714BC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCVIRenderList@@@stdext@@_J@std@@YA-A_TAEAV-.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@PEAUCpuClipStackState@CScopedClipStack@@@std@@YAPEAUCpuClipStackState@CScopedClipStack@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@V30@PEAU12@@Z @ 0x18024F0D0 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CVIRenderList *> &,__int64>(
         a4,
         0xCCCCCCCCCCCCCCCDuLL * ((a3 - a2) >> 3));
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL
        * ((std::_Uninitialized_move_unchecked<std::move_iterator<CScopedClipStack::CpuClipStackState *>,CScopedClipStack::CpuClipStackState *>(
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
