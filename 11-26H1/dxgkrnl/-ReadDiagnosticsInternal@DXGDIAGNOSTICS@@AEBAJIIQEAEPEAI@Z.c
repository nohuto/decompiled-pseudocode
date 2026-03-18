/*
 * XREFs of ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x14004AC1C
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BBFC (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x14004AB54 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 * Callees:
 *     ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x14004E0F8 (-CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnosticsInternal(
        DXGDIAGNOSTICS *this,
        int a2,
        unsigned int a3,
        unsigned __int8 *const a4,
        unsigned int *a5)
{
  __int64 v5; // rbp
  unsigned int *v6; // rax
  unsigned int v7; // r14d
  unsigned int *v9; // r8
  unsigned int v10; // esi
  int v11; // ebx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  const void *v15; // rdx
  int v16; // ebx
  size_t v17; // r8
  unsigned __int8 *v18; // rcx
  unsigned int v20; // r12d
  unsigned int v21; // edi
  unsigned int v22; // r10d
  char *v23; // r11
  unsigned int v24; // edx
  char *v25; // rcx
  int v26; // eax
  size_t v27; // rbx
  unsigned int v28; // ebx
  unsigned int v29; // r8d
  unsigned __int8 *v31; // [rsp+28h] [rbp-A0h]
  unsigned int v32; // [rsp+30h] [rbp-98h]
  unsigned int v33; // [rsp+34h] [rbp-94h]
  unsigned int *v34; // [rsp+40h] [rbp-88h]
  void *Src; // [rsp+48h] [rbp-80h]
  unsigned int v36; // [rsp+50h] [rbp-78h]
  _OWORD v37[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v38; // [rsp+78h] [rbp-50h]

  v5 = *((unsigned int *)this + 8);
  v6 = (unsigned int *)((char *)this + 16);
  v7 = *((_DWORD *)this + 9);
  v9 = a5;
  v10 = 0;
  v11 = a2;
  v31 = a4;
  v34 = (unsigned int *)((char *)this + 16);
  if ( (unsigned int)v5 <= v7 )
    v34 = (unsigned int *)((char *)this + 16);
  else
    v7 += *v6;
  if ( v7 == (_DWORD)v5 )
    goto LABEL_11;
  if ( a2 == -1 )
  {
    if ( v7 > (unsigned int)v5 )
    {
      v13 = *((_DWORD *)this + 4);
      v10 = v7 - v5;
      v14 = v7 - v5;
      if ( v7 - (unsigned int)v5 > a3 )
        v14 = a3;
      v15 = (const void *)(*((_QWORD *)this + 7) + v5);
      v16 = v14 + v5;
      if ( v14 + (unsigned int)v5 > v13 )
      {
        memmove(a4, v15, v13 - (unsigned int)v5);
        v26 = *((_DWORD *)this + 4);
        v15 = (const void *)*((_QWORD *)this + 7);
        v18 = &v31[(unsigned int)(v26 - v5)];
        v17 = (unsigned int)(v16 - v26);
      }
      else
      {
        v17 = v14;
        v18 = a4;
      }
      memmove(v18, v15, v17);
    }
    goto LABEL_11;
  }
  v20 = 0;
  v21 = 0;
  if ( (unsigned int)v5 >= v7 )
    goto LABEL_11;
  while ( 1 )
  {
    v22 = *v6;
    v23 = (char *)*((_QWORD *)this + 7);
    v24 = (unsigned int)v5 % *v6;
    v33 = *v6;
    v37[0] = 0LL;
    v36 = v24;
    v38 = 0LL;
    Src = v23;
    v32 = (unsigned int)v5 % v22 + 48;
    v25 = &v23[v24];
    if ( v32 > v22 )
    {
      v27 = v22 - v24;
      memmove(v37, &v23[v24], v27);
      memmove((char *)v37 + v27, Src, v32 - v33);
      a4 = v31;
      v9 = a5;
      v24 = v36;
      v11 = a2;
    }
    else
    {
      v37[0] = *(_OWORD *)v25;
      v38 = *((_OWORD *)v25 + 2);
    }
    if ( SDWORD1(v38) < 0 || (DWORD1(v38) & 0x7FFFFFFF) == v11 )
      break;
    if ( v21 )
    {
      v28 = a3;
      if ( a3 >= v21 )
        v28 = v21;
      if ( v28 )
      {
        DXGDIAGNOSTICS::CopyFromBuffer(this, v20, v28, a4);
        a4 = &v31[v28];
        v31 = a4;
        a3 -= v28;
      }
      v10 += v21;
      v21 = 0;
    }
LABEL_21:
    LODWORD(v5) = DWORD1(v37[0]) + v5;
    v6 = v34;
    v9 = a5;
    v11 = a2;
    if ( (unsigned int)v5 >= v7 )
      goto LABEL_22;
  }
  if ( !v21 )
    v20 = v24;
  v21 += DWORD1(v37[0]);
  if ( v21 < a3 || v9 )
    goto LABEL_21;
LABEL_22:
  if ( v21 )
  {
    if ( a3 )
    {
      v29 = v21;
      if ( v21 > a3 )
        v29 = a3;
      DXGDIAGNOSTICS::CopyFromBuffer(this, v20, v29, a4);
    }
    v10 += v21;
  }
LABEL_11:
  if ( a5 )
    *a5 = v10;
  return 0LL;
}
