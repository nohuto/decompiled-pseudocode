/*
 * XREFs of ?UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z @ 0x1801788C0
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCpuClippingData::UpdateCachingGenerationId(
        CCpuClippingData *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        const struct CCpuClippingData *a4)
{
  unsigned __int64 v4; // r10
  bool v5; // r11
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // rdx
  unsigned __int64 v8; // rax
  char v9; // r8
  unsigned __int64 v10; // rax
  __int64 **v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rcx
  void (__fastcall ***v14)(_QWORD, __int64); // rcx

  v4 = *((_QWORD *)a2 + 325);
  *((_QWORD *)this + 2) = v4;
  v5 = a4 && *((_DWORD *)a4 + 9);
  v6 = *((_QWORD *)this + 3);
  v7 = (unsigned __int64 *)((char *)this + 24);
  *((_QWORD *)this + 6) = a3;
  v8 = *((_QWORD *)this + 1);
  v9 = 0;
  *((_DWORD *)this + 9) = 0;
  if ( v6 < v8 )
  {
    *v7 = v8;
    v9 = 1;
    v6 = v8;
  }
  if ( *((_DWORD *)this + 8) == 1 )
  {
    *((_QWORD *)this + 6) = *((_QWORD *)a4 + 6);
    v10 = *((_QWORD *)a4 + 3);
    if ( v6 < v10 )
    {
      *v7 = v10;
      v9 = 1;
      v7 = (unsigned __int64 *)((char *)this + 24);
    }
    if ( v5 )
    {
      *((_DWORD *)this + 9) = *((_DWORD *)a4 + 9);
      if ( *((_BYTE *)this + 65) )
      {
        *v7 = v4;
        v9 = 1;
      }
    }
LABEL_10:
    if ( *((_BYTE *)this + 66) )
    {
      *v7 = v4;
      v9 = 1;
    }
    v11 = (__int64 **)((char *)this + 56);
    if ( !v5 )
    {
      if ( !*v11 )
        goto LABEL_19;
      v7 = (unsigned __int64 *)((char *)this + 24);
    }
    if ( *((_BYTE *)this + 67) )
      *v7 = v4;
    if ( *v11 )
      ++*((_DWORD *)this + 9);
LABEL_19:
    if ( !v9 )
      return;
    goto LABEL_20;
  }
  if ( *((_DWORD *)this + 8) == 2 )
    goto LABEL_10;
  v11 = (__int64 **)((char *)this + 56);
LABEL_20:
  v12 = *v11;
  if ( *v11 )
  {
    if ( *((_BYTE *)v12 + 32) )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))v12[3];
      if ( v14 )
        (**v14)(v14, 1LL);
    }
    v12[3] = 0LL;
    *((_BYTE *)v12 + 32) = 0;
    v13 = **v11;
    **v11 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v13 + 8LL))(v13, v7);
  }
}
