/*
 * XREFs of RtlpFindActivationContextSection_FillOutReturnedData @ 0x18005E054
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18002C1A0 (RtlFindActivationContextSectionString.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800BE160 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18002B600 (RtlpLocateActivationContextSection.c)
 *     RtlAddRefActivationContext @ 0x18005DDE0 (RtlAddRefActivationContext.c)
 */

__int64 __fastcall RtlpFindActivationContextSection_FillOutReturnedData(
        char a1,
        __int64 a2,
        _ACTIVATION_CONTEXT *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  char *NotificationContext; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // r8
  unsigned __int64 v20; // rdx
  _QWORD v21[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    return 3221225485LL;
  v12 = a5;
  if ( !a5 )
    return 3221225485LL;
  if ( !a2 )
    return 0LL;
  if ( a6 )
  {
    *(_QWORD *)(a2 + 24) = a5 + a6;
    *(_DWORD *)(a2 + 32) = a7;
  }
  *(_DWORD *)(a2 + 48) = a8;
  *(_QWORD *)(a2 + 40) = v12;
  if ( (a1 & 1) != 0 )
  {
    RtlAddRefActivationContext(a3);
    *(_QWORD *)(a2 + 56) = a3;
  }
  if ( (a1 & 2) != 0 )
    *(_DWORD *)(a2 + 68) = *(_DWORD *)(a4 + 24) & 3;
  if ( (a1 & 4) == 0 )
    return 0LL;
  v21[0] = 0LL;
  v22 = 0;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(a4 + 24) & 7u) <= 1 )
    {
      v14 = 760LL;
LABEL_17:
      NotificationContext = *(char **)(&NtCurrentPeb()->InheritedAddressSpace + v14);
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a4 + 24) & 7) != 2 )
    {
      if ( (*(_DWORD *)(a4 + 24) & 7) != 4 )
        return 3221225712LL;
      return 3221225701LL;
    }
LABEL_38:
    v14 = 776LL;
    goto LABEL_17;
  }
  if ( a3 == (_ACTIVATION_CONTEXT *)-3LL )
  {
    NotificationContext = "Actx ";
    goto LABEL_22;
  }
  if ( a3 == (_ACTIVATION_CONTEXT *)-4LL )
    goto LABEL_38;
  NotificationContext = (char *)a3->NotificationContext;
LABEL_18:
  if ( !NotificationContext )
    return 3221225701LL;
LABEL_22:
  *(_QWORD *)(a2 + 72) = &NotificationContext[*(unsigned int *)&NotificationContext[24 * *(unsigned int *)(a2 + 64)
                                                                                  + 16
                                                                                  + *(unsigned int *)&NotificationContext[*((unsigned int *)NotificationContext + 6) + 12]]];
  result = RtlpLocateActivationContextSection(NotificationContext, 0LL, 1u, v21, &v22);
  if ( (int)result >= 0 )
  {
    v16 = v21[0];
    v17 = v22;
    *(_QWORD *)(a2 + 80) = v21[0];
    *(_DWORD *)(a2 + 88) = v17;
    if ( v16 && (_DWORD)v17 )
    {
      v18 = (_DWORD *)(v17 + v16);
      v19 = v18 + 1;
      if ( v18 + 1 > (_DWORD *)((char *)v18 + v17) )
        return 3221225701LL;
      if ( v18 + 2 > (_DWORD *)((char *)v18 + v17) )
        return 3221225701LL;
      if ( *v18 != 1682469715 )
        return 3221225701LL;
      if ( *v19 > (unsigned int)v17 )
        return 3221225701LL;
      if ( (unsigned int)v17 < 0x2C )
        return 3221225701LL;
      if ( *v19 < 0x2Cu )
        return 3221225701LL;
      v20 = (unsigned __int64)v18 + (unsigned int)*v19;
      if ( (unsigned __int64)v19 > v20
        || (unsigned __int64)(v18 + 2) > v20
        || (unsigned __int64)(v18 + 10) > v20
        || (unsigned __int64)(v18 + 11) > v20 )
      {
        return 3221225701LL;
      }
      *(_QWORD *)(a2 + 96) = (char *)v18 + (unsigned int)v18[9];
      *(_DWORD *)(a2 + 104) = v18[10];
    }
    return 0LL;
  }
  return result;
}
