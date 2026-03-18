/*
 * XREFs of ?StateFlags@PDEVOBJ@@QEBAKXZ @ 0x140348624
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1403487E0 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::StateFlags(PDEVOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( !v1 || v1 == -4 )
    return 0LL;
  else
    return *(unsigned int *)(v1 + 160);
}
