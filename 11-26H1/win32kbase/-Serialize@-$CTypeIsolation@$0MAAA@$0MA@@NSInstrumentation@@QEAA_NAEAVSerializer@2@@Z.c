/*
 * XREFs of ?Serialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F04B0
 * Callers:
 *     ?Serialize@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVSerializer@NSInstrumentation@@@Z @ 0x1401F06A8 (-Serialize@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsid.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ??$Serialize@I@Serializer@NSInstrumentation@@QEAA_NAEAI@Z @ 0x1401EE274 (--$Serialize@I@Serializer@NSInstrumentation@@QEAA_NAEAI@Z.c)
 *     ??$Serialize@_K@Serializer@NSInstrumentation@@QEAA_NAEA_K@Z @ 0x1401EE2C4 (--$Serialize@_K@Serializer@NSInstrumentation@@QEAA_NAEA_K@Z.c)
 *     ??$Serialize@_N@Serializer@NSInstrumentation@@QEAA_NAEA_N@Z @ 0x1401EE314 (--$Serialize@_N@Serializer@NSInstrumentation@@QEAA_NAEA_N@Z.c)
 *     ?Serialize@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFF18 (-Serialize@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Serialize(__int64 a1, NSInstrumentation::Serializer *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *i; // rdi
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v8 = *(_QWORD *)(a1 + 16);
  RIMLockShared(v8);
  v4 = *(_QWORD **)a1;
  v10 = 0LL;
  if ( v4 != (_QWORD *)a1 )
  {
    v5 = 0LL;
    do
    {
      v4 = (_QWORD *)*v4;
      ++v5;
    }
    while ( v4 != (_QWORD *)a1 );
    v10 = v5;
  }
  if ( NSInstrumentation::Serializer::Serialize<unsigned __int64>((__int64)a2, &v10)
    && NSInstrumentation::Serializer::Serialize<unsigned int>((__int64)a2, (_DWORD *)(a1 + 32))
    && NSInstrumentation::Serializer::Serialize<bool>((__int64)a2, (_BYTE *)(a1 + 36)) )
  {
    for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
    {
      if ( !NSInstrumentation::CSectionEntry<49152,192>::Serialize((__int64)i, a2) )
        goto LABEL_13;
    }
    NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v8);
    return 1;
  }
  else
  {
LABEL_13:
    NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v8);
    return 0;
  }
}
