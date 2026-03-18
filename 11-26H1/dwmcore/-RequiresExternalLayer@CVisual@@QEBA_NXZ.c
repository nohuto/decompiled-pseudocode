/*
 * XREFs of ?RequiresExternalLayer@CVisual@@QEBA_NXZ @ 0x1801227E0
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::RequiresExternalLayer(CVisual *this)
{
  int v2; // eax
  _DWORD *v3; // rdx
  __int64 v4; // rax
  _BYTE *v5; // r9
  __int64 *v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  char result; // al

  v2 = *(_DWORD *)(*((_QWORD *)this + 27) + 4LL);
  if ( (v2 & 0x8000) != 0 || (v2 & 0x2000000) != 0 || (v2 & 0x4000000) != 0 )
    return 1;
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v3 & 0x1000000) != 0 )
  {
    v4 = (unsigned int)v3[1];
    v5 = v3 + 2;
    v6 = 0LL;
    v7 = 0;
    if ( (_DWORD)v4 )
    {
      while ( *v5 != 8 )
      {
        ++v7;
        ++v5;
        if ( v7 >= (unsigned int)v4 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( v7 >= (unsigned int)v4 )
        goto LABEL_8;
    }
    v6 = (__int64 *)((char *)&v3[2 * v7] + ((v4 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_8:
    v8 = *v6;
    if ( v8 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, 51LL) )
      return 1;
  }
  result = (*(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 64LL))(this, 71LL);
  if ( !result )
    return result;
  if ( *((_QWORD *)this + 85) )
    return 1;
  return *((_QWORD *)this + 84) != 0LL;
}
