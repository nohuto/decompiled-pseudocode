/*
 * XREFs of ?MagnifierRenderTargetCreate@CChannel@@UEAAJI_KAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180232F30
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18018BFC0 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::MagnifierRenderTargetCreate(
        CChannel *this,
        unsigned int a2,
        __int64 a3,
        const struct MAGN_ADAPTERTEXTURES *a4)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned int v20; // ebx
  _BYTE v22[8]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-F0h]
  int v24; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v26; // [rsp+38h] [rbp-E0h]
  __int128 v27; // [rsp+40h] [rbp-D8h]
  __int128 v28; // [rsp+50h] [rbp-C8h]
  __int128 v29; // [rsp+60h] [rbp-B8h]
  __int128 v30; // [rsp+70h] [rbp-A8h]
  __int128 v31; // [rsp+80h] [rbp-98h]
  __int128 v32; // [rsp+90h] [rbp-88h]
  __int128 v33; // [rsp+A0h] [rbp-78h]
  __int128 v34; // [rsp+B0h] [rbp-68h]
  __int128 v35; // [rsp+C0h] [rbp-58h]
  __int128 v36; // [rsp+D0h] [rbp-48h]
  __int128 v37; // [rsp+E0h] [rbp-38h]
  __int128 v38; // [rsp+F0h] [rbp-28h]
  __int128 v39; // [rsp+100h] [rbp-18h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v22, this);
  CChannel::CheckHandle((__int64)this, a2, 81);
  v24 = 161;
  memset_0(&v25, 0, 0xDCuLL);
  v8 = *(_OWORD *)a4;
  v25 = a2;
  v9 = *((_OWORD *)a4 + 1);
  v26 = a3;
  v27 = v8;
  v10 = *((_OWORD *)a4 + 2);
  v28 = v9;
  v11 = *((_OWORD *)a4 + 3);
  v29 = v10;
  v12 = *((_OWORD *)a4 + 4);
  v30 = v11;
  v13 = *((_OWORD *)a4 + 5);
  v31 = v12;
  v14 = *((_OWORD *)a4 + 6);
  v32 = v13;
  v33 = v14;
  v15 = *((_OWORD *)a4 + 7);
  a4 = (const struct MAGN_ADAPTERTEXTURES *)((char *)a4 + 128);
  v34 = v15;
  v16 = *((_OWORD *)a4 + 1);
  v35 = *(_OWORD *)a4;
  v17 = *((_OWORD *)a4 + 2);
  v36 = v16;
  v18 = *((_OWORD *)a4 + 3);
  v37 = v17;
  v19 = *((_OWORD *)a4 + 4);
  v38 = v18;
  v39 = v19;
  v20 = CChannel::SendCommand(this, &v24, 0xE0u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 80LL))(v23);
  return v20;
}
