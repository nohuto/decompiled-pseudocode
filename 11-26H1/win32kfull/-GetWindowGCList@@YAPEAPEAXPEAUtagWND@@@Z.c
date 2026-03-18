/*
 * XREFs of ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401E4C98
 * Callers:
 *     GetGestureConfigSettings @ 0x1401E4A1C (GetGestureConfigSettings.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401E4E5C (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall GetWindowGCList(struct tagWND *a1)
{
  _DWORD *v2; // r8
  unsigned int v3; // edx
  __int64 v4; // rax
  struct tagWND **v5; // rcx
  __int64 v7; // rax

  v2 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 856LL);
  if ( !v2 )
    return 0LL;
  v3 = *v2;
  v4 = 0LL;
  if ( *v2 )
  {
    v5 = (struct tagWND **)(v2 + 6);
    while ( a1 != *v5 )
    {
      v4 = (unsigned int)(v4 + 1);
      v5 += 2;
      if ( (unsigned int)v4 >= v3 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( (unsigned int)v4 >= v3 )
      return 0LL;
  }
  _mm_lfence();
  v7 = *(_QWORD *)&v2[4 * v4 + 4];
  if ( !v7 )
    return 0LL;
  return *(void ***)(v7 + 16);
}
