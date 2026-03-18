/*
 * XREFs of RootHub_DetectLinkErrorState @ 0x14002CF50
 * Callers:
 *     Controller_CheckHealth @ 0x14000D2D0 (Controller_CheckHealth.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     RootHub_DetectPortInInactiveState @ 0x14002D110 (RootHub_DetectPortInInactiveState.c)
 *     RootHub_DetectPortInComplianceMode @ 0x14002D224 (RootHub_DetectPortInComplianceMode.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_DetectLinkErrorState(__int64 a1)
{
  unsigned int v1; // r13d
  char v2; // r15
  unsigned int v3; // esi
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int *v12; // r12
  int Ulong; // eax
  __int64 v14; // rcx
  char v15; // [rsp+80h] [rbp+8h]
  int v16; // [rsp+88h] [rbp+10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h]
  __int64 v18; // [rsp+98h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  v16 = 0;
  v3 = 1;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v18 = result;
  if ( v1 )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 48);
      v7 = v3 - 1;
      v8 = 120 * v7;
      if ( *(_BYTE *)(v6 + 120 * v7 + 13) != 2 )
      {
        v17 = *(_QWORD *)(a1 + 40);
        v15 = 0;
        if ( KeGetCurrentIrql() == 2 )
        {
          v9 = *(_QWORD *)(a1 + 8);
          if ( *(_BYTE *)(v9 + 1001) )
          {
            Controller_LowerAndTrackIrql((_QWORD *)v9);
            v15 = 1;
          }
        }
        v10 = *(_QWORD *)(a1 + 48);
        DynamicLock_Acquire(*(_QWORD *)(v10 + v8 + 24));
        v11 = v18;
        v12 = (unsigned int *)(v17 + 16 * v7);
        *(_BYTE *)(v10 + v8 + 32) = v15;
        Ulong = XilRegister_ReadUlong(v11, v12);
        v14 = *(_QWORD *)(a1 + 48);
        v16 = Ulong;
        LOBYTE(v10) = *(_BYTE *)(v14 + v8 + 32);
        *(_BYTE *)(v14 + v8 + 32) = 0;
        DynamicLock_Release(*(_QWORD *)(v14 + v8 + 24));
        if ( (_BYTE)v10 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
        if ( (unsigned __int8)RootHub_DetectPortInComplianceMode(a1, v3, &v16)
          || (result = RootHub_DetectPortInInactiveState(a1, v3, &v16), (_BYTE)result) )
        {
          v2 = 1;
          result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v6 + v8 + 100), 1);
          *(_BYTE *)(v6 + v8 + 104) = 1;
        }
      }
      ++v3;
    }
    while ( v3 <= v1 );
    if ( v2 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4,
          11,
          268,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BC30)(UcxDriverGlobals, *(_QWORD *)a1);
    }
  }
  return result;
}
