/*
 * XREFs of ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016FF50
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisAllocateEventLog(int a1, __int16 a2)
{
  int v3; // edi
  __int16 v4; // cx
  __int16 v5; // dx
  __int16 v6; // bp
  unsigned __int16 v7; // r14
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int16 v12; // si
  __int64 v13; // rax
  size_t v14; // rbp
  __int64 Pool2; // rbx

  if ( (a2 & 0xFFF8) != 0 || !ndisDebugLoggingMode )
    return 0LL;
  if ( ndisDebugLoggingMode == 2 )
    a2 |= 2u;
  v3 = 256;
  v4 = a2 | 0x100;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v5 = v4 | 0x500;
  if ( (v4 & 2) == 0 )
    v5 = v4;
  v6 = v5 | 0x700;
  if ( (v5 & 4) == 0 )
    v6 = v5;
  if ( (v6 & 0x200) != 0 )
  {
    v7 = 16;
  }
  else if ( (v6 & 0x400) != 0 )
  {
    v7 = 8;
  }
  else
  {
    v7 = 2;
    if ( (v6 & 0x100) != 0 )
      v7 = 4;
  }
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    if ( a1 )
    {
      v8 = a1 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( !v9 )
          goto LABEL_30;
        if ( v9 == 1 )
        {
          v3 = 4096;
          goto LABEL_30;
        }
        goto LABEL_24;
      }
LABEL_23:
      v3 = 32;
      goto LABEL_30;
    }
LABEL_24:
    v3 = 16;
    goto LABEL_30;
  }
  if ( !a1 )
    goto LABEL_29;
  v10 = a1 - 1;
  if ( !v10 )
    goto LABEL_24;
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_23;
  v3 = 4096;
  if ( v11 != 1 )
LABEL_29:
    v3 = 4;
LABEL_30:
  v12 = v6 | 0x1000;
  if ( (v6 & 2) == 0 )
    v12 = v6;
  v13 = v3 * (unsigned int)v7;
  v14 = (unsigned int)v13;
  Pool2 = ExAllocatePool2(64LL, v13 + 32, 1818575950LL);
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_OWORD *)Pool2 = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 16));
  *(_WORD *)(Pool2 + 24) = v12;
  *(_WORD *)(Pool2 + 26) = v7;
  *(_DWORD *)(Pool2 + 12) = v3;
  *(_DWORD *)(Pool2 + 8) = -1;
  if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(Pool2 + 28) = v14 + 32;
  *(_QWORD *)Pool2 = MEMORY[0xFFFFF78000000014];
  if ( (v12 & 2) != 0 )
    memset((void *)(Pool2 + 32), 0, v14);
  return Pool2;
}
