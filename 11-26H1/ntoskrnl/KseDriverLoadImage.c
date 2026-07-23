/*
 * XREFs of KseDriverLoadImage @ 0x140A38A18
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x140600ACC (KsepEvntLogShimsApplied.c)
 *     KsepApplyShimsToDriver @ 0x1407C091C (KsepApplyShimsToDriver.c)
 *     KsepGetShimsForDriver @ 0x140A3865C (KsepGetShimsForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x140A38BC4 (KsepStringDuplicateUnicode.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  int ShimsForDriver; // eax
  __int64 v8; // rdx
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  void *v11; // [rsp+48h] [rbp-8h]
  unsigned int v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = 0;
  v13 = 0LL;
  v4 = 0;
  v9 = 0uLL;
  v10 = 0LL;
  v11 = 0LL;
  *a2 = 0;
  if ( !a1 || dword_140E66D14 != 2 || (KseEngine & 1) != 0 )
    goto LABEL_3;
  v5 = KsepStringDuplicateUnicode(&v9, a1 + 88);
  if ( v5 >= 0 )
  {
    v5 = KsepStringDuplicateUnicode(&v10, a1 + 72);
    if ( v5 >= 0 )
    {
      ShimsForDriver = KsepGetShimsForDriver(
                         (__int64)&v9,
                         (__int64)&v10,
                         *(_QWORD *)(a1 + 48),
                         *(_DWORD *)(a1 + 64),
                         &v13,
                         &v12);
      v4 = v12;
      v5 = ShimsForDriver;
      if ( ShimsForDriver >= 0 )
      {
        v5 = KsepApplyShimsToDriver(a1, (__int64)&v9, v13, v12);
        if ( v5 >= 0 )
        {
          v8 = v13;
          *a2 = 1;
          KsepEvntLogShimsApplied((unsigned __int16 *)&v9, v8, v4);
        }
      }
    }
  }
  if ( !v5 )
  {
    dword_140E66D18 |= 0x800u;
    stru_140E66D40.InitialStack = *(void **)(a1 + 48);
    goto LABEL_15;
  }
  if ( v5 >= 0 )
  {
LABEL_15:
    *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                      * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                             &KsepHistoryMessagesIndex,
                                                                             1u)
                                                        + 1) & 0x3F)] = 458946LL;
    if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
      KsepDebugPrint(4LL, (int)"KSE: Applied %d shim(s) to [%ws].\n", v4, *((_QWORD *)&v9 + 1));
    KsepLogInfo(4LL, (__int64)"KSE: Applied %d shim(s) to [%ws].\n", v4, *((_QWORD *)&v9 + 1));
    goto LABEL_4;
  }
  if ( v5 != -1073740948 )
  {
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                    * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                           &KsepHistoryMessagesIndex,
                                                                           1u)
                                                      + 1) & 0x3F)] = 458937LL;
  if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
    KsepDebugPrint(4LL, (int)"KSE: driver blocked from loading [%ws].\n", *((_QWORD *)&v9 + 1));
  KsepLogInfo(4LL, (__int64)"KSE: driver blocked from loading [%ws].\n", *((_QWORD *)&v9 + 1));
LABEL_4:
  if ( *((_QWORD *)&v9 + 1) )
  {
    KsepPoolFreePaged(*((void **)&v9 + 1));
    v9 = 0LL;
  }
  if ( v11 )
    KsepPoolFreePaged(v11);
  return (unsigned int)v5;
}
