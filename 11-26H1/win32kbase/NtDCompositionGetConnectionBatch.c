/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1400A4A90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001E620 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1400A3000 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?GetRDPHeaderUserMode@CBatch@DirectComposition@@QEAAPEAUUCE_RDP_HEADER@@XZ @ 0x1400A4FFC (-GetRDPHeaderUserMode@CBatch@DirectComposition@@QEAAPEAUUCE_RDP_HEADER@@XZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1401BD9F8 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, void *a2, __int64 a3)
{
  int Batches; // ebx
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  struct _ERESOURCE *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _ERESOURCE *v14; // rbx
  __int64 v16; // rax
  _QWORD *v17; // r8
  _QWORD **v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // r15
  __int64 v22; // r12
  DirectComposition::CBatch *v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // r12
  __int64 v29; // r14
  struct _ERESOURCE *v30; // rcx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *i; // rdx
  __int64 v36; // [rsp+50h] [rbp-78h] BYREF
  __int64 v37; // [rsp+58h] [rbp-70h]
  struct UCE_RDP_HEADER *RDPHeaderUserMode; // [rsp+60h] [rbp-68h] BYREF
  __int64 v39; // [rsp+68h] [rbp-60h]
  struct UCE_RDP_HEADER *v40; // [rsp+70h] [rbp-58h]
  __int64 v41; // [rsp+78h] [rbp-50h] BYREF
  __int64 v42; // [rsp+80h] [rbp-48h]
  struct UCE_RDP_HEADER *v43; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+E0h] [rbp+18h]
  struct UCE_RDP_HEADER *v45; // [rsp+E8h] [rbp+20h]

  v44 = a3;
  Batches = 0;
  v5 = 0LL;
  v37 = 0LL;
  v45 = 0LL;
  v43 = 0LL;
  if ( a2 && a3 )
  {
    v36 = 0LL;
    RtlCopyFromUser(&v36, a2, 8uLL);
    v5 = v36;
    v37 = v36;
  }
  else
  {
    Batches = -1073741811;
  }
  if ( Batches >= 0 )
  {
    KeEnterCriticalRegion();
    v6 = 0LL;
    v7 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v10 )
      v7 = *(_QWORD *)(v10 + 256);
    if ( v7 )
    {
      v11 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v11, 1u);
      v12 = *(_QWORD *)(v7 + 24);
      if ( v12 && a1 == *(_QWORD *)(v7 + 16) )
      {
        _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
        v6 = *(_QWORD *)(v7 + 24);
        Batches = 0;
      }
      else
      {
        Batches = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      Batches = -1073741823;
    }
    if ( Batches >= 0 )
    {
      if ( v5 )
      {
        v36 = 0LL;
        Batches = -1073741275;
        v13 = *(_QWORD *)(v6 + 192);
        if ( v13 )
          Batches = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, v5, &v36);
        if ( Batches >= 0 )
        {
          v14 = *(struct _ERESOURCE **)(v6 + 16);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v14, 1u);
          if ( *(_DWORD *)(v6 + 148) )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 144), 1, 2) == 2 )
            {
              v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 64LL))(v36);
              if ( v16 )
                v17 = *(_QWORD **)(v16 + 8);
              else
                v17 = 0LL;
              v18 = *(_QWORD ***)(v6 + 112);
              if ( v18 )
              {
                for ( i = *v18; i; i = (_QWORD *)*i )
                  v18 = (_QWORD **)i;
                *v18 = v17;
              }
              else
              {
                *(_QWORD *)(v6 + 112) = v17;
              }
              Batches = 0;
              v39 = 0LL;
              v40 = 0LL;
              while ( 1 )
              {
                v19 = *(_QWORD **)(v6 + 112);
                if ( !v19 )
                  break;
                v42 = v19[19];
                v20 = (_QWORD *)v19[17];
                v21 = v19[18] + 40LL;
                Batches = 0;
                if ( !v20[6] )
                {
                  v41 = 0LL;
                  RDPHeaderUserMode = 0LL;
                  v43 = 0LL;
                  Batches = MmMapViewOfSection(
                              v20[3],
                              *(_QWORD *)(v20[2] + 16LL),
                              &v43,
                              0LL,
                              4096LL,
                              &v41,
                              &RDPHeaderUserMode,
                              2,
                              0x400000,
                              2);
                  if ( Batches >= 0 )
                    v20[6] = v43;
                }
                if ( Batches < 0 )
                  goto LABEL_21;
                v22 = v21 + v20[6];
                v23 = *(DirectComposition::CBatch **)(v6 + 112);
                v24 = *((_QWORD *)v23 + 18) + *(_QWORD *)(*((_QWORD *)v23 + 17) + 56LL);
                RDPHeaderUserMode = DirectComposition::CBatch::GetRDPHeaderUserMode(v23);
                v25 = *(unsigned int *)(*(_QWORD *)(v6 + 112) + 20LL);
                *(_DWORD *)(v24 + 4) = 40;
                *(_DWORD *)v24 = v25;
                *(_QWORD *)(v24 + 8) = 0LL;
                v26 = *(_QWORD *)(v6 + 112);
                if ( *(_DWORD *)(v26 + 20) == 7 )
                {
                  *(_DWORD *)(v24 + 16) = *(_DWORD *)(*(_QWORD *)(v26 + 8) + 28LL);
                  *(_QWORD *)(v24 + 24) = v22;
                  *(_DWORD *)(v24 + 20) = v42;
                  v25 = *(_QWORD *)(v6 + 112);
                  *(_QWORD *)(v25 + 64) = *(_QWORD *)(v6 + 168);
                }
                if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
                  McTemplateK0p_EtwWriteTransfer(
                    v25,
                    (__int64)&DCompGetBatchEvent,
                    (__int64)&W32kControlGuid,
                    *(_QWORD *)(v6 + 112));
                v27 = *(__int64 **)(v6 + 112);
                v28 = *v27;
                *((_BYTE *)v27 + 32) |= 4u;
                v29 = v27[1];
                if ( *((_DWORD *)v27 + 5) == 7 )
                {
                  v30 = *(struct _ERESOURCE **)(v29 + 392);
                  if ( v30 )
                  {
                    DirectComposition::CCriticalSection::AcquireExclusive(v30);
                    if ( (*(_DWORD *)(v29 + 248))-- == 1 )
                      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v29 + 384) + 8LL), 1, 0);
                    ExReleaseResourceLite(*(PERESOURCE *)(v29 + 392));
                    KeLeaveCriticalRegion();
                  }
                }
                v31 = *(_QWORD **)(v6 + 128);
                v32 = *(_QWORD *)(v6 + 112);
                if ( v31 )
                  *v31 = v32;
                else
                  *(_QWORD *)(v6 + 120) = v32;
                v33 = *(_QWORD **)(v6 + 112);
                *(_QWORD *)(v6 + 128) = v33;
                *v33 = 0LL;
                *(_QWORD *)(v6 + 112) = v28;
                if ( v39 )
                  *(_QWORD *)(v39 + 8) = RDPHeaderUserMode;
                else
                  v40 = RDPHeaderUserMode;
                v39 = v24;
              }
              v45 = v40;
              *(_DWORD *)(v6 + 144) = 0;
            }
            else
            {
              Batches = -1073740024;
            }
          }
          else
          {
            Batches = -1073741300;
          }
LABEL_21:
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 16));
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
        }
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches((DirectComposition::CConnection *)v6, &v43);
        v45 = v43;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 && v6 )
        DirectComposition::CConnection::`scalar deleting destructor'((DirectComposition::CConnection *)v6);
    }
    KeLeaveCriticalRegion();
    if ( Batches >= 0 )
      RtlWriteULong64ToUser(v44, v45);
  }
  return (unsigned int)Batches;
}
