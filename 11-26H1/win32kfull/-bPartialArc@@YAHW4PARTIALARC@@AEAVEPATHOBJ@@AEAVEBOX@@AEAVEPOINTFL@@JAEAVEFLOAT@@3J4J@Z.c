/*
 * XREFs of ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1401111E4
 * Callers:
 *     NtGdiArcInternal @ 0x140110940 (NtGdiArcInternal.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x140111F1C (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 * Callees:
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x140111548 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  int v11; // esi
  int v12; // edi
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rcx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  _QWORD v29[3]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v30; // [rsp+80h] [rbp-29h]
  int v31; // [rsp+88h] [rbp-21h] BYREF
  int v32; // [rsp+8Ch] [rbp-1Dh]
  int v33; // [rsp+90h] [rbp-19h]
  int v34; // [rsp+94h] [rbp-15h]
  __int64 v35; // [rsp+98h] [rbp-11h]

  if ( !a10 )
    return (unsigned int)bPartialQuadrantArc(a1, a2, a3);
  v11 = (a5 + 1) & 3;
  v12 = bPartialQuadrantArc(a1, a2, a3);
  if ( v11 != a8 )
  {
    v15 = (1922922357LL * *(int *)(a3 + 48)) >> 32;
    v16 = (1922922357LL * *(int *)(a3 + 52)) >> 32;
    v17 = (1922922357LL * *(int *)(a3 + 56)) >> 32;
    v18 = (1922922357LL * *(int *)(a3 + 60)) >> 32;
    while ( v11 )
    {
      switch ( v11 )
      {
        case 1:
          v24 = *(_QWORD *)(a3 + 16);
          v32 = v16 + HIDWORD(v24);
          v33 = v24;
          v34 = HIDWORD(v24) - v18;
          v31 = v15 + v24;
          v25 = v24 - v17;
          v35 = v24;
          v21 = v24 - *(_DWORD *)(a3 + 56);
          v33 = v25;
          v26 = *(_DWORD *)(a3 + 60);
LABEL_18:
          HIDWORD(v35) -= v26;
          goto LABEL_13;
        case 2:
          v23 = *(_QWORD *)(a3 + 24);
          v32 = v18 + HIDWORD(v23);
          v34 = v16 + HIDWORD(v23);
          v31 = v17 + v23;
          v33 = v15 + v23;
          v20 = *(_DWORD *)(a3 + 52);
          v35 = v23;
          v21 = *(_DWORD *)(a3 + 48) + v23;
LABEL_12:
          HIDWORD(v35) += v20;
LABEL_13:
          LODWORD(v35) = v21;
          break;
        case 3:
          v19 = *(_QWORD *)(a3 + 32);
          v32 = HIDWORD(v19) - v16;
          v34 = v18 + HIDWORD(v19);
          v31 = v19 - v15;
          v33 = v17 + v19;
          v20 = *(_DWORD *)(a3 + 60);
          v35 = v19;
          v21 = *(_DWORD *)(a3 + 56) + v19;
          goto LABEL_12;
      }
      v29[0] = &v31;
      v29[2] = 0LL;
      v29[1] = 3LL;
      v30 = 0;
      v12 = (unsigned __int8)(EPATHOBJ::bPolyBezierTo(a2, 0LL, v29, 3LL) & v12);
      v22 = ((_BYTE)v11 + 1) & 3;
      v11 = v22;
      if ( v22 == a8 )
        return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v12);
    }
    v27 = *(_QWORD *)(a3 + 8);
    v32 = HIDWORD(v27) - v18;
    v31 = v27 - v17;
    v34 = HIDWORD(v27) - v16;
    v33 = v27 - v15;
    v26 = *(_DWORD *)(a3 + 52);
    v35 = v27;
    v21 = v27 - *(_DWORD *)(a3 + 48);
    goto LABEL_18;
  }
  return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v12);
}
