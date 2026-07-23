/*
 * XREFs of CmFcManagerFlushFeatureUsage @ 0x140B3625C
 * Callers:
 *     RtlFlushFeatureUsage @ 0x140806B50 (RtlFlushFeatureUsage.c)
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x140B36148 (CmFcManagerUnregisterFeatureUsageProvider.c)
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 *     CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement @ 0x140B3633C (CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement.c)
 */

void __fastcall CmFcManagerFlushFeatureUsage(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  volatile signed __int32 *v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // esi
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  v3 = dword_140EFBFF8;
  if ( a3 )
  {
    v6 = (volatile signed __int32 *)(a3 + 100);
    v7 = *(_DWORD *)(a3 + 100);
    v8 = v7 >> 2;
    LOBYTE(v8) = (v7 & 4) != 0;
    LOBYTE(a1) = v7 & 1;
    v9 = CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(a1, v8);
    if ( v9 >= 2 )
    {
      _InterlockedOr(v6, 2u);
      _InterlockedOr(&dword_140EFBFF8, 8u);
      CmpWorkItemQueueWork(&stru_140EFBF38);
    }
    if ( (a2 & 1) != 0 && v9 )
    {
      v10 = v7 >> 2;
      while ( 1 )
      {
        LODWORD(v15) = *(_DWORD *)(a3 + 100);
        if ( ((((unsigned int)v15 >> 2) - v10) & 0x3FFFFFFF) >= v9 )
          break;
        ExBlockOnAddressPushLock((signed __int64 *)(a3 + 104), v6, &v15, 4LL, 0LL);
      }
    }
  }
  else
  {
    v11 = (unsigned int)dword_140EFBFF8 >> 5;
    LOBYTE(a1) = dword_140EFBFF8 & 1;
    LOBYTE(v11) = (dword_140EFBFF8 & 0x20) != 0;
    v12 = CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(a1, v11);
    if ( v12 >= 2 )
    {
      _InterlockedOr(&dword_140EFBFF8, 0x10u);
      CmpWorkItemQueueWork(&stru_140EFBF38);
    }
    if ( (a2 & 2) != 0 && byte_140EFC020 )
    {
      v13 = (v12 + (v3 >> 5)) & 0x7FFFFFF;
      while ( 1 )
      {
        LODWORD(v15) = dword_140EFBFFC[0];
        if ( ((dword_140EFBFFC[0] - v13) & 0x7FFFFFFu) < 0x4000000 )
          break;
        ExBlockOnAddressPushLock(&qword_140EFBE98, dword_140EFBFFC, &v15, 4LL, 0LL);
      }
    }
    else if ( (a2 & 1) != 0 && v12 )
    {
      v14 = v3 >> 5;
      while ( 1 )
      {
        LODWORD(v15) = dword_140EFBFF8;
        if ( ((((unsigned int)dword_140EFBFF8 >> 5) - v14) & 0x7FFFFFF) >= v12 )
          break;
        ExBlockOnAddressPushLock((signed __int64 *)&xmmword_140EFBE88 + 1, &dword_140EFBFF8, &v15, 4LL, 0LL);
      }
    }
  }
}
