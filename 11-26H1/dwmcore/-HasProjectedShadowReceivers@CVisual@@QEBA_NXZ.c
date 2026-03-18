/*
 * XREFs of ?HasProjectedShadowReceivers@CVisual@@QEBA_NXZ @ 0x180160510
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasProjectedShadowReceivers(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  _BYTE *v4; // r8
  unsigned __int64 v5; // rdx
  unsigned int v6; // r9d

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x80000) == 0 )
    return 0;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 13 )
    {
      ++v6;
      ++v4;
      if ( v6 >= (unsigned int)v3 )
        goto LABEL_9;
    }
    goto LABEL_5;
  }
LABEL_9:
  if ( v6 < (unsigned int)v3 )
LABEL_5:
    v5 = (unsigned __int64)&v1[2 * v6] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
  return **(_QWORD **)v5 != *(_QWORD *)(*(_QWORD *)v5 + 8LL);
}
