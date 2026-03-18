/*
 * XREFs of ??1CToken@@UEAA@XZ @ 0x14003E580
 * Callers:
 *     ??_GCToken@@UEAAPEAXI@Z @ 0x14003E490 (--_GCToken@@UEAAPEAXI@Z.c)
 *     ??_ECDisableScanoutToken@@UEAAPEAXI@Z @ 0x14003E4D0 (--_ECDisableScanoutToken@@UEAAPEAXI@Z.c)
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x14003E548 (--1CFlipContentToken@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CToken::~CToken(CToken *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  *(_QWORD *)this = &CToken::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 12);
  if ( v2 )
    (**v2)(v2);
  ObfDereferenceObject(*((PVOID *)this + 6));
  *(_QWORD *)this = &CTokenBase::`vftable';
}
