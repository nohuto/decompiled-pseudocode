/*
 * XREFs of _GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator() @ 0x1401C205C
 * Callers:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Destroy@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SAXPEAPEAE@Z @ 0x1401EF7D0 (-Destroy@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstr.c)
 */

__int64 __fastcall GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator()(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( *(_QWORD *)(*a1 + 3752) )
    *(_QWORD *)(*a1 + 3752) = 0LL;
  result = *a1;
  if ( *(_QWORD *)(*a1 + 3744) )
  {
    gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<180224,704>,NSInstrumentation::CDeserializedTypeIsolation<40960,160>,NSInstrumentation::CDeserializedTypeIsolation<49152,192>,NSInstrumentation::CDeserializedTypeIsolation<36864,144>,NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Destroy();
    GreDeleteFastMutex(*(char **)(*a1 + 3744), v3, v4, v5);
    result = *a1;
    *(_QWORD *)(*a1 + 3744) = 0LL;
  }
  return result;
}
