/*
 * XREFs of ExpQueryModuleInformation @ 0x140838F60
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     MmEnumerateSystemImagesShared @ 0x1404DE708 (MmEnumerateSystemImagesShared.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall ExpQueryModuleInformation(int a1, _DWORD *a2, unsigned int a3, char a4, int *a5)
{
  __int64 result; // rax
  unsigned int v9; // ecx
  _QWORD v10[2]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+3Ch] [rbp-2Ch]
  int *v13; // [rsp+40h] [rbp-28h]
  bool v14; // [rsp+48h] [rbp-20h]
  char v15; // [rsp+49h] [rbp-1Fh]
  __int16 v16; // [rsp+4Ah] [rbp-1Eh]
  int v17; // [rsp+4Ch] [rbp-1Ch]

  v10[0] = 0LL;
  v16 = 0;
  v14 = a1 != 0;
  v15 = a4;
  v17 = 0;
  v13 = a5;
  v12 = 8;
  v10[1] = a2 + 2;
  v11 = a3;
  result = MmEnumerateSystemImagesShared((__int64)ExpQueryModuleInformationImage, (__int64)v10);
  v9 = -1073741820;
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741820 )
  {
    *a5 = v12;
    if ( a3 >= 8 )
    {
      if ( a4 )
        RtlWriteULongToUser(a2, v17);
      else
        *a2 = v17;
      return LODWORD(v10[0]);
    }
    return v9;
  }
  return result;
}
