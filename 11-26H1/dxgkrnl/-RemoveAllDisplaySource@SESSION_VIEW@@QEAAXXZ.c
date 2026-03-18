/*
 * XREFs of ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x140364F1C
 * Callers:
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1403651C0 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x140386FCC (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_VIEW::RemoveAllDisplaySource(SESSION_VIEW *this)
{
  SESSION_VIEW *v1; // rax
  SESSION_VIEW *v2; // r8
  SESSION_VIEW *v3; // r9
  SESSION_VIEW **v4; // r10

  v1 = (SESSION_VIEW *)*((_QWORD *)this + 6);
  while ( v1 != (SESSION_VIEW *)((char *)this + 48) )
  {
    v2 = *(SESSION_VIEW **)v1;
    v3 = v1;
    v1 = v2;
    *((_QWORD *)v3 - 1) = 0LL;
    if ( *((SESSION_VIEW **)v2 + 1) != v3 || (v4 = (SESSION_VIEW **)*((_QWORD *)v3 + 1), *v4 != v3) )
      __fastfail(3u);
    *v4 = v2;
    *((_QWORD *)v2 + 1) = v4;
    --*((_DWORD *)this + 10);
  }
}
