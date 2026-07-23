/*
 * XREFs of HalpReportResourceUsage @ 0x140CB4938
 * Callers:
 *     HalReportResourceUsage @ 0x140CB3690 (HalReportResourceUsage.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     HalTranslateBusAddress @ 0x140481B70 (HalTranslateBusAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpClaimDebugResource @ 0x140583008 (HalpClaimDebugResource.c)
 *     RtlCmEncodeMemIoResource @ 0x14061D140 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     HalpGetResourceSortValue @ 0x140CB48E8 (HalpGetResourceSortValue.c)
 *     IoReportHalResourceUsage @ 0x140CCA220 (IoReportHalResourceUsage.c)
 */

void __fastcall HalpReportResourceUsage(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // r13d
  unsigned int *v3; // rsi
  char *v4; // rax
  __int64 v5; // r15
  unsigned int v6; // edx
  char *v7; // r12
  _DWORD *v8; // r14
  char *v9; // rcx
  char *v10; // r8
  unsigned __int8 v11; // dl
  ULONG_PTR v12; // rdi
  unsigned int v13; // r8d
  char v14; // cl
  char v15; // r9
  unsigned __int16 v16; // ax
  int v17; // ecx
  int v18; // eax
  ULONGLONG v19; // r9
  ULONGLONG v20; // r8
  NTSTATUS v21; // eax
  _DWORD *v22; // r9
  _DWORD *v23; // rax
  _DWORD *v24; // r11
  _DWORD *v25; // r9
  int v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // r10
  int v29; // r15d
  int v30; // esi
  int v31; // r14d
  unsigned int v32; // r15d
  int v33; // r11d
  __int64 v34; // r14
  __int64 v35; // r10
  __int64 v36; // rdi
  char *v37; // r13
  __int64 v38; // r10
  int v39; // r11d
  bool v40; // cc
  int v41; // ecx
  __int128 v42; // xmm1
  int v43; // ecx
  __int128 v44; // xmm1
  unsigned __int8 v45; // [rsp+38h] [rbp-D0h]
  char v46; // [rsp+39h] [rbp-CFh]
  unsigned int v47; // [rsp+3Ch] [rbp-CCh]
  unsigned int v48; // [rsp+3Ch] [rbp-CCh]
  ULONG Descriptor; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int Descriptor_4; // [rsp+44h] [rbp-C4h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor_8; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp-A0h]
  __int64 v54; // [rsp+70h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v56; // [rsp+80h] [rbp-88h]
  _BYTE v57[20]; // [rsp+88h] [rbp-80h]
  _DWORD *v58; // [rsp+A0h] [rbp-68h]
  LARGE_INTEGER TranslatedAddress; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD *v60; // [rsp+B0h] [rbp-58h]
  _DWORD *v61; // [rsp+B8h] [rbp-50h]
  PVOID P; // [rsp+C0h] [rbp-48h]
  ULONG_PTR Pool2; // [rsp+C8h] [rbp-40h]
  __int64 v64; // [rsp+D0h] [rbp-38h]
  struct _KAFFINITY_EX v65; // [rsp+D8h] [rbp-30h] BYREF

  v64 = a1;
  memset_0(&v65, 0, sizeof(v65));
  v1 = KdComPortInUse;
  v2 = 0;
  Descriptor_4 = 0;
  v54 = 0LL;
  LODWORD(v52) = 0;
  v55 = 0LL;
  TranslatedAddress.QuadPart = 0LL;
  Descriptor = 0;
  memset(&Descriptor_8, 0, sizeof(Descriptor_8));
  if ( KdComPortInUse )
    HalpClaimDebugResource((ULONG_PTR)&HalpKdComIoSpace, KdComPortInUse);
  if ( KdHvComPortInUse && KdHvComPortInUse != v1 )
    HalpClaimDebugResource((ULONG_PTR)&HalpHvComIoSpace, KdHvComPortInUse);
  Pool2 = ExAllocatePool2(64LL, 0x2000uLL, 0x6D6C6148u);
  v3 = (unsigned int *)Pool2;
  v4 = (char *)ExAllocatePool2(64LL, 0x2000uLL, 0x6D6C6148u);
  P = v4;
  if ( !Pool2 || !v4 )
    KeBugCheckEx(0xACu, 0x4000uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\misc\\usage.c", 0x196uLL);
  v5 = Pool2 + 4;
  v6 = 0;
  v7 = v4 + 4;
  *(_DWORD *)(Pool2 + 4) = -1;
  v60 = v3 + 1;
  v8 = v3 + 1;
  v58 = v4 + 4;
  v9 = HalpIDTUsageFlags;
  v10 = byte_140FFCC11;
  do
  {
    if ( (*v9 & 1) == 0 )
    {
      *v9 = 17;
      *(_DWORD *)v10 = v6;
    }
    ++v6;
    ++v9;
    v10 += 5;
  }
  while ( v6 < 0x30 );
  v61 = 0LL;
  v11 = 0;
  v56 = 0LL;
LABEL_13:
  v45 = v11;
  if ( v11 < 2u )
  {
    v12 = HalpAddressUsageList;
    v47 = 0;
    v13 = 0;
    v14 = v11 != 0 ? 16 : 32;
    v46 = v14;
    while ( 1 )
    {
      while ( v13 > 0xFF )
      {
        if ( !v12 )
        {
          v11 = v45 + 1;
          v2 = 0;
          goto LABEL_13;
        }
        if ( ((unsigned __int8)v14 & *(_BYTE *)(v12 + 12)) != 0 )
        {
          BugCheckParameter4 = v2;
          if ( *(_QWORD *)(v12 + 16LL * v2 + 21)
            && ((v18 = *(_DWORD *)(v12 + 8), v18 == 1) || ((v18 - 3) & 0xFFFFFFFB) == 0) )
          {
            v19 = *(_QWORD *)(v12 + 16LL * v2 + 13);
            v20 = *(_QWORD *)(v12 + 16LL * v2 + 21);
            Descriptor_8.Flags = 0;
            v21 = RtlCmEncodeMemIoResource(&Descriptor_8, *(_BYTE *)(v12 + 8), v20, v19);
            if ( v21 < 0 )
              KeBugCheckEx(0x5Cu, 0x10FuLL, v21, v12, BugCheckParameter4);
            Descriptor_8.ShareDisposition = 2;
            if ( Descriptor_8.Type == 1 )
            {
              Descriptor = 1;
              Descriptor_8.Flags = 17;
            }
            else if ( Descriptor_8.Type == 3 || Descriptor_8.Type == 7 )
            {
              Descriptor = 0;
              if ( (*(_BYTE *)(v12 + 12) & 4) != 0 )
                Descriptor_8.Flags |= 1u;
            }
            LODWORD(BugCheckParameter4) = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
            *(_OWORD *)v57 = *(_OWORD *)&Descriptor_8.Type;
            HalTranslateBusAddress(Internal, 0, Descriptor_8.u.Generic.Start, &Descriptor, &TranslatedAddress);
            *(LARGE_INTEGER *)&v57[4] = TranslatedAddress;
            if ( Descriptor_8.Type == 1 && !Descriptor )
              *(_WORD *)&v57[2] = 0;
            v13 = v47;
            ++v2;
            v17 = BugCheckParameter4;
LABEL_37:
            if ( *v60 )
            {
              ++*v3;
              v60 = v8;
              ++*(_DWORD *)P;
              v22 = v58;
              *v8 = 0;
              *v22 = 0;
              v23 = v22 + 2;
              v24 = v8 + 2;
              v56 = (unsigned __int64)(v22 + 2);
              v8 += 4;
              v61 = v24;
              v25 = v22 + 4;
            }
            else
            {
              v25 = v58;
              v24 = v61;
              v23 = (_DWORD *)v56;
            }
            ++v24[1];
            ++v23[1];
            v26 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
            *(_OWORD *)v8 = *(_OWORD *)&Descriptor_8.Type;
            v8[4] = v26;
            v8 += 5;
            *(_OWORD *)v25 = *(_OWORD *)v57;
            v25[4] = v17;
            v14 = v46;
            v58 = v25 + 5;
          }
          else
          {
            v12 = *(_QWORD *)v12;
            v2 = 0;
          }
        }
        else
        {
          v12 = *(_QWORD *)v12;
          v2 = 0;
        }
      }
      if ( ((unsigned __int8)v14 & (unsigned __int8)HalpIDTUsageFlags[v13]) != 0 )
      {
        *(_QWORD *)&v65.Count = 2097153LL;
        memset_0(&v65.8, 0, sizeof(v65.8));
        RtlpCopyAffinityEx(&v65, v65.Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
        *(_WORD *)&Descriptor_8.Type = 514;
        v15 = HalpIDTUsageFlags[v47] & 2;
        Descriptor_8.Flags = v15 != 0;
        *(_DWORD *)&v57[8] = v47;
        Descriptor_8.u.Generic.Start.HighPart = *(_DWORD *)&HalpIDTUsage[5 * v47 + 1];
        Descriptor_8.u.Generic.Start.LowPart = LOWORD(Descriptor_8.u.MessageInterrupt.Translated.Vector);
        Descriptor_8.u.Interrupt.Affinity = v65.Bitmap[0];
        *(_WORD *)&v57[2] = Descriptor_8.Flags;
        v13 = v47 + 1;
        v16 = (unsigned __int8)HalpIDTUsage[5 * v47];
        *(_QWORD *)&v57[12] = v65.Bitmap[0];
        v17 = HIDWORD(v65.StaticBitmap[0]);
        *(_DWORD *)&v57[4] = v16;
        *(_WORD *)v57 = 514;
        ++v47;
        goto LABEL_37;
      }
      v47 = ++v13;
    }
  }
  v48 = 0;
  v56 = (unsigned int)((_DWORD)v8 - (_DWORD)v3);
  v27 = 0;
  if ( !*v3 )
    goto LABEL_57;
  do
  {
    v28 = v5 + 16;
    v7 += 16;
    v29 = *(_DWORD *)(v5 + 12);
    LODWORD(BugCheckParameter4) = v29;
    if ( !v29 )
      goto LABEL_56;
    do
    {
      HalpGetResourceSortValue(v28, &Descriptor_4, &v54);
      v30 = HIDWORD(v54);
      v31 = v29;
      v32 = Descriptor_4;
      v34 = (unsigned int)(v31 - v33);
      v36 = v35;
      v37 = v7;
      do
      {
        HalpGetResourceSortValue(v36, &v52, &v55);
        if ( (unsigned int)v52 >= v32 )
        {
          if ( (_DWORD)v52 != v32 )
            goto LABEL_53;
          v40 = SHIDWORD(v55) < v30;
          if ( HIDWORD(v55) != v30 )
            goto LABEL_51;
          if ( (unsigned int)v55 >= (unsigned int)v54 )
          {
            v40 = SHIDWORD(v55) < v30;
LABEL_51:
            if ( !v40 )
              goto LABEL_53;
          }
        }
        v41 = *(_DWORD *)(v38 + 16);
        v42 = *(_OWORD *)v38;
        *(_OWORD *)v38 = *(_OWORD *)v36;
        *(_DWORD *)(v38 + 16) = *(_DWORD *)(v36 + 16);
        *(_OWORD *)v36 = v42;
        *(_DWORD *)(v36 + 16) = v41;
        v43 = *((_DWORD *)v7 + 4);
        v44 = *(_OWORD *)v7;
        *(_OWORD *)v7 = *(_OWORD *)v37;
        *((_DWORD *)v7 + 4) = *((_DWORD *)v37 + 4);
        *(_OWORD *)v37 = v44;
        *((_DWORD *)v37 + 4) = v43;
        HalpGetResourceSortValue(v38, &Descriptor_4, &v54);
        v30 = HIDWORD(v54);
        v32 = Descriptor_4;
LABEL_53:
        v36 += 20LL;
        v37 += 20;
        --v34;
      }
      while ( v34 );
      v29 = BugCheckParameter4;
      v28 = v38 + 20;
      v7 += 20;
    }
    while ( v39 + 1 < (unsigned int)BugCheckParameter4 );
    v3 = (unsigned int *)Pool2;
    v27 = v48;
LABEL_56:
    ++v27;
    v5 = v28;
    v48 = v27;
  }
  while ( v27 < *v3 );
LABEL_57:
  IoReportHalResourceUsage(v64, v3, P, (unsigned int)v56);
  ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
}
