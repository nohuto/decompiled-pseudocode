/*
 * XREFs of ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x18006A4D0
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0 (-AdvanceFrame@CDeviceManager@@IEAA_NXZ.c)
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801355B0 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801357B0 (-Trim@CD3DDevice@@QEAAXXZ.c)
 * Callees:
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180135758 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180298CF0 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DResourceManager::DestroyReleasedResources(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rbx
  struct _SLIST_ENTRY *Next; // rax
  PSLIST_ENTRY v4; // r14
  struct _SLIST_ENTRY *v5; // rdx
  PSLIST_ENTRY *v6; // rcx

  v2 = InterlockedFlushSList(this + 1);
  if ( v2 )
  {
    while ( 1 )
    {
      Next = v2[-5].Next;
      v4 = v2 - 5;
      v2 = v2->Next;
      (*((void (__fastcall **)(PSLIST_ENTRY))&Next->Next + 1))(v4);
      if ( (*((int (__fastcall **)(PSLIST_ENTRY))&v4->Next[1].Next + 1))(v4) >= 0 )
        CD3DResource::Invalidate((CD3DResource *)v4);
      if ( BYTE4(v4[7].Next) )
      {
        if ( BYTE5(v4[7].Next) )
          CD2DContext::RemoveHwProtectedResource((CD2DContext *)(this[5].Alignment + 16));
        --*((_DWORD *)&this[4].HeaderX64 + 2);
      }
      ((void (__fastcall *)(PSLIST_ENTRY))v4->Next[7].Next)(v4);
      *((_QWORD *)&v4[2].Next + 1) = 0LL;
      v5 = v4[6].Next;
      if ( *(&v5->Next + 1) != &v4[6] || (v6 = (PSLIST_ENTRY *)*((_QWORD *)&v4[6].Next + 1), *v6 != &v4[6]) )
        __fastfail(3u);
      *v6 = v5;
      *((_QWORD *)&v5->Next + 1) = v6;
      LODWORD(this[3].Alignment) -= LODWORD(v4[7].Next);
      ((void (__fastcall *)(PSLIST_ENTRY))v4->Next[1].Next)(v4);
      ((void (__fastcall *)(PSLIST_ENTRY))v4->Next[1].Next)(v4);
      if ( !v2 )
      {
        v2 = InterlockedFlushSList(this + 1);
        if ( !v2 )
          break;
      }
    }
  }
}
