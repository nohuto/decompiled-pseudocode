/*
 * XREFs of xxxSendPointerMessage @ 0x14013745C
 * Callers:
 *     NtUserfnPOINTERINPUT @ 0x140137340 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxSendPointerMessageWorker @ 0x140137290 (xxxSendPointerMessageWorker.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140139028 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall xxxSendPointerMessage(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v9; // ecx
  struct tagTHREADPOINTERDATA *Blink; // rax
  __int64 v12; // r8
  struct _LIST_ENTRY *v13; // rcx

  if ( *(_QWORD *)(a1 + 1232) )
  {
    v9 = 5;
LABEL_3:
    UserSetLastError(v9);
    return 0LL;
  }
  v13 = (struct _LIST_ENTRY *)(a1 + 1208);
  Blink = (struct tagTHREADPOINTERDATA *)v13[1].Blink;
  if ( Blink )
  {
    if ( *((_WORD *)Blink + 8) != a2 )
      goto LABEL_10;
  }
  else
  {
    Blink = FindThreadPointerData(v13, a2);
    if ( !Blink )
    {
LABEL_10:
      v9 = 87;
      goto LABEL_3;
    }
  }
  if ( (*((_DWORD *)Blink + 12) & 8) != 0 )
    goto LABEL_10;
  v12 = *((_QWORD *)Blink + 3);
  if ( !v12 )
    goto LABEL_10;
  return xxxSendPointerMessageWorker(a3, a4, v12, a5, a6, a7);
}
