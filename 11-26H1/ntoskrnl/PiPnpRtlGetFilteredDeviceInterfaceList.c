/*
 * XREFs of PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140963508
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1409636A4 (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiDmGetObjectList @ 0x140AAEBFC (PiDmGetObjectList.c)
 */

NTSTATUS __fastcall PiPnpRtlGetFilteredDeviceInterfaceList(__int64 a1)
{
  bool v2; // zf
  const WCHAR *v3; // rdx
  char v4; // cl
  NTSTATUS result; // eax
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // [rsp+28h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+50h] [rbp+7h]
  __int128 v11; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  v2 = (*(_BYTE *)(a1 + 32) & 1) == 0;
  v12 = 0LL;
  v3 = *(const WCHAR **)(a1 + 16);
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  if ( !v2 )
    v4 = 1;
  v2 = *(_QWORD *)(a1 + 24) == 0LL;
  *((_QWORD *)&v12 + 1) = *(_QWORD *)(a1 + 40);
  v13 = *(_QWORD *)(a1 + 48);
  Guid = 0LL;
  LOBYTE(v12) = v4;
  v11 = 0LL;
  DestinationString = 0LL;
  if ( v2 )
  {
    v6 = *(_DWORD *)(a1 + 64);
    v7 = *(_QWORD *)(a1 + 56);
    if ( v3 )
    {
      return PiDmGetCmObjectConstraintListFromCache(
               0,
               (_DWORD)v3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)&v11,
               v7,
               v6,
               *(_QWORD *)(a1 + 72));
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)&DestinationString.Length = PiPnpRtlInterfaceFilterCallback;
      DestinationString.Buffer = (wchar_t *)&v11;
      v10 = 3LL;
      return PiDmGetObjectList(3, (unsigned int)PiDmCmObjectMatchCallback, (unsigned int)&DestinationString, v7, v6, v8);
    }
  }
  else
  {
    if ( !v3 )
      return PiDmGetCmObjectConstraintListFromCache(
               1,
               *(_QWORD *)(a1 + 24),
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)&v11,
               *(_QWORD *)(a1 + 56),
               *(_DWORD *)(a1 + 64),
               *(_QWORD *)(a1 + 72));
    result = RtlInitUnicodeStringEx(&DestinationString, v3);
    if ( result >= 0 )
    {
      result = RtlGUIDFromString(&DestinationString, &Guid);
      if ( result >= 0 )
      {
        *(_QWORD *)&v11 = &Guid;
        return PiDmGetCmObjectConstraintListFromCache(
                 1,
                 *(_QWORD *)(a1 + 24),
                 (unsigned int)PiPnpRtlInterfaceFilterCallback,
                 (unsigned int)&v11,
                 *(_QWORD *)(a1 + 56),
                 *(_DWORD *)(a1 + 64),
                 *(_QWORD *)(a1 + 72));
      }
    }
  }
  return result;
}
