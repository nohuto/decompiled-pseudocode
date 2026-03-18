/*
 * XREFs of ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14071AE78
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14071B84C (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     IoCreateDisk @ 0x140790DE0 (IoCreateDisk.c)
 * Callees:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071A544 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14071BA9C (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x14071BB4C (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x14071C624 (-CreatePartitionTable@SC_RAW@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SC_DISK::CreatePartitionTable(SC_DISK *this, struct _CREATE_DISK *a2)
{
  __int128 v4; // xmm0
  ULONG MaxPartitionCount; // eax
  SC_DISK *v6[2]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v7; // [rsp+30h] [rbp-79h] BYREF
  __int128 v8; // [rsp+38h] [rbp-71h]
  ULONG v9; // [rsp+58h] [rbp-51h]

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
