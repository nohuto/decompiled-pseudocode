/*
 * XREFs of ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x14019F420
 * Callers:
 *     FreeWindowGCData @ 0x14019F0B0 (FreeWindowGCData.c)
 *     SetGestureConfigSettings @ 0x1401BDD88 (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeWindowGCList(struct tagGESTURECONFIGLIST **a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = 8LL;
  do
  {
    v3 = *a1;
    if ( *a1 )
    {
      do
      {
        v4 = (_QWORD *)*v3;
        Win32FreePool(v3);
        v3 = v4;
      }
      while ( v4 );
    }
    *a1++ = 0LL;
    --v2;
  }
  while ( v2 );
}
