/*
 * XREFs of HasMessageRootWindow @ 0x1402ACAB4
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     GetMessageWindow @ 0x140062A3C (GetMessageWindow.c)
 *     _GetAncestor @ 0x1401302BC (_GetAncestor.c)
 */

__int64 __fastcall HasMessageRootWindow(_QWORD *a1)
{
  unsigned int v1; // r11d
  __int64 MessageWindow; // rax
  __int64 v4; // r10

  v1 = 0;
  if ( a1 )
  {
    GetAncestor(a1, 4);
    MessageWindow = GetMessageWindow((__int64)a1);
    if ( v4 == MessageWindow )
      return 1;
  }
  return v1;
}
