/*
 * XREFs of TtmNotifySessionPowerRequestDeleted @ 0x1407E643C
 * Callers:
 *     PopPowerRequestDelete @ 0x140AD6100 (PopPowerRequestDelete.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiLogSessionPowerRequestDeleted @ 0x1407EA870 (TtmiLogSessionPowerRequestDeleted.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmNotifySessionPowerRequestDeleted(unsigned int a1, int a2)
{
  unsigned __int64 v2; // rbp
  int v4; // eax
  _QWORD *i; // r8
  __int64 v6; // rbx
  __int64 v7; // r9
  char v8; // di
  int v9; // r8d
  _QWORD *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v11 = 0LL;
  v4 = TtmpAcquireSessionById(&v11, a1);
  v6 = v11;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(v11 + 272) )
    {
      v7 = -1LL << (*(_DWORD *)(v11 + 276) & 0x1F);
      v8 = 1;
      v9 = (*(_DWORD *)(v11 + 276) >> 5) - 1;
      v11 = v7 & v2;
      for ( i = (_QWORD *)(*(_QWORD *)(v6 + 280)
                         + 8
                         * (v9 & (((v7 & v2) >> 56)
                                - 877075889
                                + 442596621 * (unsigned __int8)(v7 & v2)
                                + 37
                                * ((unsigned __int8)((v7 & v2) >> 48)
                                 + 37
                                 * ((unsigned __int8)((unsigned __int16)((v7 & v2) >> 32) >> 8)
                                  + 37
                                  * ((unsigned __int8)((v7 & v2) >> 32)
                                   + 37
                                   * ((((unsigned int)v7 & (unsigned int)v2) >> 24)
                                    + 37
                                    * ((unsigned __int8)(((unsigned int)v7 & (unsigned int)v2) >> 16)
                                     + 37 * (unsigned __int8)((unsigned __int16)(v7 & v2) >> 8))))))))); ; i = (_QWORD *)*i )
      {
        v10 = (_QWORD *)*i;
        if ( (*i & 1) != 0 )
          break;
        if ( (v7 & v10[1]) == (v7 & v2) )
        {
          *i = *v10;
          --*(_DWORD *)(v6 + 272);
          *v10 |= 0x8000000000000002uLL;
          if ( !v10 )
            break;
          ExFreePoolWithTag(v10, 0x52507454u);
          goto LABEL_11;
        }
      }
    }
    v8 = 0;
LABEL_11:
    LOBYTE(i) = v8;
    TtmiLogSessionPowerRequestDeleted(a1, (unsigned int)v2, i);
  }
  else
  {
    TtmiLogError("TtmNotifySessionPowerRequestDeleted", 3623LL, (unsigned int)v4, -1LL);
  }
  if ( v6 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
}
