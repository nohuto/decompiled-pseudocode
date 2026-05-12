/*
 * XREFs of ScsiToNVMeCommand @ 0x140116B04
 * Callers:
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 * Callees:
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1400C6E88 (SetPrpFromBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     MdlToNVMeCommandPrp @ 0x14010047C (MdlToNVMeCommandPrp.c)
 *     ScsiInquiryRequest @ 0x1401167F4 (ScsiInquiryRequest.c)
 *     ScsiSecurityProtocolIn @ 0x140116984 (ScsiSecurityProtocolIn.c)
 *     ScsiSecurityProtocolOut @ 0x140116A44 (ScsiSecurityProtocolOut.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall ScsiToNVMeCommand(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbp
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 v8; // r12
  unsigned __int8 *v9; // r10
  char v10; // di
  unsigned int v11; // r11d
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r10
  char v16; // di
  unsigned __int8 v17; // dl
  unsigned int v18; // esi
  __int64 i; // r11
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  _BYTE *v23; // r15
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  int DmaBuffer; // edi
  int v29; // eax
  char v30; // cl
  __int64 v31; // rax
  __int64 v32; // rax
  size_t v33; // rsi
  __int64 v34; // r8
  char v35; // al
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rax
  int v46; // r9d
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  void (__fastcall *v51)(__int64, _QWORD, __int64); // rax
  char v52; // cl
  __int64 v53; // rax
  void *QuadPart; // rax
  void *v56[2]; // [rsp+30h] [rbp-48h] BYREF
  char v57; // [rsp+80h] [rbp+8h]
  unsigned __int64 v58; // [rsp+90h] [rbp+18h]

  v58 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)v56 = 0LL;
  v5 = (__int64 *)a4;
  v6 = a2;
  v8 = 64LL;
  v57 = HIDWORD(*(_QWORD *)(v4 + 136)) & 1;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v9 = (unsigned __int8 *)(a2 + 72);
    v17 = *(_BYTE *)(a2 + 10);
    goto LABEL_39;
  }
  v9 = 0LL;
  v10 = 0;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_22;
  v11 = *(_DWORD *)(a2 + 56);
  a4 = 0LL;
  if ( !v11 )
    goto LABEL_22;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v6 + 4 * a4 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      a3 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v12 < (unsigned int)a3 )
        break;
    }
LABEL_17:
    a4 = (unsigned int)(a4 + 1);
    if ( (unsigned int)a4 >= v11 )
      goto LABEL_22;
  }
  a2 = (unsigned int)v12;
  v13 = *(_DWORD *)(v12 + v6) - 64;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 && a2 + 40 <= a3 )
      {
        if ( !*(_DWORD *)(a2 + v6 + 12) )
          goto LABEL_22;
        v15 = v6 + 32;
        goto LABEL_21;
      }
    }
    else if ( a2 + 56 <= a3 )
    {
      v10 = 1;
      if ( !*(_BYTE *)(a2 + v6 + 10) )
        goto LABEL_22;
      v9 = (unsigned __int8 *)(a2 + v6 + 24);
    }
    goto LABEL_16;
  }
  if ( a2 + 40 > a3 )
  {
LABEL_16:
    if ( v10 )
      goto LABEL_22;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a2 + v6 + 10) )
    goto LABEL_22;
  v15 = v6 + 24;
LABEL_21:
  v9 = (unsigned __int8 *)(a2 + v15);
LABEL_22:
  v16 = 0;
  v17 = 0;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v18 = *(_DWORD *)(v6 + 56);
    for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
    {
      v20 = *(unsigned int *)(v6 + 4 * i + 120);
      if ( (unsigned int)v20 >= 0x80 )
      {
        a4 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v20 < (unsigned int)a4 )
        {
          a3 = (unsigned int)v20;
          v21 = *(_DWORD *)(v20 + v6) - 64;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 == 1 && a3 + 40 <= a4 )
                break;
            }
            else if ( a3 + 56 <= a4 )
            {
              v17 = *(_BYTE *)(a3 + v6 + 10);
              v16 = 1;
            }
          }
          else if ( a3 + 40 <= a4 )
          {
            v17 = *(_BYTE *)(a3 + v6 + 10);
            break;
          }
          if ( v16 )
            break;
        }
      }
    }
  }
LABEL_39:
  v23 = (_BYTE *)(*v5 + 4096);
  if ( v17 < 6u || !v9 )
  {
    LOBYTE(a4) = 32;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 8;
    SetSrbSenseData(v6, a2, a3, a4, 0);
    return (unsigned int)-1056964601;
  }
  v24 = *v9;
  if ( v24 > 0x48 )
  {
    v36 = v24 - 77;
    if ( !v36 )
      goto LABEL_58;
    v37 = v36 - 8;
    if ( !v37 )
      goto LABEL_58;
    v38 = v37 - 5;
    if ( !v38 )
      goto LABEL_58;
    v39 = v38 - 46;
    if ( !v39 )
      goto LABEL_58;
    v40 = v39 - 2;
    if ( !v40 )
      goto LABEL_58;
    v41 = v40 - 5;
    if ( !v41 )
      goto LABEL_89;
    v42 = v41 - 12;
    if ( !v42 )
      goto LABEL_58;
    v43 = v42 - 7;
    if ( v43 )
    {
      if ( v43 != 19 )
        goto LABEL_86;
      v29 = ScsiSecurityProtocolOut(a1, v6, v9, *v5 + 4096);
    }
    else
    {
      v29 = ScsiSecurityProtocolIn(a1, v6, v9, *v5 + 4096);
    }
LABEL_53:
    DmaBuffer = v29;
    goto LABEL_60;
  }
  if ( v24 == 72 )
  {
LABEL_58:
    *(_BYTE *)(v6 + 3) = 6;
LABEL_59:
    DmaBuffer = -1073741808;
    goto LABEL_60;
  }
  if ( v24 > 0x28 )
  {
    if ( v24 != 42 )
    {
      if ( v24 == 47 )
        goto LABEL_89;
      if ( v24 == 53 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v4 + 592) + 525LL) & 1) != 0 )
        {
          DmaBuffer = 259;
          *(_DWORD *)(*v5 + 4100) = *(_DWORD *)(a1 + 56);
          v35 = 0;
          *v23 = 0;
        }
        else
        {
          DmaBuffer = 0;
          v35 = 1;
        }
        *(_BYTE *)(v6 + 3) = v35;
        goto LABEL_60;
      }
      if ( v24 != 59 )
        goto LABEL_86;
    }
    goto LABEL_58;
  }
  if ( v24 == 40 )
    goto LABEL_58;
  if ( !*v9 )
    goto LABEL_89;
  v25 = v24 - 18;
  if ( !v25 )
  {
    v29 = ScsiInquiryRequest(a1, v6, (__int64)v9);
    goto LABEL_53;
  }
  v26 = v25 - 3;
  if ( !v26 )
    goto LABEL_58;
  v27 = v26 - 5;
  if ( !v27 )
    goto LABEL_58;
  if ( v27 != 1 )
  {
LABEL_86:
    LOBYTE(a4) = 32;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v6, a2, a3, a4, 0);
    goto LABEL_59;
  }
  if ( (v9[1] & 1) != 0 )
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v6, a2, a3, a4, 0);
    DmaBuffer = -1073741811;
    goto LABEL_60;
  }
LABEL_89:
  *(_BYTE *)(v6 + 3) = 1;
  DmaBuffer = 0;
LABEL_60:
  if ( !*(_BYTE *)(v6 + 3) )
  {
    v30 = *(_BYTE *)(v6 + 2);
    v31 = 24LL;
    if ( v30 != 40 )
      v31 = 12LL;
    if ( (*(_DWORD *)(v31 + v6) & 0xC0) == 0 )
      goto LABEL_113;
    v32 = 60LL;
    if ( v30 != 40 )
      v32 = 16LL;
    v33 = *(unsigned int *)(v32 + v6);
    if ( !(_DWORD)v33 )
    {
LABEL_113:
      *(_DWORD *)(*v5 + 4256) &= ~2u;
      return (unsigned int)DmaBuffer;
    }
    if ( v57 )
    {
      DmaBuffer = MdlToNVMeCommandPrp((__int64)v23, v33, *(_DWORD **)(v58 + 8), (_QWORD *)*v5, v5[1]);
      if ( DmaBuffer < 0 )
        goto LABEL_72;
      v44 = 24LL;
      v45 = 24LL;
      if ( *(_BYTE *)(v6 + 2) != 40 )
        v45 = 12LL;
      v46 = *(_DWORD *)(v45 + v6) & 0x40;
      v47 = *(_QWORD *)(a1 + 16);
      v48 = *(_QWORD *)(v47 + 128) + 1160LL;
      if ( *(_QWORD *)(v58 + 8) )
      {
        if ( *(_QWORD *)(v47 + 128) != -1160LL )
        {
          v49 = *(_QWORD *)v48;
          if ( *(_QWORD *)v48 )
          {
            v50 = *(_QWORD *)(v49 + 8);
            if ( v50 )
            {
              if ( *(int *)(v48 + 28) >= 3 && (v51 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v50 + 240)) != 0LL )
              {
                LOBYTE(v48) = v46 != 0;
                v51(v49, *(_QWORD *)(v58 + 8), v48);
              }
              else
              {
                LOBYTE(v48) = 1;
                LOBYTE(v44) = v46 != 0;
                KeFlushIoBuffers(*(_QWORD *)(v58 + 8), v44, v48);
              }
            }
          }
        }
      }
    }
    else
    {
      DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), v33, a3, v56, &v56[1], 0);
      if ( DmaBuffer < 0 )
        goto LABEL_72;
      if ( !(unsigned int)SetPrpFromBuffer(*v5, *v5 + 4096, (__int64)v56[1], v33, (_QWORD *)*v5, v5[1]) )
      {
        DmaBuffer = -1073741823;
        NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v33, v34, (__int64)v56[0], (__int64)v56[1]);
      }
      if ( DmaBuffer < 0 )
      {
LABEL_72:
        *(_BYTE *)(v6 + 3) = 4;
        return (unsigned int)DmaBuffer;
      }
    }
    *(_DWORD *)(*v5 + 4256) |= 2u;
    v52 = *(_BYTE *)(v6 + 2);
    if ( v57 )
    {
      if ( v52 != 40 )
        v8 = 24LL;
      *(_QWORD *)(*v5 + 4160) = *(_QWORD *)(v8 + v6);
      QuadPart = (void *)MmGetPhysicalAddress(*(PVOID *)(*v5 + 4160)).QuadPart;
    }
    else
    {
      v53 = 24LL;
      if ( v52 != 40 )
        v53 = 12LL;
      if ( (*(_DWORD *)(v53 + v6) & 0x80u) != 0 )
      {
        if ( v52 != 40 )
          v8 = 24LL;
        memmove(v56[0], *(const void **)(v8 + v6), v33);
      }
      *(void **)(*v5 + 4160) = v56[0];
      QuadPart = v56[1];
    }
    *(_QWORD *)(*v5 + 4168) = QuadPart;
    *(_DWORD *)(*v5 + 4248) = v33;
  }
  return (unsigned int)DmaBuffer;
}
