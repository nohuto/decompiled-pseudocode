/*
 * XREFs of ?reset@?$unique_ptr@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@Z @ 0x1800223C0
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18002201C (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2>>::reset(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
