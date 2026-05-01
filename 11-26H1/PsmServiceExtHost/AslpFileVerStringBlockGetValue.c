/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x18009E6A8
 * Callers:
 *     AslpFileQueryVersionString @ 0x18009E148 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileVerBlockGetValueOffset @ 0x18009E440 (AslpFileVerBlockGetValueOffset.c)
 *     RtlStringCbLengthW @ 0x18009E9C8 (RtlStringCbLengthW.c)
 */

__int64 __fastcall AslpFileVerStringBlockGetValue(_QWORD *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( v12 <= a4 )
    {
      if ( v12 == a4 )
      {
        v10 = v12 + a3 - 2;
      }
      else
      {
        v10 = v12 + a3;
        v11 = a4 - v12;
        if ( (int)RtlStringCbLengthW(v10, v11, &v13) >= 0 )
        {
          v7 = v13;
        }
        else
        {
          v7 = v11 - 2;
          *(_WORD *)(v10 + 2 * ((unsigned __int64)(v11 - 2) >> 1)) = 0;
        }
      }
      result = 0LL;
      *a2 = v7 >> 1;
      *a1 = v10;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
