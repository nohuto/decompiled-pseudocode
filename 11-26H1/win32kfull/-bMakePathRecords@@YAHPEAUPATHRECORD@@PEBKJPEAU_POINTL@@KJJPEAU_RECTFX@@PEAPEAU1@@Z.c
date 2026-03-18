/*
 * XREFs of ?bMakePathRecords@@YAHPEAUPATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x14027DF60
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x14027E1D0 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMakePathRecords(
        struct PATHRECORD *a1,
        const unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _RECTFX *a8,
        struct PATHRECORD **a9)
{
  __int64 v10; // r12
  const unsigned int *v11; // rbp
  __int64 v12; // r15
  struct PATHRECORD *v13; // rdi
  unsigned int v14; // esi
  const unsigned int *v15; // r8
  signed int v16; // ebx
  signed int v17; // r13d
  int v18; // r14d
  int v19; // ebp
  struct _POINTL *v20; // rdx
  struct _POINTL *v21; // rdx
  int y; // ecx
  int v23; // eax
  LONG v24; // eax
  bool v25; // zf
  struct PATHRECORD **v26; // r13
  struct _RECTFX *v27; // rbx
  struct PATHRECORD **v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v35; // [rsp+30h] [rbp-68h]
  signed int v36; // [rsp+34h] [rbp-64h] BYREF
  struct PATHRECORD *v37; // [rsp+38h] [rbp-60h]
  int v38; // [rsp+A0h] [rbp+8h] BYREF
  const unsigned int *v39; // [rsp+A8h] [rbp+10h]
  int v40; // [rsp+B0h] [rbp+18h]
  struct _POINTL *v41; // [rsp+B8h] [rbp+20h]

  v41 = a4;
  v38 = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  v35 = 0x7FFFFFFF;
  LODWORD(v10) = 0x7FFFFFFF;
  v11 = a2;
  v36 = 0x80000000;
  LODWORD(v12) = 0x80000000;
  v13 = a1;
  v14 = 1;
  v15 = a2;
  while ( 1 )
  {
    GreProbeAndReadFromUntrustedVa(&v38, 4uLL, v15, 4uLL, 1uLL);
    v39 = v11 + 1;
    v40 = a3 - v38;
    if ( a3 - v38 < 0 || v38 < 2 )
      return 0;
    v16 = v36;
    v17 = v35;
    v18 = a6;
    v19 = a7;
    v20 = v41;
    *((_DWORD *)v13 + 5) = v38;
    *((_DWORD *)v13 + 4) = 3;
    v37 = v13;
    do
    {
      v36 = 0;
      GreProbeAndReadFromUntrustedVa(&v36, 4uLL, v20, 4uLL, 1uLL);
      v21 = v41;
      if ( v36 < v17 )
        v17 = v36;
      if ( v36 > v16 )
        v16 = v36;
      *((_DWORD *)v13 + 6) = v18 + v36;
      y = v21->y;
      v23 = y;
      if ( y >= (int)v10 )
        v23 = v10;
      v10 = v23;
      v24 = v21->y;
      if ( y <= (int)v12 )
        v24 = v12;
      v20 = v21 + 1;
      v12 = v24;
      *((_DWORD *)v13 + 7) = y + v19;
      v13 = (struct PATHRECORD *)((char *)v13 + 8);
      v25 = v38 == 1;
      v41 = v20;
      --v38;
    }
    while ( !v25 );
    v25 = a5-- == 1;
    v11 = v39;
    a3 = v40;
    v35 = v17;
    v26 = (struct PATHRECORD **)v37;
    v36 = v16;
    v27 = a8;
    if ( v25 )
    {
      v28 = a9;
      v29 = a6;
      v30 = a6 + (__int64)v35;
      *(_QWORD *)v37 = 0LL;
      *v28 = (struct PATHRECORD *)v26;
      if ( (unsigned __int64)(v30 + 0x80000000LL) > 0xFFFFFFFF )
      {
        v27->xLeft = -1;
      }
      else
      {
        v27->xLeft = v30;
        v31 = v36 + v29;
        if ( (unsigned __int64)(v31 + 0x80000000LL) > 0xFFFFFFFF )
        {
          v27->xRight = -1;
        }
        else
        {
          v27->xRight = v31;
          v32 = a7 + v10;
          if ( (unsigned __int64)(v32 + 0x80000000LL) > 0xFFFFFFFF )
          {
            v27->yTop = -1;
          }
          else
          {
            v33 = v12 + a7;
            v27->yTop = v32;
            if ( (unsigned __int64)(v33 + 0x80000000LL) <= 0xFFFFFFFF )
            {
              v27->yBottom = v33;
              goto LABEL_27;
            }
            v27->yBottom = -1;
          }
        }
      }
      v14 = 0;
LABEL_27:
      if ( !a3 )
        return v14;
      return 0;
    }
    v13 = (struct PATHRECORD *)((char *)v13 + 24);
    v15 = v39;
    *((_QWORD *)v13 + 1) = v37;
    *v26 = v13;
  }
}
