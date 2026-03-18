/*
 * XREFs of ?Deserialize@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EEF3C
 * Callers:
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEEA4 (-Deserialize@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeseria.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A2E8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ??$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z @ 0x1401EE1EC (--$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z.c)
 *     ??$Deserialize@_K@Deserializer@NSInstrumentation@@QEAA_NAEA_K@Z @ 0x1401EE214 (--$Deserialize@_K@Deserializer@NSInstrumentation@@QEAA_NAEA_K@Z.c)
 *     ??$Deserialize@_N@Deserializer@NSInstrumentation@@QEAA_NAEA_N@Z @ 0x1401EE248 (--$Deserialize@_N@Deserializer@NSInstrumentation@@QEAA_NAEA_N@Z.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE680 (-Deserialize@-$CDeserializedSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 */

__int64 __fastcall NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Deserialize(
        __int64 a1,
        NSInstrumentation::Deserializer *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
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
    v4 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
LABEL_13:
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    NSInstrumentation::CSectionEntry<49152,192>::Destroy(v4);
  }
  v7 = 0LL;
  while ( v7 < v11 )
  {
    v8 = NSInstrumentation::CDeserializedSectionEntry<180224,704>::Deserialize(a2);
    if ( !v8 )
      return 0LL;
    v9 = *(_QWORD **)(a1 + 8);
    if ( *v9 != a1 )
      goto LABEL_13;
    *v8 = a1;
    ++v7;
    v8[1] = v9;
    *v9 = v8;
    *(_QWORD *)(a1 + 8) = v8;
  }
  return a1;
}
