/*
 * XREFs of _PnpGetObjectPropertyWorker @ 0x14095CB50
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14095B974 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14095D088 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14095DDC0 (PiPnpRtlInterfaceFilterCallback.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        const wchar_t *a8,
        int a9,
        _DWORD *a10,
        int a11)
{
  __int64 v11; // r15
  const wchar_t *v12; // r13
  int v13; // esi
  __int64 v14; // rdi
  int v15; // r8d
  int v16; // ebx
  _WORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  wchar_t *v21; // rax
  wchar_t *Pool2; // rbx
  unsigned int v23; // edi
  __int64 v24; // rsi
  int v25; // edi
  __int64 v26; // rax
  ULONG *v27; // rsi
  int v28; // eax
  int v29; // [rsp+ACh] [rbp-64h]
  HANDLE v30; // [rsp+B8h] [rbp-58h] BYREF
  char *v31; // [rsp+C0h] [rbp-50h]
  __int64 v32; // [rsp+C8h] [rbp-48h]
  HANDLE Handle; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-38h]
  wchar_t pszDest[4]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-28h]
  __int64 v37; // [rsp+F0h] [rbp-20h]
  _DWORD *v38; // [rsp+F8h] [rbp-18h]
  const wchar_t *v39; // [rsp+100h] [rbp-10h]
  int v40; // [rsp+108h] [rbp-8h]
  int v41; // [rsp+10Ch] [rbp-4h]
  _DWORD *v42; // [rsp+110h] [rbp+0h]
  int v43; // [rsp+118h] [rbp+8h]
  int v44; // [rsp+11Ch] [rbp+Ch]
  wchar_t P[64]; // [rsp+140h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = a8;
  v13 = a2;
  v31 = a4;
  v32 = a1;
  v34 = a5;
  v14 = a3;
  Handle = 0LL;
  if ( (_WORD)a11 )
    return 3221225485LL;
  if ( a8 )
  {
    v15 = a9;
    v29 = a9;
    if ( !a9 )
      v12 = 0LL;
  }
  else
  {
    v15 = 0;
    v29 = 0;
  }
  *a7 = 0;
  *a10 = 0;
  v41 = 0;
  v44 = 0;
  if ( (unsigned int)(v14 - 1) > 0xA )
  {
LABEL_16:
    v16 = -1073741811;
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(a1 + 8 * v14 + 296) )
    return 3221225474LL;
  v43 = a11;
  v36 = a5;
  v38 = a7;
  v40 = v15;
  *(_QWORD *)pszDest = a4;
  v37 = a6;
  v39 = v12;
  v42 = a10;
  v16 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v16 == -1073741802 )
  {
    if ( !v31 )
    {
      v16 = PnpOpenObjectRegKey(v32, v13, v14, 33554433, 0, (__int64)&Handle);
      if ( v16 < 0 )
        goto LABEL_8;
      v31 = (char *)Handle;
    }
    v30 = 0LL;
    *a7 = 0;
    v18 = (_WORD *)v34;
    *a10 = 0;
    if ( v18 )
    {
      v19 = 85LL;
      while ( *v18 )
      {
        ++v18;
        if ( !--v19 )
          goto LABEL_16;
      }
    }
    v16 = RtlStringCchPrintfExW(
            pszDest,
            0x30uLL,
            0LL,
            0LL,
            0x800u,
            L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
            *(_DWORD *)a6,
            *(unsigned __int16 *)(a6 + 4),
            *(unsigned __int16 *)(a6 + 6),
            *(unsigned __int8 *)(a6 + 8),
            *(unsigned __int8 *)(a6 + 9),
            *(unsigned __int8 *)(a6 + 10),
            *(unsigned __int8 *)(a6 + 11),
            *(unsigned __int8 *)(a6 + 12),
            *(unsigned __int8 *)(a6 + 13),
            *(unsigned __int8 *)(a6 + 14),
            *(unsigned __int8 *)(a6 + 15),
            *(_DWORD *)(a6 + 16),
            0);
    if ( v16 < 0 )
      goto LABEL_35;
    v30 = 0LL;
    v20 = 512LL;
    v21 = pszDest;
    while ( *v21 )
    {
      ++v21;
      if ( !--v20 )
      {
        v16 = -1073741811;
        goto LABEL_35;
      }
    }
    if ( (unsigned __int64)(512 - v20) >= 0x30 )
    {
      v23 = 512 - v20 + 12;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        v16 = -1073741801;
        goto LABEL_35;
      }
    }
    else
    {
      Pool2 = P;
      v23 = 59;
    }
    v24 = v32;
    v25 = RtlStringCchPrintfExW(Pool2, v23, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", pszDest);
    if ( v25 >= 0 )
    {
      if ( v32 )
      {
        v26 = *(_QWORD *)(v32 + 224);
        if ( v26 )
          v11 = *(_QWORD *)(v26 + 8);
      }
      v25 = RegRtlOpenKeyTransacted(v31, Pool2, 0, 1u, &v30, v11);
      if ( v25 == -1073741444 )
        v25 = -1073741772;
    }
    if ( Pool2 && Pool2 != P )
      ExFreePoolWithTag(Pool2, 0);
    if ( v25 == -1073741772 )
      goto LABEL_34;
    v16 = v25;
    if ( v25 < 0 )
      goto LABEL_35;
    v28 = guard_dispatch_icall_no_overrides(v24, (__int64)v30);
    if ( v28 == -1073741772 || v28 == -1073741444 )
    {
LABEL_34:
      v16 = -1073741275;
    }
    else
    {
      if ( !v28 || v28 == -1073741789 )
      {
        *a7 = 0;
        v27 = a10;
        *a10 = v29;
        if ( v28 || !v29 )
          v16 = -1073741789;
        goto LABEL_36;
      }
      v16 = v28;
    }
LABEL_35:
    v27 = a10;
LABEL_36:
    if ( v30 )
      ZwClose(v30);
    if ( v16 >= 0 )
      v16 = PnpValidatePropertyData(v12, *v27);
  }
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v16;
}
