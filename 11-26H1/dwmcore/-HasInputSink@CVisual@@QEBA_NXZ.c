/*
 * XREFs of ?HasInputSink@CVisual@@QEBA_NXZ @ 0x18009F630
 * Callers:
 *     ?GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z @ 0x18009E374 (-GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasInputSink(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE *v4; // r9
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  v2 = 0LL;
  if ( (*v1 & 0x2000000) == 0 )
    return v2 != 0;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 7 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v4;
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( (unsigned int)v5 >= (unsigned int)v3 )
    {
      v6 = 0LL;
      goto LABEL_5;
    }
  }
  v6 = (__int64 *)((char *)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_5:
  v7 = *v6;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 112);
    if ( v8 )
      v2 = *(_QWORD *)(v8 + 64);
  }
  return v2 != 0;
}
