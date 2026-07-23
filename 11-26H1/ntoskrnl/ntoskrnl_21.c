/*
 * XREFs of ntoskrnl_21 @ 0x140A841F0
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1406D11AC (ExpGetLicenseTamperState.c)
 *     sub_14083E550 @ 0x14083E550 (sub_14083E550.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     sub_140A84308 @ 0x140A84308 (sub_140A84308.c)
 */

__int64 __fastcall ntoskrnl_21(__int64 a1, _OWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v6; // rbx
  void *v7; // rdx
  LegacyAutoBoost *v8; // rdi
  _QWORD *v9; // rax
  _OWORD *v10; // rax
  unsigned int v11; // edi
  _OWORD *v13; // [rsp+68h] [rbp+10h] BYREF
  _OWORD *v14; // [rsp+70h] [rbp+18h]

  if ( a2 )
  {
    v6 = (signed __int64 *)(a1 + 47024);
    v8 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 47024, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, 0, v8, (struct _KTHREAD *)v6);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v9 = *(_QWORD **)(a1 + 47016);
    if ( v9 )
    {
      v14 = (_OWORD *)*v9;
      v13 = v14;
      sub_140A84308(&v13);
      v10 = v13;
      v14 = v13;
      v11 = 0;
      *a2 = *v13;
      a2[1] = v10[1];
      a2[2] = v10[2];
    }
    else
    {
      v11 = -1073741275;
    }
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((unsigned __int64)v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
