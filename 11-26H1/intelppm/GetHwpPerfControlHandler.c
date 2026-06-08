/*
 * XREFs of GetHwpPerfControlHandler @ 0x14002AA80
 * Callers:
 *     <none>
 * Callees:
 *     Feature_QosHysteresisExperiment__private_GetVariant @ 0x140006A84 (Feature_QosHysteresisExperiment__private_GetVariant.c)
 *     Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline @ 0x140006AC0 (Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShortQosHysteresisIntel__private_IsEnabledDeviceUsageNoInline @ 0x140006B18 (Feature_ShortQosHysteresisIntel__private_IsEnabledDeviceUsageNoInline.c)
 *     IsShortQosHysteresisTargetCpu @ 0x140006C00 (IsShortQosHysteresisTargetCpu.c)
 *     IsTargettedCpuForQosExperiment_Intel @ 0x140006C7C (IsTargettedCpuForQosExperiment_Intel.c)
 *     IsHwpFastMsrSupported @ 0x14002AE28 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x14002AEA4 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x14002AF20 (IsHwpPackageControlSupported.c)
 */

__int64 __fastcall GetHwpPerfControlHandler(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        unsigned __int64 (__fastcall **a6)(__int64 a1, __int64 a2, __int64 a3),
        _BYTE *a7,
        _BYTE *a8,
        bool *a9,
        int *a10)
{
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // ebx
  void *v14; // rax
  int v15; // ebx
  __int64 v16; // rcx
  int Variant; // eax

  v10 = *(_QWORD *)(a2 + 144);
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1073741637;
  if ( *(_BYTE *)(a2 + 125) )
  {
    if ( *(_BYTE *)(v10 + 128) != 127 || *(_BYTE *)(v10 + 129) != 8 || *(_BYTE *)(v10 + 130) != 16 )
      return v13;
    v11 = *(_QWORD *)(v10 + 132);
    v12 = 16711680LL;
  }
  if ( *(_BYTE *)(a2 + 126) )
  {
    if ( *(_BYTE *)(v10 + 152) != 127 || *(_BYTE *)(v10 + 153) != 8 || *(_BYTE *)(v10 + 154) )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 156) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 156);
    }
    v12 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a2 + 127) )
  {
    if ( *(_BYTE *)(v10 + 176) != 127 || *(_BYTE *)(v10 + 177) != 8 || *(_BYTE *)(v10 + 178) != 8 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 180) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 180);
    }
    v12 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a2 + 128) )
  {
    if ( *(_BYTE *)(v10 + 416) != 127 || *(_BYTE *)(v10 + 417) != 8 || *(_BYTE *)(v10 + 418) != 24 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 420) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 420);
    }
    v12 |= 0xFF000000uLL;
  }
  if ( *(_BYTE *)(a2 + 129) )
  {
    if ( *(_BYTE *)(v10 + 392) != 127 || *(_BYTE *)(v10 + 393) != 10 || *(_BYTE *)(v10 + 394) != 32 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 396) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 396);
    }
    v12 |= 0x3FF00000000uLL;
  }
  if ( !*(_BYTE *)(a2 + 130)
    && ((v11 - 1906) & 0xFFFFFFFFFFFFFFFDuLL) == 0
    && (!*(_BYTE *)(a2 + 1348) || *(_BYTE *)(a2 + 1352) == 127 && *(_QWORD *)(a2 + 1356) == 3215LL) )
  {
    *(_QWORD *)(a2 + 184) = v12;
    *a6 = PerfSelectionHwp;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Eu) )
    {
      *a3 = PerfControlHwpLp;
      *a4 = PerfControlHwpLp;
      *a5 = 0LL;
      *a8 = 1;
      *a7 = 0;
      *a10 = 0;
      *a9 = 0;
    }
    else
    {
      *a3 = PerfControlHwp;
      v14 = PerfControlHwpHidden;
      if ( dword_140019AC8 == 1 )
        v14 = PerfControlHwpHv;
      *a4 = v14;
      *a5 = (unsigned __int64)PerfControlHwpPackage & -(__int64)((unsigned __int8)IsHwpPackageControlSupported() != 0);
      if ( (unsigned int)Feature_ShortQosHysteresisIntel__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (unsigned __int8)IsHwpFastMsrSupported() )
          v15 = IsShortQosHysteresisTargetCpu() ? 200 : 500;
        else
          v15 = 1000;
      }
      else
      {
        v15 = (unsigned __int8)IsHwpFastMsrSupported() != 0 ? 500 : 1000;
      }
      if ( (unsigned int)Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline()
        && IsTargettedCpuForQosExperiment_Intel() )
      {
        Variant = Feature_QosHysteresisExperiment__private_GetVariant(v16);
        switch ( Variant )
        {
          case 2:
            v15 = 500;
            break;
          case 3:
            v15 = 200;
            break;
          case 4:
            v15 = 100;
            break;
          case 5:
            v15 = 10;
            break;
        }
      }
      *a8 = 0;
      *a7 = 1;
      *a9 = (unsigned __int8)IsHwpIdleOptimizationSupported() == 0;
      *a10 = v15;
    }
    return 0;
  }
  return v13;
}
