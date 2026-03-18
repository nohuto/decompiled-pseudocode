/*
 * XREFs of W32GetCurrentThreadDpiHostingBehavior @ 0x140142740
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiHostingBehavior(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // ecx
  struct tagTHREADINFO *v5; // [rsp+40h] [rbp+8h]
  int *v6; // [rsp+48h] [rbp+10h]

  v5 = PtiCurrent(a1, a2);
  v2 = 0;
  if ( v5 && *((_QWORD *)v5 + 51) )
  {
    v6 = (int *)*((_QWORD *)v5 + 51);
    if ( v6[1] )
    {
      v3 = *v6;
      if ( !*v6 || v3 == 1 )
        *((_DWORD *)v5 + 99) = v3;
      v6[1] = 0;
    }
    return *((unsigned int *)v5 + 99);
  }
  return v2;
}
