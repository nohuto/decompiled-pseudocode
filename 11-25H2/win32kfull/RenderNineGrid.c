/*
 * XREFs of RenderNineGrid @ 0x1400CB990
 * Callers:
 *     xxEngNineGrid @ 0x1400CB404 (xxEngNineGrid.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     RenderNineGridInternal @ 0x1400CBFA0 (RenderNineGridInternal.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10,
        int a11)
{
  __int64 v13; // r8
  BOOL v14; // edx
  int v15; // r9d
  int v16; // r10d
  USHORT iType; // ax
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 (__fastcall *v31)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *); // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 (__fastcall *v50)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD); // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 (__fastcall *v69)(struct _SURFOBJ *, __int64, __int64, __int64, int *, _QWORD *); // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  _QWORD v80[2]; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v81[4]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-A8h]
  struct _SURFOBJ *v83; // [rsp+A8h] [rbp-A0h]
  __int64 v84; // [rsp+B0h] [rbp-98h]
  __int64 v85; // [rsp+B8h] [rbp-90h]
  _DWORD *v86; // [rsp+C0h] [rbp-88h]
  _QWORD *v87; // [rsp+C8h] [rbp-80h]
  _DWORD *v88; // [rsp+D8h] [rbp-70h]
  __int64 v89; // [rsp+E0h] [rbp-68h] BYREF
  int v90; // [rsp+E8h] [rbp-60h]
  int v91; // [rsp+ECh] [rbp-5Ch]
  _DWORD v92[2]; // [rsp+F0h] [rbp-58h] BYREF
  int v93; // [rsp+F8h] [rbp-50h]
  int v94; // [rsp+FCh] [rbp-4Ch]

  v89 = a2;
  v83 = a1;
  v84 = a3;
  v85 = a4;
  v13 = a8;
  v82 = a8;
  v86 = a9;
  v87 = a10;
  v14 = a11 && (*a9 & 0x10) != 0;
  v15 = *a5;
  v92[0] = *a5;
  v80[1] = a5 + 1;
  v92[1] = a5[1];
  v88 = a5 + 2;
  v16 = a5[2];
  v93 = v16;
  v80[0] = a5 + 3;
  v94 = a5[3];
  if ( v14 )
  {
    v19 = a7[2];
    v20 = *a7;
    v93 = v19 + *a7 - v15;
    v92[0] = v19 + v20 - v16;
    v13 = v82;
  }
  RenderNineGridInternal(a3, v89, (unsigned int)v92, (_DWORD)a7, v13, (__int64)a9, (_DWORD)a10, v14);
  v89 = 0LL;
  v90 = *v88 - *a5;
  v91 = *(_DWORD *)v80[0] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v81[0] = 33488896LL;
    v81[3] = a10[6];
    v81[2] = a10[5];
    v81[1] = a10[4];
    if ( a1->iType == 1 )
    {
      if ( bAllowShareAccess(a1)
        && GreGetCurrentThread(v22, v21)
        && *((_QWORD *)GreGetCurrentThread(v24, v23) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v26, v25) + 87) || *((_DWORD *)GreGetCurrentThread(v28, v27) + 88)) )
      {
        v30 = *((_QWORD *)GreGetCurrentThread(v28, v27) + 34);
        if ( (*(_DWORD *)(v30 + 20) & 0x10000) != 0 )
        {
          v31 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *))(*((_QWORD *)GreGetCurrentThread(v30, v29) + 34) + 120LL);
          return v31(a1, a3, a4, a6, a5, &v89, v81);
        }
      }
      if ( a1->iType == 1
        && bAllowShareAccess(a1)
        && GreGetCurrentThread(v33, v32)
        && *((_QWORD *)GreGetCurrentThread(v35, v34) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v37, v36) + 87) || *((_DWORD *)GreGetCurrentThread(v39, v38) + 88)) )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *))EngAlphaBlend)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v89,
                 v81);
      }
    }
    if ( ((__int64)a1[1].hsurf & 0x10000) == 0 )
      return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *))EngAlphaBlend)(
               a1,
               a3,
               a4,
               a6,
               a5,
               &v89,
               v81);
    return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *))a1->hdev
            + 170))(
             a1,
             a3,
             a4,
             a6,
             a5,
             &v89,
             v81);
  }
  else
  {
    iType = a1->iType;
    if ( (*a9 & 8) != 0 )
    {
      if ( iType == 1
        && bAllowShareAccess(a1)
        && GreGetCurrentThread(v41, v40)
        && *((_QWORD *)GreGetCurrentThread(v43, v42) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v45, v44) + 87) || *((_DWORD *)GreGetCurrentThread(v47, v46) + 88))
        && (v49 = *((_QWORD *)GreGetCurrentThread(v47, v46) + 34), (*(_DWORD *)(v49 + 20) & 0x8000) != 0) )
      {
        v50 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))(*((_QWORD *)GreGetCurrentThread(v49, v48) + 34) + 112LL);
        return v50(a1, a3, a4, a6, a5, &v89, a9[5], 0);
      }
      else if ( a1->iType == 1
             && bAllowShareAccess(a1)
             && GreGetCurrentThread(v52, v51)
             && *((_QWORD *)GreGetCurrentThread(v54, v53) + 34)
             && (*((_DWORD *)GreGetCurrentThread(v56, v55) + 87) || *((_DWORD *)GreGetCurrentThread(v58, v57) + 88))
             || ((__int64)a1[1].hsurf & 0x8000) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v89,
                 a9[5],
                 0);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))a1->hdev
                + 169))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v89,
                 a9[5],
                 0);
      }
    }
    else
    {
      v80[0] = 0LL;
      if ( iType == 1
        && bAllowShareAccess(a1)
        && GreGetCurrentThread(v60, v59)
        && *((_QWORD *)GreGetCurrentThread(v62, v61) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v64, v63) + 87) || *((_DWORD *)GreGetCurrentThread(v66, v65) + 88))
        && (v68 = *((_QWORD *)GreGetCurrentThread(v66, v65) + 34), (*(_DWORD *)(v68 + 20) & 0x400) != 0) )
      {
        v69 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, _QWORD *))(*((_QWORD *)GreGetCurrentThread(v68, v67) + 34) + 80LL);
        return v69(a1, a3, a4, a6, a5, v80);
      }
      else if ( a1->iType == 1
             && bAllowShareAccess(a1)
             && GreGetCurrentThread(v71, v70)
             && *((_QWORD *)GreGetCurrentThread(v73, v72) + 34)
             && (*((_DWORD *)GreGetCurrentThread(v75, v74) + 87) || *((_DWORD *)GreGetCurrentThread(v77, v76) + 88))
             || ((__int64)a1[1].hsurf & 0x400) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, _QWORD *))EngCopyBits)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 v80);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, _QWORD *))a1->hdev + 165))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 v80);
      }
    }
  }
}
