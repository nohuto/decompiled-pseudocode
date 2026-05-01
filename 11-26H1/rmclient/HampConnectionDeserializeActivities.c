/*
 * XREFs of HampConnectionDeserializeActivities @ 0x180004FF4
 * Callers:
 *     HampConnectionAllocateState @ 0x180003B00 (HampConnectionAllocateState.c)
 * Callees:
 *     MIDL_user_allocate @ 0x180002250 (MIDL_user_allocate.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800116DC (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 */

__int64 __fastcall HampConnectionDeserializeActivities(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  void *v6; // rax
  void *v7; // rax
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rax
  size_t size; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(unsigned int *)(a2 + 16);
  size = 0LL;
  if ( !(_DWORD)v2 )
    return 0LL;
  result = RtlULongLongMult((unsigned int)v2, 0xA0uLL, &size);
  if ( (int)result < 0 )
    return result;
  v6 = MIDL_user_allocate(size);
  *(_QWORD *)(a1 + 136) = v6;
  if ( !v6 )
    return 3221225495LL;
  memset_0(v6, 0, size);
  result = RtlULongLongMult(v2, 8uLL, &size);
  if ( (int)result >= 0 )
  {
    v7 = MIDL_user_allocate(size);
    *(_QWORD *)(a1 + 144) = v7;
    if ( !v7 )
      return 3221225495LL;
    memset_0(v7, 0, size);
    v8 = 0LL;
    *(_DWORD *)(a1 + 152) = v2;
    do
    {
      v9 = 160 * v8 + *(_QWORD *)(a1 + 136);
      v10 = *(_QWORD *)(a2 + 8) + 152LL * (unsigned int)v8;
      *(_OWORD *)v9 = *(_OWORD *)v10;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(v10 + 16);
      *(_OWORD *)(v9 + 32) = *(_OWORD *)(v10 + 32);
      *(_OWORD *)(v9 + 48) = *(_OWORD *)(v10 + 48);
      *(_OWORD *)(v9 + 64) = *(_OWORD *)(v10 + 64);
      *(_OWORD *)(v9 + 80) = *(_OWORD *)(v10 + 80);
      *(_OWORD *)(v9 + 96) = *(_OWORD *)(v10 + 96);
      *(_OWORD *)(v9 + 112) = *(_OWORD *)(v10 + 112);
      *(_OWORD *)(v9 + 128) = *(_OWORD *)(v10 + 128);
      *(_QWORD *)(v9 + 144) = *(_QWORD *)(v10 + 144);
      *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v8) = 160 * v8 + *(_QWORD *)(a1 + 136);
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a1 + 152) );
    return 0LL;
  }
  return result;
}
