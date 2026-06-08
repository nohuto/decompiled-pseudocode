/*
 * XREFs of PepQueryWpsTable @ 0x14003B02C
 * Callers:
 *     PepQueryUpdateWpsTable @ 0x14003AF3C (PepQueryUpdateWpsTable.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1400016A0 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 */

__int64 __fastcall PepQueryWpsTable(__int64 DevExtFromIndex)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rsi
  int v4; // ebx
  int v5; // edx
  int v7; // [rsp+28h] [rbp-30h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF

  v9 = 0LL;
  v10 = 0;
  v8 = 0LL;
  if ( dword_140015FB8 == dword_1400155D4 )
  {
    v3 = qword_140015FC8;
    v4 = *(_DWORD *)qword_140015FC8;
    memset(qword_140015FC8, 0, (unsigned int)(24 * *(_DWORD *)qword_140015FC8 + 8));
    *v3 = v4;
    KeInitializeEnumerationContext(&v8, &unk_140015A18);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v8) )
    {
      DevExtFromIndex = GetDevExtFromIndex(v10);
      *(_QWORD *)&v3[6 * *(unsigned int *)(DevExtFromIndex + 56) + 2] = *(_QWORD *)(DevExtFromIndex + 1120);
    }
    v2 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_140015A10)(*(_QWORD *)(DevExtFromIndex + 1120), v3);
    if ( v2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = v2;
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        2,
        12,
        (__int64)&WPP_8e2bd501024a3f356a388249f760a2d5_Traceguids,
        v7,
        v8,
        v9);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
