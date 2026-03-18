/*
 * XREFs of ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEA_N@Z @ 0x1400BB180
 * Callers:
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400BB700 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z @ 0x1400BB910 (-ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::GetAllocationInfo(
        unsigned __int64 this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        bool *a6)
{
  int v6; // eax
  unsigned int v7; // esi
  unsigned __int64 v9; // rbp
  void *v10; // rdi
  unsigned int v11; // ebx
  bool v12; // r14
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  _QWORD *v17; // rax
  unsigned int *v18; // rcx
  __int64 result; // rax
  char v20; // [rsp+20h] [rbp-48h]
  char v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  v6 = *(_DWORD *)a2;
  v7 = 0;
  v22 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (v6 & 4) != 0 )
  {
    v7 = -1071775472;
    goto LABEL_17;
  }
  v9 = *((_QWORD *)a2 + 7);
  if ( (v6 & 1) != 0 )
  {
    v14 = *((_DWORD *)a2 + 6);
    if ( v14 == 3 )
      goto LABEL_15;
    if ( v14 != 4 )
    {
      if ( v14 != 5 )
      {
        if ( v14 != 6 )
        {
          v11 = *((_DWORD *)a2 + 4);
          v10 = (void *)*((_QWORD *)a2 + 1);
          goto LABEL_17;
        }
        goto LABEL_14;
      }
LABEL_15:
      v11 = 1028;
      goto LABEL_16;
    }
  }
  else
  {
    v15 = *((_QWORD *)a2 + 1);
    v16 = *(_DWORD *)(v15 + 80);
    if ( v16 == 3 )
      goto LABEL_15;
    if ( v16 != 4 )
    {
      if ( v16 != 5 )
      {
        if ( v16 != 6 )
        {
          v10 = (void *)(*((_QWORD *)a2 + 2) + *(_QWORD *)(v15 + 32));
          v11 = ~((unsigned __int16)*(_DWORD *)(v15 + 64) << 9) & 0x400 | 4;
          goto LABEL_17;
        }
        goto LABEL_14;
      }
      goto LABEL_15;
    }
  }
LABEL_14:
  v11 = 4;
LABEL_16:
  v21 = 0;
  v20 = 1;
  v10 = (void *)(*(__int64 (__fastcall **)(unsigned __int64, struct _VIDMM_PROCESS_HEAP_ALLOC *, _QWORD, unsigned __int64, char, char, __int64 *))(*(_QWORD *)this + 56LL))(
                  this,
                  a2,
                  0LL,
                  v9,
                  v20,
                  v21,
                  &v22);
  this = (unsigned int)-(v10 == 0LL);
  v7 = this & 0xC01E0110;
  v12 = v10 != 0LL;
LABEL_17:
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v17[5] = v11;
    v17[6] = v12;
    v17[7] = (int)v7;
    v17[3] = v10;
    v17[4] = v9;
    WdLogGlobalForLineNumber = 1283;
  }
  v18 = a5;
  *a3 = v9;
  result = v7;
  *a4 = v10;
  *v18 = v11;
  *a6 = v12;
  return result;
}
