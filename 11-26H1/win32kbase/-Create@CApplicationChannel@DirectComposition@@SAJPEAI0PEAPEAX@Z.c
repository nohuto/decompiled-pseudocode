/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1400B1254
 * Callers:
 *     NtDCompositionCreateChannel @ 0x140168920 (NtDCompositionCreateChannel.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1400A6790 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400B0EA0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1400B13A0 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1401023BC (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1, unsigned int *a2, void **a3)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbp
  DirectComposition::CApplicationChannel *v7; // rax
  DirectComposition::CApplicationChannel *v8; // rax
  DirectComposition::CApplicationChannel *v9; // rsi
  __int64 v10; // rcx
  signed int v11; // edi
  struct DirectComposition::CProcessData *v12; // rax
  struct DirectComposition::CProcessData *v13; // r14
  struct _RTL_GENERIC_TABLE *v14; // rcx
  PVOID inserted; // rbx
  _DWORD Buffer[2]; // [rsp+20h] [rbp-28h] BYREF
  DirectComposition::CApplicationChannel *v18; // [rsp+28h] [rbp-20h]

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1);
  if ( !DefaultConnection )
    return (unsigned int)-1073741790;
  v7 = (DirectComposition::CApplicationChannel *)DirectComposition::Memory::AllocateAndClear_0(0xB20uLL, 0x63614344u, 1);
  if ( !v7
    || (v8 = (DirectComposition::CApplicationChannel *)DirectComposition::CApplicationChannel::CApplicationChannel(
                                                         v7,
                                                         DefaultConnection,
                                                         1,
                                                         *a2),
        (v9 = v8) == 0LL) )
  {
    v11 = -1073741801;
    goto LABEL_8;
  }
  v11 = DirectComposition::CApplicationChannel::Initialize(v8, a2, a3);
  if ( v11 < 0 )
    goto LABEL_10;
  v12 = DirectComposition::CProcessData::Current(v10);
  v13 = v12;
  if ( !v12 )
  {
    v11 = -1073741823;
    goto LABEL_10;
  }
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v12 + 1));
  Buffer[0] = *((_DWORD *)v9 + 7);
  v14 = *(struct _RTL_GENERIC_TABLE **)v13;
  Buffer[1] = 0;
  v18 = v9;
  inserted = RtlInsertElementGenericTable(v14, Buffer, 0x10u, 0LL);
  v11 = inserted == 0LL ? 0xC0000017 : 0;
  ExReleaseResourceLite(*((PERESOURCE *)v13 + 1));
  KeLeaveCriticalRegion();
  if ( !inserted )
  {
LABEL_10:
    DirectComposition::CChannel::Release(v9);
    goto LABEL_8;
  }
  *a1 = *((_DWORD *)v9 + 7);
LABEL_8:
  DirectComposition::CConnection::Release(DefaultConnection);
  return (unsigned int)v11;
}
