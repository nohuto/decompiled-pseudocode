/*
 * XREFs of AccelpQatGetCompressionWorkspaceSize @ 0x1406E511C
 * Callers:
 *     AccelpQatOperationHandler @ 0x1406E3C44 (AccelpQatOperationHandler.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1403EDA40 (RtlGetCompressionWorkSpaceSize.c)
 */

NTSTATUS __fastcall AccelpQatGetCompressionWorkspaceSize(__int64 a1, int a2, __int64 a3, char a4, ULONG *a5, int *a6)
{
  int v6; // r8d
  int v7; // edx
  NTSTATUS result; // eax
  USHORT v9; // cx
  ULONG v10; // ecx
  ULONG v11; // r8d
  ULONG CompressBufferWorkSpaceSize; // [rsp+40h] [rbp+18h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+48h] [rbp+20h] BYREF

  CompressBufferWorkSpaceSize = 0;
  v6 = 88;
  CompressFragmentWorkSpaceSize = 0;
  if ( !a4 )
  {
LABEL_14:
    *a6 = v6;
    return 0;
  }
  v7 = a2 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return -1073741811;
    v9 = 4;
  }
  else
  {
    v9 = 7;
  }
  result = RtlGetCompressionWorkSpaceSize(v9, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    v10 = CompressFragmentWorkSpaceSize;
    v11 = CompressFragmentWorkSpaceSize;
    if ( CompressBufferWorkSpaceSize > CompressFragmentWorkSpaceSize )
      v11 = CompressBufferWorkSpaceSize;
    v6 = v11 + 88;
    if ( a5 )
    {
      if ( CompressBufferWorkSpaceSize > CompressFragmentWorkSpaceSize )
        v10 = CompressBufferWorkSpaceSize;
      *a5 = v10;
    }
    goto LABEL_14;
  }
  return result;
}
