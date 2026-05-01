/*
 * XREFs of ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1801FECD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1804014B8 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::IsApplicationVisibleInContactPanel(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        int *a3)
{
  RTL_SRWLOCK *v3; // rdi
  PeoplePaneViewManager *v7; // rcx
  __int64 *Ptr; // rbp
  __int64 *i; // rbx
  __int64 v10; // rax
  HWND v11; // rdx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = this + 5;
  AcquireSRWLockShared(this + 5);
  Ptr = (__int64 *)this[7].Ptr;
  for ( i = (__int64 *)this[6].Ptr; i != Ptr; i += 2 )
  {
    v10 = *i;
    v13 = 0;
    v11 = *(HWND *)(v10 + 48);
    if ( v11 && (int)PeoplePaneViewManager::IsWindowVisibleInContactPanel(v7, v11, a2, &v13) >= 0 && v13 )
    {
      *a3 = 1;
      break;
    }
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
