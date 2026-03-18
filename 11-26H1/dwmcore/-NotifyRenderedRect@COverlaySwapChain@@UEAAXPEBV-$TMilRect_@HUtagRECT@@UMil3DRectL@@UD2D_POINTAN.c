/*
 * XREFs of ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800ECB30
 * Callers:
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800ED6B8 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x180105110 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall COverlaySwapChain::NotifyRenderedRect(__int64 a1, int *a2)
{
  __int64 v4; // rax
  int v5; // r12d
  int v6; // r13d
  unsigned int v7; // esi
  __int64 v8; // r15
  int v9; // ebp
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rax
  void *v16; // rbx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rax
  HANDLE ProcessHeap; // rax
  _DWORD v23[4]; // [rsp+20h] [rbp-98h] BYREF
  LPVOID lpMem; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v25[18]; // [rsp+38h] [rbp-80h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 88LL))(v4, v23);
  v5 = v23[0];
  v6 = v23[1];
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8);
  if ( a2 )
  {
    v10 = a2[2];
    lpMem = v25;
    v11 = 0;
    v12 = *a2;
    if ( *a2 >= v10 || (v13 = a2[3], v14 = a2[1], v14 >= v13) )
    {
      v25[0] = 0;
    }
    else
    {
      v25[0] = 2;
      v25[1] = v12;
      v25[2] = v10;
      v25[3] = v14;
      v25[4] = 16;
      v25[7] = v12;
      v25[8] = v10;
      v25[5] = v13;
      v25[6] = 16;
    }
    CRegion::Union((CRegion *)(a1 + 160), (const struct CRegion *)&lpMem);
    (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 120LL))(v8, &lpMem);
    if ( v7 )
    {
      do
      {
        if ( v11 != v9 )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 224LL))(a1, v11);
          (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 104LL))(v15, &lpMem);
        }
        ++v11;
      }
      while ( v11 < v7 );
    }
    v16 = lpMem;
    v17 = v25;
    if ( v25 != lpMem && lpMem )
    {
      ProcessHeap = GetProcessHeap();
      LODWORD(v17) = HeapFree(ProcessHeap, 0, v16);
    }
  }
  else
  {
    if ( v5 <= 0 || v6 <= 0 )
    {
      v19 = 0;
      **(_DWORD **)(a1 + 160) = 0;
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 160);
      v19 = 0;
      *(_DWORD *)(v18 + 12) = 0;
      *(_QWORD *)v18 = 2LL;
      *(_DWORD *)(v18 + 8) = v5;
      *(_DWORD *)(v18 + 16) = 16;
      *(_DWORD *)(v18 + 28) = 0;
      *(_DWORD *)(v18 + 32) = v5;
      *(_DWORD *)(v18 + 20) = v6;
      *(_DWORD *)(v18 + 24) = 16;
    }
    LODWORD(v17) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8);
    if ( v7 )
    {
      do
      {
        if ( v19 != v9 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 224LL))(a1, v19);
          LODWORD(v17) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 112LL))(v20);
        }
        ++v19;
      }
      while ( v19 < v7 );
    }
  }
  return (int)v17;
}
