/*
 * XREFs of ??1CEffectInputSet@DirectComposition@@QEAA@XZ @ 0x1402316B4
 * Callers:
 *     ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x140231420 (--1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CEffectInputSet::~CEffectInputSet(DirectComposition::CEffectInputSet *this)
{
  char *v2; // rcx
  char *v3; // rcx

  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 )
    GreDeleteFastMutex(v2);
  v3 = (char *)*((_QWORD *)this + 3);
  if ( v3 )
    GreDeleteFastMutex(v3);
}
