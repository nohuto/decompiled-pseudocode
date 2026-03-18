/*
 * XREFs of ??_GFxRequest@@UEAAPEAXI@Z @ 0x14002C870
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14002B070 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxRequest *__fastcall FxRequest::`scalar deleting destructor'(FxRequest *this, char a2)
{
  FxRequest *v5; // rcx

  FxRequestBase::~FxRequestBase(this);
  if ( (a2 & 1) != 0 )
  {
    v5 = (FxRequest *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
