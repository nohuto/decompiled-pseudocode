/*
 * XREFs of AccelpSiovIaaGetCompressionWorkspaceSize @ 0x1406E4190
 * Callers:
 *     AccelpSiovIaaOperationHandler @ 0x1406E4274 (AccelpSiovIaaOperationHandler.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1403EDA40 (RtlGetCompressionWorkSpaceSize.c)
 */

NTSTATUS __fastcall AccelpSiovIaaGetCompressionWorkspaceSize(int a1, int a2, int a3, char a4, ULONG *a5, int *a6)
{
  int v9; // r10d
  NTSTATUS result; // eax
  USHORT v11; // cx
  ULONG v12; // ecx
  ULONG v13; // r10d
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  ULONG CompressBufferWorkSpaceSize[6]; // [rsp+20h] [rbp-18h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+58h] [rbp+20h] BYREF

  CompressBufferWorkSpaceSize[0] = 0;
  CompressFragmentWorkSpaceSize = 0;
  v9 = 119;
  if ( !a4 )
  {
LABEL_14:
    v14 = a1 - 6;
    if ( v14 )
    {
      if ( v14 != 1 )
        return -1073741811;
      v15 = 5376;
    }
    else
    {
      v15 = 1568;
    }
    v16 = v15 + v9;
    v17 = 1;
    if ( a2 != 1 || a3 != 1 )
      v17 = 0;
    v18 = v16 + 17600;
    if ( v17 )
      v18 = v16;
    *a6 = v18;
    return 0;
  }
  if ( a2 == 1 )
  {
    v11 = 7;
  }
  else
  {
    if ( a2 != 2 )
      return -1073741811;
    v11 = 4;
  }
  result = RtlGetCompressionWorkSpaceSize(v11, CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    v12 = CompressFragmentWorkSpaceSize;
    v13 = CompressFragmentWorkSpaceSize;
    if ( CompressBufferWorkSpaceSize[0] > CompressFragmentWorkSpaceSize )
      v13 = CompressBufferWorkSpaceSize[0];
    v9 = v13 + 119;
    if ( a5 )
    {
      if ( CompressBufferWorkSpaceSize[0] > CompressFragmentWorkSpaceSize )
        v12 = CompressBufferWorkSpaceSize[0];
      *a5 = v12;
    }
    goto LABEL_14;
  }
  return result;
}
