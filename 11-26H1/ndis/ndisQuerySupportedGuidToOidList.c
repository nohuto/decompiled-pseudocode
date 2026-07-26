/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x140083C30
 * Callers:
 *     ndisWmiRegister @ 0x140018C20 (ndisWmiRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x140045F20 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ndisQueryCustomGuids @ 0x140083800 (ndisQueryCustomGuids.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r13
  _NDIS_GUID *v2; // r12
  int v3; // edx
  struct _NDIS_CO_VC_PTR_BLOCK *v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // eax
  int v7; // edx
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  __int16 v11; // r15
  unsigned __int16 i; // r9
  unsigned __int16 v13; // dx
  int v14; // r8d
  unsigned __int16 j; // r9
  unsigned __int16 v16; // dx
  int v17; // r8d
  unsigned __int16 k; // r9
  unsigned __int16 v19; // dx
  int v20; // r8d
  _DWORD *v21; // rsi
  __int64 v22; // r14
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  unsigned __int16 v25; // r15
  __int64 Pool2; // rax
  void *v27; // r13
  struct _NDIS_MINIPORT_BLOCK *v28; // r13
  unsigned __int16 v29; // r10
  __int64 v30; // xmm1_8
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int16 m; // r9
  unsigned __int16 v34; // dx
  int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // xmm1_8
  unsigned int v39; // eax
  unsigned __int16 v40; // r15
  unsigned __int16 n; // r9
  unsigned __int16 v42; // dx
  int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // xmm1_8
  unsigned int v47; // eax
  unsigned __int16 ii; // r9
  unsigned __int16 v49; // dx
  int v50; // r8d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // xmm1_8
  unsigned int v54; // eax
  __int64 v55; // rcx
  _GUID *v56; // rax
  _NDIS_GUID *v57; // rdx
  _GUID v58; // xmm0
  _GUID v59; // xmm1
  _GUID v60; // xmm0
  _GUID v61; // xmm1
  _GUID v62; // xmm0
  _GUID v63; // xmm1
  _GUID v64; // xmm0
  _GUID v65; // xmm1
  struct _NDIS_MINIPORT_BLOCK *v66; // rsi
  _GUID v67; // xmm0
  _GUID v68; // xmm1
  __int64 v69; // rax
  unsigned __int16 v70; // r14
  _NDIS_GUID *v71; // rbx
  struct _GUID *v73; // [rsp+20h] [rbp-E0h]
  struct _NDIS_FILTER_BLOCK *v74; // [rsp+28h] [rbp-D8h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v76[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v77; // [rsp+54h] [rbp-ACh] BYREF
  struct _NDIS_MINIPORT_BLOCK *v78; // [rsp+58h] [rbp-A8h]
  void *Src; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v80; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v82[248]; // [rsp+80h] [rbp-80h] BYREF

  v78 = a1;
  v1 = a1;
  v77 = 0;
  v80 = 0;
  P = 0LL;
  v76[0] = 0;
  Src = 0LL;
  v2 = 0LL;
  memset(&v82[1], 0, 0xF7uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      18,
      18,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)v1);
  }
  memset(&v82[112], 0, 136);
  *(_QWORD *)&v82[104] = &ndisIntReqWmi;
  memset(v82, 0, 104);
  *(_DWORD *)&v82[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v82[168]);
  *(_QWORD *)v82 = 15466902LL;
  *(_DWORD *)&v82[32] = 65793;
  *(_DWORD *)&v82[8] = 0;
  *(_QWORD *)&v82[40] = 0LL;
  *(_DWORD *)&v82[48] = 0;
  v6 = ndisQuerySetMiniportEx2(
         v1,
         v4,
         (struct _NDIS_OID_REQUEST *)v82,
         v5,
         (struct _NDIS_FILTER_BLOCK *)v73,
         v74,
         0x3277444Eu,
         &P,
         &v80,
         &v77);
  v8 = P;
  v9 = v6;
  if ( v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        18,
        19,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)v1);
    }
  }
  else
  {
    v10 = v77 >> 2;
    v11 = 0;
    for ( i = 0; i < 0x52u; ++i )
    {
      v13 = 0;
      if ( (_WORD)v10 )
      {
        v14 = *((_DWORD *)&unk_14018C030 + 7 * i);
        while ( !v14 || v14 != *((_DWORD *)P + v13) )
        {
          if ( ++v13 >= (unsigned __int16)v10 )
            goto LABEL_14;
        }
        ++v11;
      }
LABEL_14:
      ;
    }
    for ( j = 0; j < 0x10u; ++j )
    {
      v16 = 0;
      if ( (_WORD)v10 )
      {
        v17 = dword_14018C930[7 * j];
        while ( !v17 || v17 != *((_DWORD *)P + v16) )
        {
          if ( ++v16 >= (unsigned __int16)v10 )
            goto LABEL_23;
        }
        ++v11;
      }
LABEL_23:
      ;
    }
    for ( k = 0; k < 0x31u; ++k )
    {
      v19 = 0;
      if ( (_WORD)v10 )
      {
        v20 = dword_14018CC50[7 * k];
        while ( !v20 || v20 != *((_DWORD *)P + v19) )
        {
          if ( ++v19 >= (unsigned __int16)v10 )
            goto LABEL_32;
        }
        ++v11;
      }
LABEL_32:
      ;
    }
    if ( !(unsigned int)ndisQueryCustomGuids(v1, (struct _NDIS_OID_REQUEST *)v82, &Src, v76) )
      v11 += v76[0];
    v21 = &unk_14018C038;
    v22 = 82LL;
    v23 = &unk_14018C038;
    v24 = 82LL;
    v25 = v11 + 38;
    do
    {
      if ( (*v23 & 0x20000000) != 0
        && ((*v23 & 0x1000000) == 0 || v1->NDKBlock)
        && ((v1->Flags & 0x20000) != 0 || (*v23 & 0x10000000) == 0) )
      {
        ++v25;
      }
      v23 += 7;
      --v24;
    }
    while ( v24 );
    LOWORD(v77) = v25;
    Pool2 = ExAllocatePool2(64LL, 28LL * v25, 829899854LL);
    v27 = Src;
    v2 = (_NDIS_GUID *)Pool2;
    if ( Pool2 )
    {
      v28 = v78;
      v29 = 0;
      do
      {
        if ( (*v21 & 0x20000000) != 0
          && ((*v21 & 0x1000000) == 0 || v28->NDKBlock)
          && ((v28->Flags & 0x20000) != 0 || (*v21 & 0x10000000) == 0) )
        {
          v30 = *((_QWORD *)v21 - 1);
          v31 = v29;
          v32 = *v21;
          v2[v31].Guid = *(_GUID *)(v21 - 6);
          *(_QWORD *)&v2[v31].Oid = v30;
          v2[v31].Flags = v32;
          if ( (v28->Flags & 0x20000) != 0 )
            v2[v31].Flags |= 0x10000000u;
          ++v29;
        }
        v21 += 7;
        --v22;
      }
      while ( v22 );
      v27 = Src;
      for ( m = 0; m < 0x52u; ++m )
      {
        v34 = 0;
        if ( (_WORD)v10 )
        {
          v35 = *((_DWORD *)&unk_14018C030 + 7 * m);
          while ( !v35 || v35 != v8[v34] )
          {
            if ( ++v34 >= (unsigned __int16)v10 )
              goto LABEL_63;
          }
          v36 = 28LL * m;
          v37 = v29;
          v38 = *(_QWORD *)((char *)&unk_14018C030 + v36);
          v39 = *(_DWORD *)((char *)&unk_14018C038 + v36);
          ++v29;
          v2[v37].Guid = *(_GUID *)((char *)&ndisSupportedGuids + v36);
          *(_QWORD *)&v2[v37].Oid = v38;
          v2[v37].Flags = v39;
        }
LABEL_63:
        ;
      }
      v40 = v77;
      for ( n = 0; n < 0x10u; ++n )
      {
        v42 = 0;
        if ( (_WORD)v10 )
        {
          v43 = dword_14018C930[7 * n];
          while ( !v43 || v43 != v8[v42] )
          {
            if ( ++v42 >= (unsigned __int16)v10 )
              goto LABEL_72;
          }
          v44 = 7LL * n;
          v45 = v29;
          v46 = *(_QWORD *)&dword_14018C930[v44];
          v47 = dword_14018C930[v44 + 2];
          ++v29;
          v2[v45].Guid = *(_GUID *)((char *)&ndisCoSupportedGuids + v44 * 4);
          *(_QWORD *)&v2[v45].Oid = v46;
          v2[v45].Flags = v47;
        }
LABEL_72:
        ;
      }
      for ( ii = 0; ii < 0x31u; ++ii )
      {
        v49 = 0;
        if ( (_WORD)v10 )
        {
          v50 = dword_14018CC50[7 * ii];
          while ( !v50 || v50 != v8[v49] )
          {
            if ( ++v49 >= (unsigned __int16)v10 )
              goto LABEL_81;
          }
          v51 = 7LL * ii;
          v52 = v29;
          v53 = *(_QWORD *)&dword_14018CC50[v51];
          v54 = dword_14018CC50[v51 + 2];
          ++v29;
          v2[v52].Guid = *(_GUID *)((char *)&ndisMediaSupportedGuids + v51 * 4);
          *(_QWORD *)&v2[v52].Oid = v53;
          v2[v52].Flags = v54;
        }
LABEL_81:
        ;
      }
      v55 = 8LL;
      v56 = (_GUID *)&ndisStatusSupportedGuids;
      v57 = &v2[v29];
      do
      {
        v57 = (_NDIS_GUID *)((char *)v57 + 128);
        v58 = *v56;
        v59 = v56[1];
        v56 += 8;
        *(_GUID *)&v57[-5].Guid.Data4[4] = v58;
        v60 = v56[-6];
        v57[-4].Guid = v59;
        v61 = v56[-5];
        *(_GUID *)&v57[-4].Oid = v60;
        v62 = v56[-4];
        *(_GUID *)&v57[-3].Guid.Data2 = v61;
        v63 = v56[-3];
        *(_GUID *)&v57[-3].Size = v62;
        v64 = v56[-2];
        *(_GUID *)v57[-2].Guid.Data4 = v63;
        v65 = v56[-1];
        *(_GUID *)&v57[-2].Flags = v64;
        *(_GUID *)&v57[-1].Guid.Data4[4] = v65;
        --v55;
      }
      while ( v55 );
      v66 = v78;
      v67 = *v56;
      v68 = v56[1];
      v69 = *(_QWORD *)&v56[2].Data1;
      v78->pNdisGuidMap = v2;
      v66->cNdisGuidMap = v40;
      v57->Guid = v67;
      *(_GUID *)&v57->Oid = v68;
      *(_QWORD *)&v57[1].Guid.Data2 = v69;
      if ( v27 )
      {
        v70 = v76[0];
        v71 = &v2[(unsigned __int16)(v29 + 38)];
        memmove(v71, v27, 28LL * v76[0]);
        v66->cCustomGuidMap = v70;
      }
      else
      {
        v66->cCustomGuidMap = 0;
        v71 = 0LL;
      }
      v66->pCustomGuidMap = v71;
      v9 = 0;
    }
    else
    {
      v9 = -1073741670;
    }
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    LOBYTE(v1) = (_BYTE)v78;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v75) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x14u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)v1,
      v75);
  }
  return v9;
}
