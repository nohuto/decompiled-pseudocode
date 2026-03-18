/*
 * XREFs of ?Has3DContent@CVisual@@IEBA_NXZ @ 0x18013F620
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::Has3DContent(CVisual *this)
{
  _DWORD *v1; // rdx
  _QWORD *v2; // rbx
  __int64 v4; // rax
  _BYTE *v5; // r8
  __int64 v6; // rcx
  _QWORD **v7; // rdi
  _QWORD *v8; // rdi

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  v2 = 0LL;
  if ( (*v1 & 0x1000000) == 0 )
    return v2 != 0LL;
  v4 = (unsigned int)v1[1];
  v5 = v1 + 2;
  v6 = 0LL;
  if ( (_DWORD)v4 )
  {
    while ( *v5 != 8 )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v5;
      if ( (unsigned int)v6 >= (unsigned int)v4 )
        goto LABEL_11;
    }
    goto LABEL_5;
  }
LABEL_11:
  if ( (unsigned int)v6 < (unsigned int)v4 )
  {
LABEL_5:
    v7 = (_QWORD **)((char *)&v1[2 * v6] + ((v4 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_6;
  }
  v7 = 0LL;
LABEL_6:
  v8 = *v7;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v8 + 64LL))(v8, 148LL) )
  {
    v2 = v8;
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v8 + 64LL))(v8, 48LL) )
  {
    v2 = (_QWORD *)v8[11];
  }
  return v2 != 0LL;
}
