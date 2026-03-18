/*
 * XREFs of ?Connect@DXGDOORBELL@@QEAAJXZ @ 0x1401E0E40
 * Callers:
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1401E19A0 (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiConnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CONNECTDOORBELL@@@Z @ 0x1401ABA60 (-DdiConnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CONNECTDOORBELL@@@Z.c)
 */

__int64 __fastcall DXGDOORBELL::Connect(DXGDOORBELL *this)
{
  PHYSICAL_ADDRESS v2; // rdx
  BOOL v3; // ecx
  int v4; // eax
  __int64 v5; // r14
  const wchar_t *v6; // r9
  __int64 v8; // r9
  void *ContiguousNodeMemory; // rax
  void *v10; // rax
  char v11; // r12
  PMDL Mdl; // rax
  struct _MDL *v13; // r13
  void *v14; // rcx
  NTSTATUS v15; // eax
  const wchar_t *v16; // r9
  PMDL v17; // rax
  NTSTATUS v18; // eax
  void *v19; // rcx
  void *v20; // rcx
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  char v24; // [rsp+C0h] [rbp+40h]
  ULONG_PTR NumberOfBytes; // [rsp+C8h] [rbp+48h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( *((_BYTE *)this + 171) )
  {
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0LL, -1LL, 0LL, 1028, 0x80000000);
    *((_QWORD *)this + 19) = ContiguousNodeMemory;
    if ( ContiguousNodeMemory )
    {
      *((PHYSICAL_ADDRESS *)this + 3) = MmGetPhysicalAddress(ContiguousNodeMemory);
      if ( !*((_QWORD *)this + 7) )
      {
LABEL_15:
        LODWORD(v23) = 1;
LABEL_16:
        v24 = 0;
        v11 = 0;
        Mdl = IoAllocateMdl(0LL, 0x1000u, 0, 0, 0LL);
        v13 = Mdl;
        if ( !Mdl )
        {
          v5 = -1073741801LL;
          WdLogSingleEntry2(2LL, this, -1073741801LL);
          v6 = L"DXGDOORBELL 0x%I64x: Failed to allocate memory for Mdl, returning 0x%I64x";
          WdLogGlobalForLineNumber = 3967;
          goto LABEL_4;
        }
        Mdl->MdlFlags |= 2u;
        Mdl[1].Next = (struct _MDL *)(*((__int64 *)this + 3) >> 12);
        v14 = (void *)*((_QWORD *)this + 4);
        NumberOfBytes = 4096LL;
        v15 = MmRotatePhysicalView(v14, &NumberOfBytes, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
        v5 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry2(2LL, this, v15);
          v16 = L"DXGDOORBELL 0x%I64x: MmRotatePhysicalView failed with Status 0x%I64x";
          WdLogGlobalForLineNumber = 3983;
LABEL_20:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, (__int64)this, v5, 0LL, 0LL, 0LL);
          goto LABEL_28;
        }
        v11 = 1;
        if ( *((_QWORD *)this + 7) )
        {
          NumberOfBytes = 4096LL;
          v17 = IoAllocateMdl(0LL, 0x1000u, 0, 0, 0LL);
          v13 = v17;
          if ( !v17 )
          {
            LODWORD(v5) = -1073741801;
            WdLogSingleEntry2(2LL, this, -1073741801LL);
            WdLogGlobalForLineNumber = 3996;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DXGDOORBELL 0x%I64x: Failed to allocate memory for secondary Mdl, returning 0x%I64x",
              (__int64)this,
              -1073741801LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_30;
          }
          v17->MdlFlags |= 2u;
          v17[1].Next = (struct _MDL *)(*((__int64 *)this + 6) >> 12);
          v18 = MmRotatePhysicalView(*((PVOID *)this + 7), &NumberOfBytes, v17, MmToFrameBufferNoCopy, 0LL, 0LL);
          v5 = v18;
          if ( v18 < 0 )
          {
            WdLogSingleEntry2(2LL, this, v18);
            v16 = L"DXGDOORBELL 0x%I64x: MmRotatePhysicalView failed for secondary CPUVA with Status 0x%I64x";
            WdLogGlobalForLineNumber = 4012;
            goto LABEL_20;
          }
          v24 = 1;
        }
        **((_QWORD **)this + 17) = (_DWORD)v23 == 1;
LABEL_28:
        IoFreeMdl(v13);
        if ( (int)v5 >= 0 )
          return (unsigned int)v5;
        if ( !v11 )
        {
LABEL_32:
          if ( v24 )
          {
            v20 = (void *)*((_QWORD *)this + 7);
            NumberOfBytes = 4096LL;
            if ( MmRotatePhysicalView(v20, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL) < 0 )
            {
              WdLogSingleEntry5(0LL, 275LL, 33LL, 0LL, 0LL, 0LL);
              WdLogGlobalForLineNumber = 4065;
            }
          }
          return (unsigned int)v5;
        }
LABEL_30:
        v19 = (void *)*((_QWORD *)this + 4);
        NumberOfBytes = 4096LL;
        if ( MmRotatePhysicalView(v19, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL) < 0 )
        {
          WdLogSingleEntry5(0LL, 275LL, 33LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 4046;
        }
        goto LABEL_32;
      }
      v10 = (void *)MmAllocateContiguousNodeMemory(4096LL, 0LL, -1LL, 0LL, 1028, 0x80000000);
      *((_QWORD *)this + 20) = v10;
      if ( v10 )
      {
        *((PHYSICAL_ADDRESS *)this + 6) = MmGetPhysicalAddress(v10);
        goto LABEL_15;
      }
    }
    return -1073741801LL;
  }
  v2 = *(PHYSICAL_ADDRESS *)this;
  v3 = *((_QWORD *)this + 7) != 0LL;
  *(_QWORD *)&v21 = *(_QWORD *)(v2.QuadPart + 32);
  DWORD2(v21) = DWORD2(v21) & 0xFFFFFFFE | v3;
  v4 = ADAPTER_RENDER::DdiConnectDoorbell(
         *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v2.QuadPart + 16) + 16LL) + 16LL),
         (struct _DXGKARG_CONNECTDOORBELL *)&v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, this, v4);
    v6 = L"DXGDOORBELL 0x%I64x: DdiConnectDoorbell failed with status 0x%I64x";
    WdLogGlobalForLineNumber = 3888;
LABEL_4:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, (__int64)this, v5, 0LL, 0LL, 0LL);
    return (unsigned int)v5;
  }
  v8 = *((_QWORD *)&v22 + 1);
  if ( (_QWORD)v22 && ((BYTE8(v21) & 1) == 0 || *((_QWORD *)&v22 + 1)) )
  {
    *((_QWORD *)this + 3) = v22;
    *((_QWORD *)this + 6) = v8;
    goto LABEL_16;
  }
  WdLogSingleEntry3(2LL, this, v22, *((_QWORD *)&v22 + 1));
  WdLogGlobalForLineNumber = 3900;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DXGDOORBELL 0x%I64x: DdiConnectDoorbell returns invalid parameters. DoorbellPhysical Address:0x%I64x, Secon"
              "daryDoorbellPhysical Address:0x%I64x",
    (__int64)this,
    v22,
    *((__int64 *)&v22 + 1),
    0LL,
    0LL);
  return 3221225485LL;
}
