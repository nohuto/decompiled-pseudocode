/*
 * XREFs of ??1CManipulation@@UEAA@XZ @ 0x18013CE50
 * Callers:
 *     ??_ECManipulation@@UEAAPEAXI@Z @ 0x18013CC90 (--_ECManipulation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ @ 0x18013CEE0 (--1-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  __int64 v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi

  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CManipulation::`vftable'{for `IManipulationResource'};
  v2 = *((_QWORD *)this + 91);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 91) = 0LL;
  }
  v3 = (char *)this + 536;
  v4 = 5LL;
  do
  {
    v3 -= 8;
    Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(v3);
    --v4;
  }
  while ( v4 );
  CResource::~CResource(this);
}
