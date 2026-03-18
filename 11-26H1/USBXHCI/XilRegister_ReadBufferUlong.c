/*
 * XREFs of XilRegister_ReadBufferUlong @ 0x140036C58
 * Callers:
 *     Register_GetAllExtendedCapability @ 0x140036B40 (Register_GetAllExtendedCapability.c)
 *     RootHub_PrepareHardware @ 0x14007D980 (RootHub_PrepareHardware.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x14000B66C (Register_ReadSecureMmio.c)
 */

void __fastcall XilRegister_ReadBufferUlong(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  _DWORD *v6; // rsi

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL) )
  {
    Register_ReadSecureMmio(a1, a2, 2, a4, a3);
  }
  else
  {
    v4 = a4;
    v5 = a3;
    v6 = (_DWORD *)a2;
    while ( v4 )
    {
      *v5++ = *v6++;
      --v4;
    }
  }
}
