/*
 * XREFs of SmpGetProcessMuSessionId @ 0x140007D90
 * Callers:
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpExecPgm @ 0x140006F70 (SmpExecPgm.c)
 *     SmpGetMuSessionIdFromClientContext @ 0x140009A30 (SmpGetMuSessionIdFromClientContext.c)
 * Callees:
 *     SmpGetProcessId @ 0x140007F50 (SmpGetProcessId.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpGetProcessMuSessionId(void *a1, _DWORD *a2)
{
  NTSTATUS InformationProcess; // ebx
  _BYTE *v6; // rdx
  __int64 v7; // r8
  char v8; // al
  _BYTE *v9; // rax
  _OWORD *v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _DWORD ProcessInformation[4]; // [rsp+30h] [rbp-118h] BYREF
  _OWORD v24[12]; // [rsp+40h] [rbp-108h] BYREF
  __int128 v25; // [rsp+100h] [rbp-48h]
  __int128 v26; // [rsp+110h] [rbp-38h]

  ProcessInformation[0] = 0;
  InformationProcess = NtQueryInformationProcess(a1, ProcessSessionInformation, ProcessInformation, 4u, 0LL);
  if ( InformationProcess < 0 )
  {
    memset_0(v24, 0, 0xE0uLL);
    *((_QWORD *)&v25 + 1) = SmpGetProcessId(a1);
    *(_QWORD *)&v26 = 0LL;
    LODWORD(v25) = InformationProcess;
    DWORD2(v26) = 140;
    v6 = v24;
    v7 = 64LL;
    do
    {
      if ( v7 == -2147483582 )
        break;
      v8 = v6["SmpGetProcessMuSessionId" - (char *)v24];
      if ( !v8 )
        break;
      *v6++ = v8;
      --v7;
    }
    while ( v7 );
    v9 = v6 - 1;
    if ( v7 )
      v9 = v6;
    *v9 = 0;
    v10 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_140030ED4) % 16));
    v11 = v24[1];
    *(_OWORD *)((char *)v10 + 8) = v24[0];
    v12 = v24[2];
    *(_OWORD *)((char *)v10 + 24) = v11;
    v13 = v24[3];
    *(_OWORD *)((char *)v10 + 40) = v12;
    v14 = v24[4];
    *(_OWORD *)((char *)v10 + 56) = v13;
    v15 = v24[5];
    *(_OWORD *)((char *)v10 + 72) = v14;
    v16 = v24[6];
    *(_OWORD *)((char *)v10 + 88) = v15;
    v17 = v24[8];
    *(_OWORD *)((char *)v10 + 104) = v16;
    v10 = (_OWORD *)((char *)v10 + 136);
    *(v10 - 1) = v24[7];
    v18 = v24[9];
    *v10 = v17;
    v19 = v24[10];
    v10[1] = v18;
    v20 = v24[11];
    v10[2] = v19;
    v21 = v25;
    v10[3] = v20;
    v22 = v26;
    v10[4] = v21;
    v10[5] = v22;
    *a2 = 0;
  }
  else
  {
    *a2 = ProcessInformation[0];
  }
  return (unsigned int)InformationProcess;
}
