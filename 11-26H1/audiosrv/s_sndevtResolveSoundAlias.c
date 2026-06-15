/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x1800308C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18003144C (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     StringExHandleOtherFlagsW @ 0x18010FA7C (StringExHandleOtherFlagsW.c)
 */

__int64 __fastcall s_sndevtResolveSoundAlias(
        void *a1,
        const unsigned __int16 *a2,
        size_t a3,
        unsigned int a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  __int64 v7; // rdi
  char *v8; // r13
  int v9; // esi
  struct _FILETIME v10; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const unsigned __int16 *v12; // rbx
  DWORD LastError; // edi
  unsigned __int64 v14; // r8
  const unsigned __int16 *v15; // rcx
  int SoundAlias; // ebx
  HANDLE v17; // rbx
  HANDLE CurrentProcess; // rax
  DWORD v19; // r15d
  __int64 v20; // rax
  size_t v21; // rsi
  wchar_t *v22; // rax
  wchar_t *v23; // rbx
  unsigned __int64 v24; // rcx
  WCHAR *v25; // r9
  size_t v26; // rdx
  wchar_t *v27; // r8
  __int64 v28; // r10
  wchar_t *v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  signed int v32; // edi
  HANDLE v33; // rcx
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  int v36; // [rsp+40h] [rbp-C0h]
  unsigned int Pid; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h] BYREF
  const unsigned __int16 *v39; // [rsp+50h] [rbp-B0h]
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  RPC_BINDING_HANDLE BindingHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILETIME pftDueTime; // [rsp+68h] [rbp-98h] BYREF
  HANDLE hObject; // [rsp+70h] [rbp-90h]
  size_t pcchRemaining; // [rsp+78h] [rbp-88h] BYREF
  _QWORD pv[2]; // [rsp+80h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+90h] [rbp-70h]
  const wchar_t *v47; // [rsp+98h] [rbp-68h]
  struct _FILETIME v48; // [rsp+A0h] [rbp-60h]
  char v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+ACh] [rbp-54h]
  WCHAR FileName[264]; // [rsp+C0h] [rbp-40h] BYREF

  pcchRemaining = a3;
  v39 = a2;
  BindingHandle = a1;
  phkResult = 0LL;
  memset_0(FileName, 0, 0x208uLL);
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = 0LL;
  Pid = 0;
  v9 = 0;
  hObject = 0LL;
  v36 = 0;
  v10 = g_AudioHealthMonitor;
  v38 = a4;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v48 = v10;
  CurrentThreadId = GetCurrentThreadId();
  v47 = L"s_sndevtResolveSoundAlias";
  v49 = 0;
  v50 = 0LL;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v7
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v7) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v7 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v7) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  v12 = v39;
  if ( !v39 )
  {
    LastError = -2147418096;
    goto LABEL_35;
  }
  if ( lpTargetHandle )
  {
    *lpTargetHandle = (HANDLE)-1LL;
    if ( !a6 )
      goto LABEL_11;
  }
  else if ( !a6 )
  {
    LastError = -2147418096;
    goto LABEL_69;
  }
  *a6 = 0LL;
LABEL_11:
  LastError = RpcImpersonateClient(BindingHandle);
  if ( !LastError )
  {
    v36 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        FileName[0] = 0;
        LastError = RegOpenCurrentUser(1u, &phkResult);
        if ( LastError )
          goto LABEL_35;
        v15 = v12;
        if ( v9 )
          v15 = szSystemDefaultSound;
        SoundAlias = _GetSoundAlias(
                       v15,
                       FileName,
                       v14,
                       &v38,
                       dwCreationDisposition,
                       phkResult,
                       (const unsigned __int16 *)pcchRemaining);
        RegCloseKey(phkResult);
        if ( SoundAlias )
          break;
        if ( (a4 & 2) != 0 || v9 == 1 )
        {
          LastError = 1168;
          goto LABEL_35;
        }
LABEL_19:
        v12 = v39;
        v9 = 1;
      }
      if ( !FileName[0] )
      {
        if ( (a4 & 2) != 0 || v9 == 1 )
        {
          LastError = 2;
          break;
        }
        goto LABEL_19;
      }
      if ( !lpTargetHandle )
        break;
      hObject = CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
      v17 = hObject;
      if ( hObject != (HANDLE)-1LL )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( !LastError )
        {
          v8 = (char *)OpenProcess(0x40u, 0, Pid);
          LastError = RpcRevertToSelf();
          if ( !LastError )
          {
            v36 = 0;
            if ( !v8
              || (CurrentProcess = GetCurrentProcess(),
                  !DuplicateHandle(CurrentProcess, v17, v8, lpTargetHandle, 0, 0, 2u)) )
            {
LABEL_34:
              LastError = GetLastError();
              break;
            }
          }
        }
        break;
      }
      if ( (a4 & 2) != 0 || v9 == 1 )
        goto LABEL_34;
      v12 = v39;
      v9 = 1;
    }
  }
LABEL_35:
  v19 = LastError;
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( FileName[v20] );
    v21 = 2 * v20 + 2;
    v22 = (wchar_t *)MIDL_user_allocate(v21);
    *a6 = v22;
    v23 = v22;
    if ( v22 )
    {
      v24 = v21 >> 1;
      if ( v21 >> 1 )
      {
        if ( v24 <= 0x7FFFFFFF )
        {
          v25 = FileName;
          v26 = v21 >> 1;
          v27 = v22;
          v28 = 0LL;
          do
          {
            if ( !(2147483646 - v24 + v26) )
              break;
            if ( !*v25 )
              break;
            *v27++ = *v25++;
            ++v28;
            --v26;
          }
          while ( v26 );
          v29 = v27 - 1;
          v30 = v28 - 1;
          if ( v26 )
          {
            v29 = v27;
            v30 = v28;
          }
          *v29 = 0;
          v31 = v24 - v30;
          v32 = v26 == 0 ? 0x8007007A : 0;
          if ( v26 )
          {
            v27 = (wchar_t *)(2 * v31);
            if ( (unsigned __int64)(2 * v31) > 2 )
              memset_0(&v23[v30 + 1], 0, (size_t)(v27 - 1));
          }
          if ( v32 < 0 && v21 )
            StringExHandleOtherFlagsW(v23, v21, (size_t)v27, (STRSAFE_LPWSTR *)&BindingHandle, &pcchRemaining, 0x600u);
        }
        else
        {
          *v22 = 0;
        }
      }
      LastError = v19;
      if ( !v19 )
        goto LABEL_63;
      goto LABEL_58;
    }
    if ( LastError )
    {
      LastError = 14;
LABEL_58:
      if ( lpTargetHandle )
      {
        v33 = *lpTargetHandle;
        if ( *lpTargetHandle && v33 != (HANDLE)-1LL )
          CloseHandle(v33);
        *lpTargetHandle = (HANDLE)-1LL;
      }
    }
  }
LABEL_63:
  if ( v36 == 1 )
    RpcRevertToSelf();
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
LABEL_69:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
