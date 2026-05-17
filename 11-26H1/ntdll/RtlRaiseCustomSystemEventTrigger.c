/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1801493F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     TpPostWork @ 0x180067FB0 (TpPostWork.c)
 *     RtlGUIDFromString @ 0x1800C29A0 (RtlGUIDFromString.c)
 *     RtlpCtContextFree @ 0x18014964C (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x18014969C (RtlpCtContextInit.c)
 *     ZwQueryWnfStateData @ 0x180161D50 (ZwQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x180161D70 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x180162B70 (ZwUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  int updated; // ebx
  __int64 Atom; // rdi
  _PEB_LDR_DATA *v3; // rdx
  __int64 v4; // r8
  int v6; // [rsp+48h] [rbp-9h] BYREF
  int v7; // [rsp+4Ch] [rbp-5h] BYREF
  unsigned int v8; // [rsp+50h] [rbp-1h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v11; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v12; // [rsp+78h] [rbp+27h] BYREF

  v11 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  DestinationString = 0LL;
  v12 = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
    updated = RtlGUIDFromString(&DestinationString.Length, &v12);
    if ( updated < 0 )
      return (unsigned int)updated;
    if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      return (unsigned int)-1073741823;
    v6 = 4096;
    Atom = RtlpAllocateAtom(4096LL);
    if ( Atom )
    {
      updated = ZwQueryWnfStateData(&v11, 0LL, 0LL, &v8, Atom, &v6);
      if ( updated >= 0 )
      {
        updated = NtQueryWnfStateNameInformation(&v11, 2LL, 0LL, &v7, 4);
        if ( updated >= 0 )
        {
          if ( v7 )
          {
            updated = NtQueryWnfStateNameInformation(&v11, 1LL, 0LL, &v7, 4);
            if ( updated >= 0 )
            {
              if ( v7 )
              {
                v6 = 4096;
                if ( Atom == -8 )
                {
                  updated = -1073741811;
                }
                else
                {
                  *(_OWORD *)(Atom + 8) = 0LL;
                  *(_OWORD *)(Atom + 24) = v12;
                  *(_DWORD *)(Atom + 40) = 16;
                  v6 = 36;
                  *(_DWORD *)Atom = 0;
                  *(_DWORD *)(Atom + 4) = -1;
                  *(_DWORD *)Atom = 4 * (v6 & 0xFFF | 0x100000);
                  updated = RtlpCtContextInit(&v9, v8);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&v11, Atom, (unsigned int)(v6 + 8), 0LL, 0LL, v8, 1);
                    if ( updated >= 0 )
                    {
                      TpPostWork(*v9, v3, v4);
                      goto LABEL_23;
                    }
                  }
                  if ( v9 )
                    RtlpCtContextFree();
                }
              }
              else
              {
                updated = -1073741653;
              }
            }
          }
          else
          {
            updated = -1073741823;
          }
        }
      }
    }
    else
    {
      updated = -1073741670;
    }
    _InterlockedExchange(&RtlpCtPublishInProgress, 0);
    if ( !Atom )
      return (unsigned int)updated;
LABEL_23:
    RtlpSysVolFree(Atom);
    return (unsigned int)updated;
  }
  return (unsigned int)-1073741811;
}
