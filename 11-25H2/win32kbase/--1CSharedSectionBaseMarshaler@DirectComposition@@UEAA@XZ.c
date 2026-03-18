/*
 * XREFs of ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x140124C48
 * Callers:
 *     ??_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140124C10 (--_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(
        DirectComposition::CSharedSectionBaseMarshaler *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionBaseMarshaler::`vftable';
  v1 = (void *)*((_QWORD *)this + 7);
  if ( v1 )
    ObfDereferenceObject(v1);
}
