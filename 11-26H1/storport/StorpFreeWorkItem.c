/*
 * XREFs of StorpFreeWorkItem @ 0x1400597F4
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeWorkItem(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PDEVICE_OBJECT v5; // rcx
  __int64 v6; // rdx
  signed __int32 v7; // r10d
  int *v8; // rsi
  int *v9; // rbp
  signed __int32 v11; // eax
  volatile signed __int32 *v12; // rax
  int *v13; // [rsp+50h] [rbp+8h] BYREF
  int *v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v14 = 0LL;
  v13 = 0LL;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 67LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, a1, a2);
    }
    return (unsigned int)-1056964602;
  }
  if ( !*(_QWORD *)a2 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964607;
    }
    v6 = 68LL;
LABEL_32:
    WPP_SF_(v5->AttachedDevice, v6, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    return (unsigned int)-1056964607;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 69LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 70LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  RaidpPortGetAdapter(a1, &v14, &v13);
  v8 = v14;
  v9 = v13;
  if ( !v14 && !v13 )
    return 3238002694LL;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 24), v7, 1);
  if ( !v11 )
  {
    IoFreeWorkItem(*(PIO_WORKITEM *)a2);
    *(_QWORD *)a2 = 0LL;
    ExFreePoolWithTag((PVOID)a2, 0x49576152u);
    v12 = v8 + 1238;
    if ( !v8 )
      v12 = v9 + 274;
    _InterlockedDecrement(v12);
    return v2;
  }
  if ( v11 == v7 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < (unsigned __int8)v7 )
    {
      return (unsigned int)-1056964607;
    }
    v6 = 71LL;
    goto LABEL_32;
  }
  return v2;
}
