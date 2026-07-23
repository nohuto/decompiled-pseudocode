/*
 * XREFs of CmQueryLayeredKey @ 0x14048BE20
 * Callers:
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 * Callees:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14048C128 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404C713C (KCBNeedsVirtualImage_0.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     CmpInitializeKeyNodeStack @ 0x140944138 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140944480 (CmpCleanupKeyNodeStack.c)
 *     CmpCleanupKcbStack @ 0x140944530 (CmpCleanupKcbStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140945268 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140946C60 (CmpLockKcbStackShared.c)
 *     CmpIsKeyStackSymlink @ 0x140A4F6E0 (CmpIsKeyStackSymlink.c)
 *     CmpInitializeKcbStack @ 0x140A5C160 (CmpInitializeKcbStack.c)
 *     CmGetKeyFlags @ 0x140AEE0F8 (CmGetKeyFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmQueryLayeredKey(__int64 a1, int a2, unsigned int *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // rsi
  signed int started; // ebx
  unsigned int v11; // ebx
  const void **v12; // r9
  unsigned int v13; // ecx
  __int16 i; // dx
  __int64 KcbAtLayerHeight; // rax
  __int16 v17; // dx
  __int64 v18; // rbx
  unsigned int v19; // eax
  int v20; // r9d
  BOOL v21; // r12d
  int v22; // eax
  int v23; // r12d
  int v24; // ecx
  unsigned int v25; // ebx
  int v26; // eax
  char v27; // [rsp+30h] [rbp-128h]
  PVOID P; // [rsp+40h] [rbp-118h] BYREF
  _OWORD v29[2]; // [rsp+48h] [rbp-110h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v31; // [rsp+88h] [rbp-D0h]
  _BYTE v32[2]; // [rsp+C0h] [rbp-98h] BYREF
  int v33; // [rsp+C2h] [rbp-96h]
  __int16 v34; // [rsp+C6h] [rbp-92h]

  memset(v29, 0, sizeof(v29));
  v33 = 0;
  v34 = 0;
  memset_0(v32, 0, 0x4AuLL);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CmpInitializeKcbStack(v29);
  v27 = 0;
  CmpInitializeKeyNodeStack(v32);
  P = 0LL;
  v31 = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v29, v9);
  if ( started < 0 )
    goto LABEL_11;
  CmpLockKcbStackShared(v29);
  v27 = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) && (*(_BYTE *)(a1 + 48) & 1) != 0 )
    {
      started = -1073740763;
    }
    else
    {
      started = CmpConstructNameWithStatus(v9, &P);
      if ( started >= 0 )
      {
        v11 = *(unsigned __int16 *)P + 4;
        *a5 = v11;
        if ( a4 >= 4 )
        {
          v12 = (const void **)P;
          *a3 = *(unsigned __int16 *)P;
          v13 = a4 - 4;
          if ( a4 - 4 >= *(unsigned __int16 *)v12 )
            v13 = *(unsigned __int16 *)v12;
          memmove(a3 + 1, v12[1], v13);
          if ( v11 > a4 )
            started = -2147483643;
          else
            started = (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) != 0 ? 0xC000017C : 0;
        }
        else
        {
          started = -1073741789;
        }
      }
    }
    goto LABEL_11;
  }
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
    goto LABEL_11;
  if ( a2 == 6 )
  {
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->Process, &SubjectContext);
    v21 = (unsigned __int8)KCBNeedsVirtualImage_0(v9, &SubjectContext) != 0;
    if ( !(unsigned __int8)KCBNeedsVirtualImage_0(v9, &SubjectContext) || (v22 = 2, (*(_DWORD *)(v9 + 184) & 0x20) != 0) )
      v22 = 0;
    v23 = v22 | v21;
    if ( !CmpVEEnabled || (v24 = 4, (*(_DWORD *)(v9 + 184) & 0x1000000) == 0) )
      v24 = 0;
    v25 = v24 | v23 | ((*(_WORD *)(v9 + 186) & 0x80 | (*(unsigned __int16 *)(v9 + 186) >> 3) & 0x40u) >> 3);
    SeReleaseSubjectContext(&SubjectContext);
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_11;
    }
    *a3 = v25;
    goto LABEL_46;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 4120LL) & 1) != 0 )
      v19 = v31 & 0xFFFFFFFE;
    else
      v19 = v31 | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_11;
    }
    *a3 = v19;
    goto LABEL_46;
  }
  for ( i = *(_WORD *)(v9 + 66); i >= 0; i = v17 - 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v29);
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
    {
      v18 = KcbAtLayerHeight;
      goto LABEL_24;
    }
  }
  v18 = 0LL;
LABEL_24:
  if ( a2 == 5 )
  {
    LODWORD(v31) = CmGetKeyFlags(v18, 0LL);
    DWORD1(v31) = *(int *)(v18 + 40) < 0;
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v29) )
      DWORD1(v31) = v20 | 2;
    v26 = (*(_DWORD *)(v18 + 184) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      started = -1073741789;
      goto LABEL_11;
    }
    *(_QWORD *)a3 = v31;
    a3[2] = v26;
LABEL_46:
    started = 0;
    goto LABEL_11;
  }
  started = CmpStartKeyNodeStackFromKcbStack(v32, v29, a1);
  if ( started >= 0 )
  {
    started = CmpQueryKeyDataFromKeyNodeStack((unsigned int)v32, a2, (_DWORD)a3, a4, (__int64)a5);
    if ( started >= 0 )
      started = 0;
  }
LABEL_11:
  CmpCleanupKeyNodeStack(v32);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v27 )
    CmpUnlockKcbStack(v29);
  CmpCleanupKcbStack(v29);
  return (unsigned int)started;
}
