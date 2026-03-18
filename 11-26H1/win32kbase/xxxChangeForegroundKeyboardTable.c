/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x14011B070
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x14011C5F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     ?ActivateKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@0W4_ChangeKbdTableReason@@@Z @ 0x14011B440 (-ActivateKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@0W4_ChangeKbdTableReason@@@Z.c)
 *     SetGlobalKeyboardTableInfo @ 0x14011C544 (SetGlobalKeyboardTableInfo.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x140122EB8 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionResetIMEConversionStatus @ 0x1401C091C (ApiSetEditionResetIMEConversionStatus.c)
 *     UpdateKeyLights @ 0x14021CBA0 (UpdateKeyLights.c)
 */

__int64 __fastcall xxxChangeForegroundKeyboardTable(struct tagKL *a1, struct tagKL *a2, unsigned int a3)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // ecx
  bool v23; // bl
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rax
  int v31; // ebx
  __int64 v32; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // rax
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rcx
  int v45; // r8d
  __int64 v46; // rax
  __int16 v47; // ax
  bool v48; // bl
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  __int64 UserSessionState; // rax
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  __int64 v56; // rax
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // edx
  __int64 v64; // rcx
  int v65; // r8d
  __int64 v66; // rax
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  __int64 v70; // rax
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // edx
  __int64 v78; // rcx
  int v79; // r8d
  __int64 v80; // rax
  __int64 *v81[3]; // [rsp+20h] [rbp-18h] BYREF

  result = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  if ( a2 == *(struct tagKL **)(result + 14224) )
    return result;
  v81[1] = (__int64 *)a2;
  v81[0] = (__int64 *)(W32GetUserSessionState(v8, v7, v9) + 14232);
  HMAssignmentLock(v81, 0, v10);
  InputTraceLogging::Keyboard::ActivateKeyboardLayout(a1, a2, a3);
  ApiSetEditionResetIMEConversionStatus(a1, a2);
  if ( !*(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 14224) )
  {
    *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 14224) = a2;
    return SetGlobalKeyboardTableInfo(a2);
  }
  *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 14224) = a2;
  if ( a1 != a2 && (!a1 || *((_QWORD *)a1 + 6) != *((_QWORD *)a2 + 6))
    || (result = W32GetUserSessionState(v18, v17, v19), !*(_QWORD *)(result + 14216)) )
  {
    xxxManageKeyboardModifiers(a1, a2);
    v22 = *((_WORD *)a2 + 20) & 0x3FF;
    if ( (_WORD)v22 != 17 )
    {
      if ( !a1 )
        return SetGlobalKeyboardTableInfo(a2);
      v47 = *((_WORD *)a1 + 20) & 0x3FF;
      if ( v47 == 17 )
      {
        v48 = (*(_BYTE *)(W32GetUserSessionState(v22, v20, v21) + 14333) & 8) != 0;
        *(_BYTE *)(W32GetUserSessionState(v50, v49, v51) + 14324) = v48;
      }
      else if ( v47 != 18 || (_WORD)v22 == 18 )
      {
        goto LABEL_34;
      }
      v31 = 2;
LABEL_28:
      UserSessionState = W32GetUserSessionState(v22, v20, v21);
      *(_BYTE *)(UserSessionState + 14333) &= ~8u;
      v56 = W32GetUserSessionState(v54, v53, v55);
      *(_BYTE *)(v56 + 14397) &= ~8u;
      if ( *(_QWORD *)(W32GetUserSessionState(v58, v57, v59) + 18944) )
      {
        v64 = *(_QWORD *)(W32GetUserSessionState(v61, v60, v62) + 18944);
        if ( *(_QWORD *)(v64 + 464) )
        {
          v20 = *(_QWORD *)(W32GetUserSessionState(v64, v63, v65) + 18944);
          *(_BYTE *)(*(_QWORD *)(v20 + 464) + 285LL) &= ~8u;
          goto LABEL_31;
        }
      }
LABEL_32:
      UpdateKeyLights(1LL);
LABEL_33:
      if ( !a1 )
        return SetGlobalKeyboardTableInfo(a2);
LABEL_34:
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
      {
        v66 = W32GetUserSessionState(v22, v20, v21);
        *(_BYTE *)(v66 + 14397) &= ~4u;
        v70 = W32GetUserSessionState(v68, v67, v69);
        *(_BYTE *)(v70 + 14333) &= ~4u;
        if ( *(_QWORD *)(W32GetUserSessionState(v72, v71, v73) + 18944) )
        {
          v78 = *(_QWORD *)(W32GetUserSessionState(v75, v74, v76) + 18944);
          if ( *(_QWORD *)(v78 + 464) )
          {
            v80 = W32GetUserSessionState(v78, v77, v79);
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v80 + 18944) + 464LL) + 285LL) &= ~4u;
          }
        }
      }
      return SetGlobalKeyboardTableInfo(a2);
    }
    if ( a1 )
    {
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x11 )
        goto LABEL_34;
      if ( *(_BYTE *)(W32GetUserSessionState(v22, v20, v21) + 14324) )
        goto LABEL_19;
      v31 = 2;
    }
    else
    {
      v23 = (*(_BYTE *)(W32GetUserSessionState(v22, v20, v21) + 14333) & 8) != 0;
      *(_BYTE *)(W32GetUserSessionState(v25, v24, v26) + 14324) = v23;
      v30 = W32GetUserSessionState(v28, v27, v29);
      LOBYTE(v22) = -*(_BYTE *)(v30 + 14324);
      v31 = 2 - (*(_BYTE *)(v30 + 14324) != 0);
    }
    if ( v31 != 1 )
    {
      if ( v31 != 2 )
      {
LABEL_31:
        if ( !v31 )
          goto LABEL_33;
        goto LABEL_32;
      }
      goto LABEL_28;
    }
LABEL_19:
    v32 = W32GetUserSessionState(v22, v20, v21);
    *(_BYTE *)(v32 + 14333) |= 8u;
    v36 = W32GetUserSessionState(v34, v33, v35);
    *(_BYTE *)(v36 + 14397) |= 8u;
    if ( *(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 18944) )
    {
      v44 = *(_QWORD *)(W32GetUserSessionState(v41, v40, v42) + 18944);
      if ( *(_QWORD *)(v44 + 464) )
      {
        v46 = W32GetUserSessionState(v44, v43, v45);
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v46 + 18944) + 464LL) + 285LL) |= 8u;
      }
    }
    goto LABEL_32;
  }
  return result;
}
