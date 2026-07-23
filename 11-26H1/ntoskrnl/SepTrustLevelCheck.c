/*
 * XREFs of SepTrustLevelCheck @ 0x1403AB8E0
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403AC0C0 (RtlIsValidProcessTrustLabelSid.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 */

__int64 __fastcall SepTrustLevelCheck(
        __int64 a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        int *a7)
{
  __int16 v7; // di
  unsigned int v8; // ebx
  char v9; // r15
  unsigned int v13; // r10d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int i; // r8d
  int v18; // esi
  _DWORD *v19; // rdi
  PACCESS_TOKEN PrimaryToken; // rax
  _DWORD *v22; // r8
  bool v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *CurrentThread; // rax

  v7 = *(_WORD *)(a2 + 2);
  v8 = 0;
  v9 = 0;
  v13 = 0;
  if ( (v7 & 0x10) == 0 )
    goto LABEL_13;
  while ( 2 )
  {
    if ( v7 >= 0 )
    {
      v15 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v14 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v14 )
        break;
      v15 = a2 + v14;
    }
    if ( v15 )
    {
      v16 = v15 + 8;
      for ( i = 0; ; ++i )
      {
        if ( i >= *(unsigned __int16 *)(v15 + 4) )
          goto LABEL_13;
        if ( i >= v13 && *(_BYTE *)v16 == 20 )
          break;
        v16 += *(unsigned __int16 *)(v16 + 2);
      }
      if ( (*(_BYTE *)(v16 + 1) & 8) == 0 )
      {
        v18 = *(_DWORD *)(v16 + 4);
        v19 = (_DWORD *)(v16 + 8);
        if ( v16 == -8 )
          break;
        if ( a6 )
        {
          if ( a4 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
          }
          else
          {
            SeLockSubjectContext(a3);
          }
          v9 = 1;
        }
        if ( a4 )
        {
          v22 = a5;
          goto LABEL_23;
        }
        if ( !a3->ClientToken )
          goto LABEL_22;
        PrimaryToken = a3->PrimaryToken;
        v22 = (_DWORD *)*((_QWORD *)a3->ClientToken + 138);
        if ( *((_QWORD *)PrimaryToken + 138) && !RtlIsValidProcessTrustLabelSid(*((PSID *)PrimaryToken + 138)) )
        {
          v8 = -1073741811;
          goto LABEL_26;
        }
        if ( !v22 )
          goto LABEL_20;
        if ( !RtlIsValidProcessTrustLabelSid(v22) )
        {
          v8 = -1073741811;
          goto LABEL_26;
        }
        if ( v25 )
        {
          if ( *(_DWORD *)(v25 + 8) >= v22[2] && *(_DWORD *)(v25 + 12) >= v22[3] )
          {
LABEL_20:
            v23 = 1;
            goto LABEL_21;
          }
          v23 = 0;
        }
        else
        {
          v23 = v22[2] == 0;
        }
LABEL_21:
        if ( v23 )
        {
LABEL_23:
          if ( v22 && !RtlIsValidProcessTrustLabelSid(v22) )
          {
            v8 = -1073741811;
            goto LABEL_26;
          }
          if ( !RtlIsValidProcessTrustLabelSid(v19) )
          {
            v8 = -1073741811;
            goto LABEL_26;
          }
          if ( v24 )
          {
            if ( *(_DWORD *)(v24 + 8) >= v19[2] && *(_DWORD *)(v24 + 12) >= v19[3] )
              goto LABEL_43;
          }
          else if ( !v19[2] )
          {
LABEL_43:
            *a7 = -1;
            goto LABEL_26;
          }
          *a7 = v18 | 0x1000000;
LABEL_26:
          if ( v9 )
          {
            if ( a4 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            else
            {
              SeUnlockSubjectContext(a3);
            }
          }
          return v8;
        }
LABEL_22:
        v22 = (_DWORD *)*((_QWORD *)a3->PrimaryToken + 138);
        goto LABEL_23;
      }
      v13 = i + 1;
      if ( v16 )
        continue;
    }
    break;
  }
LABEL_13:
  *a7 = -1;
  return v8;
}
