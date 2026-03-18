/*
 * XREFs of _lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator() @ 0x1401CE4B4
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__&DrvSampleDisplayState_ @ 0x1401B8E54 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__-D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator()(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rdx
  __int128 v4; // xmm0
  _OWORD *v5; // rdx

  *(_DWORD *)(a2 + 84) = **(_BYTE **)a1 != 0;
  *(_DWORD *)(a2 + 80) = **(_DWORD **)(a1 + 8);
  *(_QWORD *)(a2 + 88) = **(_QWORD **)(a1 + 16);
  *(_DWORD *)(a2 + 96) = **(_DWORD **)(a1 + 24);
  v3 = **(_OWORD ***)(a1 + 32);
  if ( v3 )
  {
    *(_OWORD *)(a2 + 100) = *v3;
    *(_OWORD *)(a2 + 116) = v3[1];
    *(_OWORD *)(a2 + 132) = v3[2];
    *(_OWORD *)(a2 + 148) = v3[3];
    *(_OWORD *)(a2 + 164) = v3[4];
    *(_OWORD *)(a2 + 180) = v3[5];
    *(_OWORD *)(a2 + 196) = v3[6];
    v4 = v3[7];
    v5 = v3 + 8;
    *(_OWORD *)(a2 + 212) = v4;
    *(_OWORD *)(a2 + 228) = *v5;
    *(_OWORD *)(a2 + 244) = v5[1];
    *(_OWORD *)(a2 + 260) = v5[2];
    *(_OWORD *)(a2 + 276) = v5[3];
    *(_OWORD *)(a2 + 292) = v5[4];
    *(_QWORD *)(a2 + 308) = *((_QWORD *)v5 + 10);
    *(_DWORD *)(a2 + 316) = *((_DWORD *)v5 + 22);
  }
  return 0LL;
}
