/*
 * XREFs of ?Destroy@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SAXPEAPEAE@Z @ 0x1401EF7D0
 * Callers:
 *     _GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator() @ 0x1401C205C (_GrepCaptureLiveMemoryDump_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ?Destroy@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF730 (-Destroy@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF780 (-Destroy@-$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<180224,704>,NSInstrumentation::CDeserializedTypeIsolation<40960,160>,NSInstrumentation::CDeserializedTypeIsolation<49152,192>,NSInstrumentation::CDeserializedTypeIsolation<36864,144>,NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Destroy(
        __int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
    NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Destroy(v2);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
    NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Destroy(v3);
  v4 = *(_QWORD **)(a1 + 24);
  if ( v4 )
    NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Destroy(v4);
  v5 = *(_QWORD **)(a1 + 8);
  if ( v5 )
    NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Destroy(v5);
  v6 = *(_QWORD **)(a1 + 32);
  if ( v6 )
    NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Destroy(v6);
  v7 = *(_QWORD **)(a1 + 48);
  if ( v7 )
    NSInstrumentation::CDeserializedTypeIsolation<909312,3552>::Destroy(v7);
  v8 = *(_QWORD **)(a1 + 56);
  if ( v8 )
    NSInstrumentation::CDeserializedTypeIsolation<909312,3552>::Destroy(v8);
}
