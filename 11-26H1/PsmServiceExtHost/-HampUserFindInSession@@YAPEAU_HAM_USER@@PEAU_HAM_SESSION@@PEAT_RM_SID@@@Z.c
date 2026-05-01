/*
 * XREFs of ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x180037D28
 * Callers:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18007A570 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180038C80 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 */

struct _HAM_USER *__fastcall HampUserFindInSession(struct _HAM_SESSION *a1, union _RM_SID *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  int v5; // esi
  int v6; // eax
  unsigned __int64 v7; // rax

  v2 = (unsigned __int64)a1 + 40;
  RtlAcquireSRWLockShared((char *)a1 + 56);
  v4 = *(_QWORD *)v2;
  v5 = *(_BYTE *)(v2 + 8) & 1;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
  {
    if ( v4 )
    {
      v4 ^= v2;
      goto LABEL_9;
    }
    goto LABEL_17;
  }
LABEL_9:
  while ( v4 )
  {
    v6 = HampUserCompareByIdentity(a2, (void *)v4);
    if ( v6 < 0 )
    {
      v7 = *(_QWORD *)v4;
    }
    else
    {
      if ( v6 <= 0 )
        break;
      v7 = *(_QWORD *)(v4 + 8);
    }
    if ( v5 && v7 )
      v4 ^= v7;
    else
      v4 = v7;
  }
  if ( v4 )
  {
    if ( !*(_QWORD *)(v4 + 24) )
    {
LABEL_17:
      v4 = 0LL;
      goto LABEL_13;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_13:
  RtlReleaseSRWLockShared(v2 + 16);
  return (struct _HAM_USER *)v4;
}
