/*
 * XREFs of PopVideoPowerSettingCallback @ 0x1404FF380
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x140944018 (PopApplyPolicy.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABC470 (PopAdaptivePowerSettingCallback.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopVideoPowerSettingCallback(_QWORD *Buf2, _DWORD *a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // r10
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  _OWORD v21[8]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v22[4]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v23; // [rsp+E0h] [rbp-38h]
  __int128 v24; // [rsp+F0h] [rbp-28h]
  __int64 v25; // [rsp+100h] [rbp-18h]

  v5 = -1073741811;
  v6 = *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 - *Buf2;
  if ( *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 == *Buf2 )
    v6 = *(_QWORD *)GUID_VIDEO_POWERDOWN_TIMEOUT.Data4 - Buf2[1];
  if ( !v6 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock(Buf2, a2);
    v7 = *((_OWORD *)qword_140F105C0 + 1);
    v21[0] = *(_OWORD *)qword_140F105C0;
    v8 = *((_OWORD *)qword_140F105C0 + 2);
    v21[1] = v7;
    v9 = *((_OWORD *)qword_140F105C0 + 3);
    v21[2] = v8;
    v10 = *((_OWORD *)qword_140F105C0 + 4);
    v21[3] = v9;
    v11 = *((_OWORD *)qword_140F105C0 + 5);
    v21[4] = v10;
    v12 = *((_OWORD *)qword_140F105C0 + 6);
    v21[5] = v11;
    v21[6] = v12;
    v13 = v22;
    v21[7] = *((_OWORD *)qword_140F105C0 + 7);
    v14 = *((_OWORD *)qword_140F105C0 + 9);
    v22[0] = *((_OWORD *)qword_140F105C0 + 8);
    v15 = *((_OWORD *)qword_140F105C0 + 10);
    v22[1] = v14;
    v16 = *((_OWORD *)qword_140F105C0 + 11);
    v22[2] = v15;
    v17 = *((_OWORD *)qword_140F105C0 + 12);
    v22[3] = v16;
    v18 = *((_OWORD *)qword_140F105C0 + 13);
    v19 = *((_QWORD *)qword_140F105C0 + 28);
    v23 = v17;
    v24 = v18;
    v25 = v19;
    LOBYTE(v13) = 1;
    LODWORD(v23) = *a2;
    v5 = ((__int64 (__fastcall *)(_OWORD *, _QWORD, _OWORD *, __int64))PopApplyPolicy)(v13, 0LL, v21, 232LL);
    PopReleasePolicyLock();
    PopAdaptivePowerSettingCallback(Buf2);
  }
  return v5;
}
