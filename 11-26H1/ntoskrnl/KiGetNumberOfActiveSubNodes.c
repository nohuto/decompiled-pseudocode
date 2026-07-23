/*
 * XREFs of KiGetNumberOfActiveSubNodes @ 0x1404528F0
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KeEnumerateNextNodeInSystem @ 0x140452D80 (KeEnumerateNextNodeInSystem.c)
 */

__int64 KiGetNumberOfActiveSubNodes()
{
  unsigned int v0; // ebx
  __m128 v1; // xmm0
  unsigned __int64 v2; // r8
  unsigned int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+28h] [rbp-18h]
  unsigned __int64 v11; // [rsp+50h] [rbp+10h] BYREF

  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v0 = 0;
  v1 = KeEnumerateNextNodeInSystem(&v9, &v11);
  v2 = v11;
  v3 = 0;
  HIDWORD(v10) = v1.m128_i32[3];
  *(_QWORD *)&v10 = v11;
  DWORD2(v10) = 0;
  while ( 1 )
  {
    v11 = 0LL;
    v4 = 0LL;
    while ( 1 )
    {
      v5 = v3;
      if ( v3 < *(_DWORD *)(v2 + 48) )
        break;
      KeEnumerateNextNodeInSystem(&v9, &v11);
      if ( v6 < 0 )
      {
        v3 = DWORD2(v10);
        v2 = v10;
        goto LABEL_6;
      }
      v2 = v11;
      v3 = 0;
      v10 = v11;
    }
    v8 = *(_QWORD *)(v2 + 32);
    ++v3;
    DWORD2(v10) = v5 + 1;
    v4 = *(_QWORD *)(v8 + 8 * v5);
LABEL_6:
    if ( !v4 )
      return v0;
    ++v0;
  }
}
