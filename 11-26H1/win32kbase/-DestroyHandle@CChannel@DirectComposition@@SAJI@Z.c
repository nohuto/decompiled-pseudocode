/*
 * XREFs of ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1401022D8
 * Callers:
 *     NtDCompositionDestroyChannel @ 0x1401022C0 (NtDCompositionDestroyChannel.c)
 *     NtDCompositionCreateChannel @ 0x140168920 (NtDCompositionCreateChannel.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1400A6790 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?RemoveObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAPEAVCChannel@2@I@Z @ 0x14010235C (-RemoveObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1401023BC (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::DestroyHandle(__int64 a1)
{
  struct DirectComposition::CProcessData *v1; // rax
  struct DirectComposition::CProcessData *v2; // rbx
  DirectComposition::CChannel *v3; // rdi
  unsigned int v4; // ebx

  v1 = DirectComposition::CProcessData::Current(a1);
  v2 = v1;
  if ( v1 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v1 + 1));
    v3 = (DirectComposition::CChannel *)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(*(PRTL_GENERIC_TABLE *)v2);
    ExReleaseResourceLite(*((PERESOURCE *)v2 + 1));
    KeLeaveCriticalRegion();
    v4 = v3 == 0LL ? 0xC0000022 : 0;
    if ( v3 )
      DirectComposition::CChannel::Release(v3);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
