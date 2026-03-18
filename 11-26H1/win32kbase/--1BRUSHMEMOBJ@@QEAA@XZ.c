/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14019BAFC
 * Callers:
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(unsigned int **this)
{
  __int64 SessionState; // rax

  if ( *this )
  {
    SessionState = W32GetSessionState(this);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), *this);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(*(struct HOBJ__ **)*this, 0, 0);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 2);
}
