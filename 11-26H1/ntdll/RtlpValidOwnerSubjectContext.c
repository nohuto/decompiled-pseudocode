/*
 * XREFs of RtlpValidOwnerSubjectContext @ 0x18005AD80
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEqualSid @ 0x180059860 (RtlEqualSid.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801615B0 (NtOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x180161790 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, _WORD *a2, char a3, int *a4)
{
  char v4; // bl
  int v8; // eax
  int v9; // eax
  unsigned int *Heap_0; // r14
  unsigned int i; // edi
  int v13; // eax
  bool v14; // sf
  char v15; // al
  char v16[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-85h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-81h] BYREF
  void *v19; // [rsp+48h] [rbp-71h]
  __int128 v20; // [rsp+50h] [rbp-69h] BYREF
  int v21; // [rsp+60h] [rbp-59h]
  _WORD *v22; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  v19 = a1;
  v17 = 0;
  Handle[0] = 0LL;
  v16[0] = 0;
  v21 = 0;
  v20 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v13 = NtOpenProcessToken(-1LL, 8LL, Handle);
      *a4 = v13;
      if ( v13 < 0 )
        return 0;
    }
    else
    {
      Handle[0] = a1;
    }
    v8 = NtQueryInformationToken(Handle[0], 1LL, &v22, 84LL, &v17);
    *a4 = v8;
    if ( v8 < 0 )
      goto LABEL_31;
    if ( RtlEqualSid(a2, v22) )
    {
      if ( a3 )
        NtClose(Handle[0]);
    }
    else
    {
      v9 = NtQueryInformationToken(Handle[0], 2LL, 0LL, 0LL, &v17);
      *a4 = v9;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
      {
LABEL_31:
        if ( a3 )
          NtClose(Handle[0]);
        return 0;
      }
      Heap_0 = (unsigned int *)RtlAllocateHeap_0();
      if ( !Heap_0 )
      {
        *a4 = -1073741801;
        goto LABEL_31;
      }
      *a4 = NtQueryInformationToken(Handle[0], 2LL, Heap_0, v17, &v17);
      if ( a3 )
        NtClose(Handle[0]);
      if ( *a4 < 0 )
      {
LABEL_16:
        RtlFreeHeap_0();
        return v4;
      }
      for ( i = 0; i < *Heap_0; ++i )
      {
        if ( RtlEqualSid(a2, *(_WORD **)&Heap_0[4 * i + 2]) )
        {
          if ( (Heap_0[4 * i + 4] & 0x18) == 8 )
          {
            v4 = 1;
            goto LABEL_16;
          }
          break;
        }
      }
      RtlFreeHeap_0();
      Handle[1] = (HANDLE)18;
      *((_QWORD *)&v20 + 1) = 18LL;
      *(_QWORD *)&v20 = 0x100000001LL;
      v21 = 0;
      v14 = (int)ZwPrivilegeCheck(v19, &v20, v16) < 0;
      v15 = 0;
      if ( !v14 )
        v15 = v16[0];
      if ( !v15 )
        goto LABEL_25;
    }
    return 1;
  }
LABEL_25:
  *a4 = -1073741734;
  return 0;
}
