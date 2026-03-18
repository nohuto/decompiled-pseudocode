/*
 * XREFs of ?IsValid@CD2DEffect@@UEBAJXZ @ 0x1802A9410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DEffect::IsValid(CD2DEffect *this)
{
  if ( *((_QWORD *)this + 9) )
    return *(_DWORD *)((*(__int64 (__fastcall **)(CD2DEffect *))(*(_QWORD *)this + 40LL))(this) + 1124) != 0
         ? 0x8898008D
         : 0;
  else
    return 2291674892LL;
}
