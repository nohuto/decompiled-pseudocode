/*
 * XREFs of ?FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z @ 0x140184A10
 * Callers:
 *     xxxFindNCHitEx @ 0x1401848B4 (xxxFindNCHitEx.c)
 *     FindNCHitEx @ 0x140184990 (FindNCHitEx.c)
 * Callees:
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x140184AB8 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall FindNCMNItemHitEx(struct tagWND *a1, unsigned __int16 a2, const struct tagPOINT *a3)
{
  __int64 v3; // rdi
  int v5; // eax
  __int64 v6; // rcx

  v3 = *((_QWORD *)a1 + 21);
  v5 = MNItemHitTest((struct tagMENU *)v3, a1, *a3);
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(96LL * v5 + *(_QWORD *)(v3 + 88)) + 96LL);
    switch ( v6 )
    {
      case 1LL:
        a2 = 65;
        return a2 | ((unsigned __int16)v5 << 16);
      case 2LL:
        a2 = 66;
        return a2 | ((unsigned __int16)v5 << 16);
      case 3LL:
        goto LABEL_12;
      case 5LL:
      case 6LL:
        a2 = 68;
        return a2 | ((unsigned __int16)v5 << 16);
      case 7LL:
LABEL_12:
        a2 = 67;
        return a2 | ((unsigned __int16)v5 << 16);
    }
    a2 = -2;
    if ( v6 != -1 )
      a2 = 69;
  }
  return a2 | ((unsigned __int16)v5 << 16);
}
