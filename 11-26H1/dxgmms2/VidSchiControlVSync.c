/*
 * XREFs of VidSchiControlVSync @ 0x1400FDFF0
 * Callers:
 *     VidSchiControlVSyncThread @ 0x140039A20 (VidSchiControlVSyncThread.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140039B8C (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchSetMonitorPowerState @ 0x140042540 (VidSchSetMonitorPowerState.c)
 *     VidSchControlVSyncAdapter @ 0x1400FD840 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncEnabled @ 0x1400FDD40 (VidSchIsVSyncEnabled.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     VidSchiGetVSyncSuspended @ 0x140037890 (VidSchiGetVSyncSuspended.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x14003DA98 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 *     VidSchiSetVSyncSuspended @ 0x14003DE10 (VidSchiSetVSyncSuspended.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, enum _DXGK_INTERRUPT_TYPE i, int a3, unsigned int a4)
{
  char v4; // r10
  unsigned int v5; // edi
  __int64 v6; // r14
  char v8; // r15
  unsigned int *v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  int v13; // ebp
  __int64 v14; // rcx
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int j; // ecx
  __int64 v21; // rax

  v4 = *(_BYTE *)(a1 + 2500);
  v5 = 0;
  v6 = a4;
  v8 = i;
  if ( !v4 )
  {
    if ( *(_BYTE *)(a1 + 2096) != ((_BYTE)i != 0) )
      goto LABEL_3;
    return 0;
  }
  if ( a4 == -3 )
  {
    v10 = (unsigned int *)(a1 + 48);
    for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 48); ++i )
    {
      if ( *(_BYTE *)((unsigned int)i + a1 + 2096) != (v8 != 0) )
        goto LABEL_4;
    }
    return 0;
  }
  if ( *(_BYTE *)(a4 + a1 + 2096) == ((_BYTE)i != 0) )
    return 0;
LABEL_3:
  v10 = (unsigned int *)(a1 + 48);
LABEL_4:
  if ( v8 )
  {
    if ( v4 )
    {
      if ( a4 == -3 )
      {
        v18 = 0;
        if ( *v10 )
        {
          do
          {
            v19 = v18++;
            _InterlockedExchange((volatile __int32 *)(a1 + 4 * v19 + 2560), 1);
          }
          while ( v18 < *v10 );
          v10 = (unsigned int *)(a1 + 48);
        }
      }
      else
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 4LL * a4 + 2560), 1);
      }
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 2560), 1);
    }
    i = 0;
    if ( *v10 )
    {
      do
      {
        v16 = *(_DWORD *)(a1 + 2496);
        if ( _bittest(&v16, i) )
        {
          if ( VidSchiGetVSyncSuspended(a1, i) )
            _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8 * v17 + 3448) + 44420LL), 1);
          *(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 3448) + 44424LL) = 0LL;
        }
        ++i;
      }
      while ( i < *v10 );
      v10 = (unsigned int *)(a1 + 48);
    }
  }
  v11 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), i);
  v13 = 0;
  if ( v11 != -1073741822 )
    v13 = v11;
  if ( v13 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 2500) )
    {
      if ( (_DWORD)v6 == -3 )
      {
        for ( j = 0; j < *v10; *(_BYTE *)(v21 + a1 + 2096) = v8 != 0 )
          v21 = j++;
      }
      else
      {
        *(_BYTE *)(v6 + a1 + 2096) = v8 != 0;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 2096) = v8 != 0;
    }
    if ( v8 )
    {
      if ( (byte_14008A202 & 0x10) != 0 )
        McTemplateK0x_EtwWriteTransfer(16LL, &EventEnableVSync, v12, *(_QWORD *)(a1 + 16));
      VidSchiSetVSyncSuspended(a1, v6, 0);
      _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x10u);
    }
    else
    {
      if ( (byte_14008A202 & 0x10) != 0 )
        McTemplateK0x_EtwWriteTransfer(16LL, &EventDisableVSync, v12, *(_QWORD *)(a1 + 16));
      if ( *(_BYTE *)(a1 + 2500) == 1 && (_DWORD)v6 != -3 )
      {
        while ( v5 < *(_DWORD *)(a1 + 48) )
        {
          if ( *(_BYTE *)(v5 + a1 + 2096) == 1 )
            goto LABEL_14;
          ++v5;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFEF);
    }
LABEL_14:
    v14 = *(unsigned int *)(a1 + 6664);
    *(_QWORD *)(a1 + 8 * v14 + 6672) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 4 * v14 + 6704) = a3;
    *(_DWORD *)(a1 + 6664) = ((unsigned __int8)*(_DWORD *)(a1 + 6664) + 1) & 3;
  }
  return (unsigned int)v13;
}
