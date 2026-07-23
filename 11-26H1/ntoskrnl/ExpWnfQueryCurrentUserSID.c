/*
 * XREFs of ExpWnfQueryCurrentUserSID @ 0x1409C9978
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x1409C8634 (ExpWnfGetCurrentScopeInstance.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryUserSidToken @ 0x1409C9AA0 (SeQueryUserSidToken.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall ExpWnfQueryCurrentUserSID(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4, _DWORD *a5)
{
  int v5; // ebx
  void *v9; // rdi
  int v10; // r14d
  int UserSidToken; // ebp
  void *v13; // rax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  int v15[9]; // [rsp+34h] [rbp-24h] BYREF
  char v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  v14 = 0;
  v15[0] = 0;
  if ( !a2 )
  {
    v9 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x74726853u, a3, a4);
    v10 = 1;
LABEL_3:
    UserSidToken = SeQueryUserSidToken(v9, a3, LODWORD(a4->Thread));
    if ( v10 == 1 )
    {
      ObFastDereferenceObject((signed __int64 *)(a1 + 584), (ULONG_PTR)v9, 0x74726853u);
    }
    else if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x74726853u);
    }
    if ( UserSidToken >= 0 )
    {
      LOBYTE(v5) = v10 == 1;
      *a5 = v5;
    }
    return (unsigned int)UserSidToken;
  }
  v13 = (void *)PsReferenceEffectiveToken(a2, 1953654867LL, &v14, &v16, v15, 0LL);
  v9 = v13;
  v10 = v14;
  if ( v15[0] >= 2 || v14 != 2 )
    goto LABEL_3;
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x74726853u);
  return 3221225637LL;
}
