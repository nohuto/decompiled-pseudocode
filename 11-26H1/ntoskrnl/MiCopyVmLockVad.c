/*
 * XREFs of MiCopyVmLockVad @ 0x140A2BC40
 * Callers:
 *     MiCopyVirtualMemory @ 0x140A2B990 (MiCopyVirtualMemory.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiVadRangeIsIoSpace @ 0x1404EE0D0 (MiVadRangeIsIoSpace.c)
 */

__int64 __fastcall MiCopyVmLockVad(__int64 a1)
{
  int v2; // r12d
  int *v3; // r15
  unsigned int v4; // esi
  int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  unsigned __int64 v15; // rcx
  ULONG_PTR v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 IsIoSpace; // rax
  int v24; // eax
  unsigned int v25; // [rsp+78h] [rbp+10h] BYREF
  int v26; // [rsp+80h] [rbp+18h]
  __int64 v27; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v25 = 0;
  v3 = (int *)(a1 + 108);
  v27 = a1 + 108;
  v4 = *(_DWORD *)(a1 + 108);
  v5 = v4 & 0x40;
  v6 = (__int64 *)(a1 + 8);
  if ( (v4 & 0x40) == 0 )
    v6 = (__int64 *)a1;
  v7 = *v6;
  v8 = 40LL;
  if ( (v4 & 0x40) == 0 )
    v8 = 32LL;
  v9 = *(_QWORD *)(v8 + a1);
  *v3 = v4 | 0x80;
  KeStackAttachProcess((PRKPROCESS)v7, (PRKAPC_STATE)(a1 + 112));
  v10 = v4 >> 8;
  v11 = v4 >> 9;
  if ( !v5 )
    LOBYTE(v11) = v10;
  if ( (v11 & 1) == 0 && *(_BYTE *)(a1 + 88) )
  {
    v26 = 2;
    if ( (v25 & 0x80000000) != 0 )
      return v25;
    v12 = *v3;
    if ( (*v3 & 0x40) != 0 )
      v13 = v12 | 0x200;
    else
      v13 = v12 | 0x100;
    *v3 = v13;
  }
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  v14 = *v3 & 0xFFFFFFDF;
  *v3 = v14;
  if ( MmIsKernelAddress(v9) )
  {
    v17 = v9 + *(_QWORD *)(a1 + 56);
    *v3 = v14 | 0x20;
  }
  else
  {
    v15 = v9 & 0xFFFFFFFFFFFFF000uLL;
    if ( ((v9 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || v15 == qword_140E2D7B8 && qword_140E2D7B8)
      && (*(_DWORD *)(v7 + 1532) & 1) == 0 )
    {
      v17 = v15 + 4096;
    }
    else
    {
      v16 = MiObtainReferencedVadEx(v9, 2LL, (int *)&v25);
      *(_QWORD *)(a1 + 96) = v16;
      if ( !v16 )
        return 2147483661LL;
      if ( (MiReadVadFlags(*(_QWORD *)(a1 + 96)) & 0x880000) == 0x880000 )
      {
        v24 = *(_DWORD *)(v18 + 72);
        if ( (v24 & 4) != 0 )
          v2 = 2 - ((v24 & 1) != 0);
      }
      *(_DWORD *)(a1 + 104) = v2;
    }
  }
  v19 = v17 - v9;
  if ( *(_QWORD *)(a1 + 56) > v19 )
    *(_QWORD *)(a1 + 56) = v19;
  if ( v2 )
    return v25;
  if ( (*v3 & 0x10) == 0 )
    return v25;
  v20 = *(_QWORD *)(a1 + 96);
  if ( !v20 || (MiReadVadFlags(v20) & 0x1C) != 4 )
    return v25;
  IsIoSpace = MiVadRangeIsIoSpace(v21, v9, *(_QWORD *)(a1 + 56));
  if ( IsIoSpace )
  {
    *(_QWORD *)(a1 + 56) = IsIoSpace;
    return v25;
  }
  return 3221225477LL;
}
