/*
 * XREFs of ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF4F4
 * Callers:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 * Callees:
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140186E14 (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEEA4 (-Deserialize@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeseria.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF1B8 (-Deserialize@-$CDeserializedTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDe.c)
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF578 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0MAAA@$0MA@@NSIns.c)
 *     ?Destroy@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF730 (-Destroy@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

char __fastcall gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<180224,704>,NSInstrumentation::CDeserializedTypeIsolation<40960,160>,NSInstrumentation::CDeserializedTypeIsolation<49152,192>,NSInstrumentation::CDeserializedTypeIsolation<36864,144>,NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Deserialize(
        _QWORD *a1,
        NSInstrumentation::Deserializer *a2)
{
  void *v4; // rax
  char v5; // bl
  void *v6; // rax
  void *v7; // rdi

  v4 = NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Deserialize((__int64)a2);
  v5 = 0;
  if ( v4 )
  {
    *a1 = v4;
    v6 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
    v7 = v6;
    if ( v6 )
    {
      if ( NSInstrumentation::CDeserializedTypeIsolation<40960,160>::Deserialize((__int64)v6, a2) )
      {
        a1[2] = v7;
        v5 = gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<49152,192>,NSInstrumentation::CDeserializedTypeIsolation<36864,144>,NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Deserialize(
               a1,
               a2);
      }
      else
      {
        NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Destroy(v7);
      }
    }
    LOBYTE(v4) = v5;
  }
  return (char)v4;
}
