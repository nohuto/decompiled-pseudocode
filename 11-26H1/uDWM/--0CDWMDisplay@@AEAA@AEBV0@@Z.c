/*
 * XREFs of ??0CDWMDisplay@@AEAA@AEBV0@@Z @ 0x1800B487C
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18006425C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  CDWMDisplay *v2; // rbx
  __int64 v3; // rax
  __int128 v4; // xmm1
  __int64 v5; // rcx

  v2 = this;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v3 = 2LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  do
  {
    *(_OWORD *)this = *(_OWORD *)a2;
    *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
    this = (CDWMDisplay *)((char *)this + 128);
    v4 = *((_OWORD *)a2 + 7);
    a2 = (const struct CDWMDisplay *)((char *)a2 + 128);
    *((_OWORD *)this - 1) = v4;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
  v5 = *((_QWORD *)v2 + 1);
  if ( v5 )
    (*(void (__fastcall **)(__int64, const struct CDWMDisplay *, _QWORD, __int64))(*(_QWORD *)v5 + 8LL))(
      v5,
      a2,
      0LL,
      128LL);
  *(_DWORD *)v2 = 1;
  return v2;
}
