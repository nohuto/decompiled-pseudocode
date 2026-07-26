/*
 * XREFs of ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140042EE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreGenStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v3; // cl
  int v4; // eax
  unsigned __int8 result; // al
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // r11
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  int v24; // r10d
  __int64 v25; // r8
  _QWORD *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // r10d
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rax
  int v34; // r10d
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  int v38; // r10d
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // rax
  int v42; // r10d
  int v43; // r10d
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rax
  int v47; // r10d
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rax
  int v51; // r10d
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD *v54; // rax
  int v55; // r10d
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  int v59; // r10d
  __int64 v60; // rcx
  __int64 v61; // r8
  _QWORD *v62; // rax
  int v63; // r10d
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rax
  __int64 v68; // r8
  unsigned int i; // edx
  __int64 v70; // rsi
  int v71; // eax
  unsigned int v72; // eax

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 4);
  if ( v4 && v4 != 2 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( *(_BYTE *)(v6 + 32) >= 6u )
  {
    v68 = *(_QWORD *)(v6 + 4448);
    if ( v68 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= 5 )
          return 0;
        v70 = *(_QWORD *)(v68 + 600) + 24LL * i;
        if ( *(_DWORD *)v70 == *(_DWORD *)(v1 + 32) )
          break;
      }
      if ( v70 )
      {
        v71 = *(_DWORD *)(v70 + 16);
        if ( v71 == -1073741637 || v71 == -1073676265 || v71 == 65537 )
        {
          *((_DWORD *)a1 + 10) = v71;
          return 1;
        }
        if ( *(_BYTE *)(v70 + 20) )
        {
          v72 = *(_DWORD *)(v70 + 4);
          if ( *(_DWORD *)(v1 + 48) >= v72 )
          {
            memmove(*(void **)(v1 + 40), *(const void **)(v70 + 8), v72);
            *(_DWORD *)(v1 + 52) = *(_DWORD *)(v70 + 4);
            *((_DWORD *)a1 + 10) = 0;
            return 1;
          }
        }
      }
      return 0;
    }
    return v3;
  }
  if ( !*(_QWORD *)(v1 + 144) )
  {
    result = 1;
    *((_DWORD *)a1 + 10) = -1073741670;
    return result;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x98u )
  {
    *(_DWORD *)(v1 + 56) = 152;
    *((_DWORD *)a1 + 10) = -1073676268;
LABEL_68:
    ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
    result = 1;
    *(_QWORD *)(v1 + 144) = 0LL;
    return result;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v1 + 144) + 56LL);
  if ( v7 )
  {
    *((_DWORD *)a1 + 10) = v7;
    goto LABEL_68;
  }
  v8 = *(_QWORD *)(v1 + 40);
  *(_QWORD *)v8 = 9961856LL;
  *(_QWORD *)(v8 + 8) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 40LL);
  *(_DWORD *)(v8 + 4) = 16;
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 24LL);
  v9 = 0LL;
  *(_DWORD *)(v8 + 4) = 48;
  if ( ndisMaxNumberOfProcessors )
  {
    v10 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 16LL);
    v11 = ndisMaxNumberOfProcessors;
    do
    {
      v9 += *v10 + v10[1] + *(v10 - 1);
      v10 += 14;
      --v11;
    }
    while ( v11 );
  }
  *(_DWORD *)(v8 + 4) |= 8u;
  v12 = *(_DWORD *)(v8 + 4);
  *(_QWORD *)(v8 + 24) = v9;
  v13 = 0LL;
  v14 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v15 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 32LL);
    do
    {
      v13 += *v15;
      v15 += 14;
      --v14;
    }
    while ( v14 );
  }
  *(_QWORD *)(v8 + 32) = v13;
  v16 = v12 | 1;
  *(_DWORD *)(v8 + 4) = v16;
  v17 = 0LL;
  v18 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v19 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 40LL);
    do
    {
      v17 += *v19;
      v19 += 14;
      --v18;
    }
    while ( v18 );
  }
  *(_QWORD *)(v8 + 40) = v17;
  v20 = v16 | 2;
  *(_DWORD *)(v8 + 4) = v20;
  v21 = 0LL;
  v22 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v23 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 48LL);
    do
    {
      v21 += *v23;
      v23 += 14;
      --v22;
    }
    while ( v22 );
  }
  v24 = v20 | 4;
  *(_QWORD *)(v8 + 48) = v21;
  *(_DWORD *)(v8 + 4) = v24;
  v25 = 0LL;
  if ( ndisMaxNumberOfProcessors )
  {
    v26 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 104LL);
    v27 = ndisMaxNumberOfProcessors;
    do
    {
      v28 = *(v26 - 2) + v25;
      v29 = *v26 + *(v26 - 1);
      v26 += 14;
      v25 = v29 + v28;
      --v27;
    }
    while ( v27 );
  }
  v30 = v24 | 0x200;
  *(_QWORD *)(v8 + 56) = v25;
  *(_DWORD *)(v8 + 4) = v30;
  v31 = 0LL;
  v32 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v33 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 64LL);
    do
    {
      v31 += *v33;
      v33 += 14;
      --v32;
    }
    while ( v32 );
  }
  *(_QWORD *)(v8 + 64) = v31;
  v34 = v30 | 0x40;
  *(_DWORD *)(v8 + 4) = v34;
  v35 = 0LL;
  v36 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v37 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 72LL);
    do
    {
      v35 += *v37;
      v37 += 14;
      --v36;
    }
    while ( v36 );
  }
  *(_QWORD *)(v8 + 72) = v35;
  v38 = v34 | 0x80;
  *(_DWORD *)(v8 + 4) = v38;
  v39 = 0LL;
  v40 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v41 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 80LL);
    do
    {
      v39 += *v41;
      v41 += 14;
      --v40;
    }
    while ( v40 );
  }
  *(_QWORD *)(v8 + 80) = v39;
  v42 = v38 | 0x100;
  *(_DWORD *)(v8 + 4) = v42;
  v43 = v42 | 0x400;
  *(_QWORD *)(v8 + 88) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 48LL);
  v44 = 0LL;
  *(_DWORD *)(v8 + 4) = v43;
  *(_QWORD *)(v8 + 96) = 0LL;
  v45 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v46 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 8LL);
    do
    {
      v44 += *v46;
      v46 += 14;
      --v45;
    }
    while ( v45 );
  }
  *(_QWORD *)(v8 + 104) = v44;
  v47 = v43 | 0x10000;
  *(_DWORD *)(v8 + 4) = v47;
  v48 = 0LL;
  v49 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v50 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 24LL);
    do
    {
      v48 += *v50;
      v50 += 14;
      --v49;
    }
    while ( v49 );
  }
  *(_QWORD *)(v8 + 112) = v48;
  v51 = v47 | 0x20000;
  *(_DWORD *)(v8 + 4) = v51;
  v52 = 0LL;
  v53 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v54 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 16LL);
    do
    {
      v52 += *v54;
      v54 += 14;
      --v53;
    }
    while ( v53 );
  }
  *(_QWORD *)(v8 + 120) = v52;
  v55 = v51 | 0x40000;
  *(_DWORD *)(v8 + 4) = v55;
  v56 = 0LL;
  v57 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v58 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 88LL);
    do
    {
      v56 += *v58;
      v58 += 14;
      --v57;
    }
    while ( v57 );
  }
  *(_QWORD *)(v8 + 128) = v56;
  v59 = v55 | 0x80000;
  *(_DWORD *)(v8 + 4) = v59;
  v60 = 0LL;
  v61 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v62 = (_QWORD *)(*(_QWORD *)(v6 + 3152) + 96LL);
    do
    {
      v60 += *v62;
      v62 += 14;
      --v61;
    }
    while ( v61 );
  }
  *(_QWORD *)(v8 + 136) = v60;
  v63 = v59 | 0x100000;
  *(_DWORD *)(v8 + 4) = v63;
  v64 = 0LL;
  v65 = *(_QWORD *)(v6 + 3152);
  v66 = ndisMaxNumberOfProcessors;
  if ( ndisMaxNumberOfProcessors )
  {
    v67 = (_QWORD *)(v65 + 104);
    do
    {
      v64 += *v67;
      v67 += 14;
      --v66;
    }
    while ( v66 );
  }
  *(_QWORD *)(v8 + 144) = v64;
  *(_DWORD *)(v8 + 4) = v63 | 0x200000;
  *(_DWORD *)(v1 + 52) = 152;
  *((_DWORD *)a1 + 10) = 0;
  ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
  *(_QWORD *)(v1 + 144) = 0LL;
  return 1;
}
