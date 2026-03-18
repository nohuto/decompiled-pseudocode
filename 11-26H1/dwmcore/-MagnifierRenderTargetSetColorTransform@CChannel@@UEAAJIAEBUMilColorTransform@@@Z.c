/*
 * XREFs of ?MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJIAEBUMilColorTransform@@@Z @ 0x180233050
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18018BFC0 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::MagnifierRenderTargetSetColorTransform(
        CChannel *this,
        unsigned int a2,
        const struct MilColorTransform *a3)
{
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v12; // ebx
  _BYTE v14[8]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v15; // [rsp+30h] [rbp-21h]
  int v16; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-15h] BYREF
  __int128 v18; // [rsp+40h] [rbp-11h]
  __int128 v19; // [rsp+50h] [rbp-1h]
  __int128 v20; // [rsp+60h] [rbp+Fh]
  __int128 v21; // [rsp+70h] [rbp+1Fh]
  __int128 v22; // [rsp+80h] [rbp+2Fh]
  __int128 v23; // [rsp+90h] [rbp+3Fh]
  int v24; // [rsp+A0h] [rbp+4Fh]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v14, this);
  CChannel::CheckHandle((__int64)this, a2, 81);
  v16 = 162;
  memset_0(&v17, 0, 0x68uLL);
  v6 = *((_DWORD *)a3 + 24);
  v7 = *((_OWORD *)a3 + 1);
  v18 = *(_OWORD *)a3;
  v17 = a2;
  v8 = *((_OWORD *)a3 + 2);
  v24 = v6;
  v19 = v7;
  v9 = *((_OWORD *)a3 + 3);
  v20 = v8;
  v10 = *((_OWORD *)a3 + 4);
  v21 = v9;
  v11 = *((_OWORD *)a3 + 5);
  v22 = v10;
  v23 = v11;
  v12 = CChannel::SendCommand(this, &v16, 0x6Cu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
  return v12;
}
