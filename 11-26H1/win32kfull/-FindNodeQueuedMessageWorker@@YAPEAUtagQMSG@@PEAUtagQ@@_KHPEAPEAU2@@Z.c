/*
 * XREFs of ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x140204340
 * Callers:
 *     EditionFindNodeQueuedMessage @ 0x140204310 (EditionFindNodeQueuedMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 */

struct tagQMSG *__fastcall FindNodeQueuedMessageWorker(struct tagQ *a1, __int64 a2, __int64 a3, struct tagQ **a4)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  _QWORD *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11

  if ( !a1 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 4);
  if ( v4 )
  {
    do
    {
      if ( IsPointerInputMessage(*(_DWORD *)(v4 + 24))
        && *(_QWORD *)(v4 + 40) == v9
        && (!v6 || (unsigned int)(v5 - 585) > 1) )
      {
        break;
      }
      v4 = *(_QWORD *)(v4 + 8);
    }
    while ( v4 );
    if ( v4 )
    {
      if ( v7 )
        *v7 = v8;
    }
  }
  return (struct tagQMSG *)v4;
}
