/*
 * XREFs of ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0
 * Callers:
 *     NtUserSetCursorIconDataEx @ 0x140027F50 (NtUserSetCursorIconDataEx.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140015AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x140029660 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?LinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1401DEBAC (-LinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     AllocateUnicodeString @ 0x14021C838 (AllocateUnicodeString.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

char __fastcall _SetCursorIconDataEx(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        unsigned int Size,
        unsigned int a6)
{
  void *v8; // r12
  unsigned int DpiDependentMetric; // r13d
  int v10; // r15d
  struct _UNICODE_STRING *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  _QWORD *v15; // r14
  __int64 v16; // rcx
  Gre::Base **v17; // r12
  __int64 v18; // rcx
  Gre::Base *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 UserSessionState; // rax
  __int64 v27; // r10
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 i; // rax
  int v41; // ecx
  int v42; // ecx
  int v43; // edx
  __int64 v44; // r8
  int v45; // r14d
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rcx
  int v52; // ecx
  int v53; // r14d
  __int64 v54; // rbx
  __int64 v55; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+38h] [rbp-B0h]
  char *v57; // [rsp+48h] [rbp-A0h]
  struct tagCURSORDATA *v58; // [rsp+50h] [rbp-98h]
  _OWORD v59[2]; // [rsp+58h] [rbp-90h] BYREF
  _DWORD v60[28]; // [rsp+78h] [rbp-70h] BYREF
  struct _UNICODE_STRING *v62; // [rsp+100h] [rbp+18h]

  v62 = a3;
  v58 = a4;
  v8 = 0LL;
  memset(v59, 0, sizeof(v59));
  memset(v60, 0, 32);
  DpiDependentMetric = a6;
  if ( !a6 )
  {
    DpiForSystem = GetDpiForSystem(a1);
    DpiDependentMetric = GetDpiDependentMetric(7LL, DpiForSystem);
    a3 = v62;
  }
  *((_DWORD *)a1 + 20) &= ~0x800u;
  v10 = *((_DWORD *)a1 + 20) | *((_DWORD *)a4 + 6);
  if ( (*((_DWORD *)a4 + 6) & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  v11 = (struct _UNICODE_STRING *)((char *)a1 + 56);
  v57 = (char *)a1 + 56;
  if ( !a3->Length )
  {
    *v11 = *a3;
LABEL_6:
    if ( a2->Buffer )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v55);
      UserSessionState = W32GetUserSessionState(v25, v24);
      if ( (int)RtlStringCchCopyW((unsigned __int16 *)(UserSessionState + 41756), 0x100uLL, a2->Buffer) < 0 )
        *((_WORD *)a1 + 36) = 0;
      else
        *((_WORD *)a1 + 36) = UserAddAtomEx(v27, 0LL, 2LL);
      if ( (_BYTE)v55 )
        --*(_DWORD *)(v56 + 28);
      if ( !*((_WORD *)a1 + 36) )
      {
        if ( (v10 & 8) == 0 )
        {
          v28 = *((_QWORD *)a4 + 4);
          if ( v28 )
            GreDeleteObject(v28);
          v29 = *((_QWORD *)a4 + 5);
          if ( v29 )
            GreDeleteObject(v29);
        }
        if ( !v11->Length )
          return 0;
        Win32FreePool(*((void **)a1 + 8));
        goto LABEL_37;
      }
    }
    if ( (v10 & 8) != 0 )
    {
      if ( Size )
        v8 = (void *)Win32AllocPoolWithQuotaZInit(Size, 1969451861LL);
      if ( !v8 )
      {
        if ( v11->Length )
        {
          Win32FreePool(*((void **)a1 + 8));
          *((_QWORD *)a1 + 8) = 0LL;
          v11->Length = 0;
          *((_WORD *)a1 + 29) = 0;
        }
        v36 = *((unsigned __int16 *)a1 + 36);
        if ( (_WORD)v36 )
        {
          UserDeleteAtom(v36);
          *((_WORD *)a1 + 36) = 0;
        }
        return 0;
      }
    }
    v12 = (unsigned int)(*((_DWORD *)a4 + 6) | *((_DWORD *)a1 + 20));
    *((_DWORD *)a1 + 20) = v12;
    *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
    *((_DWORD *)a1 + 19) = DpiDependentMetric;
    if ( (v12 & 8) != 0 )
    {
      *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
      *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
      *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
      *((_QWORD *)a1 + 12) = v8;
      RtlCopyVolatileMemory(v8, *((const void **)a4 + 13), Size);
      v37 = *((_QWORD *)a1 + 12);
      v38 = v37 + *((_QWORD *)a4 + 14);
      *((_QWORD *)a1 + 13) = v38;
      v39 = v37 + *((_QWORD *)a4 + 15);
      *((_QWORD *)a1 + 14) = v39;
      for ( i = 0LL; i < *((int *)a1 + 23); ++i )
      {
        v41 = *(_DWORD *)(v38 + 4 * i);
        if ( v41 < 0 || v41 >= *((_DWORD *)a1 + 22) )
          goto LABEL_79;
      }
      v42 = 0;
      v43 = *((_DWORD *)a1 + 23);
      if ( v43 > 0 )
      {
        v44 = 0LL;
        do
        {
          if ( (unsigned int)(100 * *(_DWORD *)(v39 + v44)) >= 6 )
            break;
          ++v42;
          v44 += 4LL;
        }
        while ( v42 < v43 );
      }
      if ( v42 == v43 )
      {
LABEL_79:
        v52 = 87;
LABEL_81:
        UserSetLastError(v52);
        Win32FreePool(*((void **)a1 + 12));
        *((_QWORD *)a1 + 12) = 0LL;
        *((_QWORD *)a1 + 13) = 0LL;
        *((_QWORD *)a1 + 14) = 0LL;
        *((_QWORD *)a1 + 11) = 0LL;
        *((_DWORD *)a1 + 30) = 0;
        return 0;
      }
      v45 = 0;
      v46 = 0LL;
      while ( v45 < *((_DWORD *)a1 + 22) )
      {
        v47 = HMValidateHandleWithDescriptor(*(_QWORD *)(v46 + *((_QWORD *)a1 + 12)), 3u);
        v48 = v47;
        if ( !v47
          || (v49 = *(unsigned int *)(v47 + 80), LOBYTE(v49) = v49 & 0x48, (_BYTE)v49 != 64)
          || (v50 = *(_QWORD *)(W32GetUserGdiSessionState(v49) + 40), PsGetCurrentProcess(v51) != v50)
          && !*(_QWORD *)(v48 + 24) )
        {
          v53 = v45 - 1;
          if ( v53 >= 0 )
          {
            v54 = 8LL * v53;
            do
            {
              HMAssignmentUnlock(v54 + *((_QWORD *)a1 + 12));
              v54 -= 8LL;
              --v53;
            }
            while ( v53 >= 0 );
          }
          v52 = 1402;
          goto LABEL_81;
        }
        *(_QWORD *)(v46 + *((_QWORD *)a1 + 12)) = 0LL;
        v55 = *((_QWORD *)a1 + 12) + 8LL * v45;
        v56 = v48;
        HMAssignmentLock(&v55, 0LL);
        ++v45;
        v46 += 8LL;
      }
    }
    else
    {
      v14 = *((_QWORD *)_GetCurrentLogicalCursorThread(v12) + 57);
      *((_QWORD *)a4 + 6) = 0LL;
      *(_OWORD *)((char *)a4 + 56) = 0LL;
      *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
      *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
      *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
      *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
      *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
      *((_QWORD *)a1 + 11) = 0LL;
      *((_QWORD *)a1 + 12) = 0LL;
      v15 = (_QWORD *)((char *)a4 + 32);
      v16 = *((_QWORD *)a4 + 4);
      v17 = (Gre::Base **)((char *)a4 + 32);
      if ( v16 )
      {
        LOBYTE(v13) = 5;
        if ( (int)GreReferenceObjectIgnoreOwner(v16, v13) < 0 )
        {
          GreDeleteObject(*v15);
          v23 = *((_QWORD *)a4 + 5);
          if ( v23 )
            GreDeleteObject(v23);
          return 0;
        }
        v17 = (Gre::Base **)((char *)v58 + 32);
      }
      v18 = *((_QWORD *)a4 + 5);
      if ( v18 )
      {
        LOBYTE(v13) = 5;
        if ( (int)GreReferenceObjectIgnoreOwner(v18, v13) < 0 )
        {
          GreDeleteObject(*((_QWORD *)a4 + 5));
          v32 = *v15;
LABEL_45:
          if ( v32 )
          {
            LOBYTE(v30) = 5;
            GreDereferenceObject(v32, v30, 0LL);
          }
          return 0;
        }
      }
      if ( !*((_DWORD *)a1 + 35)
        || !*((_DWORD *)a1 + 36)
        || !*v17
        || *((_QWORD *)a4 + 5)
        && (!(unsigned int)GreExtGetObjectW(*v17, 32, v59)
         || !(unsigned int)GreExtGetObjectW(*((Gre::Base **)a4 + 5), 32, v60)
         || v60[2] != SDWORD2(v59[0]) >> 1 && v60[2] != DWORD2(v59[0])
         || v60[1] < SDWORD1(v59[0])) )
      {
        UserSetLastError(87);
        v31 = *((_QWORD *)a4 + 4);
        if ( v31 )
        {
          LOBYTE(v30) = 5;
          GreDereferenceObject(v31, v30, 0LL);
        }
        v32 = *((_QWORD *)a4 + 5);
        goto LABEL_45;
      }
      *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
      v19 = (Gre::Base *)*((_QWORD *)a4 + 5);
      *((_QWORD *)a1 + 12) = v19;
      *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v19);
      GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
      GreIncQuotaCount(v14);
      v20 = *((_QWORD *)a1 + 12);
      if ( v20 )
      {
        GreSetBitmapOwner(v20, 0LL);
        GreIncQuotaCount(v14);
      }
      v21 = *((_QWORD *)a1 + 16);
      if ( v21 )
      {
        GreSetBitmapOwner(v21, 0LL);
        GreIncQuotaCount(v14);
      }
    }
    LinkCursor(a1);
    return 1;
  }
  if ( (unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
    goto LABEL_6;
  if ( (v10 & 8) == 0 )
  {
    v34 = *((_QWORD *)a4 + 4);
    if ( v34 )
      GreDeleteObject(v34);
    v35 = *((_QWORD *)a4 + 5);
    if ( v35 )
      GreDeleteObject(v35);
  }
LABEL_37:
  *((_QWORD *)a1 + 8) = 0LL;
  v11->Length = 0;
  *((_WORD *)a1 + 29) = 0;
  return 0;
}
