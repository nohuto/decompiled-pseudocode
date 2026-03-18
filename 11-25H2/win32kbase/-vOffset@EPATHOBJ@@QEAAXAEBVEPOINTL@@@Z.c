/*
 * XREFs of ?vOffset@EPATHOBJ@@QEAAXAEBVEPOINTL@@@Z @ 0x1400EDD20
 * Callers:
 *     <none>
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x140015B60 (-bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z.c)
 *     ?vOffset@PATH_CORE@@QEAAXAEBVEPOINTL@@K@Z @ 0x1400EDE70 (-vOffset@PATH_CORE@@QEAAXAEBVEPOINTL@@K@Z.c)
 */

void __fastcall EPATHOBJ::vOffset(EPATHOBJ *this, const struct EPOINTL *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  int *v11; // [rsp+30h] [rbp+8h] BYREF

  PATH_CORE::vOffset((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL), a2, *(_DWORD *)this);
  if ( *((_DWORD *)this + 14) )
  {
    v5 = 0;
    do
    {
      v6 = v5++;
      v7 = (_DWORD *)(*((_QWORD *)this + 6) + 16 * v6);
      *v7 += *(_DWORD *)a2;
      v7[2] += *(_DWORD *)a2;
      v7[1] += *((_DWORD *)a2 + 1);
      v7[3] += *((_DWORD *)a2 + 1);
    }
    while ( v5 < *((_DWORD *)this + 14) );
  }
  if ( *((_DWORD *)this + 15) )
  {
    v8 = 0;
    do
    {
      v9 = v8++;
      v10 = (_DWORD *)(*((_QWORD *)this + 8) + 16 * v9);
      *v10 += *(_DWORD *)a2;
      v10[2] += *(_DWORD *)a2;
      v10[1] += *((_DWORD *)a2 + 1);
      v10[3] += *((_DWORD *)a2 + 1);
    }
    while ( v8 < *((_DWORD *)this + 15) );
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) )
  {
    v11 = (int *)*((_QWORD *)this + 2);
    if ( v4 )
      RGNOBJ::bOffset(&v11, (const struct _POINTL *)a2);
    v11 = (int *)*((_QWORD *)this + 3);
    if ( v11 )
      RGNOBJ::bOffset(&v11, (const struct _POINTL *)a2);
    v11 = (int *)*((_QWORD *)this + 4);
    if ( v11 )
      RGNOBJ::bOffset(&v11, (const struct _POINTL *)a2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v11 = (int *)*((_QWORD *)this + 5);
    RGNOBJ::bOffset(&v11, (const struct _POINTL *)a2);
  }
}
