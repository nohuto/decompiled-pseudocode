/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800AC374
 * Callers:
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18007CBD0 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800B8B50 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
