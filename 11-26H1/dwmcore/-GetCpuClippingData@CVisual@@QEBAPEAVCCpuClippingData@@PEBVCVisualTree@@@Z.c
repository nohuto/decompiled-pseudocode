/*
 * XREFs of ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x1800D1CD0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800D1420 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 **__fastcall CVisual::GetCpuClippingData(CVisual *this, const struct CVisualTree *a2)
{
  __int64 **v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // r8
  __int64 v9; // rcx
  __int64 ****v10; // rcx
  __int64 ***v11; // rcx
  __int64 **i; // rax

  v4 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
  {
    v4 = (__int64 **)((char *)this + 320);
    return v4 + 9;
  }
  v6 = *((_QWORD *)this + 28);
  if ( *(int *)v6 >= 0 )
    return v4 + 9;
  v7 = *(unsigned int *)(v6 + 4);
  v8 = (_BYTE *)(v6 + 8);
  v9 = 0LL;
  if ( (_DWORD)v7 )
  {
    while ( *v8 != 1 )
    {
      v9 = (unsigned int)(v9 + 1);
      ++v8;
      if ( (unsigned int)v9 >= (unsigned int)v7 )
        goto LABEL_15;
    }
    goto LABEL_7;
  }
LABEL_15:
  if ( (unsigned int)v9 < (unsigned int)v7 )
  {
LABEL_7:
    v10 = (__int64 ****)(v6 + ((v7 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v9);
    goto LABEL_8;
  }
  v10 = 0LL;
LABEL_8:
  v11 = *v10;
  if ( v11 )
  {
    for ( i = *v11; i != (__int64 **)v11; i = (__int64 **)*i )
    {
      if ( i[4] == (__int64 *)a2 )
      {
        v4 = i - 44;
        return v4 + 9;
      }
    }
  }
  return v4 + 9;
}
