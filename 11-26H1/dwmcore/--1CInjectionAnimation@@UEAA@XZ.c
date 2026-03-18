/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x18026FA28
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x18026FA60 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = (void *)&CInjectionAnimation::`vftable';
  operator delete(this[35]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
