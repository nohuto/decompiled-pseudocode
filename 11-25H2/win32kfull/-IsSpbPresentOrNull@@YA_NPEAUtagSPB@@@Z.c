/*
 * XREFs of ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x14026EE9C
 * Callers:
 *     SpbCheckPwnd @ 0x140155C10 (SpbCheckPwnd.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSpbPresentOrNull(struct tagSPB *a1, __int64 a2)
{
  struct tagSPB *i; // rax

  if ( a1 )
  {
    for ( i = *(struct tagSPB **)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968) + 40LL); i; i = *(struct tagSPB **)i )
    {
      if ( i == a1 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LOBYTE(i) = 1;
  }
  return (char)i;
}
