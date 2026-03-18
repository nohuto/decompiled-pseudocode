/*
 * XREFs of pprFlattenRec @ 0x1400D5820
 * Callers:
 *     ?bFlatten@EPATHOBJ@@QEAA_NXZ @ 0x1400D57C0 (-bFlatten@EPATHOBJ@@QEAA_NXZ.c)
 * Callees:
 *     ?newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z @ 0x1400D570C (-newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z.c)
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1400D5B40 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1400D5DD0 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400D6250 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1401432D0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x140143930 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

struct PATHALLOC *__fastcall pprFlattenRec(_DWORD *a1, struct PATHALLOC **a2, __int64 *a3)
{
  struct PATHALLOC *v4; // rbx
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  struct PATHRECORD **v10; // rcx
  struct PATHRECORD *v11; // rbx
  struct _POINTFIX *v12; // r15
  struct _POINTFIX *v13; // rsi
  __int64 v14; // rdx
  struct _POINTFIX v15; // rax
  const __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  struct _POINTFIX *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  struct PATHRECORD *v22; // rdx
  __int64 *v23; // rax
  struct PATHALLOC *result; // rax
  struct PATHRECORD *v25; // rax
  __int64 i; // rdx
  struct _POINTFIX v27; // rax
  unsigned int v28; // [rsp+20h] [rbp-E0h] BYREF
  struct PATHRECORD *v29; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD *v30; // [rsp+30h] [rbp-D0h]
  struct PATHRECORD *v31; // [rsp+38h] [rbp-C8h]
  _BYTE v32[168]; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+E8h] [rbp-18h]
  struct _POINTFIX v34[4]; // [rsp+F0h] [rbp-10h] BYREF

  v31 = 0LL;
  v4 = *a2;
  v30 = a1;
  v6 = a1;
  if ( !v4
    || (v7 = *((_QWORD *)v4 + 1) + 24LL, v8 = (unsigned __int64)v4 + *((unsigned int *)v4 + 4), v8 <= v7)
    || (v9 = (__int64)(v8 - v7) >> 3, (unsigned int)v9 <= 7) )
  {
    result = newpathalloc();
    v4 = result;
    if ( !result )
      return result;
    *(_QWORD *)result = *a2;
    *a2 = result;
    v9 = ((unsigned __int64)(unsigned int)((_DWORD)result + *((_DWORD *)result + 4) - *((_DWORD *)result + 2)) - 24) >> 3;
  }
  v10 = (struct PATHRECORD **)a3[1];
  v11 = (struct PATHRECORD *)*((_QWORD *)v4 + 1);
  v28 = v9;
  *((_DWORD *)v11 + 5) = 0;
  *((_QWORD *)v11 + 1) = v10;
  *((_DWORD *)v11 + 4) = a3[2] & 0xFFFFFFEF;
  if ( v10 )
    *v10 = v11;
  else
    a2[1] = v11;
  v12 = (struct _POINTFIX *)(a3 + 3);
  if ( (a3[2] & 1) != 0 )
  {
    v13 = (struct _POINTFIX *)(a3 + 7);
    *((struct _POINTFIX *)v11 + (unsigned int)(*((_DWORD *)v11 + 5))++ + 3) = *v12;
  }
  else
  {
    v13 = (struct _POINTFIX *)(a3 + 3);
    v14 = 1LL;
    v34[0] = *(struct _POINTFIX *)(a3[1] + 8LL * (unsigned int)(*(_DWORD *)(a3[1] + 20) - 1) + 24);
    do
    {
      if ( v13 >= (struct _POINTFIX *)&a3[*((unsigned int *)a3 + 5) + 3] )
      {
        a3 = (__int64 *)*a3;
        v13 = (struct _POINTFIX *)(a3 + 3);
      }
      v15 = *v13++;
      v34[v14++] = v15;
    }
    while ( v14 < 4 );
LABEL_11:
    v12 = v34;
  }
LABEL_12:
  --*v6;
  v16 = gpeqErrorLow;
  if ( BEZIER32::bInit((BEZIER32 *)v32, v12, 0LL) )
  {
    v33 = 1;
  }
  else
  {
    v33 = 0;
    BEZIER64::vInit((BEZIER64 *)v32, v12, 0LL, v16);
  }
  v6 = v30;
  while ( 1 )
  {
    v17 = *((unsigned int *)v11 + 5);
    if ( (unsigned int)v17 >= (unsigned int)v9 )
      break;
LABEL_16:
    ++*v6;
    v18 = *((unsigned int *)v11 + 5);
    *((_DWORD *)v11 + 5) = v18 + 1;
    v19 = (struct _POINTFIX *)((char *)v11 + 8 * v18 + 24);
    if ( v33 )
      v20 = BEZIER32::bNext((BEZIER32 *)v32, v19);
    else
      v20 = BEZIER64::bNext((BEZIER64 *)v32, v19);
    if ( !v20 )
    {
      v21 = ((__int64)a3 + 8LL * *((unsigned int *)a3 + 5) + 24 - (__int64)v13) >> 3;
      if ( !(_DWORD)v21 )
      {
        v22 = v11;
        goto LABEL_21;
      }
      v12 = v13 - 1;
      if ( (unsigned int)v21 >= 3 )
      {
        v13 += 3;
        goto LABEL_12;
      }
      --v13;
      for ( i = 0LL; i < 4; ++i )
      {
        if ( v13 >= (struct _POINTFIX *)&a3[*((unsigned int *)a3 + 5) + 3] )
        {
          a3 = (__int64 *)*a3;
          v13 = (struct _POINTFIX *)(a3 + 3);
        }
        v27 = *v13++;
        v34[i] = v27;
      }
      goto LABEL_11;
    }
  }
  *((_DWORD *)v11 + 4) &= 0xFFFFFFF5;
  v29 = 0LL;
  *((_QWORD *)*a2 + 1) = (char *)v11 + 8 * v17 + 24;
  if ( PATH_CORE::newpathrec(a2, &v29, &v28, 0x7FFFFFFFu) )
  {
    v25 = v29;
    LODWORD(v9) = v28;
    *((_QWORD *)v29 + 1) = v11;
    *(_QWORD *)v11 = v25;
    v11 = v25;
    *((_DWORD *)v25 + 5) = 0;
    *((_DWORD *)v25 + 4) = a3[2] & 0xFFFFFFEA;
    goto LABEL_16;
  }
  v22 = v31;
LABEL_21:
  *((_QWORD *)*a2 + 1) = (char *)v11 + 8 * *((unsigned int *)v11 + 5) + 24;
  v23 = (__int64 *)*a3;
  *(_QWORD *)v11 = *a3;
  if ( v23 )
    v23[1] = (__int64)v11;
  else
    a2[2] = v11;
  return v22;
}
