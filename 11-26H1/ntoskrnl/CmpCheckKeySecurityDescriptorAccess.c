/*
 * XREFs of CmpCheckKeySecurityDescriptorAccess @ 0x140946274
 * Callers:
 *     CmpCheckKcbStackAccess @ 0x140775FB8 (CmpCheckKcbStackAccess.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140945690 (CmpCheckKeyNodeStackAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x140945764 (CmpCheckSecurityCellAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     SeCreateAccessStateEx @ 0x1409463F0 (SeCreateAccessStateEx.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1409466F4 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckKeySecurityDescriptorAccess(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4)
{
  unsigned int CurrentThread; // edi
  char *v9; // rbx
  unsigned int CurrentThreadProcess; // eax
  __int64 v11; // rdx
  signed int AccessState; // ebx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+70h] [rbp-90h]
  ACCESS_MASK v18; // [rsp+74h] [rbp-8Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v20[224]; // [rsp+100h] [rbp+0h] BYREF

  GrantedAccess = 0;
  AccessStatus[0] = 0;
  memset_0(v16, 0, 0xA0uLL);
  memset_0(v20, 0, sizeof(v20));
  CurrentThread = (unsigned int)KeGetCurrentThread();
  v9 = (char *)CmKeyObjectType + 76;
  CurrentThreadProcess = (unsigned int)PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx(
                  CurrentThread,
                  CurrentThreadProcess,
                  (unsigned int)v16,
                  (unsigned int)v20,
                  a3,
                  (__int64)v9);
  if ( AccessState >= 0 )
  {
    if ( a4 )
    {
      LOBYTE(v11) = a2;
      AccessState = CmpSetAccessStateForBackupRestore(v16, v11, SecurityDescriptor, 0LL);
      if ( AccessState < 0 )
      {
LABEL_6:
        SeDeleteAccessState((__int64)v16);
        return (unsigned int)AccessState;
      }
      if ( !v17 )
      {
        AccessState = 0;
        goto LABEL_6;
      }
      GrantedAccess = v18;
    }
    AccessState = SeAccessCheck(
                    SecurityDescriptor,
                    &SubjectSecurityContext,
                    0,
                    a3,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                    a2,
                    &GrantedAccess,
                    AccessStatus) == 0
                ? 0xC0000022
                : 0;
    goto LABEL_6;
  }
  return (unsigned int)AccessState;
}
