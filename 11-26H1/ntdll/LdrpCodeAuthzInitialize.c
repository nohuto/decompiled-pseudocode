/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x1800454A0
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800858A8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003C8F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     ZwQueryKey @ 0x18015F200 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  __int16 v2; // cx
  __int64 v3; // rdi
  unsigned int v4; // r14d
  const void *v5; // r15
  void *v6; // r12
  size_t v7; // rax
  unsigned int v8; // r14d
  void *v9; // r12
  int v10; // edi
  int v12; // edi
  int v13; // edi
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+78h] [rbp-88h] BYREF
  __int128 v22; // [rsp+88h] [rbp-78h]
  __int128 v23; // [rsp+98h] [rbp-68h]
  __int128 v24; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v25; // [rsp+B8h] [rbp-48h]
  __int128 v26; // [rsp+C8h] [rbp-38h]
  _BYTE v27[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+E4h] [rbp-1Ch]
  int v29; // [rsp+E8h] [rbp-18h]
  unsigned int v30; // [rsp+ECh] [rbp-14h]
  __int64 retaddr; // [rsp+168h] [rbp+68h]

  v0 = 0;
  v1 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    RtlImageNtHeaderEx(3LL, NtCurrentPeb()->ImageBaseAddress, 0LL, &v17);
    v2 = *((_WORD *)v17 + 46);
    if ( v2 == 3 || v2 == 2 )
    {
      Handle = 0LL;
      v14 = 0;
      if ( (int)NtOpenKey(&Handle, 3LL, &unk_180171600) >= 0 )
      {
        v13 = NtQueryValueKey(Handle, &unk_180171720, 2LL, v27, 80, &v14);
        NtClose(Handle);
        if ( v13 >= 0 && v30 && v28 == 4 && v29 == 4 )
          return v0;
      }
      v17 = 0LL;
      v14 = 0;
      Handle = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      if ( (int)NtOpenKey(&v17, 131097LL, &unk_1801C57D8) >= 0 )
      {
        v12 = ZwQueryKey(v17, 2LL, &v24, 48LL, &v14);
        NtClose(v17);
        if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
        {
          if ( DWORD1(v25) )
            v1 = 2;
        }
      }
      if ( (int)NtOpenKey(&Handle, 1LL, &unk_180171630) >= 0 )
      {
        if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v27, 80, &v14) >= 0 && v28 == 4 && v29 == 4 && v30 > 1 )
          v1 = 1;
        NtClose(Handle);
      }
      if ( v1 == 1
        || (*(_OWORD *)Src = 0LL,
            *(_QWORD *)&v23 = 0LL,
            v16 = 0LL,
            DWORD2(v23) = 0,
            v21 = 0LL,
            v22 = 0LL,
            (int)RtlFormatCurrentUserKeyPath((PUNICODE_STRING)Src) < 0) )
      {
LABEL_7:
        if ( v1 )
        {
          if ( v1 == 2 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                             (unsigned __int64)LdrpCodeAuthzCheckDllAllowedSrpV2 ^ MEMORY[0x7FFE0330],
                                             MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = 0x180000000uLL;
          }
          else if ( (int)LdrLoadDll(0LL, 0LL, (__int64)&unk_180171670, &v18) < 0 )
          {
            return (unsigned int)-1073741515;
          }
          else
          {
            v3 = v18;
            if ( (int)LdrGetProcedureAddressForCaller(
                        v18,
                        (unsigned int)&unk_180171690,
                        0,
                        (unsigned int)&v19,
                        0,
                        retaddr) >= 0
              && v19 )
            {
              LdrpAdvapi32DllHandle = v3;
              LdrpSaferIsDllAllowedRoutine = __ROR8__(v19 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
            }
            else
            {
              LdrUnloadDll(v3);
              return (unsigned int)-1073741511;
            }
          }
        }
        return v0;
      }
      v4 = LOWORD(Src[0]);
      v5 = Src[1];
      if ( (unsigned int)LOWORD(Src[0]) + 120 > 0xFFFE
        || (WORD1(v16) = LOWORD(Src[0]) + 120, (*((_QWORD *)&v16 + 1) = RtlAllocateHeap_0()) == 0LL) )
      {
LABEL_31:
        if ( v5 )
          RtlpSysVolFree((__int64)v5);
        goto LABEL_7;
      }
      if ( (_WORD)v4 )
      {
        if ( v4 + (unsigned __int16)v16 > WORD1(v16) )
        {
LABEL_30:
          RtlFreeHeap_0();
          goto LABEL_31;
        }
        v6 = (void *)(*((_QWORD *)&v16 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v16 >> 1));
        memmove(v6, v5, v4);
        LOWORD(v16) = v4 + v16;
        if ( (unsigned int)(unsigned __int16)v16 + 1 < WORD1(v16) )
          *((_WORD *)v6 + ((unsigned __int64)v4 >> 1)) = 0;
      }
      v7 = wcslen(L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers");
      if ( v7 <= 0x7FFE )
      {
        v8 = (unsigned __int16)(2 * v7);
        if ( v8 + (unsigned __int16)v16 <= WORD1(v16) )
        {
          v9 = (void *)(*((_QWORD *)&v16 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v16 >> 1));
          memmove(v9, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers", (unsigned __int16)(2 * v7));
          LOWORD(v16) = v8 + v16;
          if ( (unsigned int)(unsigned __int16)v16 + 1 < WORD1(v16) )
            *((_WORD *)v9 + ((unsigned __int64)v8 >> 1)) = 0;
          LODWORD(v21) = 48;
          *(_QWORD *)&v22 = &v16;
          *((_QWORD *)&v21 + 1) = 0LL;
          DWORD2(v22) = 64;
          v23 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, &v21) >= 0 )
          {
            v10 = NtQueryValueKey(Handle, L"$&", 2LL, v27, 80, &v14);
            NtClose(Handle);
            if ( v10 >= 0 && v28 == 4 && v29 == 4 && v30 > 1 )
              v1 = 1;
          }
        }
      }
      goto LABEL_30;
    }
  }
  return 0LL;
}
