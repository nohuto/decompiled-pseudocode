/*
 * XREFs of ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF434
 * Callers:
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF578 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0MAAA@$0MA@@NSIns.c)
 * Callees:
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401C18B4 (-Create@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EE458 (-Create@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EE4D0 (-Create@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EEDD0 (-Deserialize@-$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAV.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF010 (-Deserialize@-$CDeserializedTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDe.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF360 (-Deserialize@-$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAV.c)
 *     ?Destroy@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF730 (-Destroy@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF780 (-Destroy@-$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

char __fastcall gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Deserialize(
        _QWORD *a1,
        NSInstrumentation::Deserializer *a2)
{
  void *v4; // rax
  char v5; // bl
  void *v6; // rdi
  void *v8; // rax
  void *v9; // rdi
  void *v10; // rax

  v4 = NSInstrumentation::CTypeIsolation<81920,320>::Create();
  v5 = 0;
  v6 = v4;
  if ( !v4 )
    return 0;
  if ( !NSInstrumentation::CDeserializedTypeIsolation<81920,320>::Deserialize((__int64)v4, a2) )
  {
    NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Destroy(v6);
    return 0;
  }
  a1[4] = v6;
  v8 = NSInstrumentation::CTypeIsolation<909312,3552>::Create();
  v9 = v8;
  if ( v8 )
  {
    if ( NSInstrumentation::CDeserializedTypeIsolation<909312,3552>::Deserialize((__int64)v8, a2) )
    {
      a1[6] = v9;
      v10 = NSInstrumentation::CTypeIsolation<32768,128>::Create();
      v9 = v10;
      if ( !v10 )
        return v5;
      if ( NSInstrumentation::CDeserializedTypeIsolation<32768,128>::Deserialize((__int64)v10, a2) )
      {
        a1[7] = v9;
        return 1;
      }
    }
    NSInstrumentation::CDeserializedTypeIsolation<909312,3552>::Destroy(v9);
  }
  return v5;
}
