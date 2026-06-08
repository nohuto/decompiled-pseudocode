/*
 * XREFs of PepParkMask @ 0x140002C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 */

__int64 __fastcall PepParkMask(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // r14
  int v7; // edx
  _DWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  void *v10; // [rsp+40h] [rbp-20h]
  __int128 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h]
  unsigned int v13; // [rsp+A0h] [rbp+40h] BYREF

  result = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0;
  v8[1] = 0;
  if ( !PepSkipParkNotification )
  {
    result = (unsigned int)dword_140019830;
    if ( dword_140019830 >= (unsigned int)dword_1400191A4 )
    {
      memset(&PepParkLists, 0, (unsigned int)(16 * dword_1400191A4));
      v5 = 0;
      KeInitializeEnumerationContext(&v11, &unk_1400195E8);
      result = KeEnumerateNextProcessor(&v13, &v11);
      if ( !(_DWORD)result )
      {
        do
        {
          v6 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v13);
          *((_QWORD *)&PepParkLists + 2 * v5) = *(_QWORD *)(v6 + 1120);
          *((_BYTE *)&PepParkLists + 16 * v5++ + 8) = KeCheckProcessorAffinityEx(a2);
          result = KeEnumerateNextProcessor(&v13, &v11);
        }
        while ( !(_DWORD)result );
        if ( v5 )
        {
          v9 = a1;
          v8[0] = v5;
          v10 = &PepParkLists;
          result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_140019540)(*(_QWORD *)(v6 + 1120), v8);
          if ( (int)result < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v7) = 4;
              result = WPP_RECORDER_SF_D(
                         WPP_GLOBAL_Control->DeviceExtension,
                         v7,
                         2,
                         22,
                         (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
                         result);
            }
            PepSkipParkNotification = 1;
          }
        }
      }
    }
  }
  return result;
}
