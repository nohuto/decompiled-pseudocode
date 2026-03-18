/*
 * XREFs of FreeDesktop @ 0x140243E30
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400C8028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x14019C1C0 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _CancelMagnificationInputTransform @ 0x1402032D0 (_CancelMagnificationInputTransform.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14020F980 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     CleanupIAMAccess @ 0x140219550 (CleanupIAMAccess.c)
 */

__int64 __fastcall FreeDesktop(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserGdiSessionState; // rax
  struct _KPROCESS *v6; // rax
  struct _KPROCESS *v7; // rdi
  void *v8; // rdi
  void *v9; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  if ( *(_QWORD *)(v1 + 224) )
    CancelMagnificationInputTransform();
  CleanupIAMAccess((struct tagDESKTOP *)v1, v3);
  *(_DWORD *)(v1 + 48) |= 4u;
  UserGdiSessionState = W32GetUserGdiSessionState(v4);
  FreeView(*(PRKPROCESS *)(UserGdiSessionState + 40), (struct tagDESKTOP *)v1);
  v6 = (struct _KPROCESS *)ReferenceDwmProcess();
  v7 = v6;
  if ( v6 )
  {
    FreeView(v6, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v7);
  }
  v8 = *(void **)(v1 + 136);
  if ( v8 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 136));
    v2 = MmUnmapViewInSessionSpace(v8);
    ObfDereferenceObject(*(PVOID *)(v1 + 128));
  }
  v9 = *(void **)(v1 + 8);
  if ( v9 )
    Win32FreePool(v9);
  DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD **)(v1 + 40));
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  return v2;
}
