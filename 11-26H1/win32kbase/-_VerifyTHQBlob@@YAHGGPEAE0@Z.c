/*
 * XREFs of ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1400EC7AC
 * Callers:
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1400EC730 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400ECB48 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall _VerifyTHQBlob(__int16 a1, __int16 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  unsigned int v4; // r14d
  CTouchProcessor *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  NTSTATUS v11; // esi
  int v12; // ecx
  NTSTATUS v13; // esi
  int v14; // ecx
  NTSTATUS v15; // esi
  bool v17; // bl
  bool v18; // di
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  bool v22; // bl
  bool v23; // di
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  __int16 dwFlags; // [rsp+30h] [rbp-40h]
  char v28; // [rsp+40h] [rbp-30h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+58h] [rbp-18h] BYREF
  PUCHAR pbHash; // [rsp+60h] [rbp-10h] BYREF
  const WCHAR *pPaddingInfo; // [rsp+68h] [rbp-8h] BYREF
  __int16 v33; // [rsp+90h] [rbp+20h] BYREF
  __int16 v34; // [rsp+92h] [rbp+22h]
  ULONG cbHash; // [rsp+98h] [rbp+28h] BYREF

  v4 = 0;
  v33 = a2;
  v34 = a1;
  phAlgorithm = 0LL;
  phKey = 0LL;
  pbHash = 0LL;
  cbHash = 0;
  pPaddingInfo = 0LL;
  if ( (unsigned int)_HashTHQAText((PUCHAR)&v33, 4u, &pbHash, &cbHash) )
  {
    v11 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", L"Microsoft Primitive Provider", 0);
    if ( v11 < 0 )
    {
      v7 = WPP_GLOBAL_Control;
      v17 = 0;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
      {
        v10 = *((_DWORD *)WPP_GLOBAL_Control + 11);
        if ( (v10 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
          v17 = 1;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = v11;
        v21 = *(_QWORD *)(W32GetUserSessionState(v10, (_DWORD)WPP_GLOBAL_Control, v8) + 19368);
        dwFlags = 27;
        goto LABEL_19;
      }
    }
    else
    {
      v13 = BCryptImportKeyPair(phAlgorithm, 0LL, L"RSAPUBLICBLOB", &phKey, a4, 0x11Bu, 0);
      if ( v13 < 0 )
      {
        v7 = WPP_GLOBAL_Control;
        v17 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v12 = *((_DWORD *)WPP_GLOBAL_Control + 11);
          if ( (v12 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v17 = 1;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = v13;
          v21 = *(_QWORD *)(W32GetUserSessionState(v12, (_DWORD)WPP_GLOBAL_Control, v8) + 19368);
          dwFlags = 28;
          goto LABEL_19;
        }
      }
      else
      {
        pPaddingInfo = L"SHA256";
        v15 = BCryptVerifySignature(phKey, &pPaddingInfo, pbHash, cbHash, a3, 0x100u, 2u);
        if ( v15 >= 0 )
        {
          v4 = 1;
          goto LABEL_6;
        }
        v7 = WPP_GLOBAL_Control;
        v17 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v14 = *((_DWORD *)WPP_GLOBAL_Control + 11);
          if ( (v14 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v17 = 1;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = v15;
          v21 = *(_QWORD *)(W32GetUserSessionState(v14, (_DWORD)WPP_GLOBAL_Control, v8) + 19368);
          dwFlags = 29;
LABEL_19:
          LOBYTE(v20) = v18;
          LOBYTE(v19) = v17;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v19,
            v20,
            v21,
            3,
            1,
            dwFlags,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
            v28);
        }
      }
    }
  }
  else
  {
    v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v7, v8);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(UserSessionState + 19368),
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
    GreDeleteFastMutex((char *)pbHash, (__int64)v7, v8, v9);
  return v4;
}
