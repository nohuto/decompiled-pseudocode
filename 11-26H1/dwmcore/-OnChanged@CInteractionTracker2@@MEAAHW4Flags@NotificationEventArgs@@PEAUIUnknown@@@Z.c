/*
 * XREFs of ?OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180274600
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18013D9E8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?CheckForIdle@CInteractionTracker2@@AEAAXXZ @ 0x180272600 (-CheckForIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2::OnChanged(__int64 a1, int a2, struct CResource *a3)
{
  __int64 v6; // r9
  void (__fastcall **v7)(struct CResource *, GUID *, __int64 *, __int64); // rax
  unsigned int v9; // edi
  __int64 *v10; // r14
  __int64 TargetResource; // rax
  char *v12; // rdi
  char v13; // bp
  struct CResource *v14; // rdx
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = (unsigned int)(a2 - 7);
  if ( a2 == 7 )
    goto LABEL_6;
  if ( a2 == 8 || a2 == 9 )
  {
    if ( a3 )
    {
      v9 = 0;
      v10 = (__int64 *)(a1 + 672);
      while ( v9 < 2 )
      {
        if ( *v10 )
        {
          TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*v10);
          if ( TargetResource )
          {
            if ( (struct CResource *)TargetResource == a3 )
            {
              CInteractionTracker2::StopCustomAnimation((CInteractionTracker2 *)a1, v9, 0);
              if ( *(_DWORD *)(a1 + 88) == 3 )
                CInteractionTracker2::CheckForIdle((CInteractionTracker2 *)a1);
              return 1LL;
            }
          }
        }
        ++v9;
        ++v10;
      }
      v12 = (char *)v15;
      v15[0] = *(_QWORD *)(a1 + 784);
      v13 = 0;
      v15[1] = *(_QWORD *)(a1 + 792);
      do
      {
        v14 = *(struct CResource **)v12;
        if ( *(_QWORD *)v12 && v14 == a3 )
        {
          v13 = 1;
          CResource::UnRegisterNotifierInternal((CResource *)a1, v14);
          *(_BYTE *)(*(_QWORD *)v12 + 216LL) &= ~1u;
        }
        v12 += 8;
      }
      while ( v12 != &v16 );
      if ( v13 )
        CExpressionManager::Invalidate(*(CExpressionManager **)(*(_QWORD *)(a1 + 24) + 816LL));
    }
  }
  else
  {
    v6 = (unsigned int)(a2 - 10);
    if ( a2 == 10 || (v6 = (unsigned int)(a2 - 12), (unsigned int)v6 <= 1) )
    {
LABEL_6:
      v7 = *(void (__fastcall ***)(struct CResource *, GUID *, __int64 *, __int64))a3;
      v17 = 0LL;
      (*v7)(a3, &GUID_c3c5a1de_4dff_4600_9562_70179f475db1, &v17, v6);
      InteractionSourceManager::OnManipulationChanged(
        (InteractionSourceManager *)(a1 + 528),
        a2,
        (const struct CManipulation *)((v17 - 80) & -(__int64)(v17 != 0)));
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
    }
  }
  return 1LL;
}
