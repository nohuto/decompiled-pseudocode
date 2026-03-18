/*
 * XREFs of ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400D2054
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400D35B8 (-Allocate@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14024AD7C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14028ECFC (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402F352C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1402F39DC (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D21E8 (-ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

void __fastcall NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(
        __int64 a1)
{
  if ( !*(_BYTE *)(a1 + 8) )
  {
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(*(NSInstrumentation::CPlatformReaderWriterLock **)a1);
    *(_BYTE *)(a1 + 8) = 1;
  }
}
