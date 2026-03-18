/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14005523C
 * Callers:
 *     NtDCompositionCreateChannel @ 0x140121B00 (NtDCompositionCreateChannel.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x14005538C (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400554CC (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x140055860 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x140055894 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1, unsigned int *a2, void **a3)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbp
  DirectComposition::CApplicationChannel *v7; // rax
  unsigned int v8; // edx
  DirectComposition::CApplicationChannel *v9; // rax
  DirectComposition::CApplicationChannel *v10; // rsi
  signed int v11; // edi
  struct DirectComposition::CProcessData *v12; // rax
  struct DirectComposition::CProcessData *v13; // rdi
  struct _RTL_GENERIC_TABLE *v14; // rcx
  PVOID inserted; // rbx
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CApplicationChannel *v18; // [rsp+28h] [rbp-10h]

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( !DefaultConnection )
    return (unsigned int)-1073741790;
  v7 = (DirectComposition::CApplicationChannel *)DirectComposition::Memory::AllocateAndClear_0(
                                                   0xB20uLL,
                                                   1667318596LL,
                                                   1);
  if ( !v7
    || (v9 = (DirectComposition::CApplicationChannel *)DirectComposition::CApplicationChannel::CApplicationChannel(
                                                         v7,
                                                         DefaultConnection,
                                                         1,
                                                         *a2),
        (v10 = v9) == 0LL) )
  {
    v11 = -1073741801;
    goto LABEL_8;
  }
  v11 = DirectComposition::CApplicationChannel::Initialize(v9, a2, a3);
  if ( v11 < 0 )
    goto LABEL_13;
  v12 = DirectComposition::CProcessData::Current();
  v13 = v12;
  if ( !v12 )
  {
    v11 = -1073741823;
    goto LABEL_13;
  }
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v12 + 1));
  Buffer[0] = *((_DWORD *)v10 + 7);
  v14 = *(struct _RTL_GENERIC_TABLE **)v13;
  Buffer[1] = 0;
  v18 = v10;
  inserted = RtlInsertElementGenericTable(v14, Buffer, 0x10u, 0LL);
  ExReleaseResourceLite(*((PERESOURCE *)v13 + 1));
  KeLeaveCriticalRegion();
  v11 = inserted == 0LL ? 0xC0000017 : 0;
  if ( !inserted )
  {
LABEL_13:
    DirectComposition::CChannel::Release(v10);
    goto LABEL_8;
  }
  *a1 = *((_DWORD *)v10 + 7);
LABEL_8:
  DirectComposition::CConnection::Release(DefaultConnection, v8);
  return (unsigned int)v11;
}
