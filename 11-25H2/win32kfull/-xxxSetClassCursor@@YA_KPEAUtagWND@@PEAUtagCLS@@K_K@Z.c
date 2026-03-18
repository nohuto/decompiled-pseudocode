/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1400C2F84
 * Callers:
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B3A90 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1400C2F04 (ClassLock.c)
 *     ClassUnlock @ 0x1400C3290 (ClassUnlock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1400C32D0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1402262F0 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rsi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagCLS *v23; // rbx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  struct tagCLS *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagTHREADINFO *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct tagTHREADINFO *v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  __int64 *v42; // [rsp+28h] [rbp-59h] BYREF
  __int64 v43; // [rsp+30h] [rbp-51h] BYREF
  __int64 *v44; // [rsp+38h] [rbp-49h] BYREF
  __int64 v45; // [rsp+40h] [rbp-41h] BYREF
  __int128 v46; // [rsp+48h] [rbp-39h] BYREF
  __int64 v47; // [rsp+58h] [rbp-29h]
  _QWORD v48[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v49[2]; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp+7h] BYREF
  __int128 v51; // [rsp+98h] [rbp+17h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+27h]

  v4 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v11 = PtiCurrent((__int64)a1, (__int64)a2);
  v44 = (__int64 *)gSmartObjNullRef;
  v45 = *((_QWORD *)v11 + 209);
  *((_QWORD *)v11 + 209) = &v45;
  v14 = PtiCurrent(v13, v12);
  v42 = (__int64 *)gSmartObjNullRef;
  v43 = *((_QWORD *)v14 + 209);
  *((_QWORD *)v14 + 209) = &v43;
  v47 = 0LL;
  v52 = 0LL;
  v46 = 0LL;
  v51 = 0LL;
  if ( a4 )
  {
    LOBYTE(v15) = 3;
    v7 = HMValidateHandleWithDescriptor(a4, v15);
    if ( !v7 )
    {
      if ( a3 == -14 || (v40 = 1402, a3 == -34) )
        v40 = 1414;
      UserSetLastError(v40);
    }
  }
  SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v44, *((_QWORD *)a2 + 7));
  if ( !(unsigned int)ClassLock(*v44, &v46) )
  {
    UserSetLastError(5);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v42, v31);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v44, v32);
    return 0LL;
  }
  v18 = PtiCurrent(v17, v16);
  Win32HM_LockIntoThread<1>((__int64)v18, v7, (__int64 *)BugCheckParameter3);
  if ( a3 == -34 || a3 == -14 )
  {
    v19 = (_QWORD *)xxxSetClassIcon(a1);
  }
  else
  {
    if ( a3 != -12 )
      goto LABEL_10;
    v48[1] = v7;
    v48[0] = *v44 + 88;
    v19 = (_QWORD *)HMAssignmentLock(v48, 0LL);
  }
  v6 = v19;
  if ( v19 )
    v6 = (_QWORD *)*v19;
LABEL_10:
  v20 = *(_QWORD *)(*v44 + 64);
LABEL_11:
  SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v42, v20);
  while ( 1 )
  {
    if ( !*v42 )
    {
      v23 = (struct tagCLS *)*v44;
      v24 = PtiCurrent(v22, v21);
      *((_QWORD *)v24 + 48) = v46;
      ClassUnlockWorker(v23);
      v27 = PtiCurrent(v26, v25);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v27, BugCheckParameter3);
      v4 = v6;
      goto LABEL_14;
    }
    if ( a3 != -34 && a3 != -14 )
    {
      if ( a3 == -12 )
      {
        v49[1] = v7;
        v49[0] = *v42 + 88;
        HMAssignmentLock(v49, 0LL);
      }
      goto LABEL_25;
    }
    if ( !(unsigned int)ClassLock(*v42, &v51) )
      break;
    xxxSetClassIcon(a1);
    v41 = ClassUnlock((struct tagCLS *)*v42);
    SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v42, v41);
LABEL_25:
    if ( *v42 )
    {
      v20 = *(_QWORD *)*v42;
      goto LABEL_11;
    }
  }
  UserSetLastError(5);
  v33 = (struct tagCLS *)*v44;
  v36 = PtiCurrent(v35, v34);
  *((_QWORD *)v36 + 48) = v46;
  ClassUnlockWorker(v33);
  v39 = PtiCurrent(v38, v37);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v39, BugCheckParameter3);
LABEL_14:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v42, v28);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v44, v29);
  return v4;
}
