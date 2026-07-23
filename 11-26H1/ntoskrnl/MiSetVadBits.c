/*
 * XREFs of MiSetVadBits @ 0x140997210
 * Callers:
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiUpdateVadBits @ 0x140A09330 (MiUpdateVadBits.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall MiSetVadBits(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx

  v1 = 0;
  result = (unsigned __int64)KeGetCurrentThread();
  v3 = ((unsigned __int64)*(unsigned int *)(a1 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 28);
  v4 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 28;
  v5 = *(unsigned int *)(a1 + 28);
  v6 = *(_QWORD *)(result + 184);
  v7 = (v5 >> 4) | v4;
  v8 = *(_QWORD *)(v6 + 1040) + 896LL;
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 1040) + 1112LL) )
  {
    result = 0LL;
    do
    {
      v9 = (_QWORD *)(v8 + 72 * result);
      v10 = (unsigned __int64)(-524288 * qword_140E2DFC8 + (v9[1] << 19)) >> 16;
      if ( v7 >= v10 )
      {
        v11 = v10 + *v9;
        if ( v3 < v11 )
        {
          v12 = (unsigned __int64)(-524288 * qword_140E2DFC8 + (v9[1] << 19)) >> 16;
          if ( v3 >= v10 )
            v12 = v3;
          if ( v7 < v11 )
          {
            result = RtlSetBitsEx((__int64)v9, v12 - v10, v7 - v12 + 1);
            if ( v3 >= v10 )
              return result;
          }
          else
          {
            RtlSetBitsEx((__int64)v9, v12 - v10, v11 - v12);
          }
        }
      }
      result = ++v1;
    }
    while ( (unsigned __int64)v1 < *(_QWORD *)(v8 + 216) );
  }
  return result;
}
