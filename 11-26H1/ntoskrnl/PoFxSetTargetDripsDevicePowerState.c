/*
 * XREFs of PoFxSetTargetDripsDevicePowerState @ 0x140B0F450
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopFxTryReferenceDevice @ 0x14021B7B8 (PopFxTryReferenceDevice.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1404DE814 (PopPepGetMinimumDevicePowerState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoFxSetTargetDripsDevicePowerState(__int64 a1, int a2)
{
  char v4; // r15
  int v6; // ebx
  __int64 v7; // rcx
  __int64 Pool2; // rax
  unsigned __int16 *v10; // r8
  int v11; // [rsp+30h] [rbp-69h] BYREF
  int v12; // [rsp+34h] [rbp-65h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v15; // [rsp+70h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-21h]
  __int64 v17; // [rsp+80h] [rbp-19h]
  _DWORD v18[2]; // [rsp+88h] [rbp-11h] BYREF
  int *v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  int *v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+B0h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+1Fh]

  v11 = 0;
  v12 = 0;
  DestinationString = 0LL;
  if ( !dword_140E676DC )
  {
    v6 = -1073741637;
    goto LABEL_18;
  }
  if ( a2 == 1 || a2 > 4 )
    goto LABEL_19;
  v4 = dword_140E27240;
  if ( dword_140E27240 == -1 )
  {
    v6 = -1073741823;
    goto LABEL_18;
  }
  if ( !a1 )
  {
LABEL_19:
    v6 = -1073741811;
    goto LABEL_18;
  }
  v6 = PopFxTryReferenceDevice(a1, 2);
  if ( v6 >= 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 864), 0, 0) & 0x10) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 56);
      if ( v7 )
      {
        if ( PopPepGetMinimumDevicePowerState(v7, v4, 1, &v11, &v12) )
        {
          if ( !a2 && v11 == v12 || a2 == v11 )
          {
            v6 = 0;
LABEL_15:
            PopFxDereferenceDevice(a1, 2);
            if ( v6 >= 0 )
              return (unsigned int)v6;
            goto LABEL_18;
          }
          if ( v12 <= 1 || !a2 || a2 > v12 )
          {
            Pool2 = ExAllocatePool2(0x40uLL);
            if ( Pool2 )
            {
              *(_QWORD *)(Pool2 + 8) = Pool2;
              *(_QWORD *)Pool2 = Pool2;
              *(_QWORD *)(Pool2 + 16) = a1;
              *(_DWORD *)(Pool2 + 24) = a2;
              *(_QWORD *)(Pool2 + 48) = PopFxUpdateVetoMaskWork;
              *(_QWORD *)(Pool2 + 56) = Pool2;
              *(_QWORD *)(Pool2 + 32) = 0LL;
              ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 32), DelayedWorkQueue);
              return (unsigned int)v6;
            }
            v6 = -1073741670;
            goto LABEL_15;
          }
        }
      }
    }
    v6 = -1073741823;
    goto LABEL_15;
  }
LABEL_18:
  RtlInitUnicodeString(&DestinationString, &word_140B8A320);
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v16 = 2LL;
    v15 = v18;
    v17 = *((_QWORD *)v10 + 1);
    v18[0] = *v10;
    v19 = &v12;
    v21 = &v11;
    p_DestinationString = &DestinationString;
    v18[1] = 0;
    v12 = a2;
    v20 = 4LL;
    v11 = v6;
    v22 = 4LL;
    *(_QWORD *)&DestinationString.Length = 0x1000000LL;
    v24 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004A13D, 0LL, 0LL, 7u, &v14);
  }
  return (unsigned int)v6;
}
