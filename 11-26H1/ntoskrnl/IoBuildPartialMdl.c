/*
 * XREFs of IoBuildPartialMdl @ 0x140439AB0
 * Callers:
 *     HalpDmaCheckMdlAccessibility @ 0x14043832C (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     IopMcCreatePartialMdl @ 0x140B02E94 (IopMcCreatePartialMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall IoBuildPartialMdl(PMDL SourceMdl, PMDL TargetMdl, PVOID VirtualAddress, ULONG Length)
{
  char *v5; // r10
  __int64 ByteCount; // r14
  ULONG v9; // esi
  char MdlFlags; // al
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int16 v13; // r9
  unsigned int v14; // r8d
  ULONG v15; // r14d
  void *v16; // rbx
  char *v17; // rax
  unsigned __int64 v18; // rdx
  signed __int64 v19; // r11

  v5 = (char *)SourceMdl->StartVa + SourceMdl->ByteOffset;
  ByteCount = SourceMdl->ByteCount;
  v9 = Length;
  MdlFlags = SourceMdl->MdlFlags;
  v11 = (unsigned __int64)&v5[ByteCount];
  v12 = (unsigned __int64)&v5[ByteCount];
  if ( MdlFlags >= 0 )
    v12 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( VirtualAddress < v5
    || (unsigned __int64)VirtualAddress >= v11
    || (char *)VirtualAddress + Length < VirtualAddress
    || (unsigned __int64)VirtualAddress + Length > v12 )
  {
    KeBugCheckEx(0x12Eu, (ULONG_PTR)SourceMdl, (ULONG_PTR)TargetMdl, (ULONG_PTR)VirtualAddress, Length);
  }
  v13 = (__int16)VirtualAddress;
  TargetMdl->Process = SourceMdl->Process;
  v14 = (_DWORD)VirtualAddress - (_DWORD)v5;
  v15 = ByteCount - v14;
  if ( !v9 )
    v9 = v15;
  TargetMdl->ByteOffset = (unsigned __int16)VirtualAddress & 0xFFF;
  v16 = (void *)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  TargetMdl->StartVa = v16;
  TargetMdl->ByteCount = v9;
  LODWORD(v16) = (_DWORD)v16 - LODWORD(SourceMdl->StartVa);
  TargetMdl->MdlFlags &= 8u;
  TargetMdl->MdlFlags |= SourceMdl->MdlFlags & 0x48C5 | 0x10;
  TargetMdl->MappedSystemVa = (char *)SourceMdl->MappedSystemVa + v14;
  v17 = (char *)(&SourceMdl[1].Next + ((unsigned int)v16 >> 12));
  v18 = ((v13 & 0xFFF) + 4095LL + (unsigned __int64)v9) >> 12;
  if ( v18 )
  {
    v19 = (char *)TargetMdl - v17;
    do
    {
      *(_QWORD *)&v17[v19 + 48] = *(_QWORD *)v17;
      v17 += 8;
      --v18;
    }
    while ( v18 );
  }
}
