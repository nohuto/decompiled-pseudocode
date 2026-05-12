/*
 * XREFs of sub_1400E0F0C @ 0x1400E0F0C
 * Callers:
 *     sub_1400DCEE0 @ 0x1400DCEE0 (sub_1400DCEE0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_14011446C @ 0x14011446C (sub_14011446C.c)
 */

__int64 __fastcall sub_1400E0F0C(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v13; // rbx
  int v14; // edi
  __int64 v15; // rdx
  unsigned int v16; // r8d
  void *v17; // r14
  unsigned int i; // ecx
  __int64 v19; // rdi
  int v21; // [rsp+30h] [rbp-98h]

  v9 = *(_QWORD *)(a1 + 128);
  v10 = a4;
  v13 = sub_14007B110(a1, 0);
  if ( !v13 )
    return (unsigned int)-1073741801;
  v17 = (void *)sub_1400143E0(64LL, v10, 1380147538LL, *(_QWORD *)(v9 + 8));
  if ( !v17 )
  {
    v14 = -1073741801;
LABEL_16:
    ExFreePoolWithTag((PVOID)v13, 0x72536152u);
    return (unsigned int)v14;
  }
  if ( *(_BYTE *)(v13 + 2) == 40 )
  {
    v16 = *(_DWORD *)(v13 + 56);
    if ( v16 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v15 = *(unsigned int *)(v13 + 4LL * i + 120);
        if ( (unsigned int)v15 >= 0x80 && (unsigned int)v15 < *(_DWORD *)(v13 + 16) )
        {
          v19 = v13 + v15;
          if ( *(_DWORD *)(v13 + v15) == 67 )
            goto LABEL_14;
        }
      }
    }
  }
  v19 = 0LL;
LABEL_14:
  LOBYTE(v16) = a3;
  LOBYTE(v15) = (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 261LL) & 4) != 0;
  sub_14011446C(*(_DWORD *)(a1 + 576), v15, v16, v10, v15, 0LL, v21, 0, (void *)(v19 + 16));
  *(_DWORD *)(v13 + 60) = v10;
  *(_QWORD *)(v13 + 64) = v17;
  *(_DWORD *)(v13 + 24) = 64;
  *(_BYTE *)(v19 + 80) = 1;
  *(_WORD *)(v19 + 82) = 1;
  *(_WORD *)(v19 + 106) = 0;
  v14 = sub_1400E3E6C(*(_QWORD *)(a1 + 712), v13, 0, 0, 1, 0LL, 0LL, 0, (__int64)sub_1400DD3F0, a9);
  if ( v14 < 0 )
  {
    sub_1400A870C(
      a1,
      1,
      3,
      (__int64)L"Get Log Page send failure",
      L"Status",
      v14,
      L"NamespaceId",
      -1,
      L"LogPageIdentifier",
      a3,
      L"LogPageSize",
      v10,
      L"LogPageOffset",
      0,
      L"LogSpecificIdentifier",
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    ExFreePoolWithTag(v17, 0x52436152u);
    goto LABEL_16;
  }
  return (unsigned int)v14;
}
