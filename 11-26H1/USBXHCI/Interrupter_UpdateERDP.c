/*
 * XREFs of Interrupter_UpdateERDP @ 0x1400077D0
 * Callers:
 *     Interrupter_InterrupterRegisterIntialize @ 0x140007680 (Interrupter_InterrupterRegisterIntialize.c)
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_InitializeForOffload @ 0x140049820 (Interrupter_InitializeForOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_i @ 0x140045AE8 (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall Interrupter_UpdateERDP(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  signed __int32 v14[10]; // [rsp+0h] [rbp-98h] BYREF
  int v15[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v16[6]; // [rsp+40h] [rbp-58h] BYREF
  int v17; // [rsp+70h] [rbp-28h]
  _DWORD v18[3]; // [rsp+74h] [rbp-24h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 144);
  v5 = *(_QWORD *)(v3 + 88);
  v6 = v4 ^ (v4 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL) + 16LL * *(unsigned int *)(a1 + 140))) & 0xFFFFFFFFFFFFFFF8uLL | 8;
  if ( !a2 )
    v6 = (v4 ^ (v4 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL) + 16LL * *(unsigned int *)(a1 + 140))) & 0xFFFFFFFFFFFFFFF8uLL) & 0xFFFFFFFFFFFFFFF7uLL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), 5, 9, 32, (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids, v6);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v5 + 8);
  v9 = (_DWORD *)(v7 + 24);
  if ( !*(_BYTE *)(v5 + 137) && *(_BYTE *)(v8 + 1001) )
  {
    v14[8] = 4;
    v15[0] = 0;
    v11 = *(_QWORD *)(v8 + 112);
    v12 = *(_QWORD *)(v5 + 128);
    v18[0] = 0;
    memset(v16, 0, 24);
    v16[5] = v9;
    v16[3] = v12;
    v16[4] = 11LL;
    v17 = 3;
    *(_QWORD *)&v18[1] = v6;
    result = SecureChannel_SendRequestSynchronously(v11, v16, 64LL, v15, 4);
    if ( (int)result >= 0 )
    {
      result = (unsigned int)v15[0];
      if ( v15[0] < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        return WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
                 v13,
                 6,
                 77,
                 (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
                 v15[0]);
      }
    }
  }
  else
  {
    result = *(_QWORD *)(v8 + 736);
    if ( (result & 1) != 0 )
    {
      *v9 = v6;
      _InterlockedOr(v14, 0);
      *(_DWORD *)(v7 + 28) = HIDWORD(v6);
    }
    else
    {
      *(_QWORD *)v9 = v6;
    }
    _InterlockedOr(v14, 0);
  }
  return result;
}
