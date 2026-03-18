/*
 * XREFs of ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400ECB48
 * Callers:
 *     ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1400EC7AC (-_VerifyTHQBlob@@YAHGGPEAE0@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall _HashTHQAText(PUCHAR pbInput, __int64 a2, unsigned __int8 **a3, unsigned int *a4)
{
  UCHAR *v7; // r14
  unsigned int v8; // r12d
  CTouchProcessor *v9; // rdx
  NTSTATUS v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS Property; // esi
  int v14; // ecx
  int v15; // ecx
  NTSTATUS v16; // esi
  unsigned __int8 *v17; // rax
  int v18; // ecx
  NTSTATUS v19; // esi
  int v20; // ecx
  NTSTATUS v21; // esi
  int v22; // ecx
  NTSTATUS v23; // esi
  char v25; // bl
  bool v26; // di
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r9
  char v30; // bl
  bool v31; // di
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  __int16 v35; // [rsp+30h] [rbp-30h]
  __int16 v36; // [rsp+30h] [rbp-30h]
  char v37; // [rsp+40h] [rbp-20h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-10h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-8h] BYREF
  ULONG v40; // [rsp+A8h] [rbp+48h] BYREF
  ULONG pbOutput; // [rsp+B0h] [rbp+50h] BYREF
  ULONG pcbResult; // [rsp+B8h] [rbp+58h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  pcbResult = 0;
  v40 = 0;
  pbOutput = 0;
  phAlgorithm = 0LL;
  v7 = 0LL;
  phHash = 0LL;
  v8 = 0;
  v10 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
  if ( v10 >= 0 )
  {
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
    if ( Property < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = Property;
        v29 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v9, v11) + 19368);
        v35 = 19;
        goto LABEL_27;
      }
      goto LABEL_10;
    }
    v7 = (UCHAR *)Win32AllocPoolZInitImpl(256LL, pbOutput, 0x63707355u);
    if ( v7 )
    {
      v16 = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&v40, 4u, &pcbResult, 0);
      if ( v16 < 0 )
      {
        v9 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (v15 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v15 & 1) == 0)
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v25 = 0;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = v16;
          v29 = *(_QWORD *)(W32GetUserSessionState(v15, (_DWORD)WPP_GLOBAL_Control, v11) + 19368);
          v35 = 21;
          goto LABEL_27;
        }
        goto LABEL_10;
      }
      v17 = (unsigned __int8 *)Win32AllocPoolZInitImpl(256LL, v40, 0x63707355u);
      *a3 = v17;
      if ( v17 )
      {
        v19 = BCryptCreateHash(phAlgorithm, &phHash, v7, pbOutput, 0LL, 0, 0);
        if ( v19 < 0 )
        {
          v9 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (v18 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v18 & 1) == 0)
            || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v25 = 0;
          }
          v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v37 = v19;
            v29 = *(_QWORD *)(W32GetUserSessionState(v18, (_DWORD)WPP_GLOBAL_Control, v11) + 19368);
            v35 = 23;
            goto LABEL_27;
          }
        }
        else
        {
          v21 = BCryptHashData(phHash, pbInput, 4u, 0);
          if ( v21 < 0 )
          {
            v9 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (v20 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v20 & 1) == 0)
              || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v25 = 0;
            }
            v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v37 = v21;
              v29 = *(_QWORD *)(W32GetUserSessionState(v20, (_DWORD)WPP_GLOBAL_Control, v11) + 19368);
              v35 = 24;
              goto LABEL_27;
            }
          }
          else
          {
            v23 = BCryptFinishHash(phHash, *a3, v40, 0);
            if ( v23 >= 0 )
            {
              v8 = 1;
              *a4 = v40;
              goto LABEL_10;
            }
            v9 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (v22 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v22 & 1) == 0)
              || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v25 = 0;
            }
            v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v37 = v23;
              v29 = *(_QWORD *)(W32GetUserSessionState(v22, (_DWORD)WPP_GLOBAL_Control, v11) + 19368);
              v35 = 25;
              goto LABEL_27;
            }
          }
        }
        goto LABEL_10;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v34 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v9, v11) + 19368);
      v36 = 22;
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v14 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v14 & 1) == 0)
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v34 = *(_QWORD *)(W32GetUserSessionState(v14, (_DWORD)WPP_GLOBAL_Control, v11) + 19368);
      v36 = 20;
    }
    LOBYTE(v33) = v31;
    LOBYTE(v32) = v30;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v33,
      v34,
      3,
      1,
      v36,
      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
    goto LABEL_10;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v25 = 0;
  }
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = v10;
    v29 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v9, v11) + 19368);
    v35 = 18;
LABEL_27:
    LOBYTE(v28) = v26;
    LOBYTE(v27) = v25;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v28,
      v29,
      3,
      1,
      v35,
      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
      v37);
  }
LABEL_10:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v7 )
    GreDeleteFastMutex((char *)v7, (__int64)v9, v11, v12);
  if ( !v8 && *a3 )
  {
    GreDeleteFastMutex((char *)*a3, (__int64)v9, v11, v12);
    *a3 = 0LL;
  }
  return v8;
}
