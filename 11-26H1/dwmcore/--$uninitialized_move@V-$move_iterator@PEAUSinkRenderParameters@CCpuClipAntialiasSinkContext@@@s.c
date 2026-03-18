/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x18019DC78
 * Callers:
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x1800C57A0 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@YAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@V30@PEAU12@@Z @ 0x18019DD20 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSink.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 result; // rax
  __int64 v11; // xmm1_8

  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a4, 0xCCCCCCCCCCCCCCCDuLL * ((a3 - a2) >> 3));
  v8 = std::_Uninitialized_move_unchecked<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,CCpuClipAntialiasSinkContext::SinkRenderParameters *>(
         a2,
         a3,
         *a4 + 40LL * a4[2]);
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((v8 - v9) >> 3);
  result = a1;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
