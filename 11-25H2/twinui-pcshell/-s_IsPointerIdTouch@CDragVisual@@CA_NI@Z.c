/*
 * XREFs of ?s_IsPointerIdTouch@CDragVisual@@CA_NI@Z @ 0x1805222F4
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180521CB8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDragVisual::s_IsPointerIdTouch(__int64 a1)
{
  char v1; // bl
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (unsigned int)GetPointerType(a1, &v3) )
    return v3 == 2;
  return v1;
}
