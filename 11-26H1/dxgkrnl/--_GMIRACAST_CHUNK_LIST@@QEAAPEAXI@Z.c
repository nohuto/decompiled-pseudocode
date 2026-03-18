/*
 * XREFs of ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x140087834
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastTearDownAssociation @ 0x140088FAC (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x140087B94 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 */

MIRACAST_CHUNK_LIST *__fastcall MIRACAST_CHUNK_LIST::`scalar deleting destructor'(MIRACAST_CHUNK_LIST *this)
{
  MIRACAST_CHUNK_LIST *i; // rbx
  struct MIRACAST_CHUNK *v2; // rax

  for ( i = this; ; this = i )
  {
    v2 = MIRACAST_CHUNK_LIST::RemoveHead(this);
    if ( !v2 )
      break;
    ExFreePoolWithTag(v2, 0);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(i);
  return i;
}
