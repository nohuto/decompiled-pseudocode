/*
 * XREFs of ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400CEA6C
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE52C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400CDAE8 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInFaultedAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  int v8; // esi
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 **v12; // rcx
  __int16 v13; // bx
  __int64 v14; // r9
  bool v15; // zf
  _BYTE *v16; // rdx
  int inited; // eax

  v8 = 0;
  *a5 = 0LL;
  v9 = **a2;
  v10 = (__int64 *)(a2 + 7);
  v11 = a2[7];
  if ( (__int64 *)v11[1] != v10 || (v12 = (__int64 **)v10[1], *v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = (__int64)v12;
  *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
  a2[8] = 0LL;
  *v10 = 0LL;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 136));
  v13 = *((_WORD *)a2[12] + 4);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 136));
  if ( v13 != 3 )
  {
    if ( (*(_DWORD *)(v9 + 24) & 0x10000) != 0 )
    {
      v8 = -1071775466;
    }
    else
    {
      LOBYTE(v14) = a3;
      v8 = VIDMM_GLOBAL::PageInOneAllocation(
             this,
             a2,
             (**(_DWORD **)(v9 + 368) & 0x20000) != 0 ? 5 : 0,
             v14,
             a4,
             a5,
             0,
             -1LL);
      if ( v8 != -1071775466 )
        goto LABEL_6;
    }
    if ( (*(_DWORD *)(v9 + 24) & 0x800000) == 0 )
      goto LABEL_11;
    inited = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)a2, 0, a4, a5);
    *(_DWORD *)(v9 + 24) &= ~0x10000u;
    v8 = inited;
LABEL_6:
    if ( v8 >= 0 )
    {
      v15 = (*(_DWORD *)(v9 + 24) & 0x800000) == 0;
      v16 = (_BYTE *)**a2;
      v16[42] = 1;
      if ( v15 && (*(_DWORD *)(*(_QWORD *)v16 + 56LL) & 0x10) != 0 )
        v16[43] = 1;
      return (unsigned int)v8;
    }
LABEL_11:
    WdLogSingleEntry2(3LL, a2, v8);
    WdLogGlobalForLineNumber = 17602;
  }
  return (unsigned int)v8;
}
