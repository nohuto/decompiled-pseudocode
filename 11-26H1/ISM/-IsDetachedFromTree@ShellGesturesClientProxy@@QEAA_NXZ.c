/*
 * XREFs of ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x18007C7F0
 * Callers:
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180095760 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x18015D158 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShellGesturesClientProxy::IsDetachedFromTree(ShellGesturesClientProxy *this)
{
  __int64 v1; // rax
  char v2; // dl
  _DWORD *i; // rcx

  v1 = *((_QWORD *)this + 20);
  v2 = 0;
  if ( v1 )
  {
    for ( i = *(_DWORD **)(v1 + 16); i != *(_DWORD **)(v1 + 24); i += 4 )
    {
      if ( !*i )
        return v2;
    }
    return 1;
  }
  return v2;
}
