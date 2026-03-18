/*
 * XREFs of ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x14004C070
 * Callers:
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x14004EE38 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  char v2; // bl

  v2 = 0;
  if ( IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
