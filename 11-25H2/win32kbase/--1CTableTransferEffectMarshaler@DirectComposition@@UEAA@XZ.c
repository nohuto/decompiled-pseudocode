/*
 * XREFs of ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x140232E34
 * Callers:
 *     ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140228740 (--_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x140231420 (--1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 */

void __fastcall DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(
        DirectComposition::CTableTransferEffectMarshaler *this)
{
  char **v2; // rbx
  __int64 v3; // rsi

  *(_QWORD *)this = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
  v2 = (char **)((char *)this + 112);
  v3 = 4LL;
  do
  {
    if ( *v2 )
      GreDeleteFastMutex(*v2);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(this);
}
