/*
 * XREFs of ?CheckWindowChildnessChanged@@YAXPEAUtagWND@@_N@Z @ 0x1401E34FC
 * Callers:
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 * Callees:
 *     <none>
 */

void __fastcall CheckWindowChildnessChanged(struct tagWND *a1, char a2)
{
  __int64 v3; // rcx
  char *v4; // rbx
  __int64 v5; // rcx
  struct tagWND **v6; // rcx

  v3 = *((_QWORD *)a1 + 5);
  if ( a2 != ((*(_BYTE *)(v3 + 31) & 0xC0) == 64) )
  {
    *(_QWORD *)(v3 + 320) = 0LL;
    v4 = (char *)a1 + 168;
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) &= ~1u;
    v5 = *((_QWORD *)a1 + 21);
    if ( v5 )
    {
      v6 = (struct tagWND **)(v5 + 80);
      if ( a1 == *v6 )
        HMAssignmentUnlock(v6);
      *(_QWORD *)(*((_QWORD *)v4 - 16) + 152LL) = 0LL;
      HMAssignmentUnlock(v4);
    }
  }
}
