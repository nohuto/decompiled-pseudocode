/*
 * XREFs of ?Serialize@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVSerializer@NSInstrumentation@@@Z @ 0x1401F06A8
 * Callers:
 *     ?Serialize@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVSerializer@NSInstrumentation@@@Z @ 0x1401F0640 (-Serialize@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V.c)
 * Callees:
 *     ?Serialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F00C8 (-Serialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F0258 (-Serialize@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F0320 (-Serialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F04B0 (-Serialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F0578 (-Serialize@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 */

bool __fastcall gdi::TypeIsolationFactory<NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<32768,128>>::Serialize(
        _QWORD *a1,
        NSInstrumentation::Serializer *a2)
{
  char v3; // bl
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v3 = 0;
  v4 = a1[3];
  if ( !v4 || !NSInstrumentation::CTypeIsolation<49152,192>::Serialize(v4, a2) )
    return 0;
  v6 = a1[1];
  if ( v6 )
  {
    if ( NSInstrumentation::CTypeIsolation<36864,144>::Serialize(v6, a2) )
    {
      v7 = a1[4];
      if ( v7 )
      {
        if ( NSInstrumentation::CTypeIsolation<81920,320>::Serialize(v7, a2) )
        {
          v8 = a1[6];
          if ( v8 )
          {
            if ( NSInstrumentation::CTypeIsolation<909312,3552>::Serialize(v8, a2) )
            {
              v9 = a1[7];
              if ( v9 )
                return NSInstrumentation::CTypeIsolation<32768,128>::Serialize(v9, a2) != 0;
            }
          }
        }
      }
    }
  }
  return v3;
}
