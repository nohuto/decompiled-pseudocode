/*
 * XREFs of ?Destroy@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF780
 * Callers:
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF434 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSI.c)
 *     ?Destroy@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SAXPEAPEAE@Z @ 0x1401EF7D0 (-Destroy@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstr.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EBC98 (-Destroy@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF6DC (-Destroy@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CDeserializedTypeIsolation<909312,3552>::Destroy(_QWORD *P)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  while ( 1 )
  {
    v2 = (_QWORD *)*P;
    if ( (_QWORD *)*P == P )
      break;
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    NSInstrumentation::CDeserializedSectionEntry<32768,128>::Destroy(v2);
  }
  NSInstrumentation::CTypeIsolation<20480,80>::Destroy(P);
}
