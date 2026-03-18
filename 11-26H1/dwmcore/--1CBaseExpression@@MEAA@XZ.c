/*
 * XREFs of ??1CBaseExpression@@MEAA@XZ @ 0x180200110
 * Callers:
 *     ??1CExpression@@MEAA@XZ @ 0x18010D67C (--1CExpression@@MEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18015294C (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CScrollAnimation@@MEAA@XZ @ 0x180200004 (--1CScrollAnimation@@MEAA@XZ.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180200054 (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x18026FA28 (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??1CNaturalAnimation@@UEAA@XZ @ 0x18027B2EC (--1CNaturalAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  _QWORD *v2; // rbp
  _QWORD *i; // rdi
  __int64 *v4; // rcx

  CBaseExpression::EnsureExpressionIsUnregistered(this);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 23);
  if ( *((_DWORD *)this + 55) )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 816LL) + 200LL);
  operator delete(*((void **)this + 24), 8uLL);
  v2 = (_QWORD *)*((_QWORD *)this + 30);
  for ( i = (_QWORD *)*((_QWORD *)this + 29); i != v2; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
  v4 = (__int64 *)*((_QWORD *)this + 32);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      v4,
      *((__int64 **)this + 33));
    std::_Deallocate<16>(
      *((void **)this + 32),
      (*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  std::vector<CLight *>::_Tidy((__int64)this + 232);
  CExpressionValue::DestroyCurrent((CBaseExpression *)((char *)this + 80));
  CResource::~CResource(this);
}
