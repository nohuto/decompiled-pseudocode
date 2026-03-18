/*
 * XREFs of ??$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z @ 0x1800D816C
 * Callers:
 *     ?clear_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D7EB4 (-clear_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$.c)
 *     ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x1800D7FB4 (-reserve_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800D80E4 (-ensure_extra_capacity@-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@de.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall detail::destruct_range<CD3DDevice::CDelayUnpin>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3);
      v3 += 3;
    }
    while ( v3 != a2 );
  }
  return result;
}
