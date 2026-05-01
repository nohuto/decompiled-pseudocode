/*
 * XREFs of ??0CShrinkButtonElement@@QEAA@XZ @ 0x1804AB030
 * Callers:
 *     ??0SwitchItemThumbnailElement@@QEAA@XZ @ 0x1804ADAEC (--0SwitchItemThumbnailElement@@QEAA@XZ.c)
 * Callees:
 *     ??0CMultitaskingViewButtonElement@@QEAA@XZ @ 0x1804AB00C (--0CMultitaskingViewButtonElement@@QEAA@XZ.c)
 */

CShrinkButtonElement *__fastcall CShrinkButtonElement::CShrinkButtonElement(CShrinkButtonElement *this)
{
  CShrinkButtonElement *v1; // rcx

  CMultitaskingViewButtonElement::CMultitaskingViewButtonElement(this);
  *(_QWORD *)v1 = &CShrinkButtonElement::`vftable';
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)v1 + 31) = 0LL;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)v1 + 33) = 0LL;
  return v1;
}
