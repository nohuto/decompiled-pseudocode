/*
 * XREFs of MiZeroPageFile @ 0x1406EB650
 * Callers:
 *     MiZeroAllPageFiles @ 0x140C066B4 (MiZeroAllPageFiles.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmZeroPageWrite @ 0x140466D8C (MmZeroPageWrite.c)
 *     MiTransferMemoryPagefileData @ 0x1404FC9E8 (MiTransferMemoryPagefileData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiZeroPageFile(PVOID P)
{
  __int64 v2; // rsi
  unsigned __int8 v3; // cf
  unsigned int v4; // edi
  int v5; // r12d
  unsigned int v6; // r13d
  KIRQL v7; // al
  int v8; // r9d
  unsigned int v9; // r15d
  KIRQL i; // r8
  unsigned int v11; // eax
  volatile LONG *v12; // rcx
  __int64 v13; // rcx
  volatile LONG *v14; // rcx
  unsigned __int64 v16; // [rsp+28h] [rbp-A9h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-A1h] BYREF
  PRKEVENT Event; // [rsp+38h] [rbp-99h]
  struct _MDL MemoryDescriptorList; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v20[16]; // [rsp+78h] [rbp-59h] BYREF

  memset_0(&MemoryDescriptorList, 0, 0xB0uLL);
  v2 = *((_QWORD *)P + 4);
  Event = (PRKEVENT)*((_QWORD *)P + 5);
  ExFreePoolWithTag(P, 0);
  v3 = _bittest16((const signed __int16 *)(v2 + 172), 0xBu);
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 0LL;
  if ( v3 )
  {
    *(_DWORD *)&MemoryDescriptorList.Size = 131120;
    memset64(v20, (unsigned __int64)qword_140E36180[0], 0x10uLL);
  }
  else
  {
    *(_DWORD *)&MemoryDescriptorList.Size = 48;
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 200));
  v8 = *(_DWORD *)v2;
  v9 = 1;
  for ( i = v7; v9 < *(_DWORD *)v2; ++v9 )
  {
    if ( _bittest64(*(const signed __int64 **)(*(_QWORD *)(v2 + 80) + 16LL), v9) )
    {
      if ( v4 )
        goto LABEL_13;
    }
    else
    {
      v11 = v9;
      if ( v4 )
        v11 = v6;
      ++v4;
      v6 = v11;
      if ( v4 == 16 || v9 == v8 - 1 )
        v5 = 1;
    }
    if ( v5 )
    {
LABEL_13:
      v12 = (volatile LONG *)(v2 + 200);
      if ( i == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v12);
      else
        ExReleaseSpinLockExclusive(v12, i);
      if ( _bittest16((const signed __int16 *)(v2 + 172), 0xBu) )
      {
        MemoryDescriptorList.ByteCount = v4 << 12;
        MiTransferMemoryPagefileData(v2, (__int64)&MemoryDescriptorList, v6, 0);
      }
      else
      {
        v13 = *(_QWORD *)(v2 + 24);
        v17 = (unsigned __int64)v6 << 12;
        v16 = (unsigned __int64)v4 << 12;
        MmZeroPageWrite(v13, (__int64)&v17, (__int64 *)&v16, 0);
      }
      v5 = 0;
      i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 200));
      v4 = 0;
    }
    v8 = *(_DWORD *)v2;
  }
  v14 = (volatile LONG *)(v2 + 200);
  if ( i == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  else
    ExReleaseSpinLockExclusive(v14, i);
  if ( _bittest16((const signed __int16 *)(v2 + 172), 0xBu) && (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return KeSetEvent(Event, 0, 0);
}
