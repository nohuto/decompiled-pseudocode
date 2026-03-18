/*
 * XREFs of ?StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z @ 0x1402EF0F8
 * Callers:
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402EEAFC (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CursorApiRouter::StoreNewCursorShape(
        CursorApiRouter *this,
        struct _MIT_CURSOR_MANAGEMENT_SHAPEHEADER *a2,
        int a3)
{
  struct W32_PUSH_LOCK *v3; // rbx
  void *v7; // rcx
  unsigned int v8; // edi

  v3 = (CursorApiRouter *)((char *)this + 48);
  W32AcquirePushLockExclusiveEx((CursorApiRouter *)((char *)this + 48), 0);
  v7 = (void *)*((_QWORD *)this + 7);
  if ( v7 )
    Win32FreePool(v7);
  ++*((_DWORD *)this + 17);
  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 16) = a3;
  v8 = *((_DWORD *)this + 17);
  W32ReleasePushLockExclusiveEx(v3, 0LL);
  return v8;
}
