/*
 * XREFs of ExpQueryModuleInformationEx @ 0x140B3EA38
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     MmEnumerateSystemImagesShared @ 0x1404DE708 (MmEnumerateSystemImagesShared.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall ExpQueryModuleInformationEx(int a1, _WORD *a2, unsigned int a3, int a4, char a5, int *a6)
{
  __int64 result; // rax
  _DWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  _WORD *v10; // [rsp+38h] [rbp-30h]
  unsigned int v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+44h] [rbp-24h]
  int *v13; // [rsp+48h] [rbp-20h]
  bool v14; // [rsp+50h] [rbp-18h]
  char v15; // [rsp+51h] [rbp-17h]
  __int16 v16; // [rsp+52h] [rbp-16h]
  int v17; // [rsp+54h] [rbp-14h]
  int v18; // [rsp+58h] [rbp-10h]
  int v19; // [rsp+5Ch] [rbp-Ch]

  v9[1] = 0;
  v16 = 0;
  v19 = 0;
  v14 = a1 != 0;
  v15 = a5;
  v18 = a4;
  v17 = 0;
  v13 = a6;
  v12 = 2;
  if ( a3 < 2 )
  {
    if ( a6 )
      *a6 = 2;
    v9[0] = -1073741820;
  }
  else
  {
    if ( a5 )
      RtlWriteUShortToUser(a2, 0);
    else
      *a2 = 0;
    v9[0] = 0;
  }
  v10 = a2;
  v11 = a3;
  result = MmEnumerateSystemImagesShared((__int64)ExpQueryModuleInformationImageEx, (__int64)v9);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741820 )
  {
    *a6 = v12;
    return v9[0];
  }
  return result;
}
