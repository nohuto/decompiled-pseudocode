/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x140A77400
 * Callers:
 *     SshpSessionManagerOpenControlTrace @ 0x1407E4148 (SshpSessionManagerOpenControlTrace.c)
 *     NtSaveMergedKeys @ 0x140850190 (NtSaveMergedKeys.c)
 *     CmpNameFromAttributes @ 0x14097C958 (CmpNameFromAttributes.c)
 *     IopOpenLinkOrRenameTarget @ 0x1409B321C (IopOpenLinkOrRenameTarget.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A76FC0 (NtRestoreKey.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A77228 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A77E5C (ExpQueryElamCertInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(void *a1, KPROCESSOR_MODE a2, int a3, char a4, PVOID Object)
{
  _QWORD *v5; // r14
  NTSTATUS result; // eax
  PVOID v10; // rsi
  int v11; // ebx
  HANDLE v12; // rdi
  HANDLE Handle[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp+20h] BYREF

  v5 = Object;
  Handle[0] = 0LL;
  HandleInformation = 0LL;
  *(_QWORD *)Object = 0LL;
  if ( !a1 )
    return 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    v10 = Object;
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v11 = ObDuplicateObject(
              (__int64)KeGetCurrentThread()->ApcState.Process,
              a1,
              PsInitialSystemProcess,
              (__int64 *)Handle,
              a3,
              512,
              0,
              0);
      if ( v11 >= 0 )
      {
        v12 = Handle[0];
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(Handle[0], 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        if ( v11 < 0 )
        {
          ObCloseHandle(v12, 0);
        }
        else
        {
          if ( Object == v10 )
          {
            *v5 = v12;
          }
          else
          {
            v11 = -1073741788;
            ObCloseHandle(v12, 0);
          }
          ObfDereferenceObject(Object);
        }
      }
    }
    else
    {
      v11 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
