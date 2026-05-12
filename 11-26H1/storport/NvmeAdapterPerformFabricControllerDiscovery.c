/*
 * XREFs of NvmeAdapterPerformFabricControllerDiscovery @ 0x1400EBB5C
 * Callers:
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     McTemplateK0qjzpduuuhhss_EtwWriteTransfer @ 0x1400E3298 (McTemplateK0qjzpduuuhhss_EtwWriteTransfer.c)
 *     NvmeAdapterFabricControllerAddDiscoveryEntry @ 0x1400E83C4 (NvmeAdapterFabricControllerAddDiscoveryEntry.c)
 *     NvmeAdapterFabricControllerFreeDiscoveryEntries @ 0x1400E84A4 (NvmeAdapterFabricControllerFreeDiscoveryEntries.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0 (NvmeAdapterGetControllerLogPageSync.c)
 */

__int64 __fastcall NvmeAdapterPerformFabricControllerDiscovery(__int64 a1, _BYTE *a2)
{
  _QWORD **v2; // rbx
  char *v4; // r15
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  int ControllerLogPageSync; // eax
  int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  unsigned int v13; // esi
  int v14; // eax
  unsigned int v15; // r12d
  char *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  wchar_t *v20; // rcx
  bool v21; // zf
  __int64 v23; // [rsp+28h] [rbp-91h]
  __int64 v24; // [rsp+28h] [rbp-91h]
  PVOID v25; // [rsp+A0h] [rbp-19h] BYREF
  PVOID P; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-9h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-1h]
  __int64 v29; // [rsp+C0h] [rbp+7h]
  __int64 v30; // [rsp+C8h] [rbp+Fh]
  char v31; // [rsp+120h] [rbp+67h] BYREF
  _BYTE *v32; // [rsp+128h] [rbp+6Fh]
  char v33; // [rsp+130h] [rbp+77h] BYREF
  int v34; // [rsp+138h] [rbp+7Fh]

  v32 = a2;
  v2 = (_QWORD **)(a1 + 1608);
  v30 = *(_QWORD *)(a1 + 128);
  v29 = *(_QWORD *)(a1 + 96);
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  v34 = 0;
  v31 = 0;
  v33 = 0;
  *a2 = 0;
  while ( 1 )
  {
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x52436152u);
      v25 = 0LL;
    }
    NvmeAdapterFabricControllerFreeDiscoveryEntries(v2);
    *(_QWORD *)(a1 + 1600) = 0LL;
    ControllerLogPageSync = NvmeAdapterGetControllerLogPageSync(a1, v6, 0x70u, 0x400u, 0LL, v23, 0, &v25, &v31, &v33);
    v5 = v25;
    v8 = ControllerLogPageSync;
    if ( ControllerLogPageSync < 0 )
    {
      v20 = L"Get discovery header";
      goto LABEL_33;
    }
    v9 = *(_QWORD *)v25;
    if ( *(_QWORD *)v25 && v9 == *(_QWORD *)(a1 + 1560) )
      goto LABEL_36;
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4LL,
      (__int64)L"New discovery log page detected",
      L"GENCTR",
      v9,
      L"NUMREC",
      *((_QWORD *)v25 + 1),
      L"RECFMT",
      *((_WORD *)v25 + 8),
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    v11 = v5[1];
    v12 = 1024LL;
    v28 = v11;
    v27 = 1024LL;
LABEL_8:
    if ( v11 )
      break;
    ExFreePoolWithTag(v5, 0x52436152u);
    v25 = 0LL;
    v19 = NvmeAdapterGetControllerLogPageSync(a1, v18, 0x70u, 0x400u, 0LL, v24, 1, &v25, &v31, &v33);
    v5 = v25;
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = L"Verify discovery generation";
      goto LABEL_33;
    }
    if ( *(_QWORD *)v25 == v9 )
    {
      *v32 = 1;
      *(_QWORD *)(a1 + 1592) = v9;
      StorEtwNvmeControllerEvent(
        a1,
        1,
        4LL,
        (__int64)L"New discovery log page read",
        L"GENCTR",
        *v5,
        L"NUMREC",
        v5[1],
        L"RECFMT",
        *((_WORD *)v5 + 8),
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
      goto LABEL_36;
    }
    if ( (unsigned int)++v34 > 2 )
    {
      v20 = L"Discovery retries exhausted";
      v8 = -1073741536;
      goto LABEL_33;
    }
    v2 = (_QWORD **)(a1 + 1608);
  }
  v13 = 4;
  if ( v11 < 4 )
    v13 = v11;
  LODWORD(v25) = v13;
  v14 = NvmeAdapterGetControllerLogPageSync(a1, v10, 0x70u, v13 << 10, v12, v24, 1, &P, &v31, &v33);
  v4 = (char *)P;
  v15 = 0;
  v8 = v14;
  if ( v14 < 0 )
  {
    v20 = L"Get discovery entries";
  }
  else
  {
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v11 = v28 - v13;
        v12 = ((unsigned __int64)v13 << 10) + v27;
        v28 = v11;
        v27 = v12;
        ExFreePoolWithTag(v4, 0x52436152u);
        v4 = 0LL;
        P = 0LL;
        goto LABEL_8;
      }
      v16 = &v4[1024 * (unsigned __int64)v15];
      if ( v16[2] != 3 )
      {
        v17 = v29;
        if ( *((_WORD *)v16 + 2) != *(_WORD *)(v29 + 4)
          || _strnicmp(v16 + 256, (const char *)(v29 + 60), 0x100uLL)
          || _strnicmp(v16 + 512, (const char *)(v17 + 316), 0x100uLL) )
        {
          v8 = NvmeAdapterFabricControllerAddDiscoveryEntry((_QWORD *)a1, &v4[1024 * (unsigned __int64)v15]);
          if ( v8 < 0 )
            break;
        }
      }
      v13 = (unsigned int)v25;
      ++v15;
    }
    if ( (byte_14017344A & 4) != 0 )
      McTemplateK0qjzpduuuhhss_EtwWriteTransfer(
        (__int64)(v16 + 256),
        a1 ^ v30,
        v30 + 1048,
        *(_DWORD *)(v30 + 56),
        v30 + 1048,
        *(const wchar_t **)(v30 + 1032),
        a1 ^ v30,
        v8,
        *v16,
        v16[1],
        v16[2],
        *((_WORD *)v16 + 2),
        *((_WORD *)v16 + 3),
        v16 + 256,
        v16 + 512);
    v20 = L"Add discovery entry";
  }
LABEL_33:
  StorEtwNvmeControllerEvent(
    a1,
    1,
    3LL,
    (__int64)L"FabricControllerDiscovery failure",
    v20,
    0,
    L"Status",
    v8,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0);
  NvmeAdapterFabricControllerFreeDiscoveryEntries((_QWORD **)(a1 + 1608));
  v21 = v31 == 1;
  *(_QWORD *)(a1 + 1600) = 0LL;
  if ( v21 && v33 == -112 )
    v8 = -1073741267;
LABEL_36:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52436152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x52436152u);
  return (unsigned int)v8;
}
