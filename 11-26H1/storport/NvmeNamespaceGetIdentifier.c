/*
 * XREFs of NvmeNamespaceGetIdentifier @ 0x140053660
 * Callers:
 *     StorBuildNVMeSerialNumber @ 0x140047788 (StorBuildNVMeSerialNumber.c)
 *     StorBuildNVMeIdentifier @ 0x1400969B4 (StorBuildNVMeIdentifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeNamespaceGetIdentifier(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  char v8; // r9
  int v9; // r8d

  v4 = *(_QWORD *)(a1 + 184);
  result = 0LL;
  *a3 = 0LL;
  *a4 = 0;
  if ( v4 )
  {
    while ( (unsigned int)result < 0x1000 )
    {
      v8 = *(_BYTE *)(result + v4);
      if ( !v8 )
        break;
      v9 = *(unsigned __int8 *)(result + v4 + 1);
      if ( v8 == 3 )
      {
        *a4 = v9;
        result = (unsigned int)result + v4 + 4;
        *a3 = result;
        return result;
      }
      result = (unsigned int)(v9 + result + 4);
    }
  }
  return result;
}
