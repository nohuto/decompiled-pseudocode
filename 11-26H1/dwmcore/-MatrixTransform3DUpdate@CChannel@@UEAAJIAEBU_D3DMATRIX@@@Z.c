/*
 * XREFs of ?MatrixTransform3DUpdate@CChannel@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x180233370
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18018BFC0 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::MatrixTransform3DUpdate(CChannel *this, unsigned int a2, const struct _D3DMATRIX *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v10; // ebx
  _BYTE v12[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+28h] [rbp-60h]
  int v14; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-54h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+48h] [rbp-40h]
  __int128 v18; // [rsp+58h] [rbp-30h]
  __int128 v19; // [rsp+68h] [rbp-20h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
  CChannel::CheckHandle((__int64)this, a2, 86);
  v14 = 344;
  memset_0(&v15, 0, 0x44uLL);
  v6 = *(_OWORD *)&a3->_11;
  v7 = *(_OWORD *)&a3->_21;
  v15 = a2;
  v16 = v6;
  v8 = *(_OWORD *)&a3->_31;
  v17 = v7;
  v9 = *(_OWORD *)&a3->_41;
  v18 = v8;
  v19 = v9;
  v10 = CChannel::SendCommand(this, &v14, 0x48u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
  return v10;
}
