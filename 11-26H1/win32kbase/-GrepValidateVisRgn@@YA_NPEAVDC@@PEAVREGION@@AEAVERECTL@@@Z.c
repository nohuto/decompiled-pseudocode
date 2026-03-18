/*
 * XREFs of ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1400FEE38
 * Callers:
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

char __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2, struct ERECTL *a3)
{
  char v3; // di
  __int64 v8; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int *v13; // r10
  unsigned int *v14; // rcx
  unsigned int *v15; // rax
  int v16; // eax
  int v17; // r14d
  int v18; // ebx
  int v19; // r8d
  int v20; // r9d
  bool v21; // zf
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r11
  __int64 v25; // rax
  int v26; // edx
  int v27; // esi
  int v28; // r8d
  int v29; // ecx
  int v30; // r9d
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 SessionState; // rax
  HSURF v35; // rdx
  __int128 v36; // [rsp+20h] [rbp-40h]
  __int64 v37; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v38; // [rsp+38h] [rbp-28h]
  __int64 *v39; // [rsp+40h] [rbp-20h]
  __int64 (__fastcall *v40)(); // [rsp+48h] [rbp-18h]
  unsigned int *v41; // [rsp+50h] [rbp-10h]

  v3 = 0;
  if ( (*((_DWORD *)a1 + 9) & 0x100000) == 0 )
    return 1;
  v8 = *((_QWORD *)a1 + 6);
  if ( !v8 || !a2 )
    return 1;
  v37 = 0LL;
  v38 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread )
    v10 = *CurrentThreadWin32Thread;
  else
    v10 = 0LL;
  v11 = (v10 + 8) & -(__int64)(v10 != 0);
  v39 = &v37;
  v40 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
  if ( v11 )
  {
    v12 = *(_QWORD *)(((v10 + 8) & -(__int64)(v10 != 0)) + 0x58);
    if ( *(_QWORD *)(v12 + 8) != v11 + 88 )
      __fastfail(3u);
    v37 = *(_QWORD *)(v11 + 88);
    v38 = (__int64 *)(v11 + 88);
    *(_QWORD *)(v12 + 8) = &v37;
    *(_QWORD *)(v11 + 88) = &v37;
  }
  else
  {
    v38 = &v37;
    v37 = (__int64)&v37;
  }
  v21 = (*((_DWORD *)a1 + 9) & 0x40000) == 0;
  v13 = 0LL;
  v41 = 0LL;
  if ( v21 )
  {
    v14 = (unsigned int *)*((_QWORD *)a1 + 62);
LABEL_13:
    v15 = 0LL;
    goto LABEL_14;
  }
  v35 = (HSURF)*((_QWORD *)a1 + 268);
  if ( !v35 )
  {
    v14 = *(unsigned int **)(v8 + 2544);
    goto LABEL_13;
  }
  SURFREF::vLock((SURFREF *)&v37, v35);
  v13 = v41;
  v14 = v41;
  v15 = v41;
LABEL_14:
  if ( !v14 )
  {
    v21 = v15 == 0LL;
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(v8 + 40) & 0x20000) == 0 || (v14[28] & 0x80000000) == 0 )
  {
    v16 = *((_DWORD *)a1 + 9);
    v17 = *((_DWORD *)a2 + 13);
    v18 = *((_DWORD *)a2 + 14);
    v19 = *((_DWORD *)a2 + 15);
    v20 = *((_DWORD *)a2 + 16);
    if ( ((v16 & 0x1000) == 0 || (v16 & 0x4000) != 0)
      && v18 != v20
      && v17 != v19
      && (v17 != 0x7FFFFFFF || v20 != 0x80000000 || v18 != 0x7FFFFFFF || v19 != 0x80000000) )
    {
      v23 = *(_QWORD *)((char *)v14 + ((v14[29] & 0x800) != 0 ? 0x264 : 0) + 56);
      v24 = HIDWORD(v23);
      if ( v17 >= v19 || v18 >= v20 || v17 < 0 || (int)v23 < v19 || v18 < 0 || SHIDWORD(v23) < v20 )
      {
        v26 = *((_DWORD *)a2 + 15);
        v27 = 0;
        if ( v17 <= v19 )
        {
          v26 = *((_DWORD *)a2 + 13);
          v17 = *((_DWORD *)a2 + 15);
        }
        v28 = *((_DWORD *)a2 + 16);
        v29 = v26;
        if ( v18 <= v20 )
        {
          v28 = *((_DWORD *)a2 + 14);
          v18 = *((_DWORD *)a2 + 16);
        }
        v30 = 0;
        if ( v26 >= 0 )
          v30 = v26;
        else
          v29 = 0;
        LODWORD(v36) = v29;
        v31 = v28;
        v32 = v17;
        if ( v28 >= 0 )
          v27 = v28;
        else
          v31 = 0;
        DWORD1(v36) = v31;
        if ( (int)v23 >= v17 )
          LODWORD(v23) = v17;
        else
          v32 = v23;
        DWORD2(v36) = v32;
        v33 = (unsigned int)v18;
        if ( (int)v24 >= v18 )
          LODWORD(v24) = v18;
        else
          v33 = (unsigned int)v24;
        HIDWORD(v36) = v33;
        if ( (int)v23 < v30 )
        {
          LODWORD(v36) = v23;
        }
        else
        {
          if ( (int)v24 < v27 )
            v31 = v24;
          DWORD1(v36) = v31;
        }
        *(_OWORD *)a3 = v36;
        if ( v13 )
        {
          SessionState = W32GetSessionState(v33);
          HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v41);
        }
        goto LABEL_23;
      }
      if ( v13 )
      {
        v25 = W32GetSessionState(v14);
        HmgDecrementShareReferenceCount(*(_QWORD *)(v25 + 88), v41);
      }
      PopThreadGuardedObject(&v37);
      return 1;
    }
  }
  v21 = v13 == 0LL;
LABEL_20:
  if ( !v21 )
  {
    v22 = W32GetSessionState(v14);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v22 + 88), v41);
  }
  v3 = 1;
LABEL_23:
  PopThreadGuardedObject(&v37);
  return v3;
}
