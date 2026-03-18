/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18017F7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rcx
  char v6; // al
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v9; // rax
  char v10; // r14
  unsigned int v11; // edi
  __int64 i; // rbx
  __int64 *v13; // rcx
  __int64 v14; // rax
  char v16; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v4 = *((_QWORD *)this + 20);
  if ( !v4 || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4) )
    return 0;
  if ( !a2 || !*((_BYTE *)a2 + 7936) )
    goto LABEL_11;
  v6 = *((_BYTE *)a2 + 7937);
  v7 = 3208LL;
  v8 = (char *)a2 + 3208;
  if ( !v6 )
    v7 = 7952LL;
  if ( !*(_QWORD *)((char *)a2 + v7) )
    goto LABEL_11;
  if ( !v6 )
    v8 = (char *)a2 + 7952;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 232LL))(*(_QWORD *)v8);
  if ( v9 && *(_QWORD *)(v9 + 8) )
    v10 = 1;
  else
LABEL_11:
    v10 = 0;
  v11 = *((_DWORD *)this + 48);
  for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
  {
    v13 = *(__int64 **)(*((_QWORD *)this + 21) + 8 * i);
    if ( v13 )
    {
      v14 = *v13;
      v16 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, struct CDrawingContext *, char *))(v14 + 320))(v13, a2, &v16) )
        return 0;
    }
    else if ( !v10 )
    {
      return 0;
    }
  }
  return 1;
}
