/*
 * XREFs of ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1802C3814
 * Callers:
 *     ?IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z @ 0x1801C2810 (-IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z.c)
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1803AE27C (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ??1?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1803AE40C (--1-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEA.c)
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1803AFD9C (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1803B07C0 (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1803B0E08 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
        HLOCAL *a1,
        void *a2)
{
  HLOCAL result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return LocalFree(result);
  return result;
}
