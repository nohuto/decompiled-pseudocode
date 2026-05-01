/*
 * XREFs of ?_Change_array@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z @ 0x1800FD27C
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800FD2E4 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$_Emplace_reallocate@AEBN@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z @ 0x1801D75B0 (--$_Emplace_reallocate@AEBN@-$vector@NV-$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z.c)
 *     ??$_Emplace_reallocate@N@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEAN$$QEAN@Z @ 0x1801D76A0 (--$_Emplace_reallocate@N@-$vector@NV-$allocator@N@std@@@std@@AEAAPEANQEAN$$QEAN@Z.c)
 *     ??$_Emplace_reallocate@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAPEAPEAUHWND__@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1801EA550 (--$_Emplace_reallocate@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AE.c)
 *     ??$_Emplace_reallocate@PEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAPEAPEAXQEAPEAX$$QEAPEAX@Z @ 0x1801F6830 (--$_Emplace_reallocate@PEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAPEAPEAXQEAPEAX$$QEAPEA.c)
 *     ??$_Emplace_reallocate@_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_K$$QEA_K@Z @ 0x18021F8EC (--$_Emplace_reallocate@_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_K$$QEA_K@Z.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1802B1148 (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<void *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
