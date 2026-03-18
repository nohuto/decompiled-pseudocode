/*
 * XREFs of DpiDumpAdaptersDisplayMuxStatus @ 0x1400903D0
 * Callers:
 *     ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401CE7BC (-DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

void DpiDumpAdaptersDisplayMuxStatus()
{
  __int64 v0; // rbx
  __int64 *v1; // rdi
  __int128 *v2; // rsi
  __int64 v3; // rax
  _OWORD *v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD v19[26]; // [rsp+30h] [rbp-1B8h] BYREF

  AcquireMiniportListMutex();
  v0 = qword_140168E08;
  if ( *(_QWORD *)v0 != v0 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v0 + 72), Executive, 0, 0, 0LL);
      v1 = *(__int64 **)(v0 + 56);
      if ( (__int64 *)*v1 != v1 )
      {
        do
        {
          if ( *((_DWORD *)v1 + 4) == 1953656900 && *((_DWORD *)v1 + 5) == 2 )
          {
            v2 = (__int128 *)(v1 + 753);
            if ( *((_DWORD *)v1 + 1506) != 1 && *((_DWORD *)v1 + 1507) != 2 )
            {
              memset(v19, 0, 0x198uLL);
              v19[0] = 0x1980000003AuLL;
              v3 = 2LL;
              v4 = &v19[3];
              memset(&v19[1], 0, 28);
              do
              {
                v5 = *v2;
                v6 = v2[1];
                v2 += 8;
                *v4 = v5;
                v7 = *(v2 - 6);
                v4[1] = v6;
                v8 = *(v2 - 5);
                v4[2] = v7;
                v9 = *(v2 - 4);
                v4[3] = v8;
                v10 = *(v2 - 3);
                v4[4] = v9;
                v11 = *(v2 - 2);
                v4[5] = v10;
                v12 = *(v2 - 1);
                v4[6] = v11;
                v4 += 8;
                *(v4 - 1) = v12;
                --v3;
              }
              while ( v3 );
              v13 = *((_DWORD *)v2 + 24);
              v14 = v2[1];
              *v4 = *v2;
              v15 = v2[2];
              v4[1] = v14;
              v16 = v2[3];
              v4[2] = v15;
              v17 = v2[4];
              v4[3] = v16;
              v18 = v2[5];
              v4[4] = v17;
              v4[5] = v18;
              *((_DWORD *)v4 + 24) = v13;
              DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v19);
            }
          }
          v1 = (__int64 *)*v1;
        }
        while ( *v1 != *(_QWORD *)(v0 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v0 + 72), 0);
      v0 = *(_QWORD *)v0;
    }
    while ( *(_QWORD *)v0 != qword_140168E08 );
  }
  ReleaseMiniportListMutex();
}
