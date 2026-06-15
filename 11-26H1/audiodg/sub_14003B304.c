/*
 * XREFs of sub_14003B304 @ 0x14003B304
 * Callers:
 *     sub_140015C88 @ 0x140015C88 (sub_140015C88.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400465F0 @ 0x1400465F0 (sub_1400465F0.c)
 *     sub_14005D0FC @ 0x14005D0FC (sub_14005D0FC.c)
 */

__int64 __fastcall sub_14003B304(ULONG a1, DWORD *a2, _QWORD *a3)
{
  HANDLE v5; // rax
  void *v6; // rbx
  BOOL v7; // eax
  signed int LastError; // eax
  signed int v10; // ebx
  int v11; // edx
  signed int v12; // eax
  DWORD CurrentThreadId; // eax
  __int64 v14; // rcx
  HANDLE CurrentThread; // rax
  signed int v16; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  ULONG SystemResponsivenessValue; // [rsp+30h] [rbp+8h] BYREF
  HANDLE v19; // [rsp+48h] [rbp+20h] BYREF

  SystemResponsivenessValue = a1;
  v5 = AvSetMmThreadCharacteristicsW(L"Audio", a2);
  v19 = v5;
  v6 = v5;
  if ( !v5 )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 >= 0 )
      return (unsigned int)v10;
    v11 = 2327;
    goto LABEL_13;
  }
  SystemResponsivenessValue = 0;
  if ( !AvQuerySystemResponsiveness(v5, &SystemResponsivenessValue) )
  {
    v12 = GetLastError();
    v10 = v12;
    if ( v12 > 0 )
      v10 = (unsigned __int16)v12 | 0x80070000;
    if ( v10 >= 0 )
      return (unsigned int)v10;
    v11 = 2334;
    goto LABEL_13;
  }
  if ( (byte_1400E8401 & 8) != 0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    sub_14005D0FC(v14, &unk_1400C80C8, *a2, CurrentThreadId);
  }
  if ( SystemResponsivenessValue > 0x32 )
  {
    v10 = sub_1400465F0(&v19, *a2);
    if ( v10 < 0 )
    {
      v11 = 2342;
LABEL_13:
      sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v10);
      return (unsigned int)v10;
    }
    CurrentThread = GetCurrentThread();
    v7 = SetThreadPriority(CurrentThread, 15);
    v6 = v19;
  }
  else
  {
    v7 = AvSetMmThreadPriority(v6, AVRT_PRIORITY_HIGH);
    *a3 = v6;
  }
  if ( v7 )
  {
    *a3 = v6;
    return 0LL;
  }
  v16 = GetLastError();
  v10 = v16;
  if ( v16 > 0 )
    v10 = (unsigned __int16)v16 | 0x80070000;
  if ( v10 < 0 )
  {
    v11 = 2354;
    goto LABEL_13;
  }
  return (unsigned int)v10;
}
