/*
 * XREFs of ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400F921C
 * Callers:
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400F8F4C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_LINEAR_POOL::MarkBlockForEviction(VIDMM_LINEAR_POOL *this, _BYTE *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rcx
  char **v6; // r10
  _QWORD *v7; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  char *v10; // rdi
  char *v11; // r11
  char v12; // al
  char *v13; // r9
  char v14; // al
  VIDMM_LINEAR_POOL *v15; // rdx
  char *v16; // r9
  __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx

  a2[56] = 4;
  if ( *((_DWORD *)this + 4) >= (unsigned int)(*((_DWORD *)this + 4) + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2194;
    DxgkLogInternalTriageEvent(v20, 0x40000LL);
  }
  ++*((_DWORD *)this + 4);
  v4 = a2 + 24;
  v5 = *((_QWORD *)a2 + 3);
  if ( *(_BYTE **)(v5 + 8) != a2 + 24 )
    goto LABEL_18;
  v6 = (char **)(a2 + 32);
  v7 = (_QWORD *)*((_QWORD *)a2 + 4);
  if ( (_QWORD *)*v7 != v4 )
    goto LABEL_18;
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  *v4 = 0LL;
  *v6 = 0LL;
  v8 = (char *)*((_QWORD *)a2 + 5);
  v9 = *((_QWORD *)a2 + 6);
  v10 = (char *)this + 80;
  while ( 1 )
  {
    v11 = v8;
    if ( v8 == v10 )
      break;
    if ( (char *)v9 == v10 )
      goto LABEL_19;
    v12 = v8[16];
    v13 = (char *)(v9 - 40);
    v8 = *(char **)v8;
    v9 = *(_QWORD *)(v9 + 8);
    if ( v12 != 3 && (unsigned __int8)(v12 - 5) > 2u )
    {
      v15 = (VIDMM_LINEAR_POOL *)*((_QWORD *)v11 - 1);
      goto LABEL_14;
    }
    v14 = v13[56];
    if ( v14 != 3 && (unsigned __int8)(v14 - 5) > 2u )
      goto LABEL_16;
  }
  v15 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 7);
LABEL_14:
  v13 = 0LL;
  if ( v15 != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
    v13 = (char *)v15 - 24;
LABEL_16:
  if ( !v13 )
  {
LABEL_19:
    v18 = (char *)this + 48;
    v19 = *((_QWORD *)this + 6);
    if ( *(VIDMM_LINEAR_POOL **)(v19 + 8) == (VIDMM_LINEAR_POOL *)((char *)this + 48) )
    {
      *v4 = v19;
      *v6 = v18;
      *(_QWORD *)(v19 + 8) = v4;
      *(_QWORD *)v18 = v4;
      return;
    }
LABEL_18:
    __fastfail(3u);
  }
  v16 = v13 + 24;
  v17 = *(_QWORD *)v16;
  if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
    goto LABEL_18;
  *v4 = v17;
  *v6 = v16;
  *(_QWORD *)(v17 + 8) = v4;
  *(_QWORD *)v16 = v4;
}
