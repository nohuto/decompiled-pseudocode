/*
 * XREFs of ?IsValid@CD2DGenericInk@@UEBAJXZ @ 0x1802A9480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DGenericInk::IsValid(CD2DGenericInk *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( !*((_QWORD *)this + 9) )
    return 2291674892LL;
  v1 = *(_QWORD *)(*((_QWORD *)this + 5) + 24LL);
  v2 = v1 + 1108;
  if ( !v1 )
    v2 = 1124LL;
  return *(_DWORD *)v2 != 0 ? 0x8898008D : 0;
}
