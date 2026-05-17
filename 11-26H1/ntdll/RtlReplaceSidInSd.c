/*
 * XREFs of RtlReplaceSidInSd @ 0x18013D420
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1800D9230 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1800DCAF0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800E0020 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1800E21D0 (RtlGetGroupSecurityDescriptor.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

__int64 __fastcall RtlReplaceSidInSd(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  size_t v6; // r15
  __int64 v8; // r13
  __int64 result; // rax
  int v10; // eax
  int v11; // ecx
  void *v12; // rsi
  int v13; // eax
  int v14; // ecx
  void *v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  void *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  void *v27; // r12
  unsigned int v28; // [rsp+20h] [rbp-18h]
  _QWORD v29[2]; // [rsp+28h] [rbp-10h] BYREF
  char v31; // [rsp+88h] [rbp+50h] BYREF
  __int64 v32; // [rsp+90h] [rbp+58h]
  bool v33; // [rsp+98h] [rbp+60h] BYREF

  v32 = a3;
  *a4 = 0;
  v6 = 4 * (unsigned int)*(unsigned __int8 *)(a2 + 1);
  v28 = 4 * *(unsigned __int8 *)(a2 + 1);
  v31 = 0;
  v8 = a1;
  v29[0] = 0LL;
  result = RtlGetOwnerSecurityDescriptor(a1, v29, &v33);
  if ( (int)result >= 0 )
  {
    if ( v29[0] )
    {
      if ( *(_BYTE *)v29[0] == *(_BYTE *)a2 )
      {
        v10 = *(unsigned __int8 *)(v29[0] + 1LL);
        if ( (_BYTE)v10 == *(_BYTE *)(a2 + 1) || v10 == *(unsigned __int8 *)(a2 + 1) + 1 )
        {
          v11 = *(_DWORD *)(v29[0] + 2LL) - *(_DWORD *)(a2 + 2);
          if ( !v11 )
            v11 = *(unsigned __int16 *)(v29[0] + 6LL) - *(unsigned __int16 *)(a2 + 6);
          if ( !v11 )
          {
            v12 = (void *)(v29[0] + 8LL);
            if ( !memcmp((const void *)(v29[0] + 8LL), (const void *)(a2 + 8), (unsigned int)v6) )
            {
              memmove(v12, (const void *)(a3 + 8), (unsigned int)v6);
              ++*a4;
            }
          }
        }
      }
    }
    v29[0] = 0LL;
    result = RtlGetGroupSecurityDescriptor(v8, v29, &v33);
    if ( (int)result >= 0 )
    {
      if ( v29[0] )
      {
        if ( *(_BYTE *)v29[0] == *(_BYTE *)a2 )
        {
          v13 = *(unsigned __int8 *)(v29[0] + 1LL);
          if ( (_BYTE)v13 == *(_BYTE *)(a2 + 1) || v13 == *(unsigned __int8 *)(a2 + 1) + 1 )
          {
            v14 = *(_DWORD *)(v29[0] + 2LL) - *(_DWORD *)(a2 + 2);
            if ( !v14 )
              v14 = *(unsigned __int16 *)(v29[0] + 6LL) - *(unsigned __int16 *)(a2 + 6);
            if ( !v14 )
            {
              v15 = (void *)(v29[0] + 8LL);
              if ( !memcmp((const void *)(v29[0] + 8LL), (const void *)(a2 + 8), (unsigned int)v6) )
              {
                memmove(v15, (const void *)(a3 + 8), (unsigned int)v6);
                ++*a4;
              }
            }
          }
        }
      }
      v29[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v8, &v31, v29, &v33);
      if ( (int)result >= 0 )
      {
        if ( v31 )
        {
          if ( v29[0] )
          {
            v16 = *(unsigned __int16 *)(v29[0] + 4LL);
            v17 = v29[0] + 8LL;
            if ( *(_WORD *)(v29[0] + 4LL) )
            {
              while ( *(_BYTE *)v17 > 3u )
              {
                if ( *(_BYTE *)v17 == 4 )
                {
                  v18 = v17 + 4 * (*(unsigned __int8 *)(v17 + 13) + 5LL);
                  goto LABEL_29;
                }
LABEL_37:
                v17 += *(unsigned __int16 *)(v17 + 2);
                if ( !--v16 )
                {
                  v8 = a1;
                  v6 = (unsigned int)v6;
                  goto LABEL_39;
                }
              }
              v18 = v17 + 8;
LABEL_29:
              if ( *(_BYTE *)v18 == *(_BYTE *)a2 )
              {
                v19 = *(unsigned __int8 *)(v18 + 1);
                if ( (_BYTE)v19 == *(_BYTE *)(a2 + 1) || v19 == *(unsigned __int8 *)(a2 + 1) + 1 )
                {
                  v20 = *(_DWORD *)(v18 + 2) - *(_DWORD *)(a2 + 2);
                  if ( !v20 )
                    v20 = *(unsigned __int16 *)(v18 + 6) - *(unsigned __int16 *)(a2 + 6);
                  if ( !v20 )
                  {
                    v21 = (void *)(v18 + 8);
                    if ( !memcmp((const void *)(v18 + 8), (const void *)(a2 + 8), (unsigned int)v6) )
                    {
                      memmove(v21, (const void *)(v32 + 8), (unsigned int)v6);
                      ++*a4;
                    }
                  }
                }
              }
              goto LABEL_37;
            }
          }
        }
LABEL_39:
        v29[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v8, &v31, v29, &v33);
        if ( (int)result >= 0 && v31 && v29[0] )
        {
          v22 = *(unsigned __int16 *)(v29[0] + 4LL);
          v23 = v29[0] + 8LL;
          if ( *(_WORD *)(v29[0] + 4LL) )
          {
            while ( *(_BYTE *)v23 > 3u )
            {
              if ( *(_BYTE *)v23 == 4 )
              {
                v24 = v23 + 4 * (*(unsigned __int8 *)(v23 + 13) + 5LL);
                goto LABEL_47;
              }
LABEL_55:
              v6 = v28;
              v23 += *(unsigned __int16 *)(v23 + 2);
              if ( !--v22 )
                return 0LL;
            }
            v24 = v23 + 8;
LABEL_47:
            if ( *(_BYTE *)v24 == *(_BYTE *)a2 )
            {
              v25 = *(unsigned __int8 *)(v24 + 1);
              if ( (_BYTE)v25 == *(_BYTE *)(a2 + 1) || v25 == *(unsigned __int8 *)(a2 + 1) + 1 )
              {
                v26 = *(_DWORD *)(v24 + 2) - *(_DWORD *)(a2 + 2);
                if ( !v26 )
                  v26 = *(unsigned __int16 *)(v24 + 6) - *(unsigned __int16 *)(a2 + 6);
                if ( !v26 )
                {
                  v27 = (void *)(v24 + 8);
                  if ( !memcmp((const void *)(v24 + 8), (const void *)(a2 + 8), v6) )
                  {
                    memmove(v27, (const void *)(v32 + 8), v6);
                    ++*a4;
                  }
                }
              }
            }
            goto LABEL_55;
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
