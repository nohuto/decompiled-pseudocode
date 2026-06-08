/*
 * XREFs of ReadIoMemRawHidden @ 0x14000864C
 * Callers:
 *     ReadGenAddrHidden @ 0x140005E88 (ReadGenAddrHidden.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadIoMemRawHidden(__int64 a1, unsigned __int8 *a2)
{
  int v2; // r9d
  __int64 v3; // r10
  unsigned __int8 v4; // r8
  int v5; // r9d
  __int64 v7; // r8
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = *(_QWORD *)(a2 + 4);
  v4 = a2[3];
  v8 = 0LL;
  v5 = v2 - 1;
  if ( !v5 )
  {
    switch ( v4 )
    {
      case 8u:
        v7 = 1LL;
        break;
      case 0x10u:
        v7 = 2LL;
        break;
      case 0x20u:
        v7 = 4LL;
        break;
      default:
        return 0LL;
    }
    ((void (__fastcall *)(__int64, _QWORD, __int64, __int64 *))qword_140019588)(a1, (unsigned __int16)v3, v7, &v8);
    return v8;
  }
  if ( v5 != 126 || v4 != 64 )
    return 0LL;
  ((void (__fastcall *)(__int64, _QWORD, __int64 *))qword_140019578)(a1, (unsigned int)v3, &v8);
  return v8;
}
