/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x180200054
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801CF9A0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ @ 0x180200214 (-_Tidy@-$vector@PEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  char *v1; // r14
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _QWORD *v5; // rbp
  _QWORD *j; // rsi

  v1 = (char *)this + 288;
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  v3 = (_QWORD *)*((_QWORD *)this + 37);
  for ( i = (_QWORD *)*((_QWORD *)this + 36); i != v3; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
  v5 = (_QWORD *)*((_QWORD *)this + 40);
  for ( j = (_QWORD *)*((_QWORD *)this + 39); j != v5; ++j )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 16LL))(*j);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 42);
  std::vector<CLight *>::_Tidy((__int64)this + 312);
  std::vector<CPrimitiveColor *>::_Tidy(v1);
  CBaseExpression::~CBaseExpression(this);
}
