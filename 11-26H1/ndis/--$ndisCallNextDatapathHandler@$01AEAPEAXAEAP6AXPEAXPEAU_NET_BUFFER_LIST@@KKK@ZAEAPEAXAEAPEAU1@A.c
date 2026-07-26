/*
 * XREFs of ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x140040600
 * Callers:
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14002A520 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039C00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
        __int64 *a1,
        __int64 (__fastcall **a2)(__int64, __int64, _QWORD, _QWORD, int),
        __int64 *a3,
        __int64 *a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD, _QWORD, int); // r15
  int v10; // edi
  __int64 v11; // r13
  unsigned int v12; // esi
  unsigned int v13; // ebp
  __int64 v15; // rax
  bool v16; // zf
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+60h] [rbp-38h]

  v7 = *a4;
  v8 = *a3;
  v9 = *a2;
  v10 = *a7;
  v11 = *a1;
  v12 = *a6;
  v13 = *a5;
  if ( byte_14011F740 )
  {
    if ( *(_BYTE *)v11 == 5 )
    {
      v15 = *(_QWORD *)(v11 + 872);
      if ( v15 )
      {
        if ( (*(_DWORD *)(v15 + 56) & 1) != 0 )
        {
          v16 = (*(_DWORD *)(v7 + 128) & 0x8000) == 0;
          v17 = *(_DWORD *)(v11 + 880);
          v20 = 0LL;
          LODWORD(v22) = 0;
          v21 = 0LL;
          if ( v16 )
          {
            if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
            {
              v18 = *(_QWORD *)(v11 + 864);
              LOWORD(v20) = 40;
              *((_QWORD *)&v20 + 1) = v7;
              LODWORD(v21) = 1;
              *(_QWORD *)((char *)&v21 + 4) = v17 | 0x100000000LL;
              v22 = 0LL;
              (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1) + 40LL))(
                xmmword_14011F760,
                v18,
                &v20,
                0LL);
              ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
            }
          }
        }
      }
    }
  }
  if ( ndisVerifierNdisDispatch && *(_BYTE *)v11 == 5 && (v19 = *(_QWORD *)(v11 + 776)) != 0 )
    return (*((__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, __int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int)))ndisVerifierNdisDispatch
            + 14))(
             v8,
             v7,
             v13,
             v12,
             v10,
             v19,
             v9);
  else
    return v9(v8, v7, v13, v12, v10);
}
