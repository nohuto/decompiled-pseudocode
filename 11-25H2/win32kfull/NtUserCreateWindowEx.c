/*
 * XREFs of NtUserCreateWindowEx @ 0x1400391A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14002D4E4 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140039968 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1401B19BC (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __m128i *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __m128i *v17; // rsi
  __m128i *v18; // r14
  ULONG64 v19; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rax
  struct tagTHREADINFO *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int16 AppCompatFlags2; // ax
  unsigned int v31; // ecx
  unsigned int v32; // r13d
  __m128i **v33; // rcx
  unsigned __int64 v34; // xmm0_8
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // xmm0_8
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // xmm0_8
  ULONG64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  ULONG_PTR v44; // r13
  struct tagTHREADINFO *v45; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  ULONG64 v47; // r8
  struct tagWND *v48; // r15
  __int64 *Window; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  size_t Size[2]; // [rsp+90h] [rbp-F8h] BYREF
  struct tagWND *v56; // [rsp+A0h] [rbp-E8h]
  __int64 v57[2]; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-D0h]
  __m128i v59; // [rsp+C8h] [rbp-C0h] BYREF
  __m128i v60; // [rsp+D8h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+E8h] [rbp-A0h] BYREF
  void (*v62)(void *); // [rsp+F8h] [rbp-90h]
  ULONG_PTR v63[2]; // [rsp+108h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v65[88]; // [rsp+130h] [rbp-58h] BYREF
  unsigned int v69; // [rsp+1D8h] [rbp+50h]

  v17 = a4;
  v18 = a3;
  v19 = a2;
  *(_OWORD *)Size = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  EnterCrit(0LL, 0LL);
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v57);
  v22 = a10;
  v23 = 0LL;
  if ( a10 == -3 )
  {
    v56 = 0LL;
    v24 = PtiCurrent(-3LL, v21);
    if ( v24 )
    {
      v25 = *((_QWORD *)v24 + 62);
      if ( v25 )
        v56 = *(struct tagWND **)(v25 + 112);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_86;
  }
  else if ( a10 )
  {
    v56 = (struct tagWND *)ValidateHwnd(a10);
    if ( !v56 )
      goto LABEL_75;
  }
  else
  {
    v56 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) != 0 )
  {
LABEL_86:
    UserSetLastError(87);
    goto LABEL_75;
  }
  v26 = PtiCurrent(v22, v21);
  v63[0] = (ULONG_PTR)v26;
  if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
  {
    v27 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v65, a11);
    v58 = *(_QWORD *)(v27 + 16);
    v28 = **(_QWORD **)v27;
    if ( v28 != *(_QWORD *)v57[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v57);
      if ( v28 )
      {
        v57[0] = *(_QWORD *)(v28 + 152);
        ++*(_DWORD *)(v57[0] + 8);
      }
      else
      {
        v57[0] = gSmartObjNullRef;
      }
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v65);
    v17 = a4;
    v18 = a3;
    v19 = a2;
  }
  else
  {
    v53 = ValidateHmenu(a11, 1LL);
    v58 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v57, v53);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v57) )
      goto LABEL_75;
    v54 = v58;
    if ( !v58 )
    {
      v54 = *(_QWORD *)v57[0];
      v17 = a4;
      v18 = a3;
      v19 = a2;
    }
    Win32HM_LockIntoThread<0>(v26, v54, BugCheckParameter3);
  }
  AppCompatFlags2 = GetAppCompatFlags2(1024LL, v29);
  v31 = a1 & 0x800777FF;
  if ( (AppCompatFlags2 & 0x800) == 0 )
    v31 = a1;
  v32 = v31 & 0x8A7F77FF;
  if ( (v31 & 0x8A7F77FF) == v31 )
    v32 = v31;
  v69 = v32;
  v33 = (__m128i **)MmUserProbeAddress;
  if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v19 >= MmUserProbeAddress )
      v19 = MmUserProbeAddress;
    *(_OWORD *)Size = *(_OWORD *)v19;
    v40 = _mm_srli_si128(*(__m128i *)Size, 8).m128i_u64[0];
    if ( v40 )
    {
      if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
      {
        v47 = v40 + LODWORD(Size[0]) + 1LL;
        if ( v47 < v40 || v47 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v40 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v41 = v40 + LODWORD(Size[0]) + 2LL;
        if ( v41 < v40 || v41 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      v44 = Win32AllocPoolWithQuotaZInit(LODWORD(Size[0]) + 2LL, 2020897621LL);
      Size[1] = v44;
      if ( !v44 )
        ExRaiseStatus(-1073741801);
      if ( v62 != (void (*)(void *))-1LL )
      {
        BugCheckParameter4 = PtiCurrent(v43, v42);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v44, (ULONG_PTR)BugCheckParameter4);
      }
      v45 = PtiCurrent(v43, v42);
      BugCheckParameter2[0] = *((_QWORD *)v45 + 48);
      *((_QWORD *)v45 + 48) = BugCheckParameter2;
      BugCheckParameter2[1] = v44;
      v62 = Win32FreePool;
      memmove((void *)Size[1], (const void *)v40, LODWORD(Size[0]));
      *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
      HIDWORD(Size[0]) = HIDWORD(Size[0]) & 0x80000000 | (LODWORD(Size[0]) + 2) & 0x7FFFFFFF;
      v33 = (__m128i **)MmUserProbeAddress;
      v32 = v69;
    }
    else
    {
      LODWORD(Size[0]) = 0;
    }
    v19 = (ULONG64)Size;
  }
  if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v18 >= *v33 )
      v18 = *v33;
    v59 = *v18;
    v36 = _mm_srli_si128(v59, 8).m128i_u64[0];
    if ( v36 )
    {
      if ( v59.m128i_i32[0] > (v59.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v59.m128i_i32[1] < 0 )
      {
        v39 = v36 + v59.m128i_u32[0] + 1LL;
        if ( v39 < v36 || v39 > (unsigned __int64)*v33 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v36 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v37 = v36 + v59.m128i_u32[0] + 2LL;
        if ( v37 < v36 || v37 > (unsigned __int64)*v33 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v59.m128i_i32[0] = 0;
    }
    v18 = &v59;
  }
  if ( v17 )
  {
    if ( v17 >= *v33 )
      v17 = *v33;
    v60 = *v17;
    v34 = _mm_srli_si128(v60, 8).m128i_u64[0];
    if ( v34 )
    {
      if ( v60.m128i_i32[0] > (v60.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v60.m128i_i32[1] < 0 )
      {
        v38 = v34 + v60.m128i_u32[0] + 1LL;
        if ( v38 < v34 || v38 > (unsigned __int64)*v33 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v34 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v35 = v34 + v60.m128i_u32[0] + 2LL;
        if ( v35 < v34 || v35 > (unsigned __int64)*v33 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v60.m128i_i32[0] = 0;
    }
    v17 = &v60;
  }
  v48 = v56;
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v63, v63[0], (__int64)v56);
  Window = (__int64 *)xxxCreateWindowEx(
                        v32,
                        v19,
                        (int)v18,
                        (int)v17,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        v48,
                        (__int64)v57,
                        a12,
                        a13,
                        a14,
                        a15,
                        a16,
                        a17);
  if ( Window )
    v23 = *Window;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v63, v50);
LABEL_75:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v57);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v51);
  UserSessionSwitchLeaveCrit();
  return v23;
}
