/*
 * XREFs of NVMeGetControllerInitiatedTelemetryLog @ 0x140025D48
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x140025A3C (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x140019C28 (BuildGetLogPageCommandForTelemetryLog.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryLog(__int64 a1, unsigned int a2)
{
  size_t v2; // r15
  unsigned int ControllerMaxTransferSize; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r13
  unsigned int v7; // r12d
  unsigned int v8; // edi
  size_t v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // r9
  _OWORD *v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  int v19; // edi
  __int64 v20; // rdi
  unsigned int v21; // r8d
  _OWORD *v22; // rax
  __int64 v23; // rdx
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  int v27; // [rsp+28h] [rbp-28h]
  unsigned int v28; // [rsp+90h] [rbp+40h]
  size_t Size; // [rsp+A0h] [rbp+50h] BYREF
  void *Src; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  v6 = (_QWORD *)(v5 + 3976);
  v7 = ControllerMaxTransferSize;
  Src = 0LL;
  v8 = 512;
  Size = 0LL;
  v28 = 512;
  v9 = 0LL;
  v10 = StorPortExtendedFunction(0LL, v5, (unsigned int)v2, 1701672526LL);
  if ( !v10 )
  {
    v12 = (_OWORD *)*v6;
    if ( *v6 )
    {
      if ( (v2 & 3) != 0 )
      {
        if ( (_DWORD)v2 )
          memset(v12, 0, v2);
      }
      else if ( (unsigned int)v2 >> 2 )
      {
        memset(v12, 0, 4LL * ((unsigned int)v2 >> 2));
      }
      *(_DWORD *)(a1 + 3984) = v2;
      v13 = v7;
      if ( (unsigned int)v2 < v7 )
        v13 = v2;
      v10 = NVMeAllocateDmaBufferEx(a1, 0, 1, v13, (__int64 *)&Src, &Size);
      if ( v10 )
      {
        v9 = Size;
      }
      else
      {
        if ( !Src )
          return v10;
        v9 = Size;
        while ( 1 )
        {
          v14 = a1 + 1008;
          if ( v8 >= (unsigned int)v2 )
            break;
          v15 = v7;
          if ( (unsigned int)v2 - v8 < v7 )
            v15 = v2 - v8;
          LODWORD(Size) = v15 & 0xFFFFFE00;
          if ( (v15 & 0xFFFFFE00) == 0 )
          {
            v10 = -1056964598;
            goto LABEL_26;
          }
          LocalCommandReuse(a1, v14);
          v16 = *(_QWORD *)(a1 + 1072);
          LOBYTE(v17) = 8;
          v18 = Size;
          *(_BYTE *)(v16 + 4225) |= 3u;
          *(_WORD *)(v16 + 4212) = 0;
          BuildGetLogPageCommandForTelemetryLog(a1, v16, v17, v18, v9, v27, v28, 0, 1u);
          *(_BYTE *)(v16 + 4225) |= 4u;
          *(_QWORD *)(v16 + 4160) = Src;
          *(_DWORD *)(v16 + 4208) = Size;
          *(_QWORD *)(v16 + 4168) = v9;
          ProcessCommand(a1, a1 + 1016);
          WaitForCommandComplete(a1, a1 + 1016, 1);
          if ( *(_BYTE *)(a1 + 1019) != 1 )
            goto LABEL_19;
          v19 = Size;
          memmove((void *)(*v6 + v28), Src, (unsigned int)Size);
          v28 += v19;
          v8 = v28;
        }
        LocalCommandReuse(a1, v14);
        v20 = *(_QWORD *)(a1 + 1072);
        LOBYTE(v21) = 8;
        *(_BYTE *)(v20 + 4225) |= 3u;
        *(_WORD *)(v20 + 4212) = 0;
        BuildGetLogPageCommandForTelemetryLog(a1, v20, v21, 0x200u, v9, v27, 0LL, 1, *(_BYTE *)(a1 + 148) & 1);
        *(_BYTE *)(v20 + 4225) |= 4u;
        *(_QWORD *)(v20 + 4160) = Src;
        *(_QWORD *)(v20 + 4168) = v9;
        *(_DWORD *)(v20 + 4208) = 512;
        ProcessCommand(a1, a1 + 1016);
        WaitForCommandComplete(a1, a1 + 1016, 1);
        if ( *(_BYTE *)(a1 + 1019) != 1 )
        {
LABEL_19:
          v10 = -1056964607;
          goto LABEL_26;
        }
        v22 = (_OWORD *)*v6;
        v23 = 4LL;
        v24 = Src;
        do
        {
          *v22 = *v24;
          v22[1] = v24[1];
          v22[2] = v24[2];
          v22[3] = v24[3];
          v22[4] = v24[4];
          v22[5] = v24[5];
          v22[6] = v24[6];
          v22 += 8;
          v25 = v24[7];
          v24 += 8;
          *(v22 - 1) = v25;
          --v23;
        }
        while ( v23 );
      }
    }
  }
LABEL_26:
  if ( Src )
  {
    if ( (unsigned int)v2 < v7 )
      v7 = v2;
    NVMeFreeDmaBufferEx(a1, 0, 1, v7, (__int64 *)&Src, v9);
  }
  if ( v10 )
  {
    if ( *v6 )
      StorPortExtendedFunction(1LL, a1, *v6, v11);
    *(_OWORD *)v6 = 0LL;
  }
  return v10;
}
