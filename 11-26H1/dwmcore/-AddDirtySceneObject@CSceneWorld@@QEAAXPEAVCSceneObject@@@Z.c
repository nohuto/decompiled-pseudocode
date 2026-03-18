/*
 * XREFs of ?AddDirtySceneObject@CSceneWorld@@QEAAXPEAVCSceneObject@@@Z @ 0x1802888DC
 * Callers:
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x18028B0BC (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801BF65C (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneWorld::AddDirtySceneObject(CSceneWorld *this, struct CSceneObject *a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  struct CSceneObject **i; // rax
  __int64 *v7; // rdx
  struct CSceneObject *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)this + 128;
  for ( i = (struct CSceneObject **)*((_QWORD *)this + 16); i != *((struct CSceneObject ***)this + 17); ++i )
  {
    if ( *i == a2 )
      return;
  }
  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CSceneObject *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = (__int64 *)*((_QWORD *)v4 + 1);
  if ( v7 == *((__int64 **)v4 + 2) )
  {
    std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
      (__int64 **)v4,
      v7,
      (__int64 *)&v8,
      a4);
  }
  else
  {
    v8 = 0LL;
    *v7 = (__int64)a2;
    *((_QWORD *)v4 + 1) += 8LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v8);
}
