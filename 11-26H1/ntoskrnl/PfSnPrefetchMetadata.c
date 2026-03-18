/*
 * XREFs of PfSnPrefetchMetadata @ 0x140A501C8
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140A4FB54 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     wcsncmp @ 0x1405381A0 (wcsncmp.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     PfSnPrefetchFileMetadata @ 0x1409B8960 (PfSnPrefetchFileMetadata.c)
 *     PfpPrefetchEntireDirectory @ 0x140A4F588 (PfpPrefetchEntireDirectory.c)
 *     PfSnLogPrefetchMetadata @ 0x140A504E8 (PfSnLogPrefetchMetadata.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r13d
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 **v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // r15
  const wchar_t *v12; // r12
  unsigned int v14; // r12d
  _DWORD *v15; // rdx
  unsigned int i; // ecx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  unsigned __int16 *v23; // r13
  unsigned int v24; // eax
  unsigned int *v25; // r15
  unsigned int *v26; // rsi
  unsigned int v27; // r12d
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // xmm1_8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int128 v33; // [rsp+30h] [rbp-59h] BYREF
  __int128 v34; // [rsp+40h] [rbp-49h]
  __int128 v35; // [rsp+50h] [rbp-39h]
  __int128 v36; // [rsp+60h] [rbp-29h] BYREF
  __int64 v37; // [rsp+70h] [rbp-19h]
  unsigned int *v38; // [rsp+78h] [rbp-11h]
  __int64 v39; // [rsp+80h] [rbp-9h]
  __int64 v40; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v42; // [rsp+F0h] [rbp+67h]
  unsigned int v43; // [rsp+F8h] [rbp+6Fh]
  int v44; // [rsp+100h] [rbp+77h]
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v43 = a2;
  v3 = *(_QWORD *)a1;
  *(_QWORD *)&v35 = 0LL;
  DWORD2(v35) = 0;
  v37 = 0LL;
  v39 = v3;
  LOBYTE(a3) = 1;
  Handle = 0LL;
  v5 = a2;
  v33 = 0LL;
  v34 = 0LL;
  DestinationString = 0LL;
  v36 = 0LL;
  PfSnLogPrefetchMetadata(v3, a2, a3);
  if ( v3 )
  {
    LODWORD(v33) = 48;
    *((_QWORD *)&v33 + 1) = 0LL;
    DWORD2(v34) = 512;
    *(_QWORD *)&v34 = 0LL;
    v35 = 0LL;
    v6 = NtCreateEvent(&Handle, 0x1F0003u, (__int64)&v33, NotificationEvent, 0);
    if ( v6 >= 0 )
    {
      v7 = v3 + *(unsigned int *)(v3 + 108);
      v8 = 0LL;
      v40 = v7;
      v44 = 0;
      if ( *(_DWORD *)(v3 + 112) )
      {
        v9 = (__int64 **)(a1 + 40);
        do
        {
          v10 = *v9;
          v11 = 96 * v8;
          v12 = (const wchar_t *)(v7 + *(unsigned int *)(96 * v8 + v7));
          while ( v10 != (__int64 *)v9 )
          {
            if ( !wcsncmp(v12, (const wchar_t *)v10[2], *((unsigned int *)v10 + 6)) && !v12[*((unsigned int *)v10 + 6)] )
            {
              if ( v10 && (*((_DWORD *)v10 + 27) & 1) != 0 )
              {
                v14 = 0;
                v15 = (_DWORD *)(v11 + v7 + 36);
                for ( i = 0; i < 7; ++i )
                {
                  if ( _bittest((const int *)&v5, i) )
                    v14 += *v15 + v15[7];
                  ++v15;
                }
                PfSnPrefetchFileMetadata(
                  a1,
                  (void *)v10[4],
                  v7 + *(unsigned int *)(v11 + v7 + 20),
                  *((_DWORD *)v10 + 26),
                  v14,
                  Handle);
                *((_DWORD *)v10 + 26) += v14;
                v17 = *(_QWORD *)(a1 + 80);
                v38 = (unsigned int *)v17;
                *(_DWORD *)v17 = 4;
                v18 = *(_DWORD *)(a1 + 96);
                v19 = *(_DWORD *)(a1 + 100) & 7 | 8;
                *(_DWORD *)(v17 + 4) = 768;
                *(_QWORD *)(v17 + 8) = v18 & 7 | (unsigned __int64)(unsigned int)(8 * v19);
                v20 = 0;
                v21 = (_QWORD *)(v17 + 16);
                do
                {
                  v22 = v20++;
                  *v21++ = v22 << 12;
                }
                while ( v20 < 0x300 );
                v23 = (unsigned __int16 *)v10[12];
                v24 = v43;
                v25 = (unsigned int *)(v7 + 64 + v11);
                v26 = v38;
                v27 = 0;
                v42 = 0;
                do
                {
                  if ( _bittest((const int *)&v24, v27) )
                  {
                    v28 = 0;
                    if ( *v25 )
                    {
                      do
                      {
                        RtlInitUnicodeString(&DestinationString, &v23[*((unsigned int *)v10 + 6) + 2]);
                        v29 = *(_QWORD *)(a1 + 8);
                        LODWORD(v33) = 48;
                        *((_QWORD *)&v33 + 1) = v10[8];
                        DWORD2(v34) = 576;
                        *(_QWORD *)&v34 = &DestinationString;
                        v37 = 0LL;
                        v35 = 0LL;
                        v36 = 0LL;
                        PfpPrefetchEntireDirectory(v29, (__int64)(v10 + 4), v26, (__int64)&v36, (__int64)&v33);
                        if ( (_QWORD)v36 && *(_DWORD *)(a1 + 120) < *(_DWORD *)(a1 + 124) )
                        {
                          v30 = v37;
                          v31 = 3LL * *(unsigned int *)(a1 + 120);
                          v32 = *(_QWORD *)(a1 + 112);
                          *(_OWORD *)(v32 + 8 * v31) = v36;
                          *(_QWORD *)(v32 + 8 * v31 + 16) = v30;
                          ++*(_DWORD *)(a1 + 120);
                        }
                        ++v28;
                        v23 += *v23 + 2;
                      }
                      while ( v28 < *v25 );
                      v27 = v42;
                      v24 = v43;
                    }
                  }
                  ++v27;
                  ++v25;
                  v42 = v27;
                }
                while ( v27 < 7 );
                v3 = v39;
                v7 = v40;
                v10[12] = (__int64)v23;
                v5 = v43;
              }
              v9 = (__int64 **)(a1 + 40);
              break;
            }
            v10 = (__int64 *)*v10;
            v9 = (__int64 **)(a1 + 40);
          }
          v8 = (unsigned int)(v44 + 1);
          v44 = v8;
        }
        while ( (unsigned int)v8 < *(_DWORD *)(v3 + 112) );
      }
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( Handle )
    NtClose(Handle);
  PfSnLogPrefetchMetadata(v3, v5, 0LL);
  return (unsigned int)v6;
}
