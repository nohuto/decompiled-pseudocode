/*
 * XREFs of RtlDefaultNpAcl @ 0x18005B710
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x18003CC00 (RtlpAddKnownAce.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlGetAppContainerSidType @ 0x1800590E0 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x180059570 (RtlGetAppContainerParent.c)
 *     RtlCreateAcl @ 0x18005D4F0 (RtlCreateAcl.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDefaultNpAcl(char **a1)
{
  __int64 *v2; // rdi
  unsigned __int8 *v3; // rsi
  unsigned __int8 **Heap_0; // r15
  int AppContainerSidType; // ebx
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rax
  char *v9; // rcx
  char *v10; // rcx
  char *v11; // rcx
  char *v12; // rcx
  int AppContainerParent; // eax
  int v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+44h] [rbp-2Ch] BYREF
  int v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 Src; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]

  v15 = 0;
  v16 = 0;
  *a1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  Src = 0LL;
  v17 = 0;
  Heap_0 = (unsigned __int8 **)RtlAllocateHeap_0();
  if ( Heap_0 )
  {
    AppContainerSidType = NtQueryInformationToken(-6LL, 4LL, Heap_0, 76LL, &v15);
    if ( AppContainerSidType < 0 )
      goto LABEL_19;
    if ( (int)NtQueryInformationToken(-6LL, 29LL, &v16, 4LL, &v15) < 0 || !v16 )
      goto LABEL_5;
    v2 = (__int64 *)RtlAllocateHeap_0();
    if ( !v2 )
    {
      AppContainerSidType = -1073741801;
LABEL_17:
      if ( v3 )
        RtlFreeHeap_0();
LABEL_19:
      RtlFreeHeap_0();
      if ( AppContainerSidType >= 0 )
        return (unsigned int)AppContainerSidType;
      goto LABEL_29;
    }
    AppContainerSidType = NtQueryInformationToken(-6LL, 31LL, v2, 76LL, &v15);
    if ( AppContainerSidType >= 0 )
    {
      AppContainerSidType = RtlGetAppContainerSidType(*v2, &v17);
      if ( AppContainerSidType >= 0 )
      {
        if ( v17 != 1
          || (AppContainerParent = RtlGetAppContainerParent(*v2, &Src),
              v3 = (unsigned __int8 *)Src,
              AppContainerSidType = AppContainerParent,
              AppContainerParent >= 0) )
        {
LABEL_5:
          v6 = 52;
          if ( v2 )
            v6 = 4 * *(unsigned __int8 *)(*v2 + 1) + 68;
          if ( v3 )
            v6 += 4 * v3[1] + 16;
          v7 = v6 + 4 * ((*Heap_0)[1] + 14);
          v8 = RtlAllocateHeap_0();
          *a1 = (char *)v8;
          if ( v8 )
          {
            RtlCreateAcl(v8, v7, 2LL);
            v9 = *a1;
            Src = 0x500000000000101LL;
            v19 = 18;
            RtlpAddKnownAce(v9, 2u, 0, 0x10000000, (unsigned __int8 *)&Src, 0);
            v10 = *a1;
            Src = 0x500000000000201LL;
            v19 = 32;
            v20 = 544;
            RtlpAddKnownAce(v10, 2u, 0, 0x10000000, (unsigned __int8 *)&Src, 0);
            if ( v2 )
              RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, (unsigned __int8 *)*v2, 0);
            if ( v3 )
              RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, v3, 0);
            RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, *Heap_0, 0);
            v11 = *a1;
            Src = 0x100000000000101LL;
            v19 = 0;
            RtlpAddKnownAce(v11, 2u, 0, 0x80000000, (unsigned __int8 *)&Src, 0);
            v12 = *a1;
            Src = 0x500000000000101LL;
            v19 = 7;
            RtlpAddKnownAce(v12, 2u, 0, 0x80000000, (unsigned __int8 *)&Src, 0);
            AppContainerSidType = 0;
          }
          else
          {
            AppContainerSidType = -1073741801;
          }
          if ( !v2 )
            goto LABEL_17;
        }
      }
    }
    RtlFreeHeap_0();
    goto LABEL_17;
  }
  AppContainerSidType = -1073741801;
LABEL_29:
  if ( *a1 )
  {
    RtlFreeHeap_0();
    *a1 = 0LL;
  }
  return (unsigned int)AppContainerSidType;
}
