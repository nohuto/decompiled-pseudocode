/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802A67C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x180105534 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x180186E80 (-GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z.c)
 *     ?GetPhysicalFrontBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x18019C8B0 (-GetPhysicalFrontBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::CopyFrontToBackBuffer(CLegacyStereoSwapChain *this)
{
  struct ISwapChainBuffer *PhysicalBuffer; // rax
  int **v3; // rdi
  struct ISwapChainBuffer *v4; // rax
  __int64 v5; // rsi
  struct ISwapChainBuffer *PhysicalFrontBuffer; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  FastRegion::Internal::CRgnData *v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-68h]
  unsigned int v14; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+54h] [rbp-44h]
  int v16; // [rsp+58h] [rbp-40h]
  int v17; // [rsp+5Ch] [rbp-3Ch]
  char v18[8]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-30h]
  int *v20; // [rsp+70h] [rbp-28h]
  __int64 v21; // [rsp+78h] [rbp-20h]
  int v22; // [rsp+80h] [rbp-18h]

  PhysicalBuffer = CLegacySwapChain::GetPhysicalBuffer(this, *((_DWORD *)this + 119));
  v3 = (int **)(*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)PhysicalBuffer + 96LL))(PhysicalBuffer);
  if ( **v3 )
  {
    v4 = CLegacySwapChain::GetPhysicalBuffer(this, *((_DWORD *)this + 119));
    v5 = (*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)v4 + 152LL))(v4);
    PhysicalFrontBuffer = CLegacySwapChain::GetPhysicalFrontBuffer(this);
    v7 = (*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)PhysicalFrontBuffer + 152LL))(PhysicalFrontBuffer);
    FastRegion::CRegion::BeginIterator(v3, (__int64)v18);
    while ( (unsigned __int64)v20 < v19 )
    {
      v8 = 2 * v22;
      v15 = *v20;
      v13 = *(_DWORD *)(v21 + 4 * v8);
      v16 = *(_DWORD *)(v21 + 4 * v8 + 4);
      v9 = v20[2];
      v14 = v13;
      v10 = *((_QWORD *)this + 5);
      v17 = v9;
      CD3DDevice::CopySubresourceRegion(v10, v7, 1, (int *)&v14, v5, 1u, v13, v15, 0);
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v18);
    }
  }
  return COverlaySwapChain::CopyFrontToBackBuffer(this);
}
