/*
 * XREFs of ?IsVbr@SC_DISK@@QEAAEXZ @ 0x14072006C
 * Callers:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x140720200 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 * Callees:
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140720B48 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 */

char __fastcall SC_DISK::IsVbr(SC_DISK *this)
{
  __int64 v1; // rsi
  char v2; // bl
  unsigned int i; // ecx
  unsigned int j; // edi

  v1 = *((_QWORD *)this + 33);
  v2 = 0;
  if ( *(_WORD *)(v1 + 510) == 0xAA55 && ((*(_BYTE *)v1 + 23) & 0xFD) == 0 )
  {
    v2 = 1;
    if ( *((_DWORD *)this + 56) == 11 )
    {
      if ( *(_QWORD *)(v1 + 3) != 0x202020205346544ELL )
      {
        for ( i = 0; i < 4; ++i )
        {
          if ( *(_BYTE *)(v1 + 16LL * i + 450) )
            goto LABEL_9;
        }
      }
    }
    else
    {
LABEL_9:
      for ( j = 0; j < 4; ++j )
      {
        if ( !MBR_ENTRY::Validate((MBR_ENTRY *)(v1 + 16LL * j + 446), 0, *((_QWORD *)this + 31)) )
          return v2;
      }
      return 0;
    }
  }
  return v2;
}
