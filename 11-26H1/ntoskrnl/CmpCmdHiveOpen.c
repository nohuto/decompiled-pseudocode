/*
 * XREFs of CmpCmdHiveOpen @ 0x1408BAC48
 * Callers:
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IoSetThreadHardErrorMode @ 0x14048B160 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     PsReferenceImpersonationTokenEx @ 0x1408BD210 (PsReferenceImpersonationTokenEx.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     RtlImpersonateSelfEx @ 0x1409A3280 (RtlImpersonateSelfEx.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        int a1,
        char a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  int v9; // ebx
  BOOLEAN v13; // al
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // r15d
  NTSTATUS inited; // eax
  NTSTATUS v20; // ebx
  unsigned int v22; // eax
  int v23; // ecx
  void *v24; // rdi
  NTSTATUS v25; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v27; // [rsp+30h] [rbp-79h]
  int v28; // [rsp+30h] [rbp-79h]
  int v29; // [rsp+38h] [rbp-71h]
  int v30; // [rsp+38h] [rbp-71h]
  BOOLEAN v31; // [rsp+50h] [rbp-59h] BYREF
  BOOLEAN v32; // [rsp+51h] [rbp-58h] BYREF
  BOOLEAN EnableHardErrors; // [rsp+52h] [rbp-57h]
  __int64 ImpersonationLevel; // [rsp+58h] [rbp-51h] BYREF
  int v35[2]; // [rsp+60h] [rbp-49h] BYREF
  void *v36; // [rsp+68h] [rbp-41h]
  __int64 v37; // [rsp+70h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+78h] [rbp-31h] BYREF
  int *v39; // [rsp+98h] [rbp-11h]
  __int64 v40; // [rsp+A0h] [rbp-9h]

  v9 = a4;
  ImpersonationLevel = a7;
  v37 = a8;
  v36 = a9;
  *(_QWORD *)v35 = a4;
  v13 = IoSetThreadHardErrorMode(0);
  v14 = 0;
  EnableHardErrors = v13;
  if ( (a6 & 1) != 0 )
  {
    v14 = 0x8000;
    if ( (a6 & 2) == 0 )
      v14 = 294912;
  }
  v15 = v14 | 0x80000;
  if ( (a6 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x108000;
  if ( (a6 & 8) == 0 )
    v16 = v15;
  v17 = v16 | 0x8000000;
  if ( (a6 & 0x40) == 0 )
    v17 = v16;
  v18 = v17 | 2;
  if ( (a5 & 0x20000000) == 0 )
    v18 = v17;
  inited = CmpInitHiveFromFile(a1, v18, v9, a3, a5, ImpersonationLevel, v27, v29, v37, v36);
  v20 = inited;
  if ( !ImpersonationLevel && a2 && (a6 & 0x20) == 0 )
  {
    if ( inited == -1073741790
      || (v22 = inited + 1073741724, v22 <= 0xE) && (v23 = 17473, _bittest(&v23, v22))
      || v20 == -1073741421 )
    {
      v32 = 0;
      v31 = 0;
      LODWORD(ImpersonationLevel) = 0;
      v24 = (void *)PsReferenceImpersonationTokenEx(
                      KeGetCurrentThread(),
                      1LL,
                      1953261124LL,
                      &v32,
                      &v31,
                      &ImpersonationLevel,
                      0LL);
      v20 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
      if ( v20 >= 0 )
      {
        v25 = CmpInitHiveFromFile(a1, v18, v35[0], a3, a5, 0LL, v28, v30, v37, v36);
        CurrentThread = KeGetCurrentThread();
        v20 = v25;
        if ( v24 )
          PsImpersonateClient(CurrentThread, v24, v32, v31, (SECURITY_IMPERSONATION_LEVEL)ImpersonationLevel);
        else
          PsImpersonateClient(CurrentThread, 0LL, 0, 0, SecurityImpersonation);
        if ( v20 >= 0
          && (a5 & 0x2000000) != 0
          && (unsigned int)dword_140E09EE8 > 5
          && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000008LL) )
        {
          *(_QWORD *)v35 = 0x1000000LL;
          v39 = v35;
          v40 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09EE8,
            (unsigned __int8 *)word_140056C12,
            0LL,
            0LL,
            3u,
            &v38);
        }
      }
      if ( v24 )
        ObfDereferenceObjectWithTag(v24, 0x746C6644u);
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v20;
}
