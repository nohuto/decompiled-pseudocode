/*
 * XREFs of ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1400AFD1C
 * Callers:
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1400B0714 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400B00B4 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall _VerifyTHQBlob(__int16 a1, __int16 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  unsigned int v4; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // esi
  __int64 v10; // rcx
  NTSTATUS v11; // esi
  __int64 v12; // rcx
  NTSTATUS v13; // esi
  bool v15; // bl
  bool v16; // di
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  bool v20; // bl
  bool v21; // di
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  __int16 dwFlags; // [rsp+30h] [rbp-40h]
  char v26; // [rsp+40h] [rbp-30h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+58h] [rbp-18h] BYREF
  PUCHAR pbHash; // [rsp+60h] [rbp-10h] BYREF
  const WCHAR *pPaddingInfo; // [rsp+68h] [rbp-8h] BYREF
  __int16 v31; // [rsp+90h] [rbp+20h] BYREF
  __int16 v32; // [rsp+92h] [rbp+22h]
  ULONG cbHash; // [rsp+98h] [rbp+28h] BYREF

  phAlgorithm = 0LL;
  v4 = 0;
  phKey = 0LL;
  pbHash = 0LL;
  cbHash = 0;
  pPaddingInfo = 0LL;
  v31 = a2;
  v32 = a1;
  if ( (unsigned int)_HashTHQAText((PUCHAR)&v31, 4u, &pbHash, &cbHash) )
  {
    v9 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", L"Microsoft Primitive Provider", 0);
    if ( v9 < 0 )
    {
      v15 = 0;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
      {
        v8 = *((unsigned int *)WPP_GLOBAL_Control + 11);
        if ( (v8 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
          v15 = 1;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = v9;
        v19 = *(_QWORD *)(W32GetUserSessionState(v8, WPP_GLOBAL_Control) + 19336);
        dwFlags = 27;
        goto LABEL_19;
      }
    }
    else
    {
      v11 = BCryptImportKeyPair(phAlgorithm, 0LL, L"RSAPUBLICBLOB", &phKey, a4, 0x11Bu, 0);
      if ( v11 < 0 )
      {
        v15 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
        {
          v10 = *((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( (v10 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v15 = 1;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = v11;
          v19 = *(_QWORD *)(W32GetUserSessionState(v10, WPP_GLOBAL_Control) + 19336);
          dwFlags = 28;
          goto LABEL_19;
        }
      }
      else
      {
        pPaddingInfo = L"SHA256";
        v13 = BCryptVerifySignature(phKey, &pPaddingInfo, pbHash, cbHash, a3, 0x100u, 2u);
        if ( v13 >= 0 )
        {
          v4 = 1;
          goto LABEL_6;
        }
        v15 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
        {
          v12 = *((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( (v12 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v15 = 1;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = v13;
          v19 = *(_QWORD *)(W32GetUserSessionState(v12, WPP_GLOBAL_Control) + 19336);
          dwFlags = 29;
LABEL_19:
          LOBYTE(v18) = v16;
          LOBYTE(v17) = v15;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v17,
            v18,
            v19,
            3,
            1,
            dwFlags,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
            v26);
        }
      }
    }
  }
  else
  {
    v20 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        26,
        (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
    }
  }
LABEL_6:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( pbHash )
    GreDeleteFastMutex((char *)pbHash);
  return v4;
}
