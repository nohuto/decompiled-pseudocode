/*
 * XREFs of ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x140161120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     IsHandleEntrySecure @ 0x1400A2040 (IsHandleEntrySecure.c)
 *     EtwTraceUIPIHandleValidationError @ 0x14010D040 (EtwTraceUIPIHandleValidationError.c)
 *     GetDesktopView @ 0x1401222AC (GetDesktopView.c)
 *     IsGetDesktopViewSupported @ 0x140124B58 (IsGetDesktopViewSupported.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1401A5360 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 */

CHMRefHwndByHandle *__fastcall CHMRefHwndByHandle::CHMRefHwndByHandle(
        CHMRefHwndByHandle *this,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        bool a5,
        bool a6)
{
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int16 v21; // r14
  __int64 v22; // rax
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v24; // rdx
  bool v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 UserGdiSessionState; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // r15d
  __int64 v44; // rbx
  __int64 v45; // rdx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  v10 = (unsigned __int16)a2;
  if ( (unsigned __int64)(unsigned __int16)a2 < *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19872) + 8LL) )
  {
    UserSessionState = W32GetUserSessionState(v12, v11);
    v16 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v15, v14) + 19896) * v10);
    v17 = v16 + *(_QWORD *)(UserSessionState + 19888);
    v19 = W32GetUserSessionState(v18, v16);
    v20 = *(_QWORD *)(v19 + 19832) + 40LL * (unsigned int)((v17 - *(_QWORD *)(v19 + 19888)) >> 5);
    v21 = WORD1(a2) & 0x7FFF;
    if ( ((WORD1(a2) & 0x7FFF) == *(_WORD *)(v17 + 26) || v21 == 0x7FFF || !v21 && PsGetCurrentProcessWow64Process())
      && *(_BYTE *)(v17 + 24) == 1
      && (*(_BYTE *)(v17 + 25) & 1) == 0 )
    {
      v22 = *(_QWORD *)v20;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v20 + 8LL));
      *(_QWORD *)this = v22;
      CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
      v26 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
      v27 = *(_QWORD *)this;
      v28 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      if ( a3 )
      {
        if ( v28 != v26
          && *(_QWORD *)(v27 + 24) != *(_QWORD *)(v26 + 496)
          && (_InterlockedCompareExchange((volatile signed __int32 *)(v26 + 528), 0, 0) & 4) == 0
          && ((int)IsGetDesktopViewSupported(v27, v24) < 0
           || !GetDesktopView(*(_QWORD *)(v26 + 464), *(_QWORD *)(*(_QWORD *)this + 24LL))) )
        {
          goto LABEL_50;
        }
      }
      if ( a4 && *(_DWORD *)(*(_QWORD *)(v28 + 464) + 876LL) != 1 )
        a4 = 0;
      if ( a6 )
      {
        if ( v28 )
        {
          if ( !UIPrivilegeIsolation::CheckAccessEx(
                  (UIPrivilegeIsolation *)(*(_QWORD *)(v26 + 464) + 864LL),
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(v28 + 464) + 864LL),
                  (const struct tagUIPI_INFO *)a4,
                  v25) )
          {
            UserGdiSessionState = W32GetUserGdiSessionState(v29);
            v24 = *(_QWORD *)(v28 + 464);
            if ( *(_QWORD *)v24 != *(_QWORD *)(UserGdiSessionState + 40) )
            {
              EtwTraceUIPIHandleValidationError(*(_QWORD *)(v26 + 464), v24, a2, 1);
              return this;
            }
          }
        }
      }
      if ( a5 )
      {
        v31 = (_QWORD *)PsGetCurrentThreadWin32Thread();
        v32 = v31 ? *v31 : 0LL;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 496) + 8LL) + 24LL) != *(_QWORD *)this
          && !(unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( !UIPrivilegeIsolation::fEnforceUIPI
            || (v33 = *(_QWORD *)(*(_QWORD *)this + 16LL),
                (_InterlockedCompareExchange((volatile signed __int32 *)(v33 + 528), 0, 0) & 0xC) != 0) )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
            if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
              CurrentProcessWin32Process = 0LL;
            v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 464LL);
            if ( *(_DWORD *)(CurrentProcessWin32Process + 764) != *(_DWORD *)(v35 + 764) )
              goto LABEL_41;
            v36 = PsGetCurrentProcessWin32Process(v35);
            if ( v36 && !*(_QWORD *)v36 )
              v36 = 0LL;
            v24 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 464LL) + 768LL);
            if ( *(_DWORD *)(v36 + 768) != (_DWORD)v24 )
            {
LABEL_41:
              UserSetLastError(5);
              return this;
            }
          }
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v26 + 528), 0, 0) & 0x20000000) == 0
        || (v37 = *(_QWORD *)(*(_QWORD *)(v26 + 464) + 752LL), (*(_DWORD *)(v37 + 24) & 1) == 0)
        || (v39 = *(_QWORD *)(W32GetUserSessionState(v37, v24) + 19872), v10 < *(_QWORD *)(v39 + 8))
        && ((v40 = W32GetUserSessionState(v39, v38),
             v43 = *(_DWORD *)(W32GetUserSessionState(v42, v41) + 19896) * v10,
             v44 = v43 + *(_QWORD *)(v40 + 19888),
             W32GetUserSessionState(v43, v45),
             v21 == *(_WORD *)(v44 + 26))
         || v21 == 0x7FFF
         || !v21 && PsGetCurrentProcessWow64Process())
        && (unsigned int)IsHandleEntrySecure(a2, v44) )
      {
LABEL_50:
        *((_QWORD *)this + 1) = *(_QWORD *)this;
        *(_QWORD *)this = 0LL;
      }
    }
  }
  return this;
}
