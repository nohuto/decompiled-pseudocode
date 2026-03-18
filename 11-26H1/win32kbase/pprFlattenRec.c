/*
 * XREFs of pprFlattenRec @ 0x14011A500
 * Callers:
 *     ?bFlatten@EPATHOBJ@@QEAA_NXZ @ 0x14011A4A0 (-bFlatten@EPATHOBJ@@QEAA_NXZ.c)
 * Callees:
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400452D0 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14011A830 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x14011AAE0 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z @ 0x14011AFC8 (-newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1401822B0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x140182860 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

struct PATHALLOC *__fastcall pprFlattenRec(unsigned __int64 a1, struct PATHALLOC **a2, __int64 *a3)
{
  struct PATHALLOC *v3; // rbx
  _DWORD *v6; // r13
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r15
  struct PATHRECORD **v9; // rcx
  struct PATHRECORD *v10; // rbx
  struct _POINTFIX *v11; // r14
  struct _POINTFIX *v12; // rdi
  __int64 v13; // rdx
  struct _POINTFIX v14; // rax
  const __int64 *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  struct _POINTFIX *v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  struct PATHRECORD *v21; // rdx
  __int64 *v22; // rax
  struct PATHALLOC *result; // rax
  struct PATHRECORD *v24; // rax
  __int64 i; // rdx
  struct _POINTFIX v26; // rax
  unsigned int v27; // [rsp+20h] [rbp-E0h] BYREF
  struct PATHRECORD *v28; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD *v29; // [rsp+30h] [rbp-D0h]
  struct PATHRECORD *v30; // [rsp+38h] [rbp-C8h]
  _BYTE v31[168]; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+E8h] [rbp-18h]
  struct _POINTFIX v33[4]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *a2;
  v29 = (_DWORD *)a1;
  v30 = 0LL;
  v6 = (_DWORD *)a1;
  if ( !v3
    || (a1 = *((_QWORD *)v3 + 1) + 24LL, v7 = (unsigned __int64)v3 + *((unsigned int *)v3 + 4), v7 <= a1)
    || (v8 = (__int64)(v7 - a1) >> 3, (unsigned int)v8 < 8) )
  {
    result = newpathalloc(a1);
    v3 = result;
    if ( !result )
      return result;
    *(_QWORD *)result = *a2;
    *a2 = result;
    v8 = ((unsigned __int64)(unsigned int)((_DWORD)result + *((_DWORD *)result + 4) - *((_DWORD *)result + 2)) - 24) >> 3;
  }
  v9 = (struct PATHRECORD **)a3[1];
  v10 = (struct PATHRECORD *)*((_QWORD *)v3 + 1);
  v27 = v8;
  *((_QWORD *)v10 + 1) = v9;
  *((_DWORD *)v10 + 5) = 0;
  *((_DWORD *)v10 + 4) = a3[2] & 0xFFFFFFEF;
  if ( v9 )
    *v9 = v10;
  else
    a2[1] = v10;
  v11 = (struct _POINTFIX *)(a3 + 3);
  if ( (a3[2] & 1) != 0 )
  {
    v12 = (struct _POINTFIX *)(a3 + 7);
    *((struct _POINTFIX *)v10 + (unsigned int)(*((_DWORD *)v10 + 5))++ + 3) = *v11;
  }
  else
  {
    v12 = (struct _POINTFIX *)(a3 + 3);
    v13 = 1LL;
    v33[0] = *(struct _POINTFIX *)(a3[1] + 8LL * (unsigned int)(*(_DWORD *)(a3[1] + 20) - 1) + 24);
    do
    {
      if ( v12 >= (struct _POINTFIX *)&a3[*((unsigned int *)a3 + 5) + 3] )
      {
        a3 = (__int64 *)*a3;
        v12 = (struct _POINTFIX *)(a3 + 3);
      }
      v14 = *v12++;
      v33[v13++] = v14;
    }
    while ( v13 < 4 );
LABEL_11:
    v11 = v33;
  }
LABEL_12:
  --*v6;
  v15 = gpeqErrorLow;
  if ( BEZIER32::bInit((BEZIER32 *)v31, v11, 0LL) )
  {
    v32 = 1;
  }
  else
  {
    v32 = 0;
    BEZIER64::vInit((BEZIER64 *)v31, v11, 0LL, v15);
  }
  v6 = v29;
  while ( 1 )
  {
    v16 = *((unsigned int *)v10 + 5);
    if ( (unsigned int)v16 >= (unsigned int)v8 )
      break;
LABEL_16:
    ++*v6;
    v17 = *((unsigned int *)v10 + 5);
    *((_DWORD *)v10 + 5) = v17 + 1;
    v18 = (struct _POINTFIX *)((char *)v10 + 8 * v17 + 24);
    if ( v32 )
      v19 = BEZIER32::bNext((BEZIER32 *)v31, v18);
    else
      v19 = BEZIER64::bNext((BEZIER64 *)v31, v18);
    if ( !v19 )
    {
      v20 = ((__int64)a3 + 8LL * *((unsigned int *)a3 + 5) + 24 - (__int64)v12) >> 3;
      if ( !(_DWORD)v20 )
      {
        v21 = v10;
        goto LABEL_21;
      }
      v11 = v12 - 1;
      if ( (unsigned int)v20 >= 3 )
      {
        v12 += 3;
        goto LABEL_12;
      }
      --v12;
      for ( i = 0LL; i < 4; ++i )
      {
        if ( v12 >= (struct _POINTFIX *)&a3[*((unsigned int *)a3 + 5) + 3] )
        {
          a3 = (__int64 *)*a3;
          v12 = (struct _POINTFIX *)(a3 + 3);
        }
        v26 = *v12++;
        v33[i] = v26;
      }
      goto LABEL_11;
    }
  }
  *((_DWORD *)v10 + 4) &= 0xFFFFFFF5;
  v28 = 0LL;
  *((_QWORD *)*a2 + 1) = (char *)v10 + 8 * v16 + 24;
  if ( PATH_CORE::newpathrec((PATH_CORE *)a2, &v28, &v27, 0x7FFFFFFFu) )
  {
    v24 = v28;
    LODWORD(v8) = v27;
    *((_QWORD *)v28 + 1) = v10;
    *(_QWORD *)v10 = v24;
    v10 = v24;
    *((_DWORD *)v24 + 5) = 0;
    *((_DWORD *)v24 + 4) = a3[2] & 0xFFFFFFEA;
    goto LABEL_16;
  }
  v21 = v30;
LABEL_21:
  *((_QWORD *)*a2 + 1) = (char *)v10 + 8 * *((unsigned int *)v10 + 5) + 24;
  v22 = (__int64 *)*a3;
  *(_QWORD *)v10 = *a3;
  if ( v22 )
    v22[1] = (__int64)v10;
  else
    a2[2] = v10;
  return v21;
}
