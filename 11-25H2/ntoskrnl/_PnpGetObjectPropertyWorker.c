/*
 * XREFs of _PnpGetObjectPropertyWorker @ 0x1408CAF60
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE630 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF0FC (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D2170 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D28C0 (PiDqPnPGetObjectProperty.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14042CC40 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C86C0 (_PnpRegQueryValueIndirect.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA500 (_PnpDispatchDeviceInterface.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     _PnpDispatchDevice @ 0x1408CB4B0 (_PnpDispatchDevice.c)
 *     DrvDbDispatchDriverPackage @ 0x1409303A0 (DrvDbDispatchDriverPackage.c)
 *     _PnpValidatePropertyData @ 0x1409548B4 (_PnpValidatePropertyData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        HANDLE a4,
        const WCHAR *a5,
        __int64 a6,
        _DWORD *a7,
        void *a8,
        ULONG a9,
        ULONG *a10,
        int a11)
{
  __int64 v11; // r15
  void *v12; // r12
  ULONG v16; // edx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, int, __int64 *); // rax
  int v18; // eax
  int v19; // ebx
  const WCHAR *v21; // rax
  __int64 v22; // rcx
  wchar_t *v23; // rax
  wchar_t *Pool2; // rbx
  unsigned int v25; // edi
  NTSTATUS v26; // eax
  __int64 v27; // rsi
  int v28; // edi
  __int64 v29; // rax
  ULONG *v30; // rsi
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *); // rax
  ULONG v33; // r14d
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  __int64 v37; // [rsp+90h] [rbp-80h] BYREF
  ULONG *v38; // [rsp+98h] [rbp-78h]
  ULONG v39; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD *v40; // [rsp+A8h] [rbp-68h]
  int v41; // [rsp+B0h] [rbp-60h] BYREF
  ULONG v42; // [rsp+B4h] [rbp-5Ch]
  HANDLE v43; // [rsp+B8h] [rbp-58h] BYREF
  HANDLE v44; // [rsp+C0h] [rbp-50h]
  const WCHAR *v45; // [rsp+C8h] [rbp-48h]
  HANDLE Handle; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-38h]
  wchar_t pszDest[4]; // [rsp+E0h] [rbp-30h] BYREF
  const WCHAR *v49; // [rsp+E8h] [rbp-28h]
  __int64 v50; // [rsp+F0h] [rbp-20h]
  _DWORD *v51; // [rsp+F8h] [rbp-18h]
  void *v52; // [rsp+100h] [rbp-10h]
  ULONG v53; // [rsp+108h] [rbp-8h]
  int v54; // [rsp+10Ch] [rbp-4h]
  ULONG *v55; // [rsp+110h] [rbp+0h]
  int v56; // [rsp+118h] [rbp+8h]
  int v57; // [rsp+11Ch] [rbp+Ch]
  wchar_t P[64]; // [rsp+140h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = a8;
  v44 = a4;
  v47 = a1;
  v40 = a7;
  v38 = a10;
  v45 = a5;
  Handle = 0LL;
  if ( (_WORD)a11 )
    return 3221225485LL;
  if ( a8 )
  {
    v16 = a9;
    if ( !a9 )
      v12 = 0LL;
  }
  else
  {
    v16 = 0;
  }
  *a7 = 0;
  v42 = v16;
  *a10 = 0;
  v54 = 0;
  v57 = 0;
  if ( (unsigned int)(a3 - 1) > 0xA )
  {
LABEL_46:
    v19 = -1073741811;
  }
  else
  {
    v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int, __int64 *))(a1 + 8LL * a3 + 296);
    if ( v17 )
    {
      v56 = a11;
      v51 = a7;
      v53 = v16;
      v55 = a10;
      *(_QWORD *)pszDest = a4;
      v49 = a5;
      v50 = a6;
      v52 = v12;
      if ( (char *)v17 == (char *)PnpDispatchDevice )
      {
        v18 = PnpDispatchDevice(a1, a2, a3, 8, (__int64)pszDest);
      }
      else if ( v17 == PnpDispatchDeviceInterface )
      {
        v18 = PnpDispatchDeviceInterface(a1, a2, (unsigned int)a3, 8, (__int64 *)pszDest);
      }
      else if ( (char *)v17 == (char *)DrvDbDispatchDriverPackage )
      {
        v18 = DrvDbDispatchDriverPackage(a1, a2, a3, 8, (__int64)pszDest);
      }
      else
      {
        v18 = guard_dispatch_icall_no_overrides(a1);
      }
      v19 = v18;
      if ( v18 != -1073741802 )
        goto LABEL_10;
      if ( v44 )
        goto LABEL_16;
      v19 = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
      if ( v19 >= 0 )
      {
        v44 = Handle;
LABEL_16:
        v43 = 0LL;
        v41 = 0;
        v39 = 0;
        *v40 = 0;
        LOBYTE(v37) = 0;
        *v38 = 0;
        v21 = v45;
        if ( v45 )
        {
          v31 = 85LL;
          while ( *v21 )
          {
            ++v21;
            if ( !--v31 )
              goto LABEL_46;
          }
        }
        v19 = RtlStringCchPrintfExW(
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
                v37);
        if ( v19 < 0 )
          goto LABEL_35;
        v43 = 0LL;
        v22 = 512LL;
        v23 = pszDest;
        while ( *v23 )
        {
          ++v23;
          if ( !--v22 )
          {
            v19 = -1073741811;
            goto LABEL_35;
          }
        }
        if ( (unsigned __int64)(512 - v22) >= 0x30 )
        {
          v25 = 512 - v22 + 12;
          Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
          {
            v19 = -1073741801;
            goto LABEL_35;
          }
        }
        else
        {
          Pool2 = P;
          v25 = 59;
        }
        v26 = RtlStringCchPrintfExW(Pool2, v25, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", pszDest);
        v27 = v47;
        v28 = v26;
        if ( v26 >= 0 )
        {
          if ( v47 )
          {
            v29 = *(_QWORD *)(v47 + 224);
            if ( v29 )
              v11 = *(_QWORD *)(v29 + 8);
          }
          v28 = RegRtlOpenKeyTransacted((__int64)v44, Pool2, 0, 1u, &v43, v11);
          if ( v28 == -1073741444 )
            v28 = -1073741772;
        }
        if ( Pool2 && Pool2 != P )
          ExFreePoolWithTag(Pool2, 0);
        if ( v28 == -1073741772 )
          goto LABEL_34;
        v19 = v28;
        if ( v28 < 0 )
          goto LABEL_35;
        v32 = *(__int64 (__fastcall **)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *))(v27 + 520);
        v33 = v42;
        v39 = v42;
        if ( !v32 || v32 == PnpRegQueryValueIndirect )
          v34 = PnpRegQueryValueIndirect(v27, v43, v45, &v41, v12, &v39, (bool *)&v37);
        else
          v34 = guard_dispatch_icall_no_overrides(v27);
        v35 = v34;
        if ( v34 == -1073741772 || v34 == -1073741444 )
        {
LABEL_34:
          v19 = -1073741275;
        }
        else if ( !v34 || v34 == -1073741789 )
        {
          v36 = (unsigned __int16)v41;
          *v40 = (unsigned __int16)v41;
          if ( v36 != 1 )
          {
            v30 = v38;
            *v38 = v39;
            if ( v35 || !v33 )
              v19 = -1073741789;
            goto LABEL_36;
          }
        }
        else
        {
          v19 = v34;
        }
LABEL_35:
        v30 = v38;
LABEL_36:
        if ( v43 )
          ZwClose(v43);
        if ( v19 >= 0 )
          v19 = PnpValidatePropertyData(v12, *v30);
      }
    }
    else
    {
      v19 = -1073741822;
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v19;
}
