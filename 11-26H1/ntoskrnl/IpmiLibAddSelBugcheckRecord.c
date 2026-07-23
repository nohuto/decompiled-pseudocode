/*
 * XREFs of IpmiLibAddSelBugcheckRecord @ 0x1407220C4
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x140534BC8 (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelRecord @ 0x140722368 (IpmiLibAddSelRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140722400 (IpmiLibpAddSelRawData.c)
 */

__int64 __fastcall IpmiLibAddSelBugcheckRecord(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 *v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+28h] [rbp-18h] BYREF
  __int16 v14; // [rsp+78h] [rbp+38h] BYREF
  char v15; // [rsp+7Ah] [rbp+3Ah]
  char v16; // [rsp+7Bh] [rbp+3Bh]

  v16 = HIBYTE(a4);
  v4 = *(unsigned __int16 **)&KiBugCheckDriver;
  v12 = KiBugCheckDriverOffset;
  v14 = 0;
  v15 = 0;
  if ( !IpmiHwContextInitialized((__int64)&WheapConfigTableLock.WaitListEntry.Blink) )
    return 3221225473LL;
  *(_QWORD *)&v13 = 0x20000LL;
  *(_QWORD *)((char *)&v13 + 7) = 0xFF016F0020040041uLL;
  HIBYTE(v13) = -1;
  result = IpmiLibAddSelRecord(v5, &v13, &v14);
  if ( (int)result >= 0 )
  {
    v9 = 0;
    v13 = 0LL;
    BYTE2(v13) = -34;
    *(_WORD *)((char *)&v13 + 7) = 311;
    BYTE9(v13) = 0;
    HIBYTE(v13) = 1;
    while ( v9 < 5u )
    {
      BYTE10(v13) = v9 + 1;
      *(_DWORD *)((char *)&v13 + 11) = KiBugCheckData[v9];
      result = IpmiLibAddSelRecord(v8, &v13, &v14);
      if ( (int)result < 0 )
        return result;
      if ( v9 )
      {
        *(_DWORD *)((char *)&v13 + 11) = HIDWORD(KiBugCheckData[v9]);
        result = IpmiLibAddSelRecord(v8, &v13, &v14);
        if ( (int)result < 0 )
          return result;
      }
      ++v9;
    }
    if ( v4 )
    {
      LOBYTE(v7) = -64;
      result = ((__int64 (__fastcall *)(__int64, __int64, ULONG *, __int64))IpmiLibpAddSelRawData)(v8, v7, &v12, 4LL);
      if ( (int)result >= 0 )
      {
        LOBYTE(v10) = -62;
        return IpmiLibpAddSelRawData(v11, v10, *((_QWORD *)v4 + 1), *v4, v12, v13, *((_QWORD *)&v13 + 1));
      }
    }
  }
  return result;
}
