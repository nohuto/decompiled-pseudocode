/*
 * XREFs of HalGetAdapterV3 @ 0x140785E68
 * Callers:
 *     HalpGetAdapter @ 0x14078379C (HalpGetAdapter.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     HalpAddAdapterToList @ 0x14057C7D0 (HalpAddAdapterToList.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14057C88C (HalpDmaFindAdapterByDeviceObject.c)
 *     HalpDmaIsAutomaticDomain @ 0x14058D4E0 (HalpDmaIsAutomaticDomain.c)
 *     HalpAddAdapterToSystemList @ 0x14058EEC0 (HalpAddAdapterToSystemList.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x14058F164 (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpFindAdapterByRequestLine @ 0x14058F354 (HalpFindAdapterByRequestLine.c)
 *     HalpFindDmaControllerByRequestLine @ 0x14058F40C (HalpFindDmaControllerByRequestLine.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpGetCacheCoherency @ 0x1407838A0 (HalpGetCacheCoherency.c)
 */

_QWORD *__fastcall HalGetAdapterV3(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v4; // r10
  bool v6; // cf
  bool v7; // zf
  unsigned int v8; // esi
  unsigned int v9; // r13d
  bool v10; // al
  __int64 v11; // rbx
  _QWORD *AdapterByRequestLine; // rdi
  unsigned int v13; // ecx
  __int64 DmaControllerByRequestLine; // rax
  int v15; // ecx
  __int64 v16; // r15
  __int64 v17; // rcx
  char v18; // al
  unsigned int v19; // r15d
  unsigned int v20; // edx
  BOOL v21; // r13d
  unsigned __int64 v22; // rax
  bool v23; // al
  bool v24; // cl
  char v25; // dl
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // r13
  __int64 *AdapterByDeviceObject; // rax
  __int64 *v33; // rsi
  char v34; // si
  __int64 v35; // rdi
  unsigned int v36; // eax
  unsigned int v38; // ecx
  char *v39; // rax
  char v40; // al
  int v41; // r15d
  char v42; // [rsp+80h] [rbp-19h] BYREF
  char v43; // [rsp+81h] [rbp-18h]
  char v44; // [rsp+82h] [rbp-17h]
  char v45; // [rsp+83h] [rbp-16h]
  char v46; // [rsp+84h] [rbp-15h]
  unsigned int v47; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v48; // [rsp+8Ch] [rbp-Dh]
  char v49; // [rsp+90h] [rbp-9h]
  int v50; // [rsp+94h] [rbp-5h]
  unsigned int v51; // [rsp+98h] [rbp-1h]
  __int64 v52; // [rsp+A0h] [rbp+7h]
  PMDL Mdl; // [rsp+A8h] [rbp+Fh]
  char v54; // [rsp+100h] [rbp+67h]
  int v56; // [rsp+110h] [rbp+77h]

  v4 = a2;
  v42 = 0;
  if ( HalpDmaCvmConfiguration )
    a3 = 0;
  Mdl = 0LL;
  v6 = *(_DWORD *)a1 < 3u;
  v7 = *(_DWORD *)a1 == 3;
  v8 = 64;
  v56 = a3;
  v49 = 0;
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    if ( !v6 || !a3 || !*(_BYTE *)(a1 + 4) )
      return 0LL;
    if ( *(_BYTE *)(a1 + 11) )
    {
      v9 = 64;
    }
    else if ( *(_BYTE *)(a1 + 8) || (v9 = 24, *(_BYTE *)(a1 + 5)) )
    {
      v9 = 32;
    }
  }
  v48 = v9;
  if ( !a2 )
    return 0LL;
  v10 = (*(_BYTE *)(a1 + 10) & 4) != 0;
  v7 = (*(_BYTE *)(a1 + 10) & 4) == 0;
  v46 = 1;
  v45 = v10;
  if ( !v7 )
  {
    if ( a3 != 3 )
      return 0LL;
    v46 = 0;
  }
  v11 = 0LL;
  v50 = 0;
  AdapterByRequestLine = 0LL;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v17 = 0LL;
    v44 = 0;
    v52 = 0LL;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 48);
    v11 = *(_QWORD *)(a1 + 56);
    v50 = *(_DWORD *)(a1 + 48);
    v44 = 1;
    DmaControllerByRequestLine = HalpFindDmaControllerByRequestLine(v13);
    v52 = DmaControllerByRequestLine;
    v16 = DmaControllerByRequestLine;
    if ( !DmaControllerByRequestLine )
      return 0LL;
    AdapterByRequestLine = HalpFindAdapterByRequestLine(DmaControllerByRequestLine, v15);
    v17 = v16;
    if ( !AdapterByRequestLine )
    {
      if ( !HalpDmaControllerValidateRequestLineBinding(v16, a1) )
        return 0LL;
      v17 = v16;
    }
    v4 = a2;
  }
  v18 = *(_BYTE *)(a1 + 4);
  v19 = ((*(_DWORD *)(a1 + 32) & 0x7FFFFFFF) + 4095) & 0xFFFFF000;
  if ( v18 )
  {
    v54 = *(_BYTE *)(a1 + 5);
    v51 = 0;
  }
  else
  {
    v20 = *(_DWORD *)(v17 + 48);
    v9 = *(_DWORD *)(v17 + 76);
    v54 = 1;
    if ( v20 > 8 )
      v20 = 8;
    v48 = *(_DWORD *)(v17 + 76);
    v51 = v20;
  }
  if ( v9 >= 0x20 || (v21 = 0, v18) )
  {
    v43 = 1;
    v21 = v48 >= 0x20;
  }
  else
  {
    v43 = 0;
  }
  HalpGetCacheCoherency(v17, v4, &v42);
  if ( v48 < 0x40 )
    v22 = (1LL << v48) - 1;
  else
    v22 = -1LL;
  v23 = v22 >= HalpMaximumPhysicalMemoryAddress;
  if ( HalpDmaCvmConfiguration )
  {
    v24 = 0;
  }
  else
  {
    v24 = v23;
    if ( v23 && v42 )
    {
      v25 = v54;
      if ( !v54 )
        goto LABEL_39;
      if ( !v56 || v56 == 2 )
      {
        v26 = 0;
        v47 = 0;
        v27 = 0;
        goto LABEL_58;
      }
    }
  }
  v25 = v54;
LABEL_39:
  if ( v21 )
  {
    if ( v25 && (v42 || !v24) )
      v8 = 512;
  }
  else
  {
    v8 = 16;
  }
  v26 = (v19 >> 12) + 1;
  v47 = v26;
  v28 = v26;
  if ( v26 > v8 )
  {
    v26 = v8;
    v28 = v8;
    v47 = v8;
  }
  v29 = dword_140FBD4C0;
  v27 = v28;
  if ( !v21 )
    v29 = dword_140FBD3E0;
  if ( !v43 )
  {
    v30 = v29 >> 13;
    if ( v28 > v30 )
    {
      v26 = v30;
      v47 = v30;
      v27 = v30;
    }
  }
LABEL_58:
  if ( v42 )
    goto LABEL_61;
  Mdl = IoAllocateMdl(0LL, v27 << 12, 0, 0, 0LL);
  if ( !Mdl )
    return 0LL;
  v26 = v47;
LABEL_61:
  if ( AdapterByRequestLine )
  {
    if ( v26 > *((_DWORD *)AdapterByRequestLine + 58) )
      *((_DWORD *)AdapterByRequestLine + 58) = v26;
    AdapterByRequestLine[57] = *(_QWORD *)(a1 + 56);
    ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
    goto LABEL_102;
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  v31 = v52;
  if ( v44 )
  {
    AdapterByRequestLine = HalpFindAdapterByRequestLine(v52, v50);
    if ( AdapterByRequestLine )
    {
      if ( v47 > *((_DWORD *)AdapterByRequestLine + 58) )
        *((_DWORD *)AdapterByRequestLine + 58) = v47;
      AdapterByRequestLine[57] = *(_QWORD *)(a1 + 56);
      ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_101;
    }
  }
  AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(a2);
  v33 = AdapterByDeviceObject;
  if ( !AdapterByDeviceObject )
  {
    v34 = v49;
    goto LABEL_89;
  }
  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject) != 3 )
  {
    ObfDereferenceObject(v33);
    v34 = 1;
LABEL_89:
    v35 = a1;
    goto LABEL_90;
  }
  v35 = a1;
  if ( *(_BYTE *)(a1 + 4)
    && *(_BYTE *)(a1 + 5) == *((_BYTE *)v33 + 442)
    && *(_BYTE *)(a1 + 9) == *((_BYTE *)v33 + 444)
    && v48 == *((_DWORD *)v33 + 112)
    && v45 == *((_BYTE *)v33 + 628) )
  {
    AdapterByRequestLine = v33;
    if ( !*((_BYTE *)v33 + 440) )
    {
      v36 = (v19 >> 12) + 1;
      v47 = v36;
      if ( v36 > *((_DWORD *)v33 + 58) )
        *((_DWORD *)v33 + 58) = v36;
    }
    goto LABEL_101;
  }
  if ( !HalpDmaIsAutomaticDomain((__int64 *)v33[64]) || *((_DWORD *)v33 + 130) == 3 || v56 == 3 )
  {
    ObfDereferenceObject(v33);
LABEL_86:
    KeSetEvent(&HalpNewAdapter, 0, 0);
    return 0LL;
  }
  *((_BYTE *)v33 + 524) = 1;
  ObfDereferenceObject(v33);
  v34 = 1;
LABEL_90:
  v38 = v47;
  if ( HalpDmaCvmConfiguration && v47 < dword_140FBAD44 )
  {
    v38 = dword_140FBAD44;
    v47 = dword_140FBAD44;
  }
  v39 = HalpDmaAllocateChildAdapterV3(
          v38,
          v19,
          v48,
          v54,
          *(_BYTE *)(v35 + 4),
          v43,
          v42,
          v51,
          v11,
          v56,
          v46,
          v45,
          a2,
          0,
          &v47);
  AdapterByRequestLine = v39;
  if ( !v39 )
    goto LABEL_86;
  v7 = v44 == 0;
  v39[524] = v34;
  if ( v7 )
  {
    *((_QWORD *)v39 + 66) = a2;
    HalpAddAdapterToList((__int64)v39);
  }
  else
  {
    HalpAddAdapterToSystemList(v31, (__int64)v39);
    *((_DWORD *)AdapterByRequestLine + 96) = v50;
    *((_DWORD *)AdapterByRequestLine + 95) = *(_DWORD *)(a1 + 16);
    AdapterByRequestLine[46] = v31;
    *((_DWORD *)AdapterByRequestLine + 113) = *(_DWORD *)(a1 + 24);
    ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
  }
  if ( v47 )
  {
    *((_DWORD *)AdapterByRequestLine + 58) = v47;
    v40 = 1;
  }
  else
  {
    *((_DWORD *)AdapterByRequestLine + 58) = (v19 >> 12) + 1;
    v40 = 0;
  }
  *((_BYTE *)AdapterByRequestLine + 440) = v40;
  AdapterByRequestLine[39] = 0LL;
LABEL_101:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_102:
  *((_BYTE *)AdapterByRequestLine + 443) = *(_BYTE *)(a1 + 7);
  *((_BYTE *)AdapterByRequestLine + 444) = 0;
  if ( *(_DWORD *)a1 )
    *((_BYTE *)AdapterByRequestLine + 444) = *(_BYTE *)(a1 + 9);
  if ( v56 != 2 || *((_BYTE *)AdapterByRequestLine + 440) )
    v41 = *((_DWORD *)AdapterByRequestLine + 58);
  else
    v41 = (v19 >> 12) + 1;
  *a4 = v41;
  AdapterByRequestLine[38] = Mdl;
  return AdapterByRequestLine;
}
