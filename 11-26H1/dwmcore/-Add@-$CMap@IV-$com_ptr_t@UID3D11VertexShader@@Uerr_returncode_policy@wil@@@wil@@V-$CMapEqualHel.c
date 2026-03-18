/*
 * XREFs of ?Add@?$CMap@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBIAEBV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18015545C
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180154E04 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180154A34 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>,CMapEqualHelper<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>>>::Add(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 *v11; // rcx

  v6 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = DefaultHeap::Realloc(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v8 )
    return 0LL;
  v9 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v10 = (_DWORD *)(*(_QWORD *)a1 + 4 * v9);
  if ( v10 )
    *v10 = *a2;
  v11 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * v9);
  if ( v11 )
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(v11, a3);
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
