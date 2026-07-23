/*
 * XREFs of ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14071EBC0
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140720128 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x14071E998 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14071EAC0 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14071EEA8 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140793650 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_GPT::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  struct SC_DISK_LAYOUT **v2; // r12
  __int64 v4; // rbx
  unsigned int v5; // r14d
  int v6; // ebp
  int Header; // eax
  unsigned int v8; // esi
  int v9; // eax
  SC_DISK *v10; // rdx
  unsigned int v11; // r8d
  struct GPT_ENTRY *v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  char *v16; // rax
  char *v17; // r14
  unsigned int v18; // ebp
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  struct GPT_ENTRY *v29; // [rsp+50h] [rbp+8h] BYREF
  struct SC_DISK_LAYOUT **v30; // [rsp+58h] [rbp+10h]

  v30 = a2;
  v29 = 0LL;
  v2 = a2;
  v4 = *((_QWORD *)*this + 33);
  *a2 = 0LL;
  *((_DWORD *)*this + 50) &= ~2u;
  v5 = 2 - ((*((_BYTE *)*this + 200) & 1) != 0);
  v6 = 0;
  while ( 1 )
  {
    Header = SC_GPT::ReadHeader(this, v6, (struct GPT_HEADER *)v4);
    v8 = Header;
    if ( Header >= 0 )
      break;
    if ( Header == -1073741774 )
      *((_DWORD *)*this + 50) |= 2u;
LABEL_8:
    if ( ++v6 >= v5 )
      goto LABEL_9;
  }
  v9 = SC_GPT::ReadEntries((SC_GPT *)this, (struct GPT_HEADER *)v4, &v29);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( v9 == -1073741774 )
      *((_DWORD *)*this + 50) |= 2u;
    goto LABEL_8;
  }
  if ( !v6 )
  {
    v10 = *this;
    v11 = (-*((_DWORD *)*this + 59) & (unsigned int)(*(_DWORD *)(v4 + 80) * *(_DWORD *)(v4 + 84)
                                                   + *((_DWORD *)*this + 59)
                                                   - 1)) >> *((_DWORD *)*this + 60);
    v13 = *((_QWORD *)*this + 31);
    v14 = (*((_DWORD *)*this + 50) & 1) != 0 ? v13 - 1 : v13 - v11 - 2;
    if ( *(_QWORD *)(v4 + 48) != v14 )
    {
      *(_QWORD *)(v4 + 48) = v14;
      *((_DWORD *)*this + 50) |= 2u;
    }
  }
  v15 = (unsigned int)(144 * *(_DWORD *)(v4 + 80) + 48);
  v16 = (char *)SC_ENV::Allocate(v15, (unsigned int)v10, v11, 1u);
  v17 = v16;
  if ( !v16 )
  {
    v8 = -1073741670;
LABEL_9:
    v12 = v29;
    goto LABEL_30;
  }
  memset_0(v16, 0, v15);
  v12 = v29;
  v18 = 0;
  *(_DWORD *)v17 = 1;
  *(_OWORD *)(v17 + 8) = *(_OWORD *)(v4 + 56);
  *((_QWORD *)v17 + 3) = *(_QWORD *)(v4 + 40) << *((_DWORD *)*this + 60);
  v19 = 0LL;
  *((_QWORD *)v17 + 4) = (*(_QWORD *)(v4 + 48) - *(_QWORD *)(v4 + 40) + 1LL) << *((_DWORD *)*this + 60);
  *((_DWORD *)v17 + 10) = *(_DWORD *)(v4 + 80);
  if ( *(_DWORD *)(v4 + 80) )
  {
    v20 = *(_QWORD *)GUID_NULL.Data4;
    v21 = *(_QWORD *)&GUID_NULL.Data1;
    do
    {
      v22 = (unsigned __int64)v18 << 7;
      v23 = *(_QWORD *)((char *)v12 + v22) - v21;
      if ( !v23 )
        v23 = *(_QWORD *)((char *)v12 + v22 + 8) - v20;
      if ( v23 )
      {
        v24 = *(_QWORD *)((char *)v12 + v22 + 40);
        v25 = *(_QWORD *)((char *)v12 + v22 + 32);
        if ( v25 <= v24 && v25 >= *(_QWORD *)(v4 + 40) && v24 <= *(_QWORD *)(v4 + 48) )
        {
          v26 = 144 * v19;
          *(_WORD *)&v17[v26 + 52] = v18 + 1;
          *(_DWORD *)&v17[v26 + 48] = 1;
          *(_QWORD *)&v17[v26 + 56] = *(_QWORD *)((char *)v12 + v22 + 32) << *((_DWORD *)*this + 60);
          v27 = (*(_QWORD *)((char *)v12 + v22 + 40) - *(_QWORD *)((char *)v12 + v22 + 32) + 1LL) << *((_DWORD *)*this + 60);
          *(_QWORD *)&v17[v26 + 64] = v27;
          *(_DWORD *)&v17[v26 + 72] = 0;
          *(_OWORD *)&v17[v26 + 80] = *(_OWORD *)((char *)v12 + v22);
          *(_OWORD *)&v17[v26 + 96] = *(_OWORD *)((char *)v12 + v22 + 16);
          *(_QWORD *)&v17[v26 + 112] = *(_QWORD *)((char *)v12 + v22 + 48);
          RtlStringCbCopyW(
            (unsigned __int16 *)&v17[144 * v19 + 120],
            v27,
            (const unsigned __int16 *)((char *)v12 + v22 + 56));
          v20 = *(_QWORD *)GUID_NULL.Data4;
          v19 = (unsigned int)(v19 + 1);
          v21 = *(_QWORD *)&GUID_NULL.Data1;
        }
      }
      ++v18;
    }
    while ( v18 < *(_DWORD *)(v4 + 80) );
    v2 = v30;
  }
  *((_DWORD *)v17 + 1) = v19;
  *v2 = (struct SC_DISK_LAYOUT *)v17;
LABEL_30:
  if ( v12 )
    PspUserApcKernelRoutine(v12);
  return v8;
}
