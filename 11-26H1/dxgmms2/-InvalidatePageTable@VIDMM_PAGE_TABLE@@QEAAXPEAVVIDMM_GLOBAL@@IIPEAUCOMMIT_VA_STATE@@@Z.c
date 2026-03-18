/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAUCOMMIT_VA_STATE@@@Z @ 0x1400D4240
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D3F00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        struct COMMIT_VA_STATE *a5)
{
  __int64 v5; // r13
  unsigned int v8; // ecx
  char v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // [rsp+60h] [rbp+18h]

  v5 = a3;
  v8 = a4 + a3;
  if ( *((_QWORD *)a2 + 5150) && (v24 = a4 + a3, a3 < v8) )
  {
    v14 = 16LL * a3;
    v15 = a4;
    do
    {
      v16 = *((_QWORD *)this + 5);
      v17 = *(_QWORD *)(v14 + v16);
      if ( (v17 & 1) != 0 )
      {
        v18 = *(_QWORD *)(v14 + v16 + 8);
        v19 = (v17 >> 5) & 0x1F;
        if ( *((_QWORD *)a2 + 5150) )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)a2 + 41144, 0LL);
          *((_QWORD *)a2 + 5144) = KeGetCurrentThread();
          v20 = *((unsigned int *)a2 + 10302);
          v21 = *((_QWORD *)a2 + 5150);
          if ( (_DWORD)v20 == dword_14008A4F4 )
          {
            *((_DWORD *)a2 + 10302) = 0;
            v20 = 0LL;
          }
          v22 = 3 * v20;
          v23 = MEMORY[0xFFFFF78000000014];
          v22 *= 2LL;
          *(_QWORD *)(v21 + 8 * v22 + 8) = v18;
          *(_QWORD *)(v21 + 8 * v22 + 24) = 0LL;
          *(_QWORD *)(v21 + 8 * v22) = v23;
          *(_DWORD *)(v21 + 8 * v22 + 32) = 1;
          *(_DWORD *)(v21 + 8 * v22 + 36) = v19;
          *(_QWORD *)(v21 + 8 * v22 + 16) = 1LL;
          *(_DWORD *)(v21 + 8 * v22 + 40) = *((_DWORD *)a2 + 10295);
          ++*((_DWORD *)a2 + 10302);
          *((_QWORD *)a2 + 5144) = 0LL;
          ExReleasePushLockExclusiveEx((char *)a2 + 41144, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v14 += 16LL;
      --v15;
    }
    while ( v15 );
    v9 = 0;
    v8 = v24;
  }
  else
  {
    v9 = 0;
    if ( a3 >= v8 )
      return;
  }
  v10 = 16 * v5;
  v11 = v8 - (unsigned int)v5;
  do
  {
    v12 = *((_QWORD *)this + 5);
    if ( (*(_BYTE *)(v12 + v10) & 1) != 0 )
    {
      --*((_DWORD *)this + 1);
      v9 = 1;
      *(_QWORD *)(v12 + v10) = 0LL;
      *(_QWORD *)(v10 + *((_QWORD *)this + 5) + 8) = 0LL;
      if ( *((_BYTE *)a5 + 81) )
        *(_QWORD *)(*((_QWORD *)this + 5) + v10) = *(_QWORD *)(*((_QWORD *)this + 5) + v10) & 0xFFFFFFFFFFCFFFFFuLL | 0x200000;
      v13 = *((_QWORD *)this + 6);
      if ( v13 )
      {
        *(_QWORD *)(v10 + v13) = 0LL;
        *(_QWORD *)(v10 + *((_QWORD *)this + 6) + 8) = 0LL;
      }
    }
    v10 += 16LL;
    --v11;
  }
  while ( v11 );
  if ( v9 )
    *((_BYTE *)a5 + 84) = 1;
}
