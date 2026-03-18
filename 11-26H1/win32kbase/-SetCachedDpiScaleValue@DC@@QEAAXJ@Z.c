/*
 * XREFs of ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950
 * Callers:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140012F1C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?vDisableDpiScaleTransform@DC@@QEAAXXZ @ 0x140039194 (-vDisableDpiScaleTransform@DC@@QEAAXXZ.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x14003925C (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400392A4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039390 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     ?GreAcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140057520 (-GreAcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140057650 (-GreReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

void __fastcall DC::SetCachedDpiScaleValue(DC *this, int a2)
{
  char *v4; // r14
  __int64 v5; // rdi
  struct _ENTRY *v6; // r15
  struct W32_PUSH_LOCK *v7; // rbx
  unsigned int v8; // edi
  _DWORD *v9; // rax

  v4 = (char *)this + 976;
  if ( *(_DWORD *)(*((_QWORD *)this + 122) + 136LL) != a2 )
  {
    v5 = *(_QWORD *)(W32GetSessionState(this) + 88);
    v6 = DC::PentryFromPobj(this, (struct Gre::Base::SESSION_GLOBALS *)v5);
    if ( v6 )
    {
      v7 = (struct W32_PUSH_LOCK *)(v5 + 2264);
      if ( v5 != -2264 )
        GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v5 + 2264));
      v8 = *((_DWORD *)v6 + 2) & 0xFFFFFFFE;
      if ( v8 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v9 = GreDecodeUserModePointer(*((void **)v6 + 2));
        if ( v9 )
          v9[34] = a2;
      }
      if ( v7 )
        GreReleasePushLockShared(v7);
    }
    *(_DWORD *)(*(_QWORD *)v4 + 136LL) = a2;
  }
}
