/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071F1D4
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14071FB08 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1407204DC (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     crc32 @ 0x14047DD24 (crc32.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14071EAC0 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14071EEA8 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x14072001C (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1407205C0 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x140720648 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140793650 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140793774 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2, char a3)
{
  SC_DISK *v3; // r9
  __int64 v6; // rdi
  unsigned int v7; // ecx
  int Header; // ebx
  unsigned int v9; // edx
  unsigned int v10; // r12d
  unsigned int v11; // r8d
  unsigned int v12; // r12d
  int v13; // r15d
  __int64 v14; // r13
  unsigned __int64 v15; // r13
  __int64 v16; // rsi
  char *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r11
  __int64 v22; // rbx
  __int64 v23; // r12
  int v24; // r11d
  struct _GUID *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rt2
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned int v36; // r8d
  unsigned __int64 v37; // rbx
  unsigned int v39; // [rsp+20h] [rbp-58h]
  int v40; // [rsp+24h] [rbp-54h]
  int v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+30h] [rbp-48h]
  char *v43; // [rsp+38h] [rbp-40h]
  unsigned int v45; // [rsp+98h] [rbp+20h]

  v3 = *this;
  v41 = 0;
  v6 = *((_QWORD *)*this + 33);
  if ( a3 )
  {
    if ( *(_WORD *)(v6 + 510) == 0xAA55 )
      v41 = *(_DWORD *)(v6 + 440);
    v7 = *((_DWORD *)a2 + 10);
    if ( v7 <= 0x80 )
    {
      v7 = 128;
    }
    else if ( v7 > 0x400 )
    {
      return (unsigned int)-1073741811;
    }
    v40 = 128;
    v9 = -*((_DWORD *)v3 + 59) & ((v7 << 7) + *((_DWORD *)v3 + 59) - 1);
    v10 = v9 >> *((_DWORD *)v3 + 60);
    v11 = v9 >> 7;
    v42 = v10 + 2;
  }
  else
  {
    v12 = 2 - ((*((_BYTE *)v3 + 200) & 1) != 0);
    v13 = 0;
    while ( 1 )
    {
      Header = SC_GPT::ReadHeader(this, v13, (struct GPT_HEADER *)v6);
      if ( Header >= 0 )
        break;
      if ( ++v13 >= v12 )
        return (unsigned int)Header;
    }
    v3 = *this;
    v11 = *(_DWORD *)(v6 + 80);
    v42 = *(_QWORD *)(v6 + 40);
    v40 = *(_DWORD *)(v6 + 84);
    v9 = -*((_DWORD *)*this + 59) & (v11 * v40 + *((_DWORD *)*this + 59) - 1);
    v10 = v9 >> *((_DWORD *)*this + 60);
  }
  v39 = v10;
  v45 = v11;
  if ( *((_DWORD *)a2 + 1) > v11 )
    return (unsigned int)-1073741811;
  v14 = *((_QWORD *)v3 + 31);
  if ( (*((_DWORD *)v3 + 50) & 1) != 0 )
    v15 = v14 - 1;
  else
    v15 = v14 - v10 - 2;
  v16 = v9 + (2 << *((_DWORD *)v3 + 60));
  v17 = (char *)SC_ENV::Allocate((unsigned int)v16, v9, v11, 1u);
  v18 = (__int64)v17;
  if ( v17 )
  {
    v19 = 1 << *((_DWORD *)*this + 60);
    v20 = (__int64)&v17[v16 - v19];
    v21 = 0LL;
    v43 = &v17[v19];
    v22 = (__int64)&v17[v19 + 48];
    while ( (unsigned int)v21 < *((_DWORD *)a2 + 1) )
    {
      v23 = 144 * v21;
      if ( !SC_PART_ENTRY::IsUnused((struct SC_DISK_LAYOUT *)((char *)a2 + 144 * v21 + 48)) )
      {
        v25 = (struct _GUID *)((char *)a2 + v23 + 96);
        v26 = *(_QWORD *)&v25->Data1 - *(_QWORD *)&GUID_NULL.Data1;
        if ( *(_QWORD *)&v25->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
          v26 = *(_QWORD *)v25->Data4 - *(_QWORD *)GUID_NULL.Data4;
        if ( !v26 )
        {
          SC_ENV::CreateGuid(v25);
          v25 = (struct _GUID *)((char *)a2 + v23 + 96);
        }
        *(_OWORD *)(v22 - 48) = *(_OWORD *)((char *)a2 + v23 + 80);
        *(struct _GUID *)(v22 - 32) = *v25;
        v27 = *(_QWORD *)((char *)a2 + v23 + 56);
        v28 = *((_DWORD *)*this + 59);
        if ( v28 )
          v27 /= (__int64)v28;
        *(_QWORD *)(v22 - 16) = v27;
        v29 = *(_QWORD *)((char *)a2 + v23 + 64) - 1LL + *(_QWORD *)((char *)a2 + v23 + 56);
        v30 = *((unsigned int *)*this + 59);
        if ( (_DWORD)v30 )
        {
          v31 = v29 % (unsigned int)v30;
          v29 /= (__int64)(unsigned int)v30;
          v30 = v31;
        }
        *(_QWORD *)(v22 - 8) = v29;
        *(_QWORD *)v22 = *(_QWORD *)((char *)a2 + v23 + 112);
        RtlStringCbCopyW((char *)(v22 + 8), v30, (char *)a2 + v23 + 120);
        if ( *(_QWORD *)(v22 - 16) < v42 || *(_QWORD *)(v22 - 8) > v15 )
        {
          Header = -1073741811;
          goto LABEL_45;
        }
        v22 += 128LL;
      }
      v21 = (unsigned int)(v24 + 1);
    }
    v32 = *((_QWORD *)a2 + 1) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v32 )
      v32 = *((_QWORD *)a2 + 2) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v32 )
      SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
    *((_QWORD *)a2 + 4) = (v15 - v42 + 1) << *((_DWORD *)*this + 60);
    *((_DWORD *)a2 + 10) = v45;
    *(_QWORD *)v18 = 0x5452415020494645LL;
    *(_QWORD *)(v18 + 40) = v42;
    *(_QWORD *)(v18 + 32) = v15 + v39 + 1LL;
    *(_QWORD *)(v18 + 48) = v15;
    *(_DWORD *)(v18 + 8) = 0x10000;
    *(_DWORD *)(v18 + 12) = 92;
    *(_QWORD *)(v18 + 24) = 1LL;
    v33 = *(_OWORD *)((char *)a2 + 8);
    *(_QWORD *)(v18 + 72) = v42 - v39;
    *(_DWORD *)(v18 + 80) = v45;
    *(_OWORD *)(v18 + 56) = v33;
    *(_DWORD *)(v18 + 84) = v40;
    *(_DWORD *)(v18 + 88) = crc32(0LL, (__int64)v43, v39 << *((_DWORD *)*this + 60));
    *(_DWORD *)(v18 + 16) = crc32(0LL, v18, 0x5Cu);
    Header = SC_DISK::WriteSectors(*this, v39 + 1, 1uLL, (void *)v18);
    if ( Header >= 0 )
    {
      if ( (*((_DWORD *)*this + 50) & 1) != 0 )
        goto LABEL_43;
      *(_OWORD *)v20 = *(_OWORD *)v18;
      *(_OWORD *)(v20 + 16) = *(_OWORD *)(v18 + 16);
      *(_OWORD *)(v20 + 32) = *(_OWORD *)(v18 + 32);
      *(_OWORD *)(v20 + 48) = *(_OWORD *)(v18 + 48);
      *(_OWORD *)(v20 + 64) = *(_OWORD *)(v18 + 64);
      *(_QWORD *)(v20 + 80) = *(_QWORD *)(v18 + 80);
      *(_DWORD *)(v20 + 88) = *(_DWORD *)(v18 + 88);
      v34 = *(_QWORD *)(v20 + 32);
      v35 = *(_QWORD *)(v20 + 24);
      v36 = *(_DWORD *)(v20 + 12);
      *(_QWORD *)(v20 + 24) = v34;
      v37 = v34 - v39;
      *(_QWORD *)(v20 + 72) = v37;
      *(_DWORD *)(v20 + 16) = 0;
      *(_QWORD *)(v20 + 32) = v35;
      *(_DWORD *)(v20 + 16) = crc32(0LL, v20, v36);
      Header = SC_DISK::WriteSectors(*this, v39 + 1, v37, v43);
      if ( Header >= 0 )
      {
LABEL_43:
        *((_DWORD *)*this + 50) &= ~2u;
        if ( a3 )
        {
          memset_0((void *)v6, 0, 0x200uLL);
          *(_DWORD *)(v6 + 440) = v41;
          *(_BYTE *)(v6 + 450) = -18;
          *(_DWORD *)(v6 + 454) = 1;
          *(_DWORD *)(v6 + 458) = -1;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)*this + 9);
          *(_WORD *)(v6 + 510) = -21931;
          Header = SC_DISK::WriteSectors(*this, 1u, 0LL, 0LL);
        }
      }
    }
LABEL_45:
    PspUserApcKernelRoutine(v18);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Header;
}
