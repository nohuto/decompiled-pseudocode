/*
 * XREFs of PepParkPreference @ 0x14000D880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
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
  int v16; // edx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  _DWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  void *v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  char v25; // [rsp+68h] [rbp-8h]
  int v26; // [rsp+69h] [rbp-7h]
  __int16 v27; // [rsp+6Dh] [rbp-3h]
  char v28; // [rsp+6Fh] [rbp-1h]

  v21 = 0LL;
  result = (unsigned int)dword_140015C60;
  v20 = 0LL;
  v19 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( dword_140015C60 >= (unsigned int)dword_1400155D4 )
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
        KeInitializeEnumerationContext(&v20, a4);
        result = KeEnumerateNextProcessor(&v19, &v20);
        if ( !(_DWORD)result )
        {
          do
          {
            if ( v13 >= v11 )
              break;
            v14 = 2LL * v13;
            v12 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v19);
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
            result = KeEnumerateNextProcessor(&v19, &v20);
          }
          while ( !(_DWORD)result );
          if ( v13 && v12 )
          {
            v25 = a1;
            v22[1] = v13;
            v24 = a2;
            v22[0] = a3;
            v23 = &PepParkLists;
            result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_140015968)(*(_QWORD *)(v12 + 1120), v22);
            if ( (int)result < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v16) = 3;
                return WPP_RECORDER_SF_d(
                         WPP_GLOBAL_Control->DeviceExtension,
                         v16,
                         2,
                         21,
                         (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
                         result);
              }
              return result;
            }
            v17 = 0;
            KeInitializeEnumerationContext(&v20, a4);
            while ( 1 )
            {
              result = KeEnumerateNextProcessor(&v19, &v20);
              if ( (_DWORD)result || v17 >= v11 )
                return result;
              if ( *((_BYTE *)&PepParkLists + 16 * v17 + 9) == 1 )
              {
                v18 = a7;
              }
              else
              {
                if ( *((_BYTE *)&PepParkLists + 16 * v17 + 9) != 2 )
                  goto LABEL_32;
                v18 = a8;
              }
              KeAddProcessorAffinityEx(v18, v19);
LABEL_32:
              ++v17;
            }
          }
        }
      }
    }
  }
  return result;
}
