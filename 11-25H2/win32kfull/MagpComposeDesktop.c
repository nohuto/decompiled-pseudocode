/*
 * XREFs of MagpComposeDesktop @ 0x14017324C
 * Callers:
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 * Callees:
 *     DwmAsyncMagnSetWindowFilterList @ 0x1401BA1E4 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x140269628 (DwmAsyncMagnSetWindowSharedTextures.c)
 *     DwmAsyncMagnCreate @ 0x140324564 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1403246EC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x140324A3C (DwmAsyncMagnSetWindowColorTransform.c)
 */

void __fastcall MagpComposeDesktop(_QWORD *a1, __int64 a2)
{
  void *v4; // rax
  _QWORD *i; // rdi
  __int64 *j; // rbx
  __int64 v7; // rdx
  void *v8; // rax
  __int64 v9; // rdx
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax

  if ( *(_QWORD *)(a2 + 240) )
  {
    v4 = (void *)ReferenceDwmApiPort(a1, a2);
    DwmAsyncMagnSetDesktopColorTransform(v4);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      v7 = j[3];
      if ( v7 != -1 )
      {
        v8 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v7);
        DwmAsyncMagnCreate(v8);
        if ( (j[2] & 4) != 0 )
        {
          v10 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v9);
          DwmAsyncMagnSetWindowColorTransform(v10);
        }
        if ( (j[2] & 8) != 0 )
        {
          v11 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v9);
          DwmAsyncMagnSetWindowFilterList(v11);
        }
        if ( (j[2] & 0x10) != 0 )
        {
          v12 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v9);
          DwmAsyncMagnSetWindowSharedTextures(v12);
        }
      }
      *((_DWORD *)j + 4) &= ~0x20u;
    }
  }
}
