/*
 * XREFs of ?UpdateInputSource@tagTHREADINFO@@QEAAXAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14016F820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagTHREADINFO::UpdateInputSource(tagTHREADINFO *this, const struct tagINPUT_MESSAGE_SOURCE *a2)
{
  *((_QWORD *)this + 172) = *(_QWORD *)a2;
}
