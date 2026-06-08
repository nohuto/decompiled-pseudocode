/*
 * XREFs of PepQueryWpsTable @ 0x14003C2F0
 * Callers:
 *     PepQueryUpdateWpsTable @ 0x14003C200 (PepQueryUpdateWpsTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     GetDevExtFromIndex @ 0x140005E70 (GetDevExtFromIndex.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 */

__int64 __fastcall PepQueryWpsTable(__int64 DevExtFromIndex)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rsi
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v9 = 0;
  v7 = 0LL;
  if ( dword_140019B88 == dword_1400191A4 )
  {
    v3 = qword_140019B98;
    v4 = *(_DWORD *)qword_140019B98;
    memset(qword_140019B98, 0, (unsigned int)(24 * *(_DWORD *)qword_140019B98 + 8));
    *v3 = v4;
    KeInitializeEnumerationContext(&v7, &unk_1400195E8);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v9, &v7) )
    {
      DevExtFromIndex = GetDevExtFromIndex(v9);
      *(_QWORD *)&v3[6 * *(unsigned int *)(DevExtFromIndex + 56) + 2] = *(_QWORD *)(DevExtFromIndex + 1120);
    }
    v2 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1400195E0)(*(_QWORD *)(DevExtFromIndex + 1120), v3);
    if ( v2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        2u,
        0xCu,
        (__int64)&WPP_8e2bd501024a3f356a388249f760a2d5_Traceguids,
        v6,
        v7,
        v8);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
