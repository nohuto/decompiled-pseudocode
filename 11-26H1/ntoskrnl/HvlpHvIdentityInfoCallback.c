/*
 * XREFs of HvlpHvIdentityInfoCallback @ 0x1405BB9E0
 * Callers:
 *     <none>
 * Callees:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404DF8B8 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorInterface @ 0x1406E0A18 (HviGetHypervisorInterface.c)
 *     HviGetHypervisorVersion @ 0x1406E0A60 (HviGetHypervisorVersion.c)
 */

void __fastcall HvlpHvIdentityInfoCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v4; // rax
  _DWORD *v6; // rbx
  _DWORD *v7; // rcx

  v4 = ReasonSpecificData[4];
  *((_OWORD *)ReasonSpecificData + 1) = HvlpSecondaryDumpDataGuid;
  if ( v4 )
  {
    if ( *((_DWORD *)ReasonSpecificData + 2) < 0x44u )
    {
      ReasonSpecificData[4] = *ReasonSpecificData;
      *((_DWORD *)ReasonSpecificData + 10) = 0;
    }
    else
    {
      v6 = (_DWORD *)*ReasonSpecificData;
      v7 = (_DWORD *)(*ReasonSpecificData + 8LL);
      *v6 = 1213614404;
      v6[1] = 68;
      HviGetHypervisorVendorAndMaxFunction(v7);
      HviGetHypervisorInterface(v6 + 6);
      HviGetHypervisorVersion(v6 + 10);
      v6[14] = HvlpFlags;
      v6[15] = HvlpRootFlags;
      v6[16] = HvlpEnlightenments;
      ReasonSpecificData[4] = v6;
      *((_DWORD *)ReasonSpecificData + 10) = 68;
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = 68;
  }
}
