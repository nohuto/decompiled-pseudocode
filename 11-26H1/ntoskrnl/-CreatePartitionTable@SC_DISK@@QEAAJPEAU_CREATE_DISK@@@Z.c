/*
 * XREFs of ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14071FB08
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1407204DC (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     IoCreateDisk @ 0x140793910 (IoCreateDisk.c)
 * Callees:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071F1D4 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14072072C (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x1407207DC (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x1407212B4 (-CreatePartitionTable@SC_RAW@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SC_DISK::CreatePartitionTable(SC_DISK *this, struct _CREATE_DISK *a2)
{
  __int128 v4; // xmm0
  DWORD MaxPartitionCount; // eax
  SC_DISK *v6[2]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v7; // [rsp+30h] [rbp-79h] BYREF
  __int128 v8; // [rsp+38h] [rbp-71h]
  DWORD v9; // [rsp+58h] [rbp-51h]

  if ( a2 )
  {
    if ( a2->PartitionStyle == PARTITION_STYLE_MBR )
    {
      SC_MBR::Initialize((SC_MBR *)v6, this);
      return SC_MBR::CreatePartitionTable((SC_MBR *)v6, a2);
    }
    if ( a2->PartitionStyle == PARTITION_STYLE_GPT )
    {
      v6[0] = this;
      memset_0(&v7, 0, 0xC0uLL);
      v4 = *(_OWORD *)&a2->Mbr.Signature;
      MaxPartitionCount = a2->Gpt.MaxPartitionCount;
      v7 = 1LL;
      v9 = MaxPartitionCount;
      v8 = v4;
      return SC_GPT::WritePartitionTable(v6, (struct SC_DISK_LAYOUT *)&v7, 1);
    }
    if ( a2->PartitionStyle != PARTITION_STYLE_RAW )
      return 3221225659LL;
  }
  v6[0] = this;
  return SC_RAW::CreatePartitionTable((SC_RAW *)v6);
}
