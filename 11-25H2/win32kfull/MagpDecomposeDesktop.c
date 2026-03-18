/*
 * XREFs of MagpDecomposeDesktop @ 0x140203188
 * Callers:
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1402032B0 (MagpRevokeInputTransfrom.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x140222E8C (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnDestroy @ 0x14032463C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1403246EC (DwmAsyncMagnSetDesktopColorTransform.c)
 */

__int64 __fastcall MagpDecomposeDesktop(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *i; // rdi
  void *v8; // rax
  void *v9; // rax
  __int64 *j; // rbx
  __int64 v11; // rdx
  void *v12; // rax

  result = MagpRevokeInputTransfrom();
  if ( *(_QWORD *)(a2 + 240) )
  {
    v8 = (void *)ReferenceDwmApiPort(v6, v5);
    result = DwmAsyncMagnSetDesktopColorTransform(v8);
  }
  if ( *(_QWORD *)(a2 + 232) )
  {
    v9 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v5);
    result = DwmAsyncMagnSetDesktopTransform(v9, 0);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      *((_DWORD *)j + 4) |= 0x20u;
      v11 = j[3];
      if ( v11 != -1 )
      {
        v12 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v11);
        result = DwmAsyncMagnDestroy(v12);
      }
    }
  }
  return result;
}
