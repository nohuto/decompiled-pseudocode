/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x18015294C
 * Callers:
 *     ??1CScrollKeyframeAnimation@@MEAA@XZ @ 0x18015289C (--1CScrollKeyframeAnimation@@MEAA@XZ.c)
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1801528E0 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004FF78 (-_Tidy@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Mi.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 *     ??1?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ @ 0x18010F04C (--1-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  char *v1; // rsi
  _QWORD *v3; // rbp
  _QWORD *i; // rdi

  *((_BYTE *)this + 464) &= ~1u;
  v1 = (char *)this + 312;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  v3 = (_QWORD *)*((_QWORD *)this + 40);
  for ( i = (_QWORD *)*((_QWORD *)this + 39); i != v3; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
  if ( (*((_BYTE *)this + 465) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Tidy((void **)this + 43);
  std::vector<CLight *>::_Tidy((__int64)v1);
  std::unique_ptr<KeyframeSequence>::~unique_ptr<KeyframeSequence>((KeyframeSequence **)this + 38);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 37);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)this + 36);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 35);
  CBaseExpression::~CBaseExpression(this);
}
