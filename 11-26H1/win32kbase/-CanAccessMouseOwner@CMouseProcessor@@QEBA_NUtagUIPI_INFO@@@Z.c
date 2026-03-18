/*
 * XREFs of ?CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z @ 0x14016C054
 * Callers:
 *     CheckIntegrityAccessToCapture @ 0x14016C000 (CheckIntegrityAccessToCapture.c)
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8 (_anonymous_namespace_--ValidateUIPI.c)
 */

char __fastcall CMouseProcessor::CanAccessMouseOwner(__int64 a1, __int64 *a2)
{
  char v2; // bl
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v2 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3904), 1, 1) )
    return 0;
  v3 = *((_DWORD *)a2 + 2);
  v5 = *a2;
  v6 = v3;
  if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v5, (CInputDest *)(a1 + 3784)) )
    return 0;
  return v2;
}
