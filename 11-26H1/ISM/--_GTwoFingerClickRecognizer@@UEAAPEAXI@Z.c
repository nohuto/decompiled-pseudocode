/*
 * XREFs of ??_GTwoFingerClickRecognizer@@UEAAPEAXI@Z @ 0x1801BB2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TwoFingerClickRecognizer *__fastcall TwoFingerClickRecognizer::`scalar deleting destructor'(
        TwoFingerClickRecognizer *this,
        char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
