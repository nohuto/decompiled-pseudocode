/*
 * XREFs of PepParkPreference @ 0x14000F6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 */

__int64 __fastcall PepParkPreference(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 v12; // r13
  unsigned int v13; // esi
  __int64 v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  _DWORD v21[2]; // [rsp+50h] [rbp-20h] BYREF
  void *v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  char v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+69h] [rbp-7h]
  __int16 v26; // [rsp+6Dh] [rbp-3h]
  char v27; // [rsp+6Fh] [rbp-1h]

  v20 = 0LL;
  result = (unsigned int)dword_140019830;
  v19 = 0LL;
  v18 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( dword_140019830 >= (unsigned int)dword_1400191A4 )
  {
    result = KeCountSetBitsAffinityEx(a4);
    v11 = result;
    if ( (_DWORD)result )
    {
      result = a6 ? KeCountSetBitsAffinityEx(a6) : 0LL;
      if ( a3 > (unsigned int)result && a3 < v11 )
      {
        memset(&PepParkLists, 0, 16 * v11);
        v12 = 0LL;
        v13 = 0;
        KeInitializeEnumerationContext(&v19, a4);
        result = KeEnumerateNextProcessor(&v18, &v19);
        if ( !(_DWORD)result )
        {
          do
          {
            if ( v13 >= v11 )
              break;
            v14 = 2LL * v13;
            v12 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v18);
            *((_QWORD *)&PepParkLists + v14) = *(_QWORD *)(v12 + 1120);
            *((_BYTE *)&PepParkLists + 8 * v14 + 9) = 0;
            if ( a6 && (unsigned int)KeCheckProcessorAffinityEx(a6) )
            {
              v15 = a3 - 1;
              *((_BYTE *)&PepParkLists + 16 * v13 + 8) = 2;
              if ( !a3 )
                v15 = 0;
              a3 = v15;
            }
            else
            {
              *((_BYTE *)&PepParkLists + 16 * v13 + 8) = a5 && (unsigned int)KeCheckProcessorAffinityEx(a5);
            }
            ++v13;
            result = KeEnumerateNextProcessor(&v18, &v19);
          }
          while ( !(_DWORD)result );
          if ( v13 && v12 )
          {
            v24 = a1;
            v21[1] = v13;
            v23 = a2;
            v21[0] = a3;
            v22 = &PepParkLists;
            result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_140019538)(*(_QWORD *)(v12 + 1120), v21);
            if ( (int)result < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         3u,
                         2u,
                         0x15u,
                         (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
                         result);
              return result;
            }
            v16 = 0;
            KeInitializeEnumerationContext(&v19, a4);
            while ( 1 )
            {
              result = KeEnumerateNextProcessor(&v18, &v19);
              if ( (_DWORD)result || v16 >= v11 )
                return result;
              if ( *((_BYTE *)&PepParkLists + 16 * v16 + 9) == 1 )
              {
                v17 = a7;
              }
              else
              {
                if ( *((_BYTE *)&PepParkLists + 16 * v16 + 9) != 2 )
                  goto LABEL_32;
                v17 = a8;
              }
              KeAddProcessorAffinityEx(v17, v18);
LABEL_32:
              ++v16;
            }
          }
        }
      }
    }
  }
  return result;
}
