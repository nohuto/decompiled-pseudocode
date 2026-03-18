/*
 * XREFs of ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x140125F18
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1400D4990 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14019FDF0 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ApiSetEditionQueryInertiaWorker @ 0x140126384 (ApiSetEditionQueryInertiaWorker.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

bool __fastcall CInertiaManager::QueryInertiaStatus(CInertiaManager *this, int a2, int a3)
{
  char *v4; // rsi
  char v5; // di
  __int64 v6; // rbx
  int v7; // eax
  bool v8; // zf
  __int64 v10; // rdx
  bool v11; // cl
  __int64 v12[10]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v13; // [rsp+70h] [rbp-48h] BYREF
  int v14; // [rsp+7Ch] [rbp-3Ch]

  v4 = (char *)this + 8;
  v5 = 1;
  v6 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19216);
  v7 = *((_DWORD *)this + 48);
  if ( (v7 & 1) == 0 || (v10 = *((_QWORD *)this + 16)) == 0 )
  {
    v8 = (v7 & 0x10) == 0;
    goto LABEL_3;
  }
  CInputDest::CInputDest(v12, v10, 2 - ((v7 & 0x40) != 0), 1);
  if ( !LODWORD(v12[0]) )
    goto LABEL_17;
  if ( v14 == 1 )
  {
    if ( *(char *)(v13 + 28) < 0 )
      goto LABEL_17;
  }
  else if ( v14 == 2 && *(char *)(*(_QWORD *)(v13 + 40) + 20LL) < 0 )
  {
    goto LABEL_17;
  }
  if ( v14 != 1 )
  {
    if ( v14 == 2 && *(char *)(*(_QWORD *)(v13 + 40) + 19LL) < 0 )
      goto LABEL_17;
LABEL_21:
    if ( (*((_DWORD *)this + 48) & 2) != 0 )
    {
      v11 = 0;
      if ( v14 == 1 )
      {
        v11 = *(_QWORD *)(v13 + 64) != 0LL;
      }
      else if ( v14 == 2 && (*(_QWORD *)(v13 + 264) || *(_QWORD *)(*(_QWORD *)(v13 + 16) + 1496LL)) )
      {
        v11 = 1;
      }
      v5 = v11;
    }
    goto LABEL_18;
  }
  if ( *(char *)(v13 + 27) >= 0 )
    goto LABEL_21;
LABEL_17:
  v5 = 0;
LABEL_18:
  if ( v14 )
    HMAssignmentUnlock(&v13);
  v8 = v5 == 0;
LABEL_3:
  if ( v8 || (*((_DWORD *)this + 8) & 0xF) == 0 || !(unsigned int)ApiSetEditionQueryInertiaWorker(v6, (char *)this + 8) )
    v4 = 0LL;
  return v4 != 0LL;
}
