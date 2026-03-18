/*
 * XREFs of ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1401C3D38
 * Callers:
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMaxedRect(struct tagRECT *a1, const struct tagSIZERECT *a2)
{
  LONG top; // r8d
  _BOOL8 result; // rax

  result = 0;
  if ( *(_DWORD *)a2 <= a1->left )
  {
    top = a1->top;
    if ( *((_DWORD *)a2 + 1) <= top
      && *((_DWORD *)a2 + 2) >= a1->right - a1->left
      && *((_DWORD *)a2 + 3) >= a1->bottom - top )
    {
      return 1;
    }
  }
  return result;
}
