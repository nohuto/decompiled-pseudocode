/*
 * XREFs of ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1402B99F8
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401BE2C8 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GCRemoveHashElement(struct tagGESTURECONFIGLIST **a1, int a2)
{
  struct tagGESTURECONFIGLIST **v2; // r9
  __int64 v3; // r8
  struct tagGESTURECONFIGLIST *v5; // r11
  struct tagGESTURECONFIGLIST *i; // rcx
  struct tagGESTURECONFIGLIST *v7; // rax

  v2 = 0LL;
  v3 = a2 & 7;
  v5 = a1[v3];
  for ( i = v5; i; i = *(struct tagGESTURECONFIGLIST **)i )
  {
    v7 = *(struct tagGESTURECONFIGLIST **)i;
    if ( *((_DWORD *)i + 2) == a2 )
    {
      if ( i == v5 )
        a1[v3] = v7;
      else
        *v2 = v7;
      Win32FreePool(i);
      return;
    }
    v2 = (struct tagGESTURECONFIGLIST **)i;
  }
}
