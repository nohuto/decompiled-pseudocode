/*
 * XREFs of ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801DEABC
 * Callers:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1802A5028 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A5060 (-NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x180105C34 (-NotifyOwner@CAtlasEntry@@AEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAtlasTexture::DestroyResources(CAtlasTexture *this)
{
  unsigned int v1; // eax
  int v3; // ecx
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rsi
  CAtlasEntry *v7; // rcx
  void *v8; // rcx

  v1 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8);
  v4 = *((_QWORD *)this + 1) == 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  if ( !v4 )
  {
    if ( v3 != v1 && v1 )
    {
      v5 = 0LL;
      v6 = v1;
      do
      {
        v7 = *(CAtlasEntry **)(v5 + *((_QWORD *)this + 2));
        if ( v7 && v7 != (CAtlasEntry *)-1LL )
        {
          *(_QWORD *)v7 = 0LL;
          *((_DWORD *)v7 + 4) = -1;
          CAtlasEntry::NotifyOwner(v7);
        }
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
    (*(void (__fastcall **)(_QWORD, CAtlasTexture *))(**((_QWORD **)this + 1) + 80LL))(*((_QWORD *)this + 1), this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  }
  v8 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v8 )
    operator delete(v8);
}
