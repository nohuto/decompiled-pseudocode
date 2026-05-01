/*
 * XREFs of DSA_Create @ 0x180684170
 * Callers:
 *     ?Create@?$CDSA_Base@U_AdapterInfo@@@@QEAAHH@Z @ 0x1805BEB08 (-Create@-$CDSA_Base@U_AdapterInfo@@@@QEAAHH@Z.c)
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180675420 (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x1806943F0 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 * Callees:
 *     <none>
 */

HDSA __stdcall DSA_Create(int cbItem, int cItemGrow)
{
  struct _DSA *v2; // rbx
  HANDLE ProcessHeap; // rax
  struct _DSA *v6; // rax
  struct _DSA *v7; // rcx
  int v8; // eax

  v2 = 0LL;
  if ( cbItem > 0 )
  {
    ProcessHeap = GetProcessHeap();
    v6 = (struct _DSA *)HeapAlloc(ProcessHeap, 8u, 0x20uLL);
    v7 = v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 5) = cbItem;
      if ( (int)(0x7FFFFFFFu / cbItem) < cItemGrow )
        cItemGrow = 0x7FFFFFFFu / cbItem;
      v8 = 1;
      v2 = v7;
      if ( cItemGrow > 1 )
        v8 = cItemGrow;
      *((_DWORD *)v7 + 6) = v8;
    }
  }
  return v2;
}
