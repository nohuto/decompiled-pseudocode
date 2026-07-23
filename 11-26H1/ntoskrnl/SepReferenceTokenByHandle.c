/*
 * XREFs of SepReferenceTokenByHandle @ 0x1403ABB50
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140817E20 (SeSetSessionIdTokenWithLinked.c)
 *     NtQuerySecurityAttributesToken @ 0x140925540 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403AC0C0 (RtlIsValidProcessTrustLabelSid.c)
 *     PsReferenceImpersonationTokenEx @ 0x1408BD210 (PsReferenceImpersonationTokenEx.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 */

NTSTATUS __fastcall SepReferenceTokenByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        PVOID *Object,
        _BYTE *a6,
        _QWORD *a7)
{
  _BYTE *v7; // rdi
  _QWORD *v8; // rsi
  NTSTATUS v9; // ebx
  PVOID *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  __int64 v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  NTSTATUS result; // eax
  ULONG v18; // edx
  bool v19; // zf
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+20h] BYREF

  v23 = (int)a4;
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
    v22 = 0;
    LODWORD(a7) = 0;
    LOBYTE(v23) = 0;
    *Object = 0LL;
    *v7 = 0;
    *v8 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( a1 == (void *)-4LL )
    {
      *v10 = (PVOID)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x74726853u, a3, a4);
      return 0;
    }
    else
    {
      if ( a1 == (void *)-5LL )
      {
        v12 = (_QWORD *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, &a7, &a6, &v22, &v23);
        v13 = v12;
        if ( !v12 )
          return -1073741700;
        if ( !v22 )
        {
          v18 = 1953261124;
LABEL_17:
          ObfDereferenceObjectWithTag(v12, v18);
          return -1073741658;
        }
      }
      else
      {
        v12 = (_QWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &a7, &a6, &v22, &v23);
        v13 = v12;
        if ( (_DWORD)a7 == 2 && !v22 )
        {
          v18 = 1953654867;
          goto LABEL_17;
        }
      }
      v14 = v13[138];
      v15 = 0LL;
      v16 = (unsigned __int8)v23;
      *v7 = 0;
      *v8 = 0LL;
      if ( v16 != 98 )
      {
        switch ( v16 )
        {
          case 18:
            v15 = (_DWORD *)SeProcTrustAuthenticodeSid;
            goto LABEL_8;
          case 49:
            v15 = (_DWORD *)SeProcTrustLiteAntimalwareSid;
            goto LABEL_8;
          case 81:
            v15 = (_DWORD *)SeProcTrustLiteWinSid;
            goto LABEL_8;
          case 82:
            v15 = (_DWORD *)SeProcTrustWinSid;
            goto LABEL_8;
          case 97:
            v15 = (_DWORD *)SeProcTrustLiteWinTcbSid;
            goto LABEL_8;
          case 114:
            break;
          case 129:
            v15 = (_DWORD *)SeProcTrustLiteAppSid;
            goto LABEL_8;
          default:
            goto LABEL_9;
        }
      }
      v15 = SeProcTrustWinTcbSid;
LABEL_8:
      if ( v15 && !RtlIsValidProcessTrustLabelSid(v15) )
        goto LABEL_23;
LABEL_9:
      if ( !v14 )
      {
LABEL_10:
        *v10 = v13;
        return v9;
      }
      v19 = *(_BYTE *)(v14 + 1) == 2;
      LODWORD(a6) = 0;
      WORD2(a6) = 4864;
      if ( !v19 || *(_BYTE *)v14 != 1 )
        goto LABEL_23;
      v20 = *(_DWORD *)(v14 + 2);
      if ( !v20 )
        v20 = *(unsigned __int16 *)(v14 + 6) - WORD2(a6);
      if ( v20 )
        goto LABEL_23;
      v21 = *(_DWORD *)(v14 + 8);
      if ( !v21 )
      {
        if ( *(_DWORD *)(v14 + 12) )
          goto LABEL_23;
      }
      if ( v15 )
      {
        if ( v15[2] >= v21 && v15[3] >= *(_DWORD *)(v14 + 12) )
          goto LABEL_10;
        goto LABEL_23;
      }
      if ( v21 )
      {
LABEL_23:
        *v7 = 1;
        *v8 = v15;
        goto LABEL_10;
      }
      *v10 = v13;
      return 0;
    }
  }
  return result;
}
