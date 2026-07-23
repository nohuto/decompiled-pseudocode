/*
 * XREFs of RtlpCopyExtendedContext @ 0x180146300
 * Callers:
 *     RtlCopyExtendedContext @ 0x180146290 (RtlCopyExtendedContext.c)
 * Callees:
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 *     RtlpCopyLegacyContext @ 0x1800C1260 (RtlpCopyLegacyContext.c)
 *     RtlpCopyXStateChunk @ 0x1800C14F8 (RtlpCopyXStateChunk.c)
 *     RtlpCopyKernelCetChunk @ 0x180123948 (RtlpCopyKernelCetChunk.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // esi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v13 = 0;
  result = RtlpValidateContextFlags2(a4, &v13, (_QWORD *)0x7FFE03D8);
  if ( (int)result >= 0 )
  {
    v10 = a5;
    if ( (v13 & 1) != 0 )
    {
      v11 = *(int *)(a2 + 8);
      if ( (_DWORD)v11 != *(_DWORD *)(a5 + 8) || *(_DWORD *)(a2 + 12) < *(_DWORD *)(a5 + 12) )
        return 3221225485LL;
      RtlpCopyLegacyContext(v11, a2 + v11, a4, a5 + *(int *)(a5 + 8));
    }
    if ( (v13 & 2) == 0 || (result = RtlpCopyXStateChunk(v9, a2, a2, v10, v10), (int)result >= 0) )
    {
      if ( (v13 & 4) != 0 )
      {
        v12 = RtlpCopyKernelCetChunk(v9, a2, a2, v10, v10);
        if ( v12 < 0 )
          return (unsigned int)v12;
        return v6;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
