/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1400F8A00
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::ModifyPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int8 *a7)
{
  int v8; // r8d
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r15
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // ebx
  bool v20; // zf
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // ebx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // edx

  v8 = 0;
  v10 = a4;
  if ( *((_DWORD *)a3 + 18) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v28 = a5;
      v29 = 16LL * a4;
      do
      {
        v30 = *((_QWORD *)this + 5);
        v31 = v8 + 1;
        v29 += 16LL;
        v20 = (*(_BYTE *)(v30 + v29 - 16) & 1) == 0;
        *(_QWORD *)(v30 + v29 - 16) = *(_QWORD *)a3;
        if ( v20 )
          v31 = v8;
        v8 = v31;
        --v28;
      }
      while ( v28 );
    }
  }
  else
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*((_DWORD *)a3 + 9) & 1) != 0 )
      v12 = *((_QWORD *)a3 + 5);
    else
      v11 = *((_QWORD *)a3 + 5);
    v14 = *(_DWORD *)this & 0x40;
    if ( (unsigned int)v10 < (unsigned int)v10 + a5 )
    {
      v15 = 16 * v10;
      v16 = 16LL;
      v17 = a5;
      if ( v11 )
      {
        if ( !v14 )
          v16 = 1LL;
        do
        {
          v18 = *((_QWORD *)this + 5);
          v19 = v8 + 1;
          v20 = (*(_BYTE *)(v18 + v15) & 1) == 0;
          *(_QWORD *)(v18 + v15) = *(_QWORD *)a3;
          v21 = *((_QWORD *)a3 + 11);
          if ( v20 )
            v19 = v8;
          if ( v21 )
            v22 = (unsigned int)*((_QWORD *)a3 + 3) + (unsigned int)((a6 - *((_QWORD *)a3 + 3)) % v21);
          else
            v22 = (unsigned int)a6;
          *(_QWORD *)(v15 + *((_QWORD *)this + 5) + 8) = *(_QWORD *)(v11 + 8 * v22);
          v23 = *((_QWORD *)this + 6);
          if ( v23 )
          {
            *(_QWORD *)(v15 + v23) = *((_QWORD *)a3 + 2);
            *(_QWORD *)(v15 + *((_QWORD *)this + 6) + 8) = *((_QWORD *)a3 + 8);
          }
          a6 += v16;
          v15 += 16LL;
          v8 = v19;
          --v17;
        }
        while ( v17 );
      }
      else
      {
        if ( !v14 )
          v16 = 1LL;
        do
        {
          v24 = *((_QWORD *)this + 5);
          v25 = v8 + 1;
          v20 = (*(_BYTE *)(v24 + v15) & 1) == 0;
          *(_QWORD *)(v24 + v15) = *(_QWORD *)a3;
          v26 = *((_QWORD *)a3 + 11);
          if ( v20 )
            v25 = v8;
          if ( v26 )
            *(_QWORD *)(v15 + *((_QWORD *)this + 5) + 8) = v12
                                                         + (unsigned int)((a6 - *((_QWORD *)a3 + 3)) % v26)
                                                         + (unsigned int)*((_QWORD *)a3 + 3);
          else
            *(_QWORD *)(v15 + *((_QWORD *)this + 5) + 8) = v12 + (unsigned int)a6;
          v27 = *((_QWORD *)this + 6);
          if ( v27 )
          {
            *(_QWORD *)(v15 + v27) = *((_QWORD *)a3 + 2);
            *(_QWORD *)(v15 + *((_QWORD *)this + 6) + 8) = *((_QWORD *)a3 + 8);
          }
          a6 += v16;
          v15 += 16LL;
          v8 = v25;
          --v17;
        }
        while ( v17 );
      }
    }
  }
  *((_DWORD *)this + 1) += a5 - v8;
  if ( v8 )
    *a7 = 1;
}
