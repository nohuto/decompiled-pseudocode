/*
 * XREFs of ?UMPDDrvFree@@YAXPEAXK@Z @ 0x14026AB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UMPDDrvFree(void *a1, int a2)
{
  if ( a1 && GrepIsEngineVa(a1) && a2 == (_DWORD)a1 )
    Win32FreePool(a1);
}
