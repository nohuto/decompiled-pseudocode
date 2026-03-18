/*
 * XREFs of ?SetDTEThread@tagTERMINAL@@QEAAXXZ @ 0x14015DE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagTERMINAL::SetDTEThread(tagTERMINAL *this)
{
  *((_QWORD *)this + 8) = **((_QWORD **)this + 2);
}
