/*
 * XREFs of ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14003DFA0
 * Callers:
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140079C20 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14009C960 (-ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeNextReceiveCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_OBJECT_HEADER *a4,
        void *a5,
        void (*a6)(void *, struct _NET_BUFFER_LIST *, unsigned int))
{
  __int64 v6; // rax
  struct _NDIS_OBJECT_HEADER *v7; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // ecx
  unsigned __int64 *p_LowLimit; // rdi
  void (*v17)(void *, struct _NET_BUFFER_LIST *, unsigned int); // rbp
  bool v18; // zf
  void *v19; // r14
  unsigned __int64 v20; // rdx
  struct _NDIS_OBJECT_HEADER *v21; // r13
  __int64 v22; // r15
  unsigned __int64 v23; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rdi
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-50h] BYREF
  void (*v36)(void *, struct _NET_BUFFER_LIST *, unsigned int); // [rsp+40h] [rbp-48h]
  struct _NET_BUFFER_LIST *v37; // [rsp+48h] [rbp-40h]
  __int64 v38; // [rsp+50h] [rbp-38h]
  unsigned int v39; // [rsp+58h] [rbp-30h]
  int v40; // [rsp+5Ch] [rbp-2Ch]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  unsigned int v42; // [rsp+A8h] [rbp+20h]

  v7 = a4;
  if ( a4->Type == 17 )
    goto LABEL_45;
  if ( (a2 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    p_LowLimit = &LowLimit;
    v17 = a6;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a2;
    v18 = v7->Type == 5;
    v19 = a5;
    v42 = v6;
    v36 = 0LL;
    LowLimit = (unsigned __int64)a1;
    HighLimit = (unsigned __int64)a1;
    if ( v18 )
    {
      do
      {
        v20 = *p_LowLimit;
        if ( !*p_LowLimit )
          break;
        v21 = v7;
        v22 = *(_QWORD *)&v7[106].Type + 96 * v6;
        if ( *(_BYTE *)(v22 + 88) )
        {
          *p_LowLimit = 0LL;
          do
          {
            v27 = ndisVerifierNdisDispatch;
            v28 = *(unsigned int *)(v20 + 132);
            v29 = *(_QWORD *)(v20 + 112);
            *(_DWORD *)(v20 + 132) = 0;
            if ( v27 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
              (*((void (__fastcall **)(void *, unsigned __int64, __int64))v27 + 17))(v19, v20, v28);
            else
              ((void (__fastcall *)(void *, unsigned __int64, __int64))v17)(v19, v20, v28);
            v20 = v29;
          }
          while ( v29 );
          break;
        }
        *(_BYTE *)(v22 + 88) = 1;
        v23 = *p_LowLimit;
        *p_LowLimit = 0LL;
        if ( v23 )
        {
          do
          {
            v24 = ndisVerifierNdisDispatch;
            v25 = *(unsigned int *)(v23 + 132);
            v26 = *(_QWORD *)(v23 + 112);
            *(_DWORD *)(v23 + 132) = 0;
            if ( v24 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
              (*((void (__fastcall **)(void *, unsigned __int64, __int64))v24 + 17))(v19, v23, v25);
            else
              ((void (__fastcall *)(void *, unsigned __int64, __int64))v17)(v19, v23, v25);
            v23 = v26;
          }
          while ( v26 );
        }
        v6 = v42;
        p_LowLimit = (unsigned __int64 *)(v22 + 72);
        *(_BYTE *)(v22 + 88) = 0;
        v7 = *(struct _NDIS_OBJECT_HEADER **)&v7[138].Type;
        v17 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))&v21[132].Type;
        v19 = *(void **)&v21[134].Type;
      }
      while ( v7->Type == 5 );
    }
    v30 = *p_LowLimit;
    if ( *p_LowLimit )
    {
      *p_LowLimit = 0LL;
      do
      {
        v31 = ndisVerifierNdisDispatch;
        v32 = *(unsigned int *)(v30 + 132);
        v33 = *(_QWORD *)(v30 + 112);
        *(_DWORD *)(v30 + 132) = 0;
        if ( v31 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
          (*((void (__fastcall **)(void *, unsigned __int64, __int64))v31 + 17))(v19, v30, v32);
        else
          ((void (__fastcall *)(void *, unsigned __int64, __int64))v17)(v19, v30, v32);
        v30 = v33;
      }
      while ( v33 );
    }
    return;
  }
  if ( a3->Header.Type != 5 )
  {
LABEL_45:
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, a2);
    return;
  }
  v11 = (unsigned int)Size;
  v12 = KeGetPcr()->Prcb.Number << 12;
  v13 = *(_QWORD *)(v12 + qword_14011EF88);
  LowLimit = v13;
  v14 = *(_QWORD *)(v12 + qword_14011EF80);
  HighLimit = v14;
  if ( v13 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v14 )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    v13 = LowLimit;
  }
  if ( (unsigned __int64)&retaddr - v13 >= v11 )
  {
    if ( ndisVerifierNdisDispatch && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
    {
      (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 17))(a5, a1, a2);
      return;
    }
    goto LABEL_45;
  }
  HighLimit = (unsigned __int64)a5;
  v15 = 24576;
  v36 = a6;
  v40 = 0;
  LowLimit = (unsigned __int64)v7;
  v37 = a1;
  v38 = 0LL;
  v39 = a2;
  if ( (unsigned int)Size > 0x6000 )
    v15 = Size;
  if ( KeExpandKernelStackAndCalloutEx(
         ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
         &LowLimit,
         v15,
         0,
         0LL) < 0 )
    ndisQueueStackExpansionFallbackNbls(a3, a1, 0);
}
