/*
 * XREFs of UnmapDesktop @ 0x140243FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400C8028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x14019C1C0 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x140242920 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall UnmapDesktop(__int64 a1)
{
  struct tagDESKTOP *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 UserGdiSessionState; // rax
  struct _KPROCESS *v6; // rcx
  __int64 v7; // rdx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(struct tagDESKTOP **)(a1 + 24);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(*(_QWORD *)(a1 + 24) - 40LL) + 1;
  v4 = ReferenceDwmProcess();
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v3);
    v6 = *(struct _KPROCESS **)(a1 + 16);
    if ( v6 != *(struct _KPROCESS **)(UserGdiSessionState + 40) && v6 != (struct _KPROCESS *)v4 )
      FreeView(v6, v1);
  }
  DereferenceDwmProcess(v4);
  if ( *(_DWORD *)(a1 + 36) == 1 )
    DestroyDesktop(v1, v7);
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  return 0LL;
}
