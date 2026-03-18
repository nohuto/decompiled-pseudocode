/*
 * XREFs of RootHub_HandlePortStatusChangeEvent @ 0x1400089F4
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008BE4 (RootHub_DetectAndAcknowledgePortResume.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x140008FE0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     RootHub_DumpPortData @ 0x14000B97C (RootHub_DumpPortData.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rsi
  int v8; // edx
  __int64 result; // rax
  int v10; // edx
  __int64 v11; // rsi
  int Ulong; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // edx
  char v16; // [rsp+28h] [rbp-30h]

  v2 = *(unsigned __int8 *)(a2 + 3);
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(_BYTE *)(a2 + 3);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), a2, 11, 213, (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids, v16);
  }
  v6 = v2 - 1;
  v7 = 16LL * (v2 - 1);
  RootHub_DumpPortData(v7 + a1[5], a1[1]);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v8,
        11,
        214,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v2);
    }
    RootHub_AcquireReadModifyWriteLock(a1, v6);
    v11 = a1[5] + v7;
    Ulong = XilRegister_ReadUlong(v5, v11);
    v14 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        215,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        Ulong);
    }
    XilRegister_WriteUlong(v5, v11, v14 & 0xE00C200 | 0xFA0000u);
    RootHub_ReleaseReadModifyWriteLock(a1, v6);
    result = XilRegister_ReadUlong(v5, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      return WPP_RECORDER_SF_D(
               *(_QWORD *)(a1[1] + 72LL),
               v15,
               11,
               216,
               (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
               result);
    }
  }
  else
  {
    result = RootHub_DetectAndAcknowledgePortResume(a1, v2, 0LL);
    if ( !(_BYTE)result )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v10) = 5;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1[1] + 72LL),
            v10,
            11,
            217,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
        }
      }
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BC30)(UcxDriverGlobals, *a1);
    }
  }
  return result;
}
