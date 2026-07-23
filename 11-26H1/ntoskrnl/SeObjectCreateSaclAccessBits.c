/*
 * XREFs of SeObjectCreateSaclAccessBits @ 0x140ABB99C
 * Callers:
 *     ObpAdjustAccessMask @ 0x140902950 (ObpAdjustAccessMask.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall SeObjectCreateSaclAccessBits(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // ax
  ULONG v2; // edx
  __int64 v3; // rax
  char *v4; // rax
  char *v5; // rcx
  unsigned int i; // r8d
  char v7; // r9

  v1 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v1 & 0x10) == 0 )
    return 0x1000000;
  v2 = 0;
  if ( v1 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v3 )
      return 0x1000000;
    v4 = (char *)SecurityDescriptor + v3;
  }
  if ( !v4 )
    return 0x1000000;
  v5 = v4 + 8;
  for ( i = 0; i < *((unsigned __int16 *)v4 + 2); ++i )
  {
    v7 = *v5;
    if ( *v5 != 17 && (((v7 - 18) & 0xFC) != 0 || v7 == 19) )
      return 0x1000000;
    v5 += *((unsigned __int16 *)v5 + 1);
  }
  return v2;
}
