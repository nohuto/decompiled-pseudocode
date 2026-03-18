/*
 * XREFs of ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180134138
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18012A580 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z @ 0x18013399C (-Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x180134CBC (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDisplayManager::DriverUpdateInProgress(CDisplayManager *this)
{
  struct IDXGIFactory5 *v1; // rbx
  unsigned int i; // esi
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // eax
  int v7; // edi
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  int *v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  CDisplayManager *v12; // [rsp+70h] [rbp+28h] BYREF
  int v13; // [rsp+78h] [rbp+30h] BYREF
  struct IDXGIAdapter *v14; // [rsp+80h] [rbp+38h] BYREF
  struct IDXGIFactory5 *v15; // [rsp+88h] [rbp+40h] BYREF

  v12 = this;
  v15 = 0LL;
  CDisplayManager::InternalGetDXGIFactory(this, &v15);
  v1 = v15;
  if ( v15 )
  {
    v14 = 0LL;
    for ( i = 0; ; ++i )
    {
      lpVtbl = v1->lpVtbl;
      v9 = (__int64 *)&v14;
      v10 = 0LL;
      LOBYTE(v11) = 1;
      v4 = ((unsigned int (__fastcall *)(struct IDXGIFactory5 *, _QWORD, int **))lpVtbl->EnumAdapters1)(v1, i, &v10) >> 31;
      if ( (_BYTE)v11 )
      {
        v5 = *v9;
        *v9 = (__int64)v10;
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( (_BYTE)v4 )
        break;
      LODWORD(v12) = 0;
      v6 = CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v12, v14);
      v7 = (int)v12;
      if ( v6 >= 0 )
      {
        v13 = 0;
        v10 = &v13;
        v11 = 4LL;
        v9 = (__int64 *)((unsigned int)v12 | 0xB00000000LL);
        D3DKMTQueryAdapterInfo(&v9);
        if ( v13 )
        {
          CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v12);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
          return 1;
        }
      }
      if ( v7 )
      {
        LODWORD(v12) = v7;
        D3DKMTCloseAdapter(&v12);
      }
    }
    if ( v14 )
      ((void (__fastcall *)(struct IDXGIAdapter *))v14->lpVtbl->Release)(v14);
    ((void (__fastcall *)(struct IDXGIFactory5 *))v1->lpVtbl->Release)(v1);
  }
  return 0;
}
