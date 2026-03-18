/*
 * XREFs of CmQueryBuildVersionInformation @ 0x140AE0FA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     CmpQueryDowncastString @ 0x140AE1170 (CmpQueryDowncastString.c)
 */

__int64 __fastcall CmQueryBuildVersionInformation(
        unsigned int *a1,
        int a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6)
{
  unsigned int ULongFromUser; // ecx
  __int64 result; // rax
  int *v12; // rbx
  _WORD Src[2]; // [rsp+40h] [rbp-288h] BYREF
  int v14; // [rsp+44h] [rbp-284h]
  int v15; // [rsp+48h] [rbp-280h]
  int v16; // [rsp+4Ch] [rbp-27Ch]
  int v17; // [rsp+50h] [rbp-278h]
  _BYTE v18[128]; // [rsp+54h] [rbp-274h] BYREF
  _BYTE v19[128]; // [rsp+D4h] [rbp-1F4h] BYREF
  _BYTE v20[128]; // [rsp+154h] [rbp-174h] BYREF
  _BYTE v21[128]; // [rsp+1D4h] [rbp-F4h] BYREF
  _BYTE v22[26]; // [rsp+254h] [rbp-74h] BYREF
  _BYTE v23[18]; // [rsp+26Eh] [rbp-5Ah] BYREF
  int v24; // [rsp+280h] [rbp-48h]

  memset_0(Src, 0, 0x244uLL);
  if ( a2 != 4 || a4 < 0x244 )
  {
    result = 3221225476LL;
    goto LABEL_8;
  }
  if ( a6 )
    ULongFromUser = RtlReadULongFromUser(a1);
  else
    ULongFromUser = *a1;
  if ( ULongFromUser >= *(_DWORD *)&CmpFreezeListLock.WaitBlockFill11[120] )
  {
    result = 2147483674LL;
LABEL_8:
    *a5 = 0;
    return result;
  }
  v12 = (int *)*((_QWORD *)&CmpFreezeListLock.Timer.Dpc + ULongFromUser);
  Src[0] = ULongFromUser;
  Src[1] = *(_WORD *)&CmpFreezeListLock.WaitBlockFill11[120];
  v14 = *v12;
  v15 = v12[1];
  v16 = v12[2];
  v17 = v12[3];
  v24 = v12[328];
  CmpQueryDowncastString(v18, 128LL, v12 + 4);
  CmpQueryDowncastString(v19, 128LL, v12 + 16);
  CmpQueryDowncastString(v20, 128LL, v12 + 20);
  CmpQueryDowncastString(v21, 128LL, v12 + 24);
  CmpQueryDowncastString(v22, 26LL, v12 + 8);
  CmpQueryDowncastString(v23, 16LL, v12 + 12);
  if ( a6 )
    RtlCopyToUser(a3, Src, 0x244uLL);
  else
    RtlCopyVolatileMemory(a3, Src, 0x244uLL);
  *a5 = 580;
  return 0LL;
}
