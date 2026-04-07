/*
 * XREFs of ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180031DF4
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180031E4C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 */

__int64 __fastcall CWindowList::QueueDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // r8d
  char *v4; // rcx
  unsigned int v5; // eax
  struct CWindowData **i; // r9
  struct CWindowData *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = 0;
  v4 = (char *)this + 280;
  v5 = 0;
  for ( i = *(struct CWindowData ***)v4; v5 < *((_DWORD *)v4 + 6); ++i )
  {
    if ( a2 == *i )
      break;
    ++v5;
  }
  if ( v5 >= *((_DWORD *)this + 76) )
    return (unsigned int)DynArray<CWindowData *,0>::AddMultipleAndSet(v4, &v8, 0LL, i);
  return v2;
}
