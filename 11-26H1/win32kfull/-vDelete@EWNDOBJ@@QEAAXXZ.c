/*
 * XREFs of ?vDelete@EWNDOBJ@@QEAAXXZ @ 0x1403190C4
 * Callers:
 *     GreDeleteWnd @ 0x14031A0A0 (GreDeleteWnd.c)
 * Callees:
 *     <none>
 */

void __fastcall EWNDOBJ::vDelete(EWNDOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 46) & 0x10000000) != 0 )
    GreDeleteSemaphore(*((_QWORD *)this + 25), a2, a3);
  if ( *((_QWORD *)this + 24) )
  {
    v4 = *((_QWORD *)this + 24);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  }
  RGNOBJ::vDeleteRGNOBJ((EWNDOBJ *)((char *)this + 56));
}
