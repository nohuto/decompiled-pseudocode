/*
 * XREFs of ?StringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180055FE8
 * Callers:
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180055790 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyNW(char *a1, __int64 a2, char *a3)
{
  signed __int64 v3; // r8
  char *v4; // rdx
  __int64 v5; // r9
  __int16 v6; // ax
  char *v7; // rcx
  __int64 result; // rax

  v3 = a3 - a1;
  v4 = a1;
  v5 = 32LL;
  do
  {
    v6 = *(_WORD *)&v4[v3];
    if ( !v6 )
      break;
    *(_WORD *)v4 = v6;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v7 = v4 - 2;
  result = v5 == 0 ? 0x8007007A : 0;
  if ( v5 )
    v7 = v4;
  *(_WORD *)v7 = 0;
  return result;
}
