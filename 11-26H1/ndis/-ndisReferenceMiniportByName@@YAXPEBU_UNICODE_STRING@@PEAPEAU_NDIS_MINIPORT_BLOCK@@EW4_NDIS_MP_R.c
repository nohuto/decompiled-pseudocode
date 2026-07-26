/*
 * XREFs of ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140176540
 * Callers:
 *     NdisEnumerateFilterModules @ 0x14000B080 (NdisEnumerateFilterModules.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14000B530 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x140019210 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140053270 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009F348 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisHandleBindNotification @ 0x14013BCE4 (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x14013BE50 (ndisHandleLegacyBindIoctl.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x14003FCD0 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_MINIPORT_BLOCK **a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int Number; // ebp
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rdi
  KIRQL i; // r13
  struct _NDIS_MINIPORT_BLOCK *j; // rbx
  int v13; // eax
  _NDIS_BIND_PATHS *BindPaths; // rdx
  int v15; // edx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  Number = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_3046af50312d39676cde585a7c547f92_Traceguids,
      &a1->Length);
  *a2 = 0LL;
  DestinationString.Length = a1->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(
                                          66LL,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          1953711182LL);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, a1, 0);
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v10 = ndisMiniDriverList;
    for ( i = v9; v10; v10 = v10->NextDriver )
    {
      KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
      for ( j = v10->MiniportQueue; j; j = j->NextMiniport )
      {
        v13 = j->PnPFlags & 0x2000000;
        if ( a3 )
        {
          if ( !v13 && ndisEqualUnicodeStringDispatchLevel(&DestinationString, &j->MiniportName) )
            goto LABEL_16;
        }
        else if ( !v13 )
        {
          BindPaths = j->BindPaths;
          if ( BindPaths )
          {
            if ( BindPaths->Number >= Number
              && ndisEqualUnicodeStringDispatchLevel(&DestinationString, BindPaths->Paths) )
            {
              if ( *a2 )
              {
                ndisDereferenceMiniport(*a2, a4);
                *a2 = 0LL;
              }
              Number = j->BindPaths->Number;
LABEL_16:
              if ( (unsigned __int8)ndisReferenceMiniport(j, a4) )
                *a2 = j;
              break;
            }
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&v10->Ref.SpinLock);
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, i);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        13,
        11,
        (struct _GUID *)&WPP_3046af50312d39676cde585a7c547f92_Traceguids,
        (char)*a2);
    }
  }
}
