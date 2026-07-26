/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003E480
 * Callers:
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400257A0 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14007DD30 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     ??$ndisCallNextDatapathHandler@$0A@AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z0AEAPEAU0@AEAK55@Z @ 0x140041460 (--$ndisCallNextDatapathHandler@$0A@AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KK@ZAEAPEAXAEAPEAU1@A.c)
 *     ?NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x140050860 (-NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeNextSendHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        __int64 a3,
        struct _NDIS_OBJECT_HEADER *a4,
        void *a5,
        void (*a6)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))
{
  __int64 v6; // rax
  struct _NDIS_OBJECT_HEADER *v7; // rbx
  int v8; // r14d
  unsigned __int64 v11; // r13
  void *v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // r8
  __int64 *v18; // rsi
  void (*v19)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // r10
  void *v20; // r11
  bool v21; // zf
  __int64 v22; // rdi
  struct _NDIS_OBJECT_HEADER *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // r15d
  __int64 v27; // rsi
  unsigned int v28; // r12d
  __int64 v29; // rax
  struct _NDIS_OBJECT_HEADER v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // r15d
  __int64 v34; // r14
  unsigned int v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  void (*v39)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  unsigned int v40; // r14d
  __int64 v41; // rsi
  unsigned int v42; // r15d
  __int64 v43; // rax
  __int64 v44; // rcx
  void *v45; // [rsp+40h] [rbp-59h] BYREF
  void (*v46)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+48h] [rbp-51h] BYREF
  void (*v47)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+50h] [rbp-49h] BYREF
  __int64 v48; // [rsp+58h] [rbp-41h] BYREF
  __int128 Parameter; // [rsp+60h] [rbp-39h] BYREF
  __int128 v50; // [rsp+70h] [rbp-29h]
  __int64 v51; // [rsp+80h] [rbp-19h]
  int v52; // [rsp+88h] [rbp-11h]
  int v53; // [rsp+8Ch] [rbp-Dh]
  unsigned __int64 LowLimit; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int64 HighLimit; // [rsp+98h] [rbp-1h] BYREF
  void *v56; // [rsp+A0h] [rbp+7h] BYREF
  _QWORD v57[7]; // [rsp+A8h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+4Fh] BYREF
  unsigned int v59; // [rsp+108h] [rbp+6Fh]

  v7 = a4;
  v8 = a3;
  if ( a4->Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, (unsigned int)a3);
  }
  else if ( (a3 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    v18 = v57;
    v19 = a6;
    v20 = a5;
    a1->Scratch = 0LL;
    a1->ChildRefCount = v8;
    a1->Status = a2;
    v21 = v7->Type == 5;
    v46 = a6;
    v45 = a5;
    v59 = v6;
    v57[2] = 0LL;
    v57[0] = a1;
    for ( v57[1] = a1; v21; v45 = v20 )
    {
      v22 = *v18;
      if ( !*v18 )
        break;
      v23 = v7;
      v24 = 96 * v6 + *(_QWORD *)&v7[106].Type;
      v48 = v24;
      if ( *(_BYTE *)(v24 + 16) )
      {
        *v18 = 0LL;
        do
        {
          v33 = *(_DWORD *)(v22 + 132);
          v34 = *(_QWORD *)(v22 + 112);
          v35 = *(_DWORD *)(v22 + 140);
          *(_DWORD *)(v22 + 132) = 0;
          if ( byte_14011F740 )
          {
            if ( v7->Type == 5 )
            {
              v36 = *(_QWORD *)&v7[228].Type;
              if ( v36 )
              {
                if ( (*(_DWORD *)(v36 + 56) & 1) != 0 )
                {
                  PktMonClientNblLogNdis(&v7[222], v22, a3, 2LL);
                  v19 = v46;
                  v20 = v45;
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && v7->Type == 5 && (v37 = *(_QWORD *)&v7[194].Type) != 0 )
            (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 10))(
              v20,
              v22,
              v35,
              v33,
              v37,
              v19);
          else
            ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD))v19)(v20, v22, v35, v33);
          v19 = v46;
          v22 = v34;
          v20 = v45;
        }
        while ( v34 );
        break;
      }
      *(_BYTE *)(v24 + 16) = 1;
      v25 = *v18;
      *v18 = 0LL;
      if ( v25 )
      {
        do
        {
          v26 = *(_DWORD *)(v25 + 132);
          v27 = *(_QWORD *)(v25 + 112);
          v28 = *(_DWORD *)(v25 + 140);
          *(_DWORD *)(v25 + 132) = 0;
          if ( byte_14011F740 )
          {
            if ( v7->Type == 5 )
            {
              v29 = *(_QWORD *)&v7[228].Type;
              if ( v29 )
              {
                if ( (*(_DWORD *)(v29 + 56) & 1) != 0 )
                {
                  v30 = v7[230];
                  v21 = (*(_DWORD *)(v25 + 128) & 0x8000) == 0;
                  Parameter = 0LL;
                  LODWORD(v51) = 0;
                  v50 = 0LL;
                  if ( v21 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                    {
                      v31 = *(_QWORD *)&v7[226].Type;
                      LOWORD(Parameter) = 40;
                      *((_QWORD *)&Parameter + 1) = v25;
                      LODWORD(v50) = 1;
                      *(_QWORD *)((char *)&v50 + 4) = *(unsigned int *)&v30 | 0x200000000LL;
                      v51 = 0LL;
                      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1)
                                                                                  + 40LL))(
                        xmmword_14011F760,
                        v31,
                        &Parameter,
                        0LL);
                      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                    }
                    v20 = v45;
                    v19 = v46;
                  }
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && v7->Type == 5 && (v32 = *(_QWORD *)&v7[194].Type) != 0 )
            (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 10))(
              v20,
              v25,
              v28,
              v26,
              v32,
              v19);
          else
            ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD))v19)(v20, v25, v28, v26);
          v19 = v46;
          v25 = v27;
          v20 = v45;
        }
        while ( v27 );
        v24 = v48;
        v23 = v7;
      }
      *(_BYTE *)(v24 + 16) = 0;
      v18 = (__int64 *)v24;
      v7 = *(struct _NDIS_OBJECT_HEADER **)&v7[114].Type;
      v19 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))&v23[108].Type;
      v20 = *(void **)&v23[110].Type;
      v6 = v59;
      v21 = v7->Type == 5;
      v46 = v19;
    }
    v38 = *v18;
    if ( *v18 )
    {
      v39 = v46;
      *v18 = 0LL;
      do
      {
        v40 = *(_DWORD *)(v38 + 132);
        v41 = *(_QWORD *)(v38 + 112);
        v42 = *(_DWORD *)(v38 + 140);
        *(_DWORD *)(v38 + 132) = 0;
        if ( byte_14011F740 )
        {
          if ( v7->Type == 5 )
          {
            v43 = *(_QWORD *)&v7[228].Type;
            if ( v43 )
            {
              if ( (*(_DWORD *)(v43 + 56) & 1) != 0 )
                PktMonClientNblLogNdis(&v7[222], v38, a3, 2LL);
            }
          }
        }
        if ( ndisVerifierNdisDispatch && v7->Type == 5 && (v44 = *(_QWORD *)&v7[194].Type) != 0 )
          (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
           + 10))(
            v45,
            v38,
            v42,
            v40,
            v44,
            v39);
        else
          ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD))v39)(v45, v38, v42, v40);
        v38 = v41;
      }
      while ( v41 );
    }
  }
  else
  {
    v11 = (unsigned int)Size;
    v12 = a5;
    v13 = KeGetPcr()->Prcb.Number << 12;
    v47 = a6;
    v56 = a5;
    v48 = (__int64)v7;
    v14 = *(_QWORD *)(v13 + qword_14011EF88);
    LowLimit = v14;
    LODWORD(v45) = a2;
    v15 = *(_QWORD *)(v13 + qword_14011EF80);
    HighLimit = v15;
    v46 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))a1;
    if ( v14 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v15 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v14 = LowLimit;
      v12 = a5;
    }
    if ( (unsigned __int64)&retaddr - v14 < v11 )
    {
      v16 = 24576;
      v53 = 0;
      *(_QWORD *)&Parameter = v7;
      *((_QWORD *)&Parameter + 1) = v12;
      *(_QWORD *)&v50 = a6;
      *((_QWORD *)&v50 + 1) = a1;
      v51 = a2;
      v52 = v8;
      if ( (unsigned int)Size > 0x6000 )
        v16 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>,
             &Parameter,
             v16,
             0,
             0LL) < 0 )
      {
        if ( byte_14011F740 )
        {
          if ( (*(_DWORD *)&v7[210] & 2) != 0 )
            PktMonClientNblDropNdis((__int64)&v7[196], (__int64)a1, v17, 2LL, -1073741670, -536866812);
        }
        NdisSetStatusInNblChain(a1, -1073741670);
        _InterlockedAdd((volatile signed __int32 *)&v7[74], NdisNumNblsInNblChain(a1));
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v7, a1, 1u);
      }
    }
    else
    {
      ndisCallNextDatapathHandler<0,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
        (unsigned int)&v48,
        (unsigned int)&v47,
        (unsigned int)&v56,
        (unsigned int)&v46,
        (__int64)&v45);
    }
  }
}
