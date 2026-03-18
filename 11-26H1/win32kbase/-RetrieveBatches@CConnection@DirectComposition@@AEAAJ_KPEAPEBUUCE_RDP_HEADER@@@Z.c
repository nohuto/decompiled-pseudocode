/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400A50D0
 * Callers:
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1401BD9F8 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001E620 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int v3; // esi
  const struct UCE_RDP_HEADER *v4; // rdi
  bool v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rax
  const struct UCE_RDP_HEADER *v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  struct _ERESOURCE *v23; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v33; // rcx
  const struct UCE_RDP_HEADER *v34; // [rsp+50h] [rbp-30h]
  __int64 v35; // [rsp+58h] [rbp-28h]
  __int64 v36; // [rsp+60h] [rbp-20h] BYREF
  __int64 v37; // [rsp+68h] [rbp-18h] BYREF
  __int64 v38; // [rsp+70h] [rbp-10h]
  __int64 v39; // [rsp+78h] [rbp-8h]
  __int64 v42; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v6 = 0;
  if ( !a2 )
  {
    v33 = *((_QWORD *)this + 14);
    if ( v33 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 8) + 8LL))(*(_QWORD *)(v33 + 8)) != 2 )
        v6 = 1;
    }
  }
  while ( 1 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 14);
    if ( !v7 || v6 )
      break;
    v3 = 0;
    v8 = v7[18] + 40LL;
    v9 = (_QWORD *)v7[17];
    v39 = v7[19];
    v10 = v9[6];
    if ( !v10 )
    {
      v28 = v9[2];
      v29 = v9[3];
      v37 = 0LL;
      v36 = 0LL;
      v42 = 0LL;
      v3 = MmMapViewOfSection(v29, *(_QWORD *)(v28 + 16), &v42, 0LL, 4096LL, &v37, &v36, 2, 0x400000, 2);
      if ( v3 < 0 )
        return (unsigned int)v3;
      v10 = v42;
      v9[6] = v42;
    }
    v11 = 0LL;
    v38 = v8 + v10;
    v12 = *((_QWORD *)this + 14);
    v13 = *(_QWORD **)(v12 + 136);
    v14 = *(_QWORD *)(v12 + 144);
    v15 = v13[6];
    v16 = v14 + v13[7];
    if ( v15 )
      goto LABEL_7;
    v30 = v13[2];
    v31 = v13[3];
    v36 = 0LL;
    v37 = 0LL;
    v42 = 0LL;
    if ( (int)MmMapViewOfSection(v31, *(_QWORD *)(v30 + 16), &v42, 0LL, 4096LL, &v36, &v37, 2, 0x400000, 2) >= 0 )
    {
      v15 = v42;
      v13[6] = v42;
LABEL_7:
      v11 = (const struct UCE_RDP_HEADER *)(v14 + v15);
    }
    v17 = *(unsigned int *)(*((_QWORD *)this + 14) + 20LL);
    *(_DWORD *)(v16 + 4) = 40;
    *(_DWORD *)v16 = v17;
    *(_QWORD *)(v16 + 8) = 0LL;
    v18 = *((_QWORD *)this + 14);
    if ( *(_DWORD *)(v18 + 20) == 7 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)(v18 + 8) + 28LL);
      *(_QWORD *)(v16 + 24) = v38;
      *(_DWORD *)(v16 + 20) = v39;
      *(_DWORD *)(v16 + 16) = v19;
      v17 = *((_QWORD *)this + 14);
      *(_QWORD *)(v17 + 64) = *((_QWORD *)this + 21);
      v18 = *((_QWORD *)this + 14);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v17, (__int64)&DCompGetBatchEvent, (__int64)&W32kControlGuid, v18);
    v20 = **((_QWORD **)this + 14);
    if ( !a2 && v20 )
      v6 = (*(unsigned int (__fastcall **)(_QWORD, __int64, const struct UCE_RDP_HEADER **, __int64))(**(_QWORD **)(v20 + 8) + 8LL))(
             *(_QWORD *)(v20 + 8),
             a2,
             a3,
             v18) != 2;
    v21 = *((_QWORD *)this + 14);
    *(_BYTE *)(v21 + 32) |= 4u;
    v22 = *(_QWORD *)(v21 + 8);
    if ( *(_DWORD *)(v21 + 20) == 7 )
    {
      v23 = *(struct _ERESOURCE **)(v22 + 392);
      if ( v23 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(v23);
        if ( (*(_DWORD *)(v22 + 248))-- == 1 )
          KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v22 + 384) + 8LL), 1, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v22 + 392));
        KeLeaveCriticalRegion();
      }
    }
    v24 = (_QWORD *)*((_QWORD *)this + 16);
    v25 = *((_QWORD *)this + 14);
    if ( v24 )
      *v24 = v25;
    else
      *((_QWORD *)this + 15) = v25;
    v26 = (_QWORD *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 16) = v26;
    *v26 = 0LL;
    *((_QWORD *)this + 14) = v20;
    if ( v35 )
    {
      v4 = v34;
      *(_QWORD *)(v35 + 8) = v11;
    }
    else
    {
      v4 = v11;
      v34 = v11;
    }
    v35 = v16;
  }
  *a3 = v4;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)v3;
}
