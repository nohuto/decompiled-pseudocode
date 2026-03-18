/*
 * XREFs of ?vOffset@EPATHOBJ@@QEAAXAEBVEPOINTL@@@Z @ 0x14012ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x14001FDF0 (-bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z.c)
 */

void __fastcall EPATHOBJ::vOffset(EPATHOBJ *this, const struct _POINTL *a2)
{
  int v2; // r8d
  __int64 v5; // r10
  int v6; // eax
  int v7; // r9d
  __int64 *v8; // rcx
  int v9; // r11d
  int v10; // esi
  __int64 i; // rdx
  __int64 v12; // rax
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)this;
  v5 = *((_QWORD *)this + 1);
  v6 = 16 * a2->y;
  v7 = 16 * a2->x;
  *(_DWORD *)(v5 + 48) += v7;
  *(_DWORD *)(v5 + 56) += v7;
  *(_DWORD *)(v5 + 52) += v6;
  *(_DWORD *)(v5 + 60) += v6;
  v8 = *(__int64 **)(v5 + 32);
  v9 = v6 >> 4;
  if ( (v2 & 4) == 0 )
    v9 = v6;
  v10 = v7 >> 4;
  if ( (v2 & 4) == 0 )
    v10 = v7;
  while ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v8 + 5); i = (unsigned int)(i + 1) )
    {
      LODWORD(v8[i + 3]) += v10;
      HIDWORD(v8[i + 3]) += v9;
    }
    v8 = (__int64 *)*v8;
  }
  if ( *((_DWORD *)this + 14) )
  {
    v13 = 0;
    do
    {
      v14 = *((_QWORD *)this + 6);
      v15 = v13++;
      v15 *= 16LL;
      *(_DWORD *)(v15 + v14) += a2->x;
      *(_DWORD *)(v15 + v14 + 8) += a2->x;
      *(_DWORD *)(v15 + v14 + 4) += a2->y;
      *(_DWORD *)(v15 + v14 + 12) += a2->y;
    }
    while ( v13 < *((_DWORD *)this + 14) );
  }
  if ( *((_DWORD *)this + 15) )
  {
    v16 = 0;
    do
    {
      v17 = *((_QWORD *)this + 8);
      v18 = v16++;
      v18 *= 16LL;
      *(_DWORD *)(v18 + v17) += a2->x;
      *(_DWORD *)(v18 + v17 + 8) += a2->x;
      *(_DWORD *)(v18 + v17 + 4) += a2->y;
      *(_DWORD *)(v18 + v17 + 12) += a2->y;
    }
    while ( v16 < *((_DWORD *)this + 15) );
  }
  v12 = *((_QWORD *)this + 2);
  if ( v12 || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) )
  {
    v19 = *((_QWORD *)this + 2);
    if ( v12 )
      RGNOBJ::bOffset((RGNOBJ *)&v19, a2);
    v19 = *((_QWORD *)this + 3);
    if ( v19 )
      RGNOBJ::bOffset((RGNOBJ *)&v19, a2);
    v19 = *((_QWORD *)this + 4);
    if ( v19 )
      RGNOBJ::bOffset((RGNOBJ *)&v19, a2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v19 = *((_QWORD *)this + 5);
    RGNOBJ::bOffset((RGNOBJ *)&v19, a2);
  }
}
