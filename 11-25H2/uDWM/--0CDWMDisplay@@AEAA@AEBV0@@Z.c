/*
 * XREFs of ??0CDWMDisplay@@AEAA@AEBV0@@Z @ 0x1800B4D7C
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18007883C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  __int64 v2; // rax
  CDWMDisplay *v4; // r8
  __int128 v5; // xmm1
  __int64 v6; // rcx

  v2 = 2LL;
  v4 = this;
  do
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *((_OWORD *)v4 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v4 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v4 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v4 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v4 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v4 + 6) = *((_OWORD *)a2 + 6);
    v4 = (CDWMDisplay *)((char *)v4 + 128);
    v5 = *((_OWORD *)a2 + 7);
    a2 = (const struct CDWMDisplay *)((char *)a2 + 128);
    *((_OWORD *)v4 - 1) = v5;
    --v2;
  }
  while ( v2 );
  *(_OWORD *)v4 = *(_OWORD *)a2;
  *((_OWORD *)v4 + 1) = *((_OWORD *)a2 + 1);
  *((_QWORD *)v4 + 4) = *((_QWORD *)a2 + 4);
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *(_DWORD *)this = 1;
  return this;
}
