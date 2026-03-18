/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1401ECC90
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic(__int64 a1)
{
  __int64 SessionState; // rax

  if ( *(_QWORD *)(a1 + 32) )
  {
    SessionState = W32GetSessionState(a1);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), *(unsigned int **)(a1 + 32));
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
