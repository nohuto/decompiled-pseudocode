/*
 * XREFs of ?Deserialize@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF360
 * Callers:
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF434 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSI.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ??$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z @ 0x1401EE1EC (--$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z.c)
 *     ??$Deserialize@_K@Deserializer@NSInstrumentation@@QEAA_NAEA_K@Z @ 0x1401EE214 (--$Deserialize@_K@Deserializer@NSInstrumentation@@QEAA_NAEA_K@Z.c)
 *     ??$Deserialize@_N@Deserializer@NSInstrumentation@@QEAA_NAEA_N@Z @ 0x1401EE248 (--$Deserialize@_N@Deserializer@NSInstrumentation@@QEAA_NAEA_N@Z.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98 (-Deserialize@-$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 */

__int64 __fastcall NSInstrumentation::CDeserializedTypeIsolation<909312,3552>::Deserialize(
        __int64 a1,
        NSInstrumentation::Deserializer *a2)
{
  PVOID *v4; // rcx
  PVOID *v5; // rdx
  PVOID **v6; // rax
  unsigned __int64 v7; // rdi
  PVOID **v8; // rax
  PVOID ***v9; // rcx
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  if ( !NSInstrumentation::Deserializer::Deserialize<unsigned __int64>((__int64)a2, &v11)
    || !NSInstrumentation::Deserializer::Deserialize<unsigned int>((__int64)a2, (_DWORD *)(a1 + 32))
    || !NSInstrumentation::Deserializer::Deserialize<bool>(a2, (_BYTE *)(a1 + 36)) )
  {
    return 0LL;
  }
  while ( 1 )
  {
    v4 = *(PVOID **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v5 = (PVOID *)*v4;
    if ( *((PVOID **)*v4 + 1) != v4 || (v6 = (PVOID **)v4[1], *v6 != v4) )
LABEL_13:
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    NSInstrumentation::CSectionEntry<32768,128>::Destroy(v4);
  }
  v7 = 0LL;
  while ( v7 < v11 )
  {
    v8 = NSInstrumentation::CDeserializedSectionEntry<909312,3552>::Deserialize(a2);
    if ( !v8 )
      return 0LL;
    v9 = *(PVOID ****)(a1 + 8);
    if ( *v9 != (PVOID **)a1 )
      goto LABEL_13;
    *v8 = (PVOID *)a1;
    ++v7;
    v8[1] = (PVOID *)v9;
    *v9 = v8;
    *(_QWORD *)(a1 + 8) = v8;
  }
  return a1;
}
