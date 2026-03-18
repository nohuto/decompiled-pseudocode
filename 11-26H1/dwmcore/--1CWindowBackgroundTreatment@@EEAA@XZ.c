/*
 * XREFs of ??1CWindowBackgroundTreatment@@EEAA@XZ @ 0x1801C74BC
 * Callers:
 *     ??_ECWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x1801C7470 (--_ECWindowBackgroundTreatment@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801C74FC (--1-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CWindowBackgroundTreatment::~CWindowBackgroundTreatment(struct CResource **this)
{
  *this = (struct CResource *)&CWindowBackgroundTreatment::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::~com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(this + 10);
  CResource::~CResource((CResource *)this);
}
