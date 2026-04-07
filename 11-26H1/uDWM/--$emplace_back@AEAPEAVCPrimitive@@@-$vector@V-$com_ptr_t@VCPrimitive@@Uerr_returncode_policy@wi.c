/*
 * XREFs of ??$emplace_back@AEAPEAVCPrimitive@@@?$vector@V?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCPrimitive@@@Z @ 0x1800BDAAC
 * Callers:
 *     ?AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z @ 0x1800BDB34 (-AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEAPEAVCPrimitive@@@?$vector@V?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCPrimitive@@@Z @ 0x1800BD934 (--$_Emplace_reallocate@AEAPEAVCPrimitive@@@-$vector@V-$com_ptr_t@VCPrimitive@@Uerr_returncode_po.c)
 */

CBaseObject **__fastcall std::vector<wil::com_ptr_t<CPrimitive,wil::err_returncode_policy>>::emplace_back<CPrimitive * &>(
        __int64 a1,
        CBaseObject **a2)
{
  __int64 v3; // r9
  CBaseObject **v4; // rdx
  CBaseObject *v5; // rcx
  __int64 v6; // rcx

  v3 = a1;
  v4 = *(CBaseObject ***)(a1 + 8);
  if ( v4 == *(CBaseObject ***)(a1 + 16) )
    return std::vector<wil::com_ptr_t<CPrimitive,wil::err_returncode_policy>>::_Emplace_reallocate<CPrimitive * &>(
             a1,
             (__int64)v4,
             a2);
  v5 = *a2;
  *v4 = *a2;
  if ( v5 )
    CBaseObject::AddRef(v5);
  v6 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 8) = v6 + 8;
  return (CBaseObject **)v6;
}
