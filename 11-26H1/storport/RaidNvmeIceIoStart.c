/*
 * XREFs of RaidNvmeIceIoStart @ 0x14007A278
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     NVMeIceIceIoRequired @ 0x140070D70 (NVMeIceIceIoRequired.c)
 *     Feature_SteelixSglModeFix__private_IsEnabledDeviceUsageNoInline @ 0x140078B80 (Feature_SteelixSglModeFix__private_IsEnabledDeviceUsageNoInline.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400B1A5C (StorEtwNVMeICEInterfaceEvent.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidNvmeIceIoStart(
        __int64 a1,
        ULONG_PTR a2,
        int a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  ULONG_PTR v14; // rdi
  int **v15; // r14
  int *v16; // rax
  int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(_QWORD, ULONG_PTR); // rax
  unsigned int v24; // eax
  _OWORD v26[5]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+90h] [rbp+8h] BYREF
  int v28; // [rsp+A0h] [rbp+18h]

  v28 = a3;
  if ( !a1 )
    return (unsigned int)-1056964602;
  if ( !a3 )
    return (unsigned int)-1056964602;
  if ( !a4 )
    return (unsigned int)-1056964602;
  v9 = a5;
  v10 = a7;
  v11 = a6;
  if ( !a5 && !a6 && !a7 )
    return (unsigned int)-1056964602;
  v12 = 96LL;
  v13 = 48LL;
  if ( *(_BYTE *)(a1 + 2) != 40 )
    v12 = 48LL;
  v14 = *(_QWORD *)(v12 + a1);
  v15 = (int **)(v14 + 216);
  if ( !(unsigned int)Feature_SteelixSglModeFix__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_42;
  v16 = *v15;
  v17 = **v15;
  if ( v17 == 1314275652 )
  {
    v13 = (__int64)(v16 + 56);
  }
  else if ( v17 == 1094997074 )
  {
    v13 = (__int64)(v16 + 108);
  }
  if ( (*(unsigned int *)v13 & *v9) == 0LL )
  {
LABEL_42:
    if ( NVMeIceIceIoRequired(v14) )
    {
      if ( *(_DWORD *)(v14 + 800) == -1 )
      {
        *(_DWORD *)(v14 + 808) = 4718593;
        *(_QWORD *)(v14 + 824) = 0LL;
        *(_QWORD *)(v14 + 832) = 0LL;
      }
      *(_DWORD *)(v14 + 812) = v28;
      if ( a4 != 2 )
        v11 = 0LL;
      *(_DWORD *)(v14 + 816) = a4;
      if ( a4 <= 2 )
        v10 = 0LL;
      *(_QWORD *)(v14 + 864) = v11;
      *(_QWORD *)(v14 + 856) = v9;
      *(_QWORD *)(v14 + 872) = v10;
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( a2 && *(_DWORD *)(v14 + 800) != -1 )
        {
          v19 = *(_QWORD *)(v14 + 160);
          v27 = 0LL;
          v26[0] = 0LL;
          IoGetAdapterCryptoEngineExtension(v19, &v27);
          v20 = *(_QWORD *)(v14 + 224);
          v26[0] = *(_OWORD *)v27;
          if ( !is_mul_ok(a2, *(unsigned int *)(v20 + 932))
            || (*(int (__fastcall **)(_QWORD, _OWORD *, ULONG_PTR))(*(_QWORD *)(v27 + 8) + 96LL))(
                 *(_QWORD *)(*(_QWORD *)(v27 + 8) + 104LL),
                 v26,
                 a2 * *(unsigned int *)(v20 + 932)) < 0 )
          {
            KeBugCheckEx(0x176u, 2uLL, 5uLL, v14, a2);
          }
          *(_QWORD *)(v14 + 832) = *(_QWORD *)&v26[0];
        }
        v21 = *(_QWORD *)(*(_QWORD *)(v14 + 224) + 3608LL);
        v22 = *(_QWORD *)(v21 + 48);
      }
      else
      {
        v21 = *((_QWORD *)*v15 + 782);
        v22 = *(_QWORD *)(v21 + 40);
      }
      v23 = *(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(v22 + 56);
      if ( v23 )
      {
        v24 = v23(*(_QWORD *)(v22 + 8), v14 + 808);
        v18 = v24;
        if ( v24 == -1056964596 )
        {
          StorEtwNVMeICEInterfaceEvent(
            (unsigned int)*v15,
            v21,
            -1056964596,
            (unsigned int)L"NVMe ICE IOStart returned a transient error.",
            3);
        }
        else if ( v24 )
        {
          StorEtwNVMeICEInterfaceEvent((unsigned int)*v15, v21, v24, (unsigned int)L"NVMe ICE IOStart failed.", 2);
          KeBugCheckEx(0x176u, 2uLL, 2uLL, v14, v18);
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v18;
}
