/*
 * XREFs of RtlDecompressBufferDeflateInternal @ 0x180151108
 * Callers:
 *     RtlDecompressBufferDeflateRaw @ 0x180151210 (RtlDecompressBufferDeflateRaw.c)
 *     RtlDecompressBufferDeflateZlib @ 0x180151250 (RtlDecompressBufferDeflateZlib.c)
 * Callees:
 *     inflate @ 0x1801530B0 (inflate.c)
 *     inflateReset2 @ 0x180154088 (inflateReset2.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDecompressBufferDeflateInternal(
        char a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v12; // rdx
  int v13; // eax
  int v14; // ecx
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  int v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+38h] [rbp-48h]
  int v20; // [rsp+3Ch] [rbp-44h]
  _QWORD *v21; // [rsp+48h] [rbp-38h]
  __int64 (*v22)(); // [rsp+50h] [rbp-30h]
  void (__cdecl *v23)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR); // [rsp+58h] [rbp-28h]

  memset_thunk_772440563353939046(&v16, 0, 0x58uLL);
  memset_thunk_772440563353939046(a8, 0, 0x2370uLL);
  v17 = a5;
  v12 = 15LL;
  v16 = a4;
  v22 = WinSqmCheckEscalationSetString;
  v18 = a2;
  v23 = RtlEndStrongEnumerationHashTable;
  *a8 = &v16;
  if ( a1 != 1 )
    v12 = 4294967281LL;
  v19 = a3;
  v21 = a8;
  *((_DWORD *)a8 + 2) = 16180;
  inflateReset2(&v16, v12);
  v13 = inflate(&v16, 4LL);
  v14 = v13;
  if ( v13 == 1 )
  {
    *a7 = v20;
    return 0LL;
  }
  else if ( (unsigned int)(v13 + 5) <= 1 )
  {
    return 3221225507LL;
  }
  else
  {
    result = 3221225701LL;
    if ( v14 == -3 )
      return 3221225485LL;
  }
  return result;
}
