/*
 * XREFs of ndisMapOpenByName @ 0x1400A5E78
 * Callers:
 *     ndisHandleProtocolReconfigNotification @ 0x140174EC4 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x14003FCD0 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 */

__int64 __fastcall ndisMapOpenByName(PCUNICODE_STRING SourceString, __int64 a2)
{
  __int64 v2; // rdi
  int v5; // edx
  KIRQL v7; // al
  __int64 v8; // rbx
  KIRQL v9; // r14
  int v10; // edx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6u,
      0xAu,
      (struct _GUID *)&WPP_a6906b87f958369cb2c210602346859b_Traceguids,
      &SourceString->Length,
      a2);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(
                                          66LL,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          1953711182LL);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 32));
    v8 = *(_QWORD *)(a2 + 24);
    v9 = v7;
    while ( v8 )
    {
      if ( ndisEqualUnicodeStringDispatchLevel(&DestinationString, *(const struct _UNICODE_STRING **)(v8 + 416)) )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 232));
        if ( (*(_DWORD *)(v8 + 224) & 0x10) == 0
          && (unsigned __int8)ndisReferenceMiniport(*(struct _NDIS_MINIPORT_BLOCK **)(v8 + 16), 0x34u) )
        {
          v2 = v8;
          ndisMReferenceOpen(v8, 4u);
          *(_DWORD *)(v8 + 224) |= 0x10u;
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 232));
        break;
      }
      v8 = *(_QWORD *)(v8 + 400);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 32), v9);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        6,
        12,
        (struct _GUID *)&WPP_a6906b87f958369cb2c210602346859b_Traceguids,
        v2);
    }
    return v2;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        6,
        11,
        (struct _GUID *)&WPP_a6906b87f958369cb2c210602346859b_Traceguids);
    }
    return 0LL;
  }
}
