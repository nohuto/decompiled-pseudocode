/*
 * XREFs of ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1400A8500
 * Callers:
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     NtGdiArcInternal @ 0x1400E8410 (NtGdiArcInternal.c)
 * Callees:
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1400A87E8 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bPartialArc(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  int v12; // esi
  int v13; // edi
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  char v23; // al
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // [rsp+50h] [rbp-59h]
  _QWORD v31[3]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v32; // [rsp+80h] [rbp-29h]
  int v33; // [rsp+88h] [rbp-21h] BYREF
  int v34; // [rsp+8Ch] [rbp-1Dh]
  int v35; // [rsp+90h] [rbp-19h]
  int v36; // [rsp+94h] [rbp-15h]
  __int64 v37; // [rsp+98h] [rbp-11h]

  if ( !a10 )
    return (unsigned int)bPartialQuadrantArc(a1, a2, a3);
  v12 = (a5 + 1) & 3;
  v13 = bPartialQuadrantArc(a1, a2, a3);
  if ( v12 != a8 )
  {
    v16 = (1922922357LL * *(int *)(a3 + 48)) >> 32;
    v17 = (1922922357LL * *(int *)(a3 + 52)) >> 32;
    v18 = (1922922357LL * *(int *)(a3 + 56)) >> 32;
    v19 = (1922922357LL * *(int *)(a3 + 60)) >> 32;
    v30 = v19;
    while ( v12 )
    {
      switch ( v12 )
      {
        case 1:
          v26 = *(_QWORD *)(a3 + 16);
          v34 = v17 + HIDWORD(v26);
          v35 = v26;
          v36 = HIDWORD(v26) - v19;
          v33 = v16 + v26;
          v27 = v26 - v18;
          v37 = v26;
          v22 = v26 - *(_DWORD *)(a3 + 56);
          v35 = v27;
          v28 = *(_DWORD *)(a3 + 60);
LABEL_18:
          HIDWORD(v37) -= v28;
          goto LABEL_13;
        case 2:
          v25 = *(_QWORD *)(a3 + 24);
          v34 = v19 + HIDWORD(v25);
          v36 = v17 + HIDWORD(v25);
          v33 = v25 + v18;
          v35 = v16 + v25;
          v21 = *(_DWORD *)(a3 + 52);
          v37 = v25;
          v22 = *(_DWORD *)(a3 + 48) + v25;
LABEL_12:
          HIDWORD(v37) += v21;
LABEL_13:
          LODWORD(v37) = v22;
          break;
        case 3:
          v20 = *(_QWORD *)(a3 + 32);
          v34 = HIDWORD(v20) - v17;
          v36 = v19 + HIDWORD(v20);
          v33 = v20 - v16;
          v35 = v20 + v18;
          v21 = *(_DWORD *)(a3 + 60);
          v37 = v20;
          v22 = *(_DWORD *)(a3 + 56) + v20;
          goto LABEL_12;
      }
      v31[2] = 0LL;
      v31[0] = &v33;
      v32 = 0;
      v31[1] = 3LL;
      v23 = EPATHOBJ::bPolyBezierTo(a2, 0LL, v31, 3LL);
      LODWORD(v19) = v30;
      v13 = (unsigned __int8)(v23 & v13);
      v24 = ((_BYTE)v12 + 1) & 3;
      v12 = v24;
      if ( v24 == a8 )
        return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
    }
    v29 = *(_QWORD *)(a3 + 8);
    v34 = HIDWORD(v29) - v19;
    v33 = v29 - v18;
    v36 = HIDWORD(v29) - v17;
    v35 = v29 - v16;
    v28 = *(_DWORD *)(a3 + 52);
    v37 = v29;
    v22 = v29 - *(_DWORD *)(a3 + 48);
    goto LABEL_18;
  }
  return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
}
