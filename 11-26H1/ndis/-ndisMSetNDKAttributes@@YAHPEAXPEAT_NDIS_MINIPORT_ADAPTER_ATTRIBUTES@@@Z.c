/*
 * XREFs of ?ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1401431F4
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140071920 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMSetNDKAttributes(struct _NDIS_MINIPORT_BLOCK *a1, union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  _OWORD *MiniportAddDeviceContext; // rdi
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  MiniportAddDeviceContext = a2->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
  v3 = 0;
  if ( a2->Header.Revision == 1
    && a2->Header.Size == 16
    && MiniportAddDeviceContext
    && *(_BYTE *)MiniportAddDeviceContext == 0x80
    && *((_BYTE *)MiniportAddDeviceContext + 1) == 1
    && *((_WORD *)MiniportAddDeviceContext + 1) >= 0x38u
    && *((_QWORD *)MiniportAddDeviceContext + 6) )
  {
    if ( ndisGetNDKBlock(a1) )
    {
      return (unsigned int)-1073741808;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 192LL, 1919632462LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = Pool2 + 88;
        *(_OWORD *)(Pool2 + 32) = *MiniportAddDeviceContext;
        *(_OWORD *)(Pool2 + 48) = MiniportAddDeviceContext[1];
        *(_OWORD *)(Pool2 + 64) = MiniportAddDeviceContext[2];
        *(_QWORD *)(Pool2 + 80) = *((_QWORD *)MiniportAddDeviceContext + 6);
        v9 = *((_QWORD *)MiniportAddDeviceContext + 6);
        *(_OWORD *)v8 = *(_OWORD *)v9;
        *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
        *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
        *(_OWORD *)(v8 + 64) = *(_OWORD *)(v9 + 64);
        *(_OWORD *)(v8 + 80) = *(_OWORD *)(v9 + 80);
        *(_QWORD *)(v8 + 96) = *(_QWORD *)(v9 + 96);
        *(_QWORD *)(v7 + 80) = v8;
        *(_BYTE *)(v7 + 24) = a2->NDKAttributes.Enabled;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_DWORD *)(v7 + 16) = 0;
        a1->NDKBlock = (void *)v7;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            1,
            10,
            (struct _GUID *)&WPP_4a726fac46763b6501e52dd9531be8bd_Traceguids,
            (char)a1);
        }
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
