/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x140A7D6D8
 * Callers:
 *     NtAlpcQueryInformation @ 0x140A7D210 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     AlpcpReferenceConnectedPort @ 0x140905270 (AlpcpReferenceConnectedPort.c)
 *     SeQueryUserSidToken @ 0x1409C9AA0 (SeQueryUserSidToken.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(void *a1, PVOID a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 result; // rax
  PVOID v12; // r14
  signed __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  _QWORD *v17; // r13
  signed __int64 *v18; // rdi
  void *v19; // rdx
  LegacyAutoBoost *v20; // rsi
  unsigned int v21; // ebx
  ULONG_PTR v22; // rbx
  int v23; // [rsp+20h] [rbp-E8h]
  PVOID P[5]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE Sid2[80]; // [rsp+70h] [rbp-98h] BYREF

  P[3] = a1;
  P[2] = a2;
  P[0] = 0LL;
  memset_0(Sid2, 0, 0x44uLL);
  if ( !a1 )
    return 3221225485LL;
  if ( a4 )
  {
    if ( a5 )
      RtlWriteULongToUser(a4, 0);
    else
      *a4 = 0;
  }
  LOBYTE(v8) = a5;
  if ( a5 )
  {
    result = SeCaptureSid((char *)a2, a5, v9, (__int64)v10, v23, 1, P);
    v12 = P[0];
  }
  else
  {
    v12 = a2;
    P[0] = a2;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    v13 = 0LL;
    v14 = AlpcpReferenceConnectedPort((__int64)a1, v8, v9, v10);
    v17 = (_QWORD *)v14;
    if ( v14 )
    {
      v18 = (signed __int64 *)(v14 + 352);
      v20 = (LegacyAutoBoost *)KeAbPreAcquire(v14 + 352, 0LL, 0LL, v16);
      if ( _InterlockedCompareExchange64(v18, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v18, 0, v20, (struct _KTHREAD *)v18);
      if ( v20 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v20, v19);
        else
          *((_BYTE *)v20 + 10) = 1;
      }
      v13 = 0LL;
      if ( (v17[3] & 1) == 0 )
        v13 = (signed __int64 *)v17[3];
      if ( v13 )
        ObfReferenceObjectWithTag(v13, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((unsigned __int64)v18);
      ObfDereferenceObject(v17);
    }
    if ( v13 )
    {
      v22 = PsReferencePrimaryTokenWithTag((__int64)v13, 0x746C6644u, v15, v16);
      SeQueryUserSidToken(v22, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject(v13 + 73, v22, 0x746C6644u);
      v21 = RtlEqualSid(v12, Sid2) == 0 ? 0xC00002A0 : 0;
      ObfDereferenceObjectWithTag(v13, 0x63706C41u);
    }
    else
    {
      v21 = -1073741769;
    }
    if ( (unsigned __int8)a5 <= 1u && v12 != a2 )
      ExFreePoolWithTag(v12, 0);
    return v21;
  }
  return result;
}
