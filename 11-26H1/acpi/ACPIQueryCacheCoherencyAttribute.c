/*
 * XREFs of ACPIQueryCacheCoherencyAttribute @ 0x1400D3B78
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1400C0080 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIInternalSetFlags @ 0x14003BB9C (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall ACPIQueryCacheCoherencyAttribute(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  signed __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( _bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
    return 0;
  v4 = ACPIInternalSetFlags((void *)(BugCheckParameter2 + 1008), 0x1000000uLL);
  if ( (v4 & v5) != 0 )
    return 0;
  v6 = AMLIGetNamedChild(*(__int64 **)(BugCheckParameter2 + 760), 1094927199);
  if ( !v6 )
  {
    *(_DWORD *)(BugCheckParameter2 + 940) = 1;
    return 0;
  }
  v2 = AMLIEvalNameSpaceObject(v6, (__int64)&v7, 0, 0LL);
  if ( v2 >= 0 )
  {
    if ( WORD1(v7) != 1 )
      KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 760), WORD1(v7));
    if ( (v8 & 1) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 940) = 2;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 940) = 3;
      KeReportCacheIncoherentDevice();
    }
    AMLIFreeDataBuffs((__int64)&v7);
  }
  return (unsigned int)v2;
}
