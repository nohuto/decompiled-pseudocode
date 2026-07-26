/*
 * XREFs of NdisGetProcessorInformationEx @ 0x140090CE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

NDIS_STATUS __stdcall NdisGetProcessorInformationEx(
        NDIS_HANDLE NdisHandle,
        PNDIS_SYSTEM_PROCESSOR_INFO_EX SystemProcessorInfo,
        PSIZE_T Size)
{
  _QWORD *v3; // rbp
  size_t v6; // rbx
  char v8; // dl
  __int64 v9; // rcx
  __int16 *v10; // rdx
  __int64 v11; // r8
  __int16 v12; // r9

  v3 = 0LL;
  v6 = 20 * (ndisMaxNumberOfProcessors + 2LL);
  if ( *Size < v6 )
  {
    *Size = v6;
    return -1073676266;
  }
  if ( NdisHandle )
  {
    v8 = *(_BYTE *)NdisHandle;
    if ( *(_BYTE *)NdisHandle == 17 )
    {
      v3 = NdisHandle;
    }
    else
    {
      if ( (unsigned __int8)(v8 - 2) > 3u && v8 != 18 )
      {
        *Size = v6;
        return -1073741811;
      }
      if ( v8 == 18 )
        v3 = (_QWORD *)*((_QWORD *)NdisHandle + 2);
    }
  }
  memmove(SystemProcessorInfo, ndisSystemProcessorInfo, v6);
  v9 = 0LL;
  if ( SystemProcessorInfo->NumberOfProcessors )
  {
    v10 = (__int16 *)&SystemProcessorInfo[1].NumCores + 1;
    do
    {
      if ( v3 && (v11 = v3[550]) != 0 )
        v12 = *(_WORD *)(v11 + 2 * v9);
      else
        v12 = -1;
      *v10 = v12;
      v9 = (unsigned int)(v9 + 1);
      v10 += 10;
    }
    while ( (unsigned int)v9 < SystemProcessorInfo->NumberOfProcessors );
  }
  *Size = v6;
  return 0;
}
