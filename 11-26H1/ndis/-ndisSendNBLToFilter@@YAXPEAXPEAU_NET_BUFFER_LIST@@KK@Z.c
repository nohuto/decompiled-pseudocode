/*
 * XREFs of ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14007DD30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003E480 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140057020 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 */

void __fastcall ndisSendNBLToFilter(char *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rcx
  struct _NET_BUFFER_LIST *v7; // rsi
  void **v8; // rcx
  char *v9; // rdx
  KIRQL v10; // bp
  unsigned int Number; // edi
  __int64 v12; // r12
  int v13; // r13d
  void **v14; // r15
  void **v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  struct _NET_BUFFER_LIST *v18; // [rsp+80h] [rbp+8h] BYREF
  char *v19; // [rsp+88h] [rbp+10h]
  unsigned int v20; // [rsp+90h] [rbp+18h]

  v20 = a3;
  v18 = a2;
  v5 = *((_QWORD *)a1 + 321);
  v7 = a2;
  if ( *(_BYTE *)v5 == 5
    && (*(_DWORD *)(v5 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v5 + 336)
    && (a1[91] && (*((_WORD *)a1 + 910) > 1u || a1[1999]) || (a4 & 2) != 0 || (*((_DWORD *)a1 + 30) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v5, a2, a3, a4, &v18);
    v7 = v18;
  }
  if ( v7 )
  {
    v8 = (void **)(a1 + 2552);
    v9 = (char *)*((_QWORD *)a1 + 319);
    v10 = 2;
    Number = -1;
    v12 = 0LL;
    LOBYTE(v13) = 0;
    LOBYTE(v18) = 0;
    v19 = v9;
    if ( *((_DWORD *)a1 + 12) )
    {
      v15 = (void **)(a1 + 2552);
    }
    else
    {
      v14 = (void **)(a1 + 2552);
      if ( !*((_DWORD *)a1 + 20) )
      {
LABEL_17:
        if ( v9 == a1 )
        {
          v8 = v14;
          if ( (v13 & 0x80) != 0 )
          {
            if ( (a4 & 1) == 0 )
            {
              v10 = KfRaiseIrql(2u);
              LOBYTE(v18) = 1;
            }
            Number = KeGetPcr()->Prcb.Number;
            v8 = v14;
            *(_QWORD *)(ndisPcwOffsetToPerCpuData + v12 + ndisPcwPerCpuDataStride * Number + 360) = __rdtsc();
          }
        }
        ndisInvokeNextSendHandler(
          v7,
          v20,
          a4,
          *((struct _NDIS_OBJECT_HEADER **)a1 + 321),
          *v8,
          *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))a1 + 331));
        if ( v19 == a1 )
        {
          if ( (v13 & 0x80u) != 0 )
          {
            if ( Number == -1 )
              Number = KeGetPcr()->Prcb.Number;
            v16 = v12 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
            v17 = __rdtsc();
            *(_QWORD *)(v16 + 160) += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17)
                                    - *(_QWORD *)(v16 + 360);
            *(_QWORD *)(v16 + 360) = 0LL;
          }
          if ( (_BYTE)v18 )
          {
            if ( v10 != 2 )
              KeLowerIrql(v10);
          }
        }
        return;
      }
      v15 = (void **)(a1 + 2552);
    }
    v12 = *((_QWORD *)a1 + 5);
    v14 = (void **)(a1 + 2552);
    v13 = *((_DWORD *)a1 + 20);
    if ( !v12 )
    {
      v12 = *((_QWORD *)a1 + 5);
      v14 = v15;
    }
    goto LABEL_17;
  }
}
