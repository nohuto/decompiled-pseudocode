/*
 * XREFs of PiPnpRtlGetFilteredDeviceList @ 0x140AAE7D8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1409636A4 (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiDmGetObjectList @ 0x140AAEBFC (PiDmGetObjectList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGetFilteredDeviceList(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdx
  bool v4; // cf
  char v5; // al
  NTSTATUS inited; // ebx
  __int64 v9; // r9
  char v10; // al
  const wchar_t *v11; // rax
  int v12; // ebx
  __int64 Pool2; // rax
  const WCHAR *v14; // rsi
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  _WORD *v18; // rcx
  __int64 v19; // r10
  __int16 v20; // ax
  _WORD *v21; // rax
  __int64 v22; // rcx
  WCHAR *v23; // rax
  ULONG v24; // edx
  WCHAR *v25; // rcx
  wchar_t *v26; // rax
  __int64 v27; // r9
  char v28; // al
  const WCHAR *v29; // rdx
  __int64 v30; // r9
  char v31; // al
  NTSTATUS ObjectList; // eax
  int v33; // [rsp+28h] [rbp-59h]
  __int64 v34; // [rsp+30h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  void *v36; // [rsp+58h] [rbp-29h] BYREF
  UNICODE_STRING **p_p_DestinationString; // [rsp+60h] [rbp-21h]
  __int64 v38; // [rsp+68h] [rbp-19h]
  __int128 v39; // [rsp+70h] [rbp-11h] BYREF
  __int128 v40; // [rsp+80h] [rbp-1h]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp+Fh] BYREF
  char v42; // [rsp+98h] [rbp+17h]
  int v43; // [rsp+99h] [rbp+18h]
  __int16 v44; // [rsp+9Dh] [rbp+1Ch]
  char v45; // [rsp+9Fh] [rbp+1Eh]
  WCHAR *v46; // [rsp+A0h] [rbp+1Fh]
  __int64 v47; // [rsp+A8h] [rbp+27h]
  __int64 v48; // [rsp+B0h] [rbp+2Fh]
  __int64 v49; // [rsp+B8h] [rbp+37h]

  v1 = *(_DWORD *)(a1 + 24);
  v43 = 0;
  v44 = 0;
  v45 = 0;
  HIDWORD(v47) = 0;
  v39 = 0LL;
  v40 = 0LL;
  DestinationString = 0LL;
  if ( (v1 & 0x7C) != 0 )
    return (unsigned int)-1073741802;
  if ( (v1 & 1) != 0 )
  {
    v11 = *(const wchar_t **)(a1 + 16);
    if ( !v11 )
      return (unsigned int)-1073741811;
    v12 = 0;
    while ( v11 )
    {
      if ( !*v11 )
        return (unsigned int)-1073741811;
      if ( *v11 == 92 )
        return (unsigned int)-1073741811;
      if ( (unsigned int)++v12 > 2 )
        return (unsigned int)-1073741811;
      v26 = wcschr(v11, 0x5Cu);
      if ( !v26 )
        break;
      v11 = v26 + 1;
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    v14 = (const WCHAR *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v15 = 200LL;
    v16 = 200LL;
    v17 = *(_QWORD *)(a1 + 16) - Pool2;
    v18 = (_WORD *)Pool2;
    v19 = 0LL;
    do
    {
      if ( v16 == -2147483446 )
        break;
      v20 = *(_WORD *)((char *)v18 + v17);
      if ( !v20 )
        break;
      *v18 = v20;
      ++v19;
      ++v18;
      --v16;
    }
    while ( v16 );
    v21 = v18 - 1;
    if ( v16 )
      v21 = v18;
    v22 = v19 - 1;
    if ( v16 )
      v22 = v19;
    *v21 = 0;
    v23 = (WCHAR *)&v14[v22];
    inited = v16 == 0 ? 0x80000005 : 0;
    if ( v16 )
    {
      v15 = 200 - v22;
    }
    else
    {
      *v14 = 0;
      v23 = (WCHAR *)v14;
    }
    if ( v16 )
    {
      if ( v15 < 2 )
      {
        inited = -1073741811;
      }
      else
      {
        *(_DWORD *)v23 = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, v14);
        if ( inited >= 0 )
        {
          v27 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)&v39 = &DestinationString;
          v28 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
          v38 = 1LL;
          BYTE8(v39) = v28;
          v40 = *(_OWORD *)(a1 + 32);
          v36 = PiPnpRtlEnumeratorFilterCallback;
          p_p_DestinationString = (UNICODE_STRING **)&v39;
          inited = PiDmGetObjectList(
                     1,
                     (unsigned int)PiDmCmObjectMatchCallback,
                     (unsigned int)&v36,
                     v27,
                     *(_DWORD *)(a1 + 56),
                     *(_QWORD *)(a1 + 64));
        }
      }
    }
    v24 = 1198550608;
    v25 = (WCHAR *)v14;
LABEL_30:
    ExFreePoolWithTag(v25, v24);
    return (unsigned int)inited;
  }
  if ( (v1 & 2) == 0 )
  {
    if ( (v1 & 0x80u) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 48);
      v4 = (v1 & 0x100) != 0;
      v38 = 1LL;
      v10 = BYTE8(v39);
      if ( v4 )
        v10 = 1;
      BYTE8(v39) = v10;
      v40 = *(_OWORD *)(a1 + 32);
      v36 = PiPnpRtlEnumeratorFilterCallback;
      p_p_DestinationString = (UNICODE_STRING **)&v39;
      return (unsigned int)PiDmGetObjectList(
                             1,
                             (unsigned int)PiDmCmObjectMatchCallback,
                             (unsigned int)&v36,
                             v9,
                             *(_DWORD *)(a1 + 56),
                             *(_QWORD *)(a1 + 64));
    }
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = (v1 & 0x100) != 0;
      v5 = BYTE8(v39);
      if ( v4 )
        v5 = 1;
      BYTE8(v39) = v5;
      v40 = *(_OWORD *)(a1 + 32);
      return (unsigned int)PiDmGetCmObjectConstraintListFromCache(
                             4u,
                             v3,
                             (__int64)PiPnpRtlEnumeratorFilterCallback,
                             (__int64)&v39,
                             *(_WORD **)(a1 + 48),
                             *(_DWORD *)(a1 + 56),
                             *(_DWORD **)(a1 + 64));
    }
    return (unsigned int)-1073741811;
  }
  v29 = *(const WCHAR **)(a1 + 16);
  if ( !v29 )
    return (unsigned int)-1073741811;
  inited = RtlInitUnicodeStringEx(&DestinationString, v29);
  if ( inited >= 0 )
  {
    v30 = *(_QWORD *)(a1 + 48);
    p_DestinationString = &DestinationString;
    v31 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
    v43 = 0;
    v42 = v31;
    v48 = *(_QWORD *)(a1 + 32);
    v49 = *(_QWORD *)(a1 + 40);
    v36 = PiPnpRtlServiceFilterCallback;
    p_p_DestinationString = &p_DestinationString;
    v34 = *(_QWORD *)(a1 + 64);
    v33 = *(_DWORD *)(a1 + 56);
    v44 = 0;
    v45 = 0;
    v47 = 0LL;
    v46 = 0LL;
    v38 = 1LL;
    ObjectList = PiDmGetObjectList(1, (unsigned int)PiDmCmObjectMatchCallback, (unsigned int)&v36, v30, v33, v34);
    v25 = v46;
    inited = ObjectList;
    if ( v46 )
    {
      v24 = 0;
      goto LABEL_30;
    }
  }
  return (unsigned int)inited;
}
