/*
 * XREFs of ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x14033B3AC
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14033B030 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     <none>
 */

const union _LARGE_INTEGER *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+38h] [rbp-11h]
  const WCHAR *v6; // [rsp+40h] [rbp-9h]
  __int64 *v7; // [rsp+48h] [rbp-1h]
  int v8; // [rsp+50h] [rbp+7h]
  __int64 v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+60h] [rbp+17h]
  __int128 v11; // [rsp+68h] [rbp+1Fh]
  __int128 v12; // [rsp+78h] [rbp+2Fh]
  __int128 v13; // [rsp+88h] [rbp+3Fh]
  __int64 v14; // [rsp+98h] [rbp+4Fh]
  __int64 v15; // [rsp+B0h] [rbp+67h] BYREF

  v1 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v2 = *((_QWORD *)this + 8);
    v6 = L"Timestamp";
    v15 = 4294967288LL;
    v7 = &v15;
    v14 = 0LL;
    v4 = 0LL;
    v5 = 292;
    v8 = 184549376;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    if ( (int)RtlQueryRegistryValuesEx(0x40000000LL, v2, &v4, 0LL, 0LL) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1114;
    }
    else
    {
      *v1 = v15;
    }
  }
  return (const union _LARGE_INTEGER *)v1;
}
