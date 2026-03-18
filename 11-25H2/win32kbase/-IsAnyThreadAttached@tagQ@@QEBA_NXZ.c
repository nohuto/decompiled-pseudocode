/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140106F84
 * Callers:
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 63) || *((_QWORD *)this + 64) )
    return 1;
  return result;
}
