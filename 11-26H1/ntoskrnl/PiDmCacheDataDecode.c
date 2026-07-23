/*
 * XREFs of PiDmCacheDataDecode @ 0x140962C40
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140B16780 (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ScanHexFormat @ 0x140962AB0 (ScanHexFormat.c)
 */

__int64 __fastcall PiDmCacheDataDecode(_DWORD *a1, _DWORD *a2, _BYTE *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v7; // ebx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v13; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-38h] BYREF
  __int128 v21; // [rsp+80h] [rbp-28h] BYREF

  v7 = 0;
  v9 = *a1;
  DestinationString = 0LL;
  if ( v9 != 6 )
  {
    v15 = v9 - 2;
    if ( !v15 )
      return (unsigned int)-1073741275;
    v16 = v15 - 1;
    if ( !v16 )
    {
      *a2 = a1[2];
      v19 = a1[3];
      *a5 = v19;
      if ( a4 >= v19 )
      {
        memmove(a3, a1 + 4, v19);
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      *a2 = 13;
      *a5 = 16;
      if ( a4 >= 0x10 )
      {
        *(_OWORD *)a3 = *(_OWORD *)(a1 + 2);
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    if ( v17 == 1 )
    {
      *a2 = a1[2];
      v18 = a1[3];
      *a5 = v18;
      if ( a4 >= v18 )
      {
        memmove(a3, *((const void **)a1 + 2), v18);
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741595;
  }
  v10 = a1[2];
  if ( v10 == 18 )
  {
    *a2 = 18;
    v11 = -1LL;
    while ( *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 2 * v11++ + 2) != 0 )
      ;
    v13 = 2 * v11 + 2;
    *a5 = v13;
    if ( a4 >= v13 )
    {
      memmove(a3, *(const void **)(*((_QWORD *)a1 + 2) + 16LL), v13);
      return v7;
    }
    return (unsigned int)-1073741789;
  }
  if ( v10 != 13 )
    return (unsigned int)-1073741595;
  *a2 = 13;
  *a5 = 16;
  if ( a4 < 0x10 )
    return (unsigned int)-1073741789;
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(*((_QWORD *)a1 + 2) + 16LL));
  v21 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       DestinationString.Buffer,
                       DestinationString.Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       a3,
                       a3 + 4,
                       a3 + 6,
                       &v21,
                       (char *)&v21 + 2,
                       (char *)&v21 + 4,
                       (char *)&v21 + 6,
                       (char *)&v21 + 8,
                       (char *)&v21 + 10,
                       (char *)&v21 + 12,
                       (char *)&v21 + 14) == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    a3[8] = v21;
    a3[9] = BYTE2(v21);
    a3[10] = BYTE4(v21);
    a3[11] = BYTE6(v21);
    a3[12] = BYTE8(v21);
    a3[13] = BYTE10(v21);
    a3[14] = BYTE12(v21);
    a3[15] = BYTE14(v21);
  }
  return v7;
}
