/*
 * XREFs of DpiFdoCreateSysMmAdapter @ 0x14023FEBC
 * Callers:
 *     DpiLdaPreStartChain @ 0x14009378C (DpiLdaPreStartChain.c)
 *     DpiFdoStartNonLdaAdapter @ 0x140248970 (DpiFdoStartNonLdaAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline @ 0x14006F7DC (Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1401A5B30 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSIC.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x140245984 (DpiFdoQuerySysMmAdapterCaps.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 */

__int64 __fastcall DpiFdoCreateSysMmAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // r13
  int SysMmAdapterCaps; // r14d
  __int64 v6; // rsi
  char *Pool2; // r12
  PVOID v8; // rcx
  bool v9; // zf
  unsigned int i; // r15d
  char *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, _QWORD *); // rax
  __int64 Elements; // rax
  __int64 v17; // rcx
  struct _DEVICE_OBJECT **v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int Adapter; // ebx
  char v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  struct _DEVICE_OBJECT **v26; // [rsp+68h] [rbp-98h]
  _BYTE v27[32]; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+90h] [rbp-70h]
  __int128 v29; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v30[4]; // [rsp+A8h] [rbp-58h] BYREF
  int v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+CCh] [rbp-34h]
  int v33; // [rsp+D4h] [rbp-2Ch]
  PVOID P; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v35[32]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v36; // [rsp+100h] [rbp+0h]

  v2 = *(_DWORD *)(a2 + 504);
  v4 = *(_QWORD *)(a2 + 40);
  P = 0LL;
  SysMmAdapterCaps = 0;
  v36 = 0;
  v23 = 0;
  v6 = 1LL;
  v24 = v4;
  if ( v2 )
    v6 = v2;
  Pool2 = (char *)ExAllocatePool2(256LL, 24 * v6, 1953656900LL);
  if ( !Pool2 )
  {
    v8 = P;
    v9 = P == v35;
LABEL_54:
    if ( !v9 )
    {
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
    return 3221225495LL;
  }
  for ( i = 0; i < (unsigned int)v6; ++i )
  {
    v11 = &Pool2[24 * i];
    *(_QWORD *)v11 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (_DWORD)v6 == 1 )
    {
      LODWORD(v12) = (_DWORD)a1;
      v13 = a2;
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 2832) + 8LL * i);
      v13 = *(_QWORD *)(v12 + 64);
    }
    *((_DWORD *)v11 + 2) = *(_DWORD *)(v13 + 1120);
    if ( *(_BYTE *)(a2 + 480) || *(_BYTE *)(a2 + 481) || *(_BYTE *)(a2 + 1158) || *(_BYTE *)(a2 + 2718) )
    {
      *((_DWORD *)v11 + 3) |= 1u;
      goto LABEL_35;
    }
    if ( *(_DWORD *)(v24 + 28) < 0xE002u )
    {
      *((_DWORD *)v11 + 3) |= 2u;
      v4 = v24;
      continue;
    }
    if ( (unsigned int)Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline() )
      SysMmAdapterCaps = DpiFdoQuerySysMmAdapterCaps(a2, v12, i, v24, *(_QWORD *)(a2 + 48), (__int64)&Pool2[24 * i]);
    if ( *(_BYTE *)(a2 + 2716) )
    {
      *((_DWORD *)v11 + 3) |= 1u;
      SysMmAdapterCaps = 0;
    }
    else
    {
      if ( !(unsigned int)Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline() )
        SysMmAdapterCaps = DpiFdoQuerySysMmAdapterCaps(
                             a2,
                             (_DWORD)a1,
                             i,
                             v24,
                             *(_QWORD *)(a2 + 48),
                             (__int64)&Pool2[24 * i]);
      if ( SysMmAdapterCaps < 0 )
      {
        *((_DWORD *)v11 + 3) |= 2u;
LABEL_35:
        v4 = v24;
        continue;
      }
    }
    v4 = v24;
    if ( *(_DWORD *)(v24 + 28) >= 0x10001u && !v23 )
    {
      v14 = *(_QWORD *)(a2 + 48);
      v32 = 0LL;
      v33 = 0;
      v30[1] = 0LL;
      v30[3] = &v29;
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v24 + 272);
      v23 = 1;
      v30[0] = 36LL;
      v30[2] = 0LL;
      v29 = 0LL;
      v31 = 16;
      SysMmAdapterCaps = v15(v14, v30);
      if ( SysMmAdapterCaps >= 0 )
      {
        if ( (_DWORD)v29 )
        {
          Elements = PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements((__int64 *)&P, v29);
          if ( !Elements )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 9609;
            ExFreePoolWithTag(Pool2, 0);
            if ( P != v35 && P )
              ExFreePoolWithTag(P, 0);
            return (unsigned int)SysMmAdapterCaps;
          }
          v17 = *(_QWORD *)(a2 + 48);
          *((_QWORD *)&v29 + 1) = Elements;
          SysMmAdapterCaps = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v24 + 272))(v17, v30);
          if ( SysMmAdapterCaps < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9616;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 9616LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 9599;
      }
    }
    if ( *(_DWORD *)(v24 + 28) <= 0xF003u )
      *((_DWORD *)v11 + 4) &= ~2u;
  }
  v26 = 0LL;
  v28 = 0;
  if ( (unsigned int)v6 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 >= 8 )
    {
      v19 = (struct _DEVICE_OBJECT **)ExAllocatePool2(256LL, 8 * v6, 1265072196LL);
      v26 = v19;
      goto LABEL_45;
    }
    goto LABEL_50;
  }
  v26 = (struct _DEVICE_OBJECT **)v27;
  memset(v27, 0, 8LL * (unsigned int)v6);
  v19 = (struct _DEVICE_OBJECT **)v27;
LABEL_45:
  v28 = v6;
  if ( !v19 )
  {
LABEL_50:
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 9669;
    if ( v26 != (struct _DEVICE_OBJECT **)v27 && v26 )
      ExFreePoolWithTag(v26, 0);
    v28 = 0;
    ExFreePoolWithTag(Pool2, 0);
    v8 = P;
    v9 = P == v35;
    goto LABEL_54;
  }
  if ( *(_DWORD *)(a2 + 504) )
  {
    v20 = 0LL;
    v21 = (unsigned int)v6;
    do
    {
      v19[v20] = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v20 * 8 + *(_QWORD *)(a2 + 2832)) + 64LL) + 152LL);
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  else
  {
    *v19 = *(struct _DEVICE_OBJECT **)(a2 + 152);
  }
  Adapter = SysMmCreateAdapter(
              a1,
              v19,
              v6,
              (const struct _DXGK_PHYSICAL_MEMORY_RANGE *)P,
              v36,
              *(_DWORD *)(v4 + 28),
              (const struct SYSMM_ADAPTER_CREATE_PARAMS *const)Pool2,
              (struct SYSMM_ADAPTER **)(a2 + 5824));
  if ( Adapter >= 0 )
  {
    if ( v26 != (struct _DEVICE_OBJECT **)v27 && v26 )
      ExFreePoolWithTag(v26, 0);
    v28 = 0;
    ExFreePoolWithTag(Pool2, 0);
    if ( P != v35 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9712;
    if ( v26 != (struct _DEVICE_OBJECT **)v27 && v26 )
      ExFreePoolWithTag(v26, 0);
    v28 = 0;
    ExFreePoolWithTag(Pool2, 0);
    if ( P != v35 && P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)Adapter;
  }
}
