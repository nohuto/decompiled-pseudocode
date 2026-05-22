/*
 * XREFs of ?RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x180149C88
 * Callers:
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x18002FBEC (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180144250 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 *     ??4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801496A8 (--4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall GestureHandler::RemoveGestureClient(GestureHandler *this, struct DragManagerClientProxy *a2)
{
  __int64 v2; // rdi
  struct DragManagerClientProxy **i; // rbx
  __int64 j; // rsi
  __int64 v7; // rsi

  v2 = *((_QWORD *)this + 15);
  for ( i = (struct DragManagerClientProxy **)*((_QWORD *)this + 14);
        i != (struct DragManagerClientProxy **)v2 && i[1] != a2;
        i += 5 )
  {
    ;
  }
  if ( i != (struct DragManagerClientProxy **)v2 )
  {
    for ( j = (__int64)(i + 5); j != v2; j += 40LL )
    {
      if ( *(struct DragManagerClientProxy **)(j + 8) != a2 )
      {
        GestureHandler::GestureClient::operator=((__int64)i, j);
        i += 5;
      }
    }
    if ( i != (struct DragManagerClientProxy **)v2 )
    {
      v7 = *((_QWORD *)this + 15);
      while ( v2 != v7 )
      {
        GestureHandler::GestureClient::operator=((__int64)i, v2);
        i += 5;
        v2 += 40LL;
      }
      std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(
        (GestureHandler::GestureClient *)i,
        *((GestureHandler::GestureClient **)this + 15));
      *((_QWORD *)this + 15) = i;
    }
  }
}
