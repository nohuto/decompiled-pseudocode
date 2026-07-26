/*
 * XREFs of ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14002A520
 * Callers:
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140029030 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008B6D0 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x140040600 (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 *     ?NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x140050860 (-NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeNextReceiveHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        void *a6,
        void (*a7)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))
{
  __int64 v7; // rax
  struct _NDIS_OBJECT_HEADER *p_Header; // rbx
  __int64 v10; // r15
  __int64 *v13; // rsi
  unsigned __int64 Alignment; // rcx
  void (*v15)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r10
  void *v16; // r11
  __int64 v17; // rdi
  struct _NDIS_OBJECT_HEADER *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // esi
  __int64 v22; // r14
  int v23; // r12d
  unsigned int v24; // r13d
  __int64 v25; // rax
  struct _NDIS_OBJECT_HEADER v26; // r15d
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // r14d
  __int64 v31; // r15
  int v32; // r12d
  unsigned int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned int v37; // esi
  __int64 v38; // r14
  int v39; // r12d
  unsigned int v40; // r13d
  __int64 v41; // rax
  struct _NDIS_OBJECT_HEADER v42; // r15d
  __int64 v43; // rdx
  __int64 v44; // rcx
  void (*v45)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r9
  void *v46; // r10
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  int v50; // ecx
  int v51; // r8d
  void (*v52)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // [rsp+40h] [rbp-71h] BYREF
  void *v53; // [rsp+48h] [rbp-69h] BYREF
  __int128 Parameter; // [rsp+50h] [rbp-61h] BYREF
  __int128 v55; // [rsp+60h] [rbp-51h]
  unsigned __int64 v56; // [rsp+70h] [rbp-41h]
  int v57; // [rsp+78h] [rbp-39h]
  int v58; // [rsp+7Ch] [rbp-35h]
  __int64 v59; // [rsp+80h] [rbp-31h] BYREF
  struct _NET_BUFFER_LIST *v60; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int64 LowLimit; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 HighLimit; // [rsp+98h] [rbp-19h] BYREF
  void *v63; // [rsp+A0h] [rbp-11h] BYREF
  void (*v64)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // [rsp+A8h] [rbp-9h] BYREF
  struct _NDIS_OBJECT_HEADER *v65; // [rsp+B0h] [rbp-1h] BYREF
  _QWORD v66[7]; // [rsp+B8h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+47h] BYREF
  unsigned int v68; // [rsp+120h] [rbp+6Fh]
  unsigned int v69; // [rsp+120h] [rbp+6Fh]

  p_Header = &a5->Header;
  v10 = a3;
  if ( a5->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))a7)(a6, a1, a2, a3, a4);
  }
  else if ( (a4 & 2) == 0 && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    v13 = v66;
    Alignment = a1->Link.Alignment;
    v15 = a7;
    v16 = a6;
    v52 = a7;
    v53 = a6;
    v68 = v7;
    v66[2] = 0LL;
    v66[0] = a1;
    v66[1] = a1;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a4;
    a1->Status = a2;
    if ( Alignment )
      *(_QWORD *)(Alignment + 112) = v10;
    if ( p_Header->Type == 5 )
    {
      do
      {
        v17 = *v13;
        if ( !*v13 )
          break;
        v18 = p_Header;
        v19 = 96 * v7 + *(_QWORD *)&p_Header[106].Type + 48LL;
        v59 = v19;
        if ( *(_BYTE *)(v19 + 16) )
        {
          *v13 = 0LL;
          do
          {
            v30 = 1;
            v31 = *(_QWORD *)(v17 + 112);
            v32 = *(_DWORD *)(v17 + 132);
            v33 = *(_DWORD *)(v17 + 140);
            if ( *(_QWORD *)v17 )
              v30 = *(_DWORD *)(*(_QWORD *)v17 + 112LL);
            *(_DWORD *)(v17 + 132) = 0;
            if ( byte_14011F740 )
            {
              if ( p_Header->Type == 5 )
              {
                v34 = *(_QWORD *)&p_Header[218].Type;
                if ( v34 )
                {
                  if ( (*(_DWORD *)(v34 + 56) & 1) != 0 )
                  {
                    PktMonClientNblLogNdis(&p_Header[212], v17, v18, 1LL);
                    v15 = v52;
                    v16 = v53;
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && p_Header->Type == 5 && (v35 = *(_QWORD *)&p_Header[194].Type) != 0 )
              (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, int, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
               + 14))(
                v16,
                v17,
                v33,
                v30,
                v32,
                v35,
                v15);
            else
              ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD, int))v15)(v16, v17, v33, v30, v32);
            v15 = v52;
            v17 = v31;
            v16 = v53;
          }
          while ( v31 );
          break;
        }
        *(_BYTE *)(v19 + 16) = 1;
        v20 = *v13;
        *v13 = 0LL;
        if ( v20 )
        {
          do
          {
            v21 = 1;
            v22 = *(_QWORD *)(v20 + 112);
            v23 = *(_DWORD *)(v20 + 132);
            v24 = *(_DWORD *)(v20 + 140);
            if ( *(_QWORD *)v20 )
              v21 = *(_DWORD *)(*(_QWORD *)v20 + 112LL);
            *(_DWORD *)(v20 + 132) = 0;
            if ( byte_14011F740 )
            {
              if ( p_Header->Type == 5 )
              {
                v25 = *(_QWORD *)&p_Header[218].Type;
                if ( v25 )
                {
                  if ( (*(_DWORD *)(v25 + 56) & 1) != 0 )
                  {
                    v26 = p_Header[220];
                    v27 = (*(_DWORD *)(v20 + 128) & 0x8000) == 0;
                    Parameter = 0LL;
                    LODWORD(v56) = 0;
                    v55 = 0LL;
                    if ( v27 )
                    {
                      if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                      {
                        *((_QWORD *)&Parameter + 1) = v20;
                        v56 = 0LL;
                        v28 = *(_QWORD *)&p_Header[216].Type;
                        LOWORD(Parameter) = 40;
                        LODWORD(v55) = 1;
                        *(_QWORD *)((char *)&v55 + 4) = *(unsigned int *)&v26 | 0x100000000LL;
                        (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1)
                                                                                    + 40LL))(
                          xmmword_14011F760,
                          v28,
                          &Parameter,
                          0LL);
                        ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                      }
                      v16 = v53;
                      v15 = v52;
                    }
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && p_Header->Type == 5 && (v29 = *(_QWORD *)&p_Header[194].Type) != 0 )
              (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, int, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
               + 14))(
                v16,
                v20,
                v24,
                v21,
                v23,
                v29,
                v15);
            else
              ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD, int))v15)(v16, v20, v24, v21, v23);
            v15 = v52;
            v20 = v22;
            v16 = v53;
          }
          while ( v22 );
          v19 = v59;
          v18 = p_Header;
        }
        *(_BYTE *)(v19 + 16) = 0;
        v13 = (__int64 *)v19;
        p_Header = *(struct _NDIS_OBJECT_HEADER **)&p_Header[130].Type;
        v15 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))&v18[124].Type;
        v16 = *(void **)&v18[126].Type;
        v7 = v68;
        v27 = p_Header->Type == 5;
        v52 = v15;
        v53 = v16;
      }
      while ( v27 );
    }
    v36 = *v13;
    if ( *v13 )
    {
      *v13 = 0LL;
      do
      {
        v37 = 1;
        v38 = *(_QWORD *)(v36 + 112);
        v39 = *(_DWORD *)(v36 + 132);
        v40 = *(_DWORD *)(v36 + 140);
        if ( *(_QWORD *)v36 )
          v37 = *(_DWORD *)(*(_QWORD *)v36 + 112LL);
        *(_DWORD *)(v36 + 132) = 0;
        if ( byte_14011F740 )
        {
          if ( p_Header->Type == 5 )
          {
            v41 = *(_QWORD *)&p_Header[218].Type;
            if ( v41 )
            {
              if ( (*(_DWORD *)(v41 + 56) & 1) != 0 )
              {
                v42 = p_Header[220];
                v27 = (*(_DWORD *)(v36 + 128) & 0x8000) == 0;
                Parameter = 0LL;
                LODWORD(v56) = 0;
                v55 = 0LL;
                if ( v27 )
                {
                  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                  {
                    *((_QWORD *)&Parameter + 1) = v36;
                    v56 = 0LL;
                    v43 = *(_QWORD *)&p_Header[216].Type;
                    LOWORD(Parameter) = 40;
                    LODWORD(v55) = 1;
                    *(_QWORD *)((char *)&v55 + 4) = *(unsigned int *)&v42 | 0x100000000LL;
                    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1)
                                                                                + 40LL))(
                      xmmword_14011F760,
                      v43,
                      &Parameter,
                      0LL);
                    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                  }
                }
              }
            }
          }
        }
        if ( ndisVerifierNdisDispatch && p_Header->Type == 5 && (v44 = *(_QWORD *)&p_Header[194].Type) != 0 )
          (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, int, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
           + 14))(
            v53,
            v36,
            v40,
            v37,
            v39,
            v44,
            v52);
        else
          ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD, int))v52)(v53, v36, v40, v37, v39);
        v36 = v38;
      }
      while ( v38 );
    }
  }
  else
  {
    v45 = a7;
    v46 = a6;
    v69 = Size;
    v47 = KeGetPcr()->Prcb.Number << 12;
    v64 = a7;
    v63 = a6;
    v65 = p_Header;
    v48 = *(_QWORD *)(v47 + qword_14011EF88);
    LowLimit = v48;
    LODWORD(v59) = a4;
    LODWORD(v52) = v10;
    v49 = *(_QWORD *)(v47 + qword_14011EF80);
    HighLimit = v49;
    LODWORD(v53) = a2;
    v60 = a1;
    if ( v48 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v49 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v48 = LowLimit;
      v45 = a7;
      v46 = a6;
    }
    if ( (unsigned __int64)&retaddr - v48 < v69 )
    {
      v50 = 24576;
      v58 = 0;
      *(_QWORD *)&Parameter = p_Header;
      *((_QWORD *)&Parameter + 1) = v46;
      *(_QWORD *)&v55 = v45;
      *((_QWORD *)&v55 + 1) = a1;
      v56 = __PAIR64__(v10, a2);
      v57 = a4;
      if ( (unsigned int)Size > 0x6000 )
        v50 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
             &Parameter,
             v50,
             0,
             0LL) < 0 )
      {
        if ( byte_14011F740 && (*(_DWORD *)&p_Header[210] & 2) != 0 )
          PktMonClientNblDropNdis((_DWORD)p_Header + 784, (_DWORD)a1, v51, 1, -1073741670, -536866813);
        NdisSetStatusInNblChain(a1, -1073741670);
        _InterlockedAdd((volatile signed __int32 *)&p_Header[73], NdisNumNblsInNblChain(a1));
        if ( (a4 & 2) == 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)p_Header, a1, 0);
      }
    }
    else
    {
      ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
        (unsigned int)&v65,
        (unsigned int)&v64,
        (unsigned int)&v63,
        (unsigned int)&v60,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v59);
    }
  }
}
