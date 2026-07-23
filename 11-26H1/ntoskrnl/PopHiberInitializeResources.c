/*
 * XREFs of PopHiberInitializeResources @ 0x140B2C534
 * Callers:
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1403EDA40 (RtlGetCompressionWorkSpaceSize.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     IoGetDumpStackTransferSizes @ 0x1405345D8 (IoGetDumpStackTransferSizes.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopCalculateHiberFileSize @ 0x140B03088 (PopCalculateHiberFileSize.c)
 *     MmAllocateDumpHibernateResources @ 0x140B2C898 (MmAllocateDumpHibernateResources.c)
 *     MmMarkHiberRange @ 0x140B2C8F0 (MmMarkHiberRange.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopHiberInitializeResources(_QWORD *MemoryMap)
{
  __int64 v1; // r14
  unsigned __int64 v3; // r12
  size_t v4; // r13
  ULONG v5; // edi
  unsigned int v6; // esi
  ULONG v7; // eax
  size_t v8; // r15
  unsigned int v9; // esi
  __int64 v10; // rdx
  _QWORD *Pool2; // rdi
  __int64 DumpHibernateResources; // r15
  char *v13; // r12
  int v14; // r13d
  unsigned int v15; // edx
  int v16; // r15d
  _QWORD *v17; // r8
  unsigned __int64 v18; // r10
  __int64 v19; // r11
  char *v20; // rax
  unsigned int v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]
  size_t Size; // [rsp+50h] [rbp-28h]
  __int64 v26; // [rsp+58h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-18h]
  ULONG CompressBufferWorkSpaceSize; // [rsp+C0h] [rbp+48h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+D0h] [rbp+58h] BYREF
  int v31; // [rsp+D8h] [rbp+60h] BYREF

  v1 = (unsigned int)KeNumberProcessors_0;
  v3 = 0LL;
  CompressBufferWorkSpaceSize = 0;
  v4 = 0LL;
  CompressFragmentWorkSpaceSize = 0;
  v22 = 0LL;
  v30 = 0;
  v31 = 0;
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x10000000) != 0 )
    goto LABEL_29;
  v5 = 0;
  v6 = 0;
  Size = 168LL * (unsigned int)KeNumberProcessors_0;
  v7 = CompressBufferWorkSpaceSize;
  while ( v6 < 5 )
  {
    if ( RtlGetCompressionWorkSpaceSize(
           *((_WORD *)qword_14002F4F0 + v6),
           &CompressBufferWorkSpaceSize,
           &CompressFragmentWorkSpaceSize) < 0 )
      goto LABEL_29;
    v7 = CompressBufferWorkSpaceSize;
    if ( v5 <= CompressBufferWorkSpaceSize )
      v5 = CompressBufferWorkSpaceSize;
    if ( v5 <= CompressFragmentWorkSpaceSize )
      v5 = CompressFragmentWorkSpaceSize;
    ++v6;
  }
  v23 = (168 * v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  CompressBufferWorkSpaceSize = (v7 + 7) & 0xFFFFFFF8;
  v21 = (v5 + 7) & 0xFFFFFFF8;
  v8 = (unsigned int)v1 * v21 + ((Size + 4095) & 0xFFFFFFFFFFFFF000uLL);
  IoGetDumpStackTransferSizes(&v31, &v30);
  v9 = v30 >> 12;
  if ( v30 >> 12 )
  {
    if ( v9 > 0x100 )
      v9 = 256;
  }
  else
  {
    v9 = 1;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    v3 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    PopCalculateHiberFileSize(&v22, 0LL);
    v4 = 2 * (v22 >> 9);
    v8 = v3 + v4;
  }
  v24 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = (-4096 * v9) & (65668 * (_DWORD)v1 - 1 + 69632 * v9);
  v27 = (unsigned int)v10;
  v26 = v10 + v24;
  v22 = v10 + v24 + (unsigned int)((_DWORD)v1 << 17);
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    goto LABEL_29;
  DumpHibernateResources = MmAllocateDumpHibernateResources((unsigned int)((_DWORD)v1 << 16));
  if ( !DumpHibernateResources )
  {
    ExFreePoolWithTag(Pool2, 0x72626968u);
LABEL_29:
    Pool2 = qword_140F10998;
    LODWORD(v1) = 1;
    v14 = 1;
    v9 = 1;
    memset_0(qword_140F10998, 0, 0xA8uLL);
    v16 = 12288;
    Pool2[1] = xmmword_140F10908;
    v13 = (char *)qword_140F10990;
    goto LABEL_15;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    MemoryMap[59] = v4;
    MemoryMap[58] = (char *)Pool2 + v3;
    memset_0((char *)Pool2 + v3, 0, v4);
  }
  v13 = (char *)Pool2 + v24;
  v14 = 16;
  memset_0(Pool2, 0, Size);
  v15 = 0;
  if ( (_DWORD)v1 )
  {
    v17 = Pool2 + 1;
    v18 = v23;
    v19 = v26;
    do
    {
      v20 = (char *)&Pool2[0x4000 * v15] + v19;
      *(v17 - 1) = v20;
      v17[2] = v20 + 0x10000;
      *v17 = DumpHibernateResources + (v15 << 16);
      if ( v21 )
        v17[1] = (char *)Pool2 + v18 + v15 * v21;
      ++v15;
      v17 += 21;
    }
    while ( v15 < (unsigned int)v1 );
  }
  MmMarkHiberRange(MemoryMap, DumpHibernateResources, (unsigned __int64)(unsigned int)(16 * v1) << 12);
  PoSetHiberRange(MemoryMap, 0x8000u, (char *)Pool2 + v23, v22 - v23, 0x72626968u);
  MemoryMap[41] = v22;
  MemoryMap[40] = Pool2;
  MemoryMap[42] = DumpHibernateResources;
  v16 = v27;
LABEL_15:
  PoSetHiberRange(MemoryMap, 0x8000u, qword_140F10990, 0x3000uLL, 0x72626968u);
  *((_DWORD *)MemoryMap + 72) = v1;
  MemoryMap[37] = Pool2;
  MemoryMap[38] = v13;
  *((_DWORD *)MemoryMap + 78) = v16;
  *((_DWORD *)MemoryMap + 79) = v14;
  *((_DWORD *)MemoryMap + 110) = v9;
}
