/*
 * XREFs of ?QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015EB40
 * Callers:
 *     ?QueryInterface@CShellSnapComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0E20 (-QueryInterface@CShellSnapComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0E30 (-QueryInterface@CShellSnapComponent@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0E40 (-QueryInterface@CShellSnapComponent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0E50 (-QueryInterface@CShellSnapComponent@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0E60 (-QueryInterface@CShellSnapComponent@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0E70 (-QueryInterface@CShellSnapComponent@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0E90 (-QueryInterface@CShellSnapComponent@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0EB0 (-QueryInterface@CShellSnapComponent@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0ED0 (-QueryInterface@CShellSnapComponent@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0EF0 (-QueryInterface@CShellSnapComponent@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0F10 (-QueryInterface@CShellSnapComponent@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0F30 (-QueryInterface@CShellSnapComponent@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0F50 (-QueryInterface@CShellSnapComponent@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0F70 (-QueryInterface@CShellSnapComponent@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18015ED00 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent@@UISnap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShellSnapComponent::QueryInterface(CShellSnapComponent *this, const struct _GUID *a2, char **a3)
{
  unsigned int v3; // edi
  int CanCastTo; // ebx
  char *v6; // r9
  char *v7; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( !a2->Data1 )
  {
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_5;
    }
LABEL_21:
    *a3 = (char *)this;
    (*(void (__fastcall **)(CShellSnapComponent *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  if ( a2->Data1 == -1350114592 && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
  {
    if ( *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_9;
      }
      goto LABEL_5;
    }
    goto LABEL_21;
  }
LABEL_5:
  this = (CShellSnapComponent *)((char *)this + 8);
  if ( a2->Data1 != -62389853
    || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    v6 = (char *)this + 40;
    if ( a2->Data1 == -428157847
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4]
      || (v6 = (char *)this + 48, a2->Data1 == 1834041537)
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = v6;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = -2147467262;
    }
    if ( CanCastTo == -2147467262 )
    {
      v7 = (char *)this + 104;
      if ( a2->Data1 == 56
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = v7;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::CanCastTo(
                      v7 + 8,
                      a2,
                      a3,
                      v6);
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_10;
  }
LABEL_9:
  *a3 = (char *)this;
  CanCastTo = 0;
LABEL_10:
  (*(void (__fastcall **)(char *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
