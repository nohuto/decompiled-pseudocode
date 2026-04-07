/*
 * XREFs of ??1?$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B635C
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18008011C (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$4 @ 0x1800EC3EF (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$4.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$5 @ 0x1800EC401 (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>::~com_ptr_t<IDXGIOutput,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
