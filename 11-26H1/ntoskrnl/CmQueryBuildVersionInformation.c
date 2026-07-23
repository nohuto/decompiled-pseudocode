/*
 * XREFs of CmQueryBuildVersionInformation @ 0x14097E578
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     CmpQueryDowncastString @ 0x14097E108 (CmpQueryDowncastString.c)
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
  const UNICODE_STRING *v12; // rbx
  _WORD Src[2]; // [rsp+40h] [rbp-288h] BYREF
  int v14; // [rsp+44h] [rbp-284h]
  int v15; // [rsp+48h] [rbp-280h]
  int Buffer; // [rsp+4Ch] [rbp-27Ch]
  int Buffer_high; // [rsp+50h] [rbp-278h]
  char v18[128]; // [rsp+54h] [rbp-274h] BYREF
  char v19[128]; // [rsp+D4h] [rbp-1F4h] BYREF
  char v20[128]; // [rsp+154h] [rbp-174h] BYREF
  char v21[128]; // [rsp+1D4h] [rbp-F4h] BYREF
  char v22[26]; // [rsp+254h] [rbp-74h] BYREF
  char v23[18]; // [rsp+26Eh] [rbp-5Ah] BYREF
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
  if ( ULongFromUser >= CmpFreezeListLock.SystemCallNumber )
  {
    result = 2147483674LL;
LABEL_8:
    *a5 = 0;
    return result;
  }
  v12 = (const UNICODE_STRING *)*((_QWORD *)&CmpFreezeListLock.ApcState.ApcListHead[0].Blink + ULongFromUser);
  Src[0] = ULongFromUser;
  Src[1] = CmpFreezeListLock.SystemCallNumber;
  v14 = *(_DWORD *)&v12->Length;
  v15 = *(_DWORD *)(&v12->MaximumLength + 1);
  Buffer = (int)v12->Buffer;
  Buffer_high = HIDWORD(v12->Buffer);
  v24 = *(_DWORD *)&v12[82].Length;
  CmpQueryDowncastString(v18, 0x80u, v12 + 1);
  CmpQueryDowncastString(v19, 0x80u, v12 + 4);
  CmpQueryDowncastString(v20, 0x80u, v12 + 5);
  CmpQueryDowncastString(v21, 0x80u, v12 + 6);
  CmpQueryDowncastString(v22, 0x1Au, v12 + 2);
  CmpQueryDowncastString(v23, 0x10u, v12 + 3);
  if ( a6 )
    RtlCopyToUser(a3, Src, 0x244uLL);
  else
    RtlCopyVolatileMemory(a3, Src, 0x244uLL);
  *a5 = 580;
  return 0LL;
}
