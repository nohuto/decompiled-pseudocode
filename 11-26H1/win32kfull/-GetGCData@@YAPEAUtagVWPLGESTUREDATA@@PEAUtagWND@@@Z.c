/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401E5074
 * Callers:
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1401E49D0 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     GetGestureConfigSettings @ 0x1401E4A1C (GetGestureConfigSettings.c)
 *     SetGestureConfigSettings @ 0x1401E4CF4 (SetGestureConfigSettings.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401E4E5C (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  __int64 v1; // r8
  _DWORD *v3; // r9
  unsigned int v4; // edx
  int v5; // ecx
  __int64 v6; // rax
  struct tagWND **v7; // r10

  v1 = 0LL;
  v3 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 856LL);
  if ( v3 )
  {
    v4 = *v3;
    v5 = 1;
    v6 = 0LL;
    if ( *v3 )
    {
      v7 = (struct tagWND **)(v3 + 6);
      while ( a1 != *v7 )
      {
        v6 = (unsigned int)(v6 + 1);
        v7 += 2;
        if ( (unsigned int)v6 >= v4 )
          goto LABEL_6;
      }
      goto LABEL_9;
    }
LABEL_6:
    if ( (unsigned int)v6 < v4 )
    {
LABEL_9:
      v1 = *(_QWORD *)&v3[4 * v6 + 4];
      return (struct tagVWPLGESTUREDATA *)(v1 & -(__int64)(v5 != 0));
    }
  }
  v5 = 0;
  return (struct tagVWPLGESTUREDATA *)(v1 & -(__int64)(v5 != 0));
}
