/*
 * XREFs of ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14001A938
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x140018B54 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140019460 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001AB70 (-PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropert.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x14001C740 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x1400554B0 (-InFrame@CFlipContentToken@@QEAAJPEA_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::ConsumerDwmProcessUpdateTokens(
        CFlipManager *this,
        struct CFlipPropertySet **a2,
        struct CFlipManagerToken *a3,
        struct _LIST_ENTRY *a4)
{
  bool v4; // zf
  CEndpointResourceStateManager *v5; // rbx
  char *v7; // r15
  NTSTATUS updated; // esi
  struct _LIST_ENTRY *Flink; // rcx
  char *p_Blink; // rbx
  struct _LIST_ENTRY *v13; // rdi
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY **v15; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v20; // rdx
  char *v21; // rbx
  struct _LIST_ENTRY *v22; // rax
  struct _LIST_ENTRY v23; // [rsp+30h] [rbp-38h] BYREF
  bool v24; // [rsp+70h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 84) == 2;
  v23.Blink = &v23;
  v5 = (CFlipManager *)((char *)this + 104);
  v23.Flink = &v23;
  v7 = (char *)this - 32;
  updated = CEndpointResourceStateManager::PrepareUpdateTokens(
              (CFlipManager *)((char *)this + 104),
              (struct FlipManagerObject *)a2,
              a2[7],
              v4,
              &v23);
  if ( updated < 0 )
    goto LABEL_15;
  CEndpointResourceStateManager::CommitPendingUpdates(v5);
  do
  {
    while ( 1 )
    {
      Flink = v23.Flink;
      if ( v23.Flink == &v23 )
        goto LABEL_16;
      p_Blink = (char *)&v23.Flink[-1].Blink;
      v13 = v23.Flink;
      v14 = v23.Flink->Flink;
      if ( v23.Flink->Flink->Blink != v23.Flink
        || (v15 = (struct _LIST_ENTRY **)*((_QWORD *)p_Blink + 2), *v15 != v23.Flink) )
      {
LABEL_13:
        __fastfail(3u);
      }
      *v15 = v14;
      v14->Blink = (struct _LIST_ENTRY *)v15;
      updated = ObReferenceObjectByPointer(v7, 3u, g_pDxgkCompositionObjectType, 0);
      if ( updated < 0 )
        break;
      *((_QWORD *)p_Blink + 16) = *((_QWORD *)a3 + 14);
      CFlipContentToken::SetFlipManagerObjectPreReferenced((CFlipContentToken *)p_Blink, (struct FlipManagerObject *)v7);
      *((_QWORD *)p_Blink + 15) = a2[8];
      IsEnabledDeviceUsageNoInline = Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline();
      v17 = *((_QWORD *)a3 + 10);
      if ( !IsEnabledDeviceUsageNoInline || v17 )
      {
        p_Blink[232] = *(_BYTE *)(v17 + 28);
        p_Blink[235] = *(_BYTE *)(v17 + 85);
        p_Blink[233] = *(_BYTE *)(v17 + 86);
        p_Blink[234] = *(_BYTE *)(v17 + 84);
        *((_QWORD *)p_Blink + 30) = *(_QWORD *)(v17 + 72);
        *((_DWORD *)p_Blink + 62) = *(_DWORD *)(v17 + 64);
        *((_DWORD *)p_Blink + 63) = *(_DWORD *)(v17 + 80);
        *((_QWORD *)p_Blink + 32) = *(_QWORD *)(v17 + 56);
      }
      updated = CFlipContentToken::InFrame((CFlipContentToken *)p_Blink, &v24);
      if ( updated < 0 || !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)p_Blink + 152LL))(p_Blink) )
        break;
      Blink = a4->Blink;
      if ( Blink->Flink != a4 )
        goto LABEL_13;
      v13->Flink = a4;
      v13->Blink = Blink;
      Blink->Flink = v13;
      a4->Blink = v13;
    }
    (*(void (__fastcall **)(char *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
    (**(void (__fastcall ***)(char *, __int64))p_Blink)(p_Blink, 1LL);
  }
  while ( updated >= 0 );
LABEL_15:
  while ( 1 )
  {
    Flink = v23.Flink;
LABEL_16:
    if ( Flink == &v23 )
      return (unsigned int)updated;
    v20 = Flink->Flink;
    v21 = (char *)&Flink[-1].Blink;
    if ( Flink->Flink->Blink != Flink )
      goto LABEL_13;
    v22 = Flink->Blink;
    if ( v22->Flink != Flink )
      goto LABEL_13;
    v22->Flink = v20;
    v20->Blink = v22;
    (*(void (__fastcall **)(struct _LIST_ENTRY **))(*(_QWORD *)v21 + 56LL))(&Flink[-1].Blink);
    (**(void (__fastcall ***)(char *, __int64))v21)(v21, 1LL);
  }
}
