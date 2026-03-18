/*
 * XREFs of ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x180171690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRectanglesShape::IsEmpty(CRectanglesShape *this)
{
  float *v1; // rax
  __int64 v2; // rdx

  v1 = (float *)*((_QWORD *)this + 2);
  v2 = (__int64)(*((_QWORD *)this + 3) - (_QWORD)v1) >> 4;
  return !v2 || v2 == 1 && (v1[2] <= *v1 || v1[3] <= v1[1]);
}
