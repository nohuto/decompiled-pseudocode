/*
 * XREFs of NtAcquireCrossVmMutant @ 0x140847EB0
 * Callers:
 *     DifNtAcquireCrossVmMutantWrapper @ 0x14066D970 (DifNtAcquireCrossVmMutantWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x140B6D818 (ExpGetExtensionHostForCrossVmObject.c)
 */

__int64 __fastcall NtAcquireCrossVmMutant(HANDLE Handle, __int64 *a2)
{
  __int64 *p_ULong64FromUser; // rbx
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v6; // rcx
  int v7; // edi
  __int64 ExtensionHostForCrossVmObject; // rsi
  PVOID v9; // rbx
  __int64 v10; // rdx
  struct _EX_RUNDOWN_REF *v11; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  __int64 ULong64FromUser; // [rsp+78h] [rbp+20h] BYREF

  p_ULong64FromUser = a2;
  ULong64FromUser = 0LL;
  if ( !*(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] )
    return 3221225508LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a2);
    p_ULong64FromUser = &ULong64FromUser;
  }
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(
         Handle,
         0x100000u,
         *(POBJECT_TYPE *)&WheapConfigTableLock.WaitBlockFill11[64],
         PreviousMode,
         &Object,
         0LL);
  if ( v7 >= 0 )
  {
    v11 = 0LL;
    ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(v6, &v11);
    if ( ExtensionHostForCrossVmObject )
    {
      v10 = (__int64)p_ULong64FromUser;
      v9 = Object;
      v7 = guard_dispatch_icall_no_overrides((__int64)Object, v10);
    }
    else
    {
      v7 = -1073741822;
      v9 = Object;
    }
    if ( ExtensionHostForCrossVmObject )
      ExReleaseExtensionTable(v11);
    ObfDereferenceObject(v9);
  }
  return (unsigned int)v7;
}
