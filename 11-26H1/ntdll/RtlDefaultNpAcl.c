/*
 * XREFs of RtlDefaultNpAcl @ 0x180045C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180027170 (RtlpAddKnownAce.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlGetAppContainerSidType @ 0x180043660 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x180043AF0 (RtlGetAppContainerParent.c)
 *     RtlCreateAcl @ 0x180047A70 (RtlCreateAcl.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlDefaultNpAcl(PACL *Acl)
{
  PVOID v2; // rdi
  unsigned __int8 *v3; // rsi
  void *ProcessHeap; // rcx
  PVOID Heap_0; // r15
  int v6; // ebx
  int v7; // edx
  ULONG v8; // ebx
  ACL *v9; // rax
  ACL *v10; // rcx
  ACL *v11; // rcx
  ACL *v12; // rcx
  ACL *v13; // rcx
  NTSTATUS AppContainerParent; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp-30h] BYREF
  int TokenInformation; // [rsp+44h] [rbp-2Ch] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp-28h] BYREF
  PSID AppContainerSidParent; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+5Ch] [rbp-14h]

  ReturnLength = 0;
  TokenInformation = 0;
  *Acl = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  AppContainerSidParent = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  Heap_0 = RtlAllocateHeap_0(ProcessHeap, 0, 0x4CuLL);
  if ( Heap_0 )
  {
    v6 = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 4u, Heap_0, 0x4Cu, &ReturnLength);
    if ( v6 < 0 )
      goto LABEL_19;
    if ( NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Du, &TokenInformation, 4u, &ReturnLength) < 0
      || !TokenInformation )
    {
      goto LABEL_5;
    }
    v2 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x4CuLL);
    if ( !v2 )
    {
      v6 = -1073741801;
LABEL_17:
      if ( v3 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3);
LABEL_19:
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
      if ( v6 >= 0 )
        return v6;
      goto LABEL_29;
    }
    v6 = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Fu, v2, 0x4Cu, &ReturnLength);
    if ( v6 >= 0 )
    {
      v6 = RtlGetAppContainerSidType(*(PSID *)v2, &AppContainerSidType);
      if ( v6 >= 0 )
      {
        if ( AppContainerSidType != ChildAppContainerSidType
          || (AppContainerParent = RtlGetAppContainerParent(*(PSID *)v2, &AppContainerSidParent),
              v3 = (unsigned __int8 *)AppContainerSidParent,
              v6 = AppContainerParent,
              AppContainerParent >= 0) )
        {
LABEL_5:
          v7 = 52;
          if ( v2 )
            v7 = 4 * *(unsigned __int8 *)(*(_QWORD *)v2 + 1LL) + 68;
          if ( v3 )
            v7 += 4 * v3[1] + 16;
          v8 = v7 + 4 * (*(unsigned __int8 *)(*(_QWORD *)Heap_0 + 1LL) + 14);
          v9 = (ACL *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
          *Acl = v9;
          if ( v9 )
          {
            RtlCreateAcl(v9, v8, 2u);
            v10 = *Acl;
            LOWORD(AppContainerSidParent) = 257;
            *(_DWORD *)((char *)&AppContainerSidParent + 2) = 0;
            HIWORD(AppContainerSidParent) = 1280;
            v20 = 18;
            RtlpAddKnownAce(v10, 2u, 0, 0x10000000, (unsigned __int8 *)&AppContainerSidParent, 0);
            v11 = *Acl;
            LOWORD(AppContainerSidParent) = 513;
            *(_DWORD *)((char *)&AppContainerSidParent + 2) = 0;
            HIWORD(AppContainerSidParent) = 1280;
            v20 = 32;
            v21 = 544;
            RtlpAddKnownAce(v11, 2u, 0, 0x10000000, (unsigned __int8 *)&AppContainerSidParent, 0);
            if ( v2 )
              RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, *(unsigned __int8 **)v2, 0);
            if ( v3 )
              RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, v3, 0);
            RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, *(unsigned __int8 **)Heap_0, 0);
            v12 = *Acl;
            *(_DWORD *)((char *)&AppContainerSidParent + 2) = 0;
            v20 = 0;
            HIWORD(AppContainerSidParent) = 256;
            LOWORD(AppContainerSidParent) = 257;
            RtlpAddKnownAce(v12, 2u, 0, 0x80000000, (unsigned __int8 *)&AppContainerSidParent, 0);
            v13 = *Acl;
            LOWORD(AppContainerSidParent) = 257;
            *(_DWORD *)((char *)&AppContainerSidParent + 2) = 0;
            HIWORD(AppContainerSidParent) = 1280;
            v20 = 7;
            RtlpAddKnownAce(v13, 2u, 0, 0x80000000, (unsigned __int8 *)&AppContainerSidParent, 0);
            v6 = 0;
          }
          else
          {
            v6 = -1073741801;
          }
          if ( !v2 )
            goto LABEL_17;
        }
      }
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v2);
    goto LABEL_17;
  }
  v6 = -1073741801;
LABEL_29:
  if ( *Acl )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *Acl);
    *Acl = 0LL;
  }
  return v6;
}
