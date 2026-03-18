/*
 * XREFs of ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BBFC
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000B688 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x14000BA48 (-ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ.c)
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x14004AC1C (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 *     ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14005065C (-IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  struct _DXGK_DIAG_HEADER *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  int v10; // edx
  __int64 v11; // rdx
  unsigned __int64 v12; // r15
  int EventOrder; // eax
  unsigned int v14; // edx
  int v15; // r12d
  __int64 v16; // r8
  unsigned int v17; // ecx
  void *v18; // rbx
  unsigned int v19; // r15d
  unsigned int v21; // eax
  __m128i v22; // xmm1
  __int64 v23; // r8
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  const void *v26; // rdx
  int v27; // r13d
  int i; // edx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // edx
  __int128 v32; // xmm2
  unsigned int v33; // eax
  unsigned int v34; // ebx
  _OWORD *v35; // rax
  __m128i v36; // xmm0
  unsigned int v37; // ebx
  __int64 v38; // rax
  size_t v39; // rbx
  int IsPersistentPacket; // r10d
  int v41; // r9d
  unsigned int v42; // edx
  unsigned int v43; // [rsp+30h] [rbp-99h]
  int v44; // [rsp+34h] [rbp-95h]
  DXGDIAGNOSTICS *v45; // [rsp+38h] [rbp-91h]
  void *Src; // [rsp+40h] [rbp-89h]
  _OWORD v47[2]; // [rsp+48h] [rbp-81h] BYREF
  __m128i v48; // [rsp+68h] [rbp-61h]
  unsigned __int8 v49[16]; // [rsp+78h] [rbp-51h] BYREF
  __int128 v50; // [rsp+88h] [rbp-41h]
  __m128i v51; // [rsp+98h] [rbp-31h]
  _OWORD v52[3]; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v53; // [rsp+D8h] [rbp+Fh]

  v53 = 0LL;
  memset(v52, 0, sizeof(v52));
  if ( !a2 )
    return 2147483653LL;
  v4 = *((_DWORD *)this + 4);
  v5 = *((_DWORD *)a2 + 1);
  if ( v5 >= v4 || v5 < 0x30 )
    return 2147483653LL;
  v6 = *((_DWORD *)this + 9);
  v7 = a2;
  v8 = *((_DWORD *)this + 8);
  v45 = 0LL;
  v44 = 0;
  v9 = v6 + v4;
  if ( v8 <= v6 )
    v9 = *((_DWORD *)this + 9);
  v10 = 0;
  v43 = v9;
  while ( 1 )
  {
    if ( v10 )
      goto LABEL_12;
    if ( *(_DWORD *)a2 == *(_DWORD *)this )
      break;
    v10 = 1;
  }
  v11 = *((_QWORD *)this + 1);
  v45 = this;
  v44 = 1;
  if ( v11
    && v5 == *(_DWORD *)(v11 + 4)
    && RtlCompareMemory((char *)a2 + 48, (const void *)(v11 + 48), v5 - 48) == v5 - 48 )
  {
    v7 = (struct _DXGK_DIAG_HEADER *)v52;
    *((_QWORD *)&v52[0] + 1) = *((_QWORD *)a2 + 1);
    v38 = *((_QWORD *)this + 1);
    *(_QWORD *)&v52[0] = 0x380000001CLL;
    v44 = 0;
    LODWORD(v53) = *(_DWORD *)(v38 + 40);
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_12:
      v12 = *((unsigned int *)this + 4);
      if ( (unsigned __int64)(*((_DWORD *)v7 + 1) + v9 - v8) + 48 < v12 )
      {
        *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 10))++;
        EventOrder = WdLogGetEventOrder();
        v14 = *((_DWORD *)v7 + 1);
        v15 = 0;
        *((_DWORD *)v7 + 11) = EventOrder;
        v16 = *((unsigned int *)this + 9);
        v17 = *((_DWORD *)this + 4);
        v18 = (void *)(v16 + *((_QWORD *)this + 7));
        v19 = v14 + v16;
        if ( v14 + (unsigned int)v16 > v17 )
        {
          memmove(v18, v7, v17 - (unsigned int)v16);
          memmove(
            *((void **)this + 7),
            (char *)v7 + (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 9)),
            v19 - *((_DWORD *)this + 4));
          v15 = 1;
        }
        else
        {
          memmove(v18, v7, v14);
        }
        *((_DWORD *)this + 9) = v19 % *((_DWORD *)this + 4);
        if ( v44 )
        {
          if ( !v15 )
            *((_QWORD *)v45 + 1) = v18;
        }
        WriteDxgDiagnosticsEvent(a2);
        return 0LL;
      }
      v21 = *((_DWORD *)this + 9);
      v22 = 0LL;
      v23 = *((unsigned int *)this + 8);
      *(_OWORD *)v49 = 0LL;
      v24 = v21 + v12;
      if ( (unsigned int)v23 <= v21 )
        v24 = v21;
      v50 = 0LL;
      v51 = 0LL;
      if ( v24 > (unsigned int)v23 )
      {
        v25 = v24 - v23;
        Src = (void *)*((_QWORD *)this + 7);
        if ( v25 > 0x30 )
          v25 = 48;
        v26 = (const void *)(*((_QWORD *)this + 7) + v23);
        v27 = v25 + v23;
        if ( v25 + (unsigned int)v23 > (unsigned int)v12 )
        {
          v39 = (unsigned int)(v12 - v23);
          memmove(v49, v26, v39);
          memmove(&v49[v39], Src, (unsigned int)(v27 - v12));
          v9 = v43;
        }
        else
        {
          memmove(v49, v26, v25);
        }
        v22 = *(__m128i *)v49;
      }
      if ( *((_QWORD *)v7 + 1) - _mm_srli_si128(v22, 8).m128i_u64[0] >= *((_QWORD *)this + 3) )
        break;
      if ( (unsigned int)DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(this) )
      {
        v22.m128i_i64[1] = *(_QWORD *)&v49[8];
        break;
      }
      v9 = *((_DWORD *)this + 9);
      v8 = *((_DWORD *)this + 8);
      v43 = v9;
    }
    for ( i = 0; ; i = 1 )
    {
      if ( i )
      {
        v29 = 0;
        goto LABEL_33;
      }
      if ( *((_QWORD *)this + 7) + *((unsigned int *)this + 8) == *((_QWORD *)this + 1) )
        break;
    }
    v29 = 1;
LABEL_33:
    v30 = *((_DWORD *)this + 4);
    if ( v29 )
      break;
    v8 += *(_DWORD *)&v49[4];
    *((_DWORD *)this + 8) = (*(_DWORD *)&v49[4] + *((_DWORD *)this + 8)) % v30;
  }
  v31 = *((_DWORD *)this + 9);
  v32 = v50;
  v48 = v51;
  *((_QWORD *)&v47[0] + 1) = v22.m128i_i64[1];
  LODWORD(v47[0]) = 27;
  v47[1] = v50;
  v48.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v51, 8)) - 1;
  v33 = v30 - v9;
  v34 = v31 + 48;
  DWORD1(v47[0]) = v8 + v33;
  v35 = (_OWORD *)(*((_QWORD *)this + 7) + v31);
  if ( v31 + 48 > v30 )
  {
    memmove(v35, v47, v30 - v31);
    memmove(
      *((void **)this + 7),
      (char *)v47 + (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 9)),
      v34 - *((_DWORD *)this + 4));
  }
  else
  {
    *v35 = v47[0];
    v36 = v48;
    v35[1] = v32;
    v35[2] = v36;
  }
  v37 = *((_DWORD *)this + 8);
  while ( (int)DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, 0xFFFFFFFF, 0x30u, v49, 0LL) >= 0 )
  {
    IsPersistentPacket = DXGDIAGNOSTICS::IsPersistentPacket(
                           this,
                           (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 7) + *((unsigned int *)this + 8)));
    v42 = (unsigned int)(v41 + *(_DWORD *)&v49[4]) % *((_DWORD *)this + 4);
    *((_DWORD *)this + 8) = v42;
    if ( !IsPersistentPacket )
      v42 = v37;
    v37 = v42;
    if ( !IsPersistentPacket )
      goto LABEL_41;
  }
  WdLogSingleEntry3(3LL, v8, v7, *((unsigned int *)v7 + 1));
  WdLogGlobalForLineNumber = 2087;
LABEL_41:
  *((_DWORD *)this + 9) = v37;
  return 3221226029LL;
}
