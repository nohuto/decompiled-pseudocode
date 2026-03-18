/*
 * XREFs of SepReferenceTokenByHandle @ 0x1402AC430
 * Callers:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140812090 (SeSetSessionIdTokenWithLinked.c)
 *     NtQuerySecurityAttributesToken @ 0x1408F55B0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1402AC970 (RtlIsValidProcessTrustLabelSid.c)
 *     PsReferenceImpersonationTokenEx @ 0x1408B6C40 (PsReferenceImpersonationTokenEx.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1408F9EF0 (ObReferenceObjectByHandleWithTag.c)
 *     PsReferenceEffectiveToken @ 0x14094F580 (PsReferenceEffectiveToken.c)
 */

NTSTATUS __fastcall SepReferenceTokenByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        PVOID *Object,
        _BYTE *a6,
        unsigned __int64 *a7)
{
  _BYTE *v7; // rdi
  unsigned __int64 *v8; // rsi
  NTSTATUS v9; // ebx
  PVOID *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // r10
  unsigned __int64 v16; // r9
  int v17; // eax
  NTSTATUS result; // eax
  ULONG v19; // edx
  bool v20; // zf
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // [rsp+60h] [rbp+20h] BYREF
  int v24; // [rsp+78h] [rbp+38h] BYREF

  v24 = (int)a4;
  v7 = a6;
  v8 = a7;
  v9 = 0;
  *a6 = 0;
  *v8 = 0LL;
  if ( (unsigned __int64)a1 + 6 > 2 )
  {
    result = ObReferenceObjectByHandleWithTag(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, 0x74726853u, Object, 0LL);
    v9 = result;
    if ( result >= 0 )
      return v9;
  }
  else if ( (a2 & 0xFFFFFFE7) != 0 )
  {
    return -1073741790;
  }
  else
  {
    v10 = Object;
    LOBYTE(a6) = 0;
    v23 = 0;
    LODWORD(a7) = 0;
    *Object = 0LL;
    *v7 = 0;
    *v8 = 0LL;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v24) = 0;
    if ( a1 == (void *)-4LL )
    {
      *v10 = (PVOID)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x74726853u, a3, a4);
      return 0;
    }
    else
    {
      if ( a1 == (void *)-5LL )
      {
        v12 = (_QWORD *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, &a7, &a6, &v23, &v24);
        v14 = v12;
        if ( !v12 )
          return -1073741700;
        if ( !v23 )
        {
          v19 = 1953261124;
LABEL_17:
          ObfDereferenceObjectWithTag(v12, v19);
          return -1073741658;
        }
      }
      else
      {
        v12 = (_QWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &a7, &a6, &v23, &v24);
        v14 = v12;
        if ( (_DWORD)a7 == 2 && !v23 )
        {
          v19 = 1953654867;
          goto LABEL_17;
        }
      }
      v15 = v14[138];
      v16 = 0LL;
      v17 = (unsigned __int8)v24;
      *v7 = 0;
      *v8 = 0LL;
      if ( v17 != 98 )
      {
        v13 = 0x140000000uLL;
        switch ( v17 )
        {
          case 18:
            v16 = SepRmCapTableLock.Padding[0];
            goto LABEL_8;
          case 49:
            v16 = SepRmCapTableLock.Padding[1];
            goto LABEL_8;
          case 81:
            v16 = SeProcTrustLiteWinSid;
            goto LABEL_8;
          case 82:
            v16 = SepRmCapTableLock.Padding[3];
            goto LABEL_8;
          case 97:
            v16 = SeProcTrustLiteWinTcbSid;
            goto LABEL_8;
          case 114:
            break;
          case 129:
            v16 = SepRmCapTableLock.Padding[4];
            goto LABEL_8;
          default:
            goto LABEL_9;
        }
      }
      v16 = SepRmCapTableLock.Padding[2];
LABEL_8:
      if ( v16 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v16, v13, v14) )
        goto LABEL_23;
LABEL_9:
      if ( !v15 )
      {
LABEL_10:
        *v10 = v14;
        return v9;
      }
      v20 = *(_BYTE *)(v15 + 1) == 2;
      LODWORD(a6) = 0;
      WORD2(a6) = 4864;
      if ( !v20 || *(_BYTE *)v15 != 1 )
        goto LABEL_23;
      v21 = *(_DWORD *)(v15 + 2);
      if ( !v21 )
        v21 = *(unsigned __int16 *)(v15 + 6) - WORD2(a6);
      if ( v21 )
        goto LABEL_23;
      v22 = *(_DWORD *)(v15 + 8);
      if ( !v22 )
      {
        if ( *(_DWORD *)(v15 + 12) )
          goto LABEL_23;
      }
      if ( v16 )
      {
        if ( *(_DWORD *)(v16 + 8) >= v22 && *(_DWORD *)(v16 + 12) >= *(_DWORD *)(v15 + 12) )
          goto LABEL_10;
        goto LABEL_23;
      }
      if ( v22 )
      {
LABEL_23:
        *v7 = 1;
        *v8 = v16;
        goto LABEL_10;
      }
      *v10 = v14;
      return 0;
    }
  }
  return result;
}
