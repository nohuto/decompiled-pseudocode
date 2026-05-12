/*
 * XREFs of sub_1400E3658 @ 0x1400E3658
 * Callers:
 *     sub_1400E22C0 @ 0x1400E22C0 (sub_1400E22C0.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400DB26C @ 0x1400DB26C (sub_1400DB26C.c)
 *     sub_1400DFF0C @ 0x1400DFF0C (sub_1400DFF0C.c)
 *     sub_1400DFFEC @ 0x1400DFFEC (sub_1400DFFEC.c)
 *     sub_1400E1168 @ 0x1400E1168 (sub_1400E1168.c)
 */

__int64 __fastcall sub_1400E3658(__int64 a1, _BYTE *a2)
{
  _QWORD **v2; // rbx
  char *v4; // r14
  _QWORD *v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v16; // r12d
  _WORD *v17; // r13
  unsigned __int64 v18; // rbx
  char *v19; // r15
  __int64 v20; // rdx
  int v21; // eax
  wchar_t *v22; // rcx
  bool v23; // zf
  __int64 v25; // [rsp+28h] [rbp-A1h]
  __int64 v26; // [rsp+28h] [rbp-A1h]
  PVOID v27; // [rsp+A0h] [rbp-29h] BYREF
  PVOID P; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-19h]
  __int64 v30; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v31; // [rsp+C0h] [rbp-9h]
  __int64 v32; // [rsp+C8h] [rbp-1h]
  __int64 v33; // [rsp+D0h] [rbp+7h]
  char v34; // [rsp+130h] [rbp+67h] BYREF
  _BYTE *v35; // [rsp+138h] [rbp+6Fh]
  char v36; // [rsp+140h] [rbp+77h] BYREF
  unsigned int v37; // [rsp+148h] [rbp+7Fh]

  v35 = a2;
  v2 = (_QWORD **)(a1 + 1608);
  v33 = *(_QWORD *)(a1 + 128);
  v29 = *(_QWORD *)(a1 + 96);
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v6 = 0;
  v37 = 0;
  v34 = 0;
  v36 = 0;
  *a2 = 0;
  while ( 1 )
  {
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x52436152u);
      v27 = 0LL;
    }
    sub_1400DFFEC(v2);
    *(_QWORD *)(a1 + 1600) = 0LL;
    v8 = sub_1400E1168(a1, v7, 0x70u, 0x400u, 0LL, v25, 0, &v27, &v34, &v36);
    v5 = v27;
    v9 = v8;
    if ( v8 < 0 )
      break;
    v10 = *(_QWORD *)v27;
    v32 = v10;
    if ( v10 && v10 == *(_QWORD *)(a1 + 1560) )
      goto LABEL_36;
    sub_1400A870C(
      a1,
      1,
      4,
      (__int64)L"New discovery log page detected",
      L"GENCTR",
      v10,
      L"NUMREC",
      *((_QWORD *)v27 + 1),
      L"RECFMT",
      *((_WORD *)v27 + 8),
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    v12 = v5[1];
    v13 = 1024LL;
    v31 = v12;
    v30 = 1024LL;
    if ( v12 )
    {
      while ( 2 )
      {
        v14 = 4;
        if ( v12 < 4 )
          v14 = v12;
        LODWORD(v27) = v14;
        v15 = sub_1400E1168(a1, v11, 0x70u, v14 << 10, v13, v26, 1, &P, &v34, &v36);
        v4 = (char *)P;
        v9 = v15;
        if ( v15 < 0 )
        {
          v22 = L"Get discovery entries";
          goto LABEL_33;
        }
        v16 = 0;
        v17 = (char *)P + 4;
        do
        {
          if ( *((_BYTE *)v17 - 2) != 3 )
          {
            if ( *v17 != *(_WORD *)(v29 + 4)
              || (v18 = (unsigned __int64)v16 << 10, strnicmp(&v4[v18 + 256], (const char *)(v29 + 60), 0x100uLL))
              || strnicmp(&v4[v18 + 512], (const char *)(v29 + 316), 0x100uLL) )
            {
              v9 = sub_1400DFF0C((_QWORD *)a1, &v4[1024 * (unsigned __int64)v16]);
              if ( v9 < 0 )
              {
                if ( (byte_1401694FA & 4) != 0 )
                {
                  v19 = &v4[1024 * (unsigned __int64)v16];
                  sub_1400DB26C(
                    (__int64)(v19 + 256),
                    a1 ^ v33,
                    v33 + 1032,
                    *(_DWORD *)(v33 + 56),
                    v33 + 1032,
                    *(const wchar_t **)(v33 + 1016),
                    a1 ^ v33,
                    v9,
                    *v19,
                    v19[1],
                    v19[2],
                    *((_WORD *)v19 + 2),
                    *((_WORD *)v19 + 3),
                    v19 + 256,
                    v19 + 512);
                }
                v22 = L"Add discovery entry";
                goto LABEL_33;
              }
              v14 = (unsigned int)v27;
            }
          }
          ++v16;
          v17 += 512;
        }
        while ( v16 < v14 );
        v13 = ((unsigned __int64)v14 << 10) + v30;
        v31 -= v14;
        v12 = v31;
        v30 = v13;
        ExFreePoolWithTag(v4, 0x52436152u);
        v4 = 0LL;
        P = 0LL;
        if ( v12 )
          continue;
        break;
      }
      v10 = v32;
      v6 = v37;
    }
    ExFreePoolWithTag(v5, 0x52436152u);
    v27 = 0LL;
    v21 = sub_1400E1168(a1, v20, 0x70u, 0x400u, 0LL, v26, 1, &v27, &v34, &v36);
    v5 = v27;
    v9 = v21;
    if ( v21 < 0 )
    {
      v22 = L"Verify discovery generation";
      goto LABEL_33;
    }
    if ( *(_QWORD *)v27 == v10 )
    {
      *v35 = 1;
      *(_QWORD *)(a1 + 1592) = v10;
      sub_1400A870C(
        a1,
        1,
        4,
        (__int64)L"New discovery log page read",
        L"GENCTR",
        *v5,
        L"NUMREC",
        v5[1],
        L"RECFMT",
        *((_WORD *)v5 + 8),
        &dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0);
      goto LABEL_36;
    }
    v37 = ++v6;
    if ( v6 > 2 )
    {
      v22 = L"Discovery retries exhausted";
      v9 = -1073741536;
      goto LABEL_33;
    }
    v2 = (_QWORD **)(a1 + 1608);
  }
  v22 = L"Get discovery header";
LABEL_33:
  sub_1400A870C(
    a1,
    1,
    3,
    (__int64)L"FabricControllerDiscovery failure",
    v22,
    0,
    L"Status",
    v9,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  sub_1400DFFEC((_QWORD **)(a1 + 1608));
  v23 = v34 == 1;
  *(_QWORD *)(a1 + 1600) = 0LL;
  if ( v23 && v36 == -112 )
    v9 = -1073741267;
LABEL_36:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52436152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x52436152u);
  return (unsigned int)v9;
}
