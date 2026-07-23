/*
 * XREFs of RtlReplaceSidInSd @ 0x18013D2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1800D61F0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1800D9A60 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800DCF60 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1800DFCD0 (RtlGetGroupSecurityDescriptor.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

NTSTATUS __cdecl RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  size_t v6; // r15
  PSECURITY_DESCRIPTOR v8; // r13
  NTSTATUS result; // eax
  int v10; // eax
  int v11; // ecx
  char *v12; // rsi
  int v13; // eax
  int v14; // ecx
  char *v15; // rsi
  __int64 v16; // rsi
  unsigned __int8 *v17; // rdi
  char *v18; // rdx
  int v19; // eax
  int v20; // ecx
  void *v21; // r12
  __int64 v22; // rsi
  unsigned __int8 *v23; // rdi
  char *v24; // rdx
  int v25; // eax
  int v26; // ecx
  void *v27; // r12
  unsigned int v28; // [rsp+20h] [rbp-18h]
  PSID Owner[2]; // [rsp+28h] [rbp-10h] BYREF
  BOOLEAN DaclPresent; // [rsp+88h] [rbp+50h] BYREF
  char *v32; // [rsp+90h] [rbp+58h]
  BOOLEAN OwnerDefaulted; // [rsp+98h] [rbp+60h] BYREF

  v32 = (char *)NewSid;
  *NumChanges = 0;
  v6 = 4 * (unsigned int)*((unsigned __int8 *)OldSid + 1);
  v28 = 4 * *((unsigned __int8 *)OldSid + 1);
  DaclPresent = 0;
  v8 = SecurityDescriptor;
  Owner[0] = 0LL;
  result = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, Owner, &OwnerDefaulted);
  if ( result >= 0 )
  {
    if ( Owner[0] )
    {
      if ( *(_BYTE *)Owner[0] == *(_BYTE *)OldSid )
      {
        v10 = *((unsigned __int8 *)Owner[0] + 1);
        if ( (_BYTE)v10 == *((_BYTE *)OldSid + 1) || v10 == *((unsigned __int8 *)OldSid + 1) + 1 )
        {
          v11 = *(_DWORD *)((char *)Owner[0] + 2) - *(_DWORD *)((char *)OldSid + 2);
          if ( !v11 )
            v11 = *((unsigned __int16 *)Owner[0] + 3) - *((unsigned __int16 *)OldSid + 3);
          if ( !v11 )
          {
            v12 = (char *)Owner[0] + 8;
            if ( !memcmp((char *)Owner[0] + 8, (char *)OldSid + 8, (unsigned int)v6) )
            {
              memmove(v12, (char *)NewSid + 8, (unsigned int)v6);
              ++*NumChanges;
            }
          }
        }
      }
    }
    Owner[0] = 0LL;
    result = RtlGetGroupSecurityDescriptor(v8, Owner, &OwnerDefaulted);
    if ( result >= 0 )
    {
      if ( Owner[0] )
      {
        if ( *(_BYTE *)Owner[0] == *(_BYTE *)OldSid )
        {
          v13 = *((unsigned __int8 *)Owner[0] + 1);
          if ( (_BYTE)v13 == *((_BYTE *)OldSid + 1) || v13 == *((unsigned __int8 *)OldSid + 1) + 1 )
          {
            v14 = *(_DWORD *)((char *)Owner[0] + 2) - *(_DWORD *)((char *)OldSid + 2);
            if ( !v14 )
              v14 = *((unsigned __int16 *)Owner[0] + 3) - *((unsigned __int16 *)OldSid + 3);
            if ( !v14 )
            {
              v15 = (char *)Owner[0] + 8;
              if ( !memcmp((char *)Owner[0] + 8, (char *)OldSid + 8, (unsigned int)v6) )
              {
                memmove(v15, (char *)NewSid + 8, (unsigned int)v6);
                ++*NumChanges;
              }
            }
          }
        }
      }
      Owner[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v8, &DaclPresent, (PACL *)Owner, &OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( DaclPresent )
        {
          if ( Owner[0] )
          {
            v16 = *((unsigned __int16 *)Owner[0] + 2);
            v17 = (unsigned __int8 *)Owner[0] + 8;
            if ( *((_WORD *)Owner[0] + 2) )
            {
              while ( *v17 > 3u )
              {
                if ( *v17 == 4 )
                {
                  v18 = (char *)&v17[4 * v17[13] + 20];
                  goto LABEL_29;
                }
LABEL_37:
                v17 += *((unsigned __int16 *)v17 + 1);
                if ( !--v16 )
                {
                  v8 = SecurityDescriptor;
                  v6 = (unsigned int)v6;
                  goto LABEL_39;
                }
              }
              v18 = (char *)(v17 + 8);
LABEL_29:
              if ( *v18 == *(_BYTE *)OldSid )
              {
                v19 = (unsigned __int8)v18[1];
                if ( (_BYTE)v19 == *((_BYTE *)OldSid + 1) || v19 == *((unsigned __int8 *)OldSid + 1) + 1 )
                {
                  v20 = *(_DWORD *)(v18 + 2) - *(_DWORD *)((char *)OldSid + 2);
                  if ( !v20 )
                    v20 = *((unsigned __int16 *)v18 + 3) - *((unsigned __int16 *)OldSid + 3);
                  if ( !v20 )
                  {
                    v21 = v18 + 8;
                    if ( !memcmp(v18 + 8, (char *)OldSid + 8, (unsigned int)v6) )
                    {
                      memmove(v21, v32 + 8, (unsigned int)v6);
                      ++*NumChanges;
                    }
                  }
                }
              }
              goto LABEL_37;
            }
          }
        }
LABEL_39:
        Owner[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v8, &DaclPresent, (PACL *)Owner, &OwnerDefaulted);
        if ( result >= 0 && DaclPresent && Owner[0] )
        {
          v22 = *((unsigned __int16 *)Owner[0] + 2);
          v23 = (unsigned __int8 *)Owner[0] + 8;
          if ( *((_WORD *)Owner[0] + 2) )
          {
            while ( *v23 > 3u )
            {
              if ( *v23 == 4 )
              {
                v24 = (char *)&v23[4 * v23[13] + 20];
                goto LABEL_47;
              }
LABEL_55:
              v6 = v28;
              v23 += *((unsigned __int16 *)v23 + 1);
              if ( !--v22 )
                return 0;
            }
            v24 = (char *)(v23 + 8);
LABEL_47:
            if ( *v24 == *(_BYTE *)OldSid )
            {
              v25 = (unsigned __int8)v24[1];
              if ( (_BYTE)v25 == *((_BYTE *)OldSid + 1) || v25 == *((unsigned __int8 *)OldSid + 1) + 1 )
              {
                v26 = *(_DWORD *)(v24 + 2) - *(_DWORD *)((char *)OldSid + 2);
                if ( !v26 )
                  v26 = *((unsigned __int16 *)v24 + 3) - *((unsigned __int16 *)OldSid + 3);
                if ( !v26 )
                {
                  v27 = v24 + 8;
                  if ( !memcmp(v24 + 8, (char *)OldSid + 8, v6) )
                  {
                    memmove(v27, v32 + 8, v6);
                    ++*NumChanges;
                  }
                }
              }
            }
            goto LABEL_55;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
