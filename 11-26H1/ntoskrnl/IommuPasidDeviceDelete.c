/*
 * XREFs of IommuPasidDeviceDelete @ 0x140789C50
 * Callers:
 *     <none>
 * Callees:
 *     IommupPasidDeviceDelete @ 0x14058AC50 (IommupPasidDeviceDelete.c)
 */

__int64 __fastcall IommuPasidDeviceDelete(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( *(_DWORD *)(a1 + 48) )
    return IommupPasidDeviceDelete(a1, a2, a3, a4);
  else
    return 3221225659LL;
}
