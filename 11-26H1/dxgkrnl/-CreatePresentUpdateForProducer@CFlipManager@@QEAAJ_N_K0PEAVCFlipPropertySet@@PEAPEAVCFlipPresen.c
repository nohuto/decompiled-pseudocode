/*
 * XREFs of ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140022F48
 * Callers:
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x140023904 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z @ 0x140023138 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140023B84 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140024EA8 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::CreatePresentUpdateForProducer(
        CFlipManager *this,
        char a2,
        __int64 a3,
        unsigned __int8 a4,
        struct CFlipPropertySet *a5,
        struct CFlipPresentUpdate **a6,
        struct FlipManagerTokenIFlipInfo **a7)
{
  __int64 *v7; // r14
  int v8; // r15d
  int v12; // esi
  __int64 v14; // rax
  struct CFlipPresentUpdate *v15; // rbx
  __int64 v16; // r9
  _QWORD *v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // r9
  struct FlipManagerObject *v20; // r8
  CEndpointResourceStateManager *v21; // rcx
  int v22; // eax
  struct CFlipPresentUpdate *v23; // rcx
  unsigned int TracingId; // eax
  CFlipPropertySetBase *v25; // rcx
  CFlipManager::PresentHistory *v26; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v7 = (__int64 *)((char *)this + 232);
  v8 = a4;
  v12 = -1073741823;
  if ( *((_QWORD *)this + 6) == 1LL && (unsigned __int64)*v7 > 0xFFFFFFFF )
    CFlipManager::MarkAsLost(this, 3221225473LL, 22LL);
  if ( !*((_BYTE *)this + 32) )
  {
    v14 = DXGQUOTAALLOCATOR<256,1970291526>::operator new();
    v15 = (struct CFlipPresentUpdate *)v14;
    if ( v14 )
    {
      v16 = *v7;
      *(_QWORD *)(v14 + 8) = 0LL;
      v17 = (_QWORD *)((v14 + 24) & -(__int64)(v14 != -16));
      v17[1] = v17;
      *v17 = v17;
      *(_QWORD *)v14 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
      *(_QWORD *)(v14 + 16) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
      *(_DWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0LL;
      *(_QWORD *)(v14 + 56) = 0LL;
      *(_QWORD *)(v14 + 64) = v16;
      *(_BYTE *)(v14 + 72) = a2;
      *(_QWORD *)(v14 + 80) = a3;
      *(_DWORD *)(v14 + 88) = 0;
      v18 = *((_DWORD *)this + 84);
      if ( !v18 )
      {
        v18 = v8 + 1;
        *((_DWORD *)this + 84) = v8 + 1;
      }
      v19 = *((_QWORD *)this + 46);
      v20 = (CFlipManager *)((char *)this - 32);
      v21 = (CFlipManager *)((char *)this + 56);
      if ( v18 == 2 )
        v22 = CEndpointResourceStateManager::PrepareCompTexOptimizedUpdateForStateManager(v21, v15, v20, v19);
      else
        v22 = CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(v21, v15, v20, v19);
      v12 = v22;
      v23 = v15;
      if ( v22 < 0
        || *((_QWORD *)this + 6) == 1LL
        && (TracingId = CFlipManager::GetTracingId(this),
            v12 = CEndpointResourceStateManager::PrepareIFlipInfo(
                    (CFlipManager *)((char *)this + 56),
                    a5,
                    TracingId,
                    v15,
                    a7),
            v23 = v15,
            v12 < 0) )
      {
        (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v23 + 24LL))(v23, 1LL);
      }
      else
      {
        if ( a5 )
          ++*((_DWORD *)a5 + 2);
        v25 = (CFlipPropertySetBase *)*((_QWORD *)v15 + 7);
        if ( v25 )
          CFlipPropertySetBase::Release(v25);
        *((_QWORD *)v15 + 7) = a5;
        v26 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
        if ( v26 )
        {
          NextEntry = CFlipManager::PresentHistory::GetNextEntry(v26);
          *((_DWORD *)NextEntry + 10) = 0;
          *((_QWORD *)NextEntry + 2) = *((_QWORD *)v15 + 8);
        }
        *a6 = v15;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v12;
}
