/*
 * XREFs of ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400BB7AC
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1400C71A0 (NtDCompositionGetConnectionBatch.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14003E5F0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetRDPHeaderUserMode@CBatch@DirectComposition@@QEAAPEAUUCE_RDP_HEADER@@XZ @ 0x1400BBBBC (-GetRDPHeaderUserMode@CBatch@DirectComposition@@QEAAPEAUUCE_RDP_HEADER@@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetBatchesFromFrame(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  __int64 v4; // rcx
  int v6; // ebx
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r8
  _QWORD **v10; // rcx
  __int64 v11; // r13
  const struct UCE_RDP_HEADER *v12; // rsi
  bool v13; // bp
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rax
  DirectComposition::CBatch *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r15
  struct UCE_RDP_HEADER *RDPHeaderUserMode; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rsi
  struct _ERESOURCE *v30; // rcx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *i; // rdx
  __int64 v39; // rcx
  struct UCE_RDP_HEADER *v40; // [rsp+50h] [rbp-68h]
  struct UCE_RDP_HEADER *v41; // [rsp+58h] [rbp-60h]
  __int64 v42; // [rsp+60h] [rbp-58h] BYREF
  __int64 v43[10]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v45; // [rsp+C8h] [rbp+10h]
  const struct UCE_RDP_HEADER **v46; // [rsp+D0h] [rbp+18h]
  __int64 v47; // [rsp+D8h] [rbp+20h] BYREF

  v46 = a3;
  v45 = a2;
  v4 = *((_QWORD *)this + 24);
  v44 = 0LL;
  v6 = -1073741275;
  if ( v4 )
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, a2, &v44);
  if ( v6 >= 0 )
  {
    v7 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v7, 1u);
    if ( *((_DWORD *)this + 37) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) == 2 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 64LL))(v44);
        if ( v8 )
          v9 = *(_QWORD **)(v8 + 8);
        else
          v9 = 0LL;
        v10 = (_QWORD **)*((_QWORD *)this + 14);
        if ( v10 )
        {
          for ( i = *v10; i; i = (_QWORD *)*i )
            v10 = (_QWORD **)i;
          *v10 = v9;
        }
        else
        {
          *((_QWORD *)this + 14) = v9;
        }
        v41 = 0LL;
        v6 = 0;
        v11 = 0LL;
        v12 = 0LL;
        if ( a2
          || (v39 = *((_QWORD *)this + 14)) == 0
          || (v13 = 1, (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 8) + 8LL))(*(_QWORD *)(v39 + 8)) == 2) )
        {
          v13 = 0;
        }
        while ( 1 )
        {
          v14 = (_QWORD *)*((_QWORD *)this + 14);
          if ( !v14 || v13 )
            break;
          v6 = 0;
          v15 = (_QWORD *)v14[17];
          v16 = v14[18] + 40LL;
          v17 = v14[19];
          v18 = v15[6];
          if ( !v18 )
          {
            v35 = v15[2];
            v36 = v15[3];
            v43[0] = 0LL;
            v42 = 0LL;
            v47 = 0LL;
            v6 = MmMapViewOfSection(v36, *(_QWORD *)(v35 + 16), &v47, 0LL, 4096LL, v43, &v42, 2, 0x400000, 2);
            if ( v6 < 0 )
              goto LABEL_28;
            v18 = v47;
            v15[6] = v47;
          }
          v19 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
          v20 = v18 + v16;
          v21 = *((_QWORD *)v19 + 18) + *(_QWORD *)(*((_QWORD *)v19 + 17) + 56LL);
          RDPHeaderUserMode = DirectComposition::CBatch::GetRDPHeaderUserMode(v19);
          v24 = *((_QWORD *)this + 14);
          v40 = RDPHeaderUserMode;
          v25 = *(unsigned int *)(v24 + 20);
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_DWORD *)(v21 + 4) = 40;
          *(_DWORD *)v21 = v25;
          v26 = *((_QWORD *)this + 14);
          if ( *(_DWORD *)(v26 + 20) == 7 )
          {
            v25 = *(unsigned int *)(*(_QWORD *)(v26 + 8) + 28LL);
            *(_DWORD *)(v21 + 16) = v25;
            *(_QWORD *)(v21 + 24) = v20;
            *(_DWORD *)(v21 + 20) = v17;
            v24 = *((_QWORD *)this + 14);
            *(_QWORD *)(v24 + 64) = *((_QWORD *)this + 21);
            v26 = *((_QWORD *)this + 14);
          }
          if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
            McTemplateK0p_EtwWriteTransfer(v24, (__int64)&DCompGetBatchEvent, (__int64)&W32kControlGuid, v26);
          v27 = **((_QWORD **)this + 14);
          if ( !v45 && v27 )
            v13 = (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v27 + 8) + 8LL))(
                    *(_QWORD *)(v27 + 8),
                    v25,
                    v23,
                    v26) != 2;
          v28 = *((_QWORD *)this + 14);
          *(_BYTE *)(v28 + 32) |= 4u;
          v29 = *(_QWORD *)(v28 + 8);
          if ( *(_DWORD *)(v28 + 20) == 7 )
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
          v31 = (_QWORD *)*((_QWORD *)this + 16);
          v32 = *((_QWORD *)this + 14);
          if ( v31 )
            *v31 = v32;
          else
            *((_QWORD *)this + 15) = v32;
          v33 = (_QWORD *)*((_QWORD *)this + 14);
          v12 = v40;
          *((_QWORD *)this + 16) = v33;
          *v33 = 0LL;
          *((_QWORD *)this + 14) = v27;
          if ( v11 )
          {
            *(_QWORD *)(v11 + 8) = v40;
            v12 = v41;
          }
          else
          {
            v41 = v40;
          }
          v11 = v21;
        }
        *v46 = v12;
        *((_DWORD *)this + 36) = 0;
      }
      else
      {
        v6 = -1073740024;
      }
    }
    else
    {
      v6 = -1073741300;
    }
LABEL_28:
    ExReleaseResourceLite(*((PERESOURCE *)this + 2));
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
  }
  return (unsigned int)v6;
}
